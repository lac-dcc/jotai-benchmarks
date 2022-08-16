// ========================================================================= //

// includes
#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#include "string.h"
#include "limits.h"
#include "float.h"



#define JOTAI_NUM_RANDS_ 25

const unsigned rand_primes[JOTAI_NUM_RANDS_] = {179, 103, 479, 647, 229, 37, 271, 557, 263, 607, 18743, 50359, 21929, 48757, 98179, 12907, 52937, 64579, 49957, 52567, 507163, 149939, 412157, 680861, 757751};

int next_i() {
  int counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  int counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    printf("%s", "Usage:\n\
    prog [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
       1            big-arr-10x\n\
\n\
");

}


// ------------------------------------------------------------------------- //

#define NULL ((void*)0)
typedef unsigned long size_t;  // Customize by platform.
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;  // Either arithmetic or pointer type.
/* By default, we understand bool (as a convenience). */
typedef int bool;
#define false 0
#define true 1

/* Forward declarations */

/* Type definitions */
typedef  int /*<<< orphan*/  vec3_t ;
typedef  int /*<<< orphan*/  aas_altroutegoal_t ;

/* Variables and functions */

int AAS_AlternativeRouteGoals(vec3_t start, int startareanum, vec3_t goal, int goalareanum, int travelflags,
										 aas_altroutegoal_t *altroutegoals, int maxaltroutegoals,
										 int type)
{
#ifndef ENABLE_ALTROUTING
	return 0;
#else
	int i, j, bestareanum;
	int numaltroutegoals, nummidrangeareas;
	int starttime, goaltime, goaltraveltime;
	float dist, bestdist;
	vec3_t mid, dir;
#ifdef ALTROUTE_DEBUG
	int startmillisecs;

	startmillisecs = Sys_MilliSeconds();
#endif

	if (!startareanum || !goalareanum)
		return 0;
	//travel time towards the goal area
	goaltraveltime = AAS_AreaTravelTimeToGoalArea(startareanum, start, goalareanum, travelflags);
	//clear the midrange areas
	Com_Memset(midrangeareas, 0, aasworld.numareas * sizeof(midrangearea_t));
	numaltroutegoals = 0;
	//
	nummidrangeareas = 0;
	//
	for (i = 1; i < aasworld.numareas; i++)
	{
		//
		if (!(type & ALTROUTEGOAL_ALL))
		{
			if (!(type & ALTROUTEGOAL_CLUSTERPORTALS && (aasworld.areasettings[i].contents & AREACONTENTS_CLUSTERPORTAL)))
			{
				if (!(type & ALTROUTEGOAL_VIEWPORTALS && (aasworld.areasettings[i].contents & AREACONTENTS_VIEWPORTAL)))
				{
					continue;
				} //end if
			} //end if
		} //end if
		//if the area has no reachabilities
		if (!AAS_AreaReachability(i)) continue;
		//tavel time from the area to the start area
		starttime = AAS_AreaTravelTimeToGoalArea(startareanum, start, i, travelflags);
		if (!starttime) continue;
		//if the travel time from the start to the area is greater than the shortest goal travel time
		if (starttime > (float) 1.1 * goaltraveltime) continue;
		//travel time from the area to the goal area
		goaltime = AAS_AreaTravelTimeToGoalArea(i, NULL, goalareanum, travelflags);
		if (!goaltime) continue;
		//if the travel time from the area to the goal is greater than the shortest goal travel time
		if (goaltime > (float) 0.8 * goaltraveltime) continue;
		//this is a mid range area
		midrangeareas[i].valid = qtrue;
		midrangeareas[i].starttime = starttime;
		midrangeareas[i].goaltime = goaltime;
		Log_Write("%d midrange area %d", nummidrangeareas, i);
		nummidrangeareas++;
	} //end for
	//
	for (i = 1; i < aasworld.numareas; i++)
	{
		if (!midrangeareas[i].valid) continue;
		//get the areas in one cluster
		numclusterareas = 0;
		AAS_AltRoutingFloodCluster_r(i);
		//now we've got a cluster with areas through which an alternative route could go
		//get the 'center' of the cluster
		VectorClear(mid);
		for (j = 0; j < numclusterareas; j++)
		{
			VectorAdd(mid, aasworld.areas[clusterareas[j]].center, mid);
		} //end for
		VectorScale(mid, 1.0 / numclusterareas, mid);
		//get the area closest to the center of the cluster
		bestdist = 999999;
		bestareanum = 0;
		for (j = 0; j < numclusterareas; j++)
		{
			VectorSubtract(mid, aasworld.areas[clusterareas[j]].center, dir);
			dist = VectorLength(dir);
			if (dist < bestdist)
			{
				bestdist = dist;
				bestareanum = clusterareas[j];
			} //end if
		} //end for
		//now we've got an area for an alternative route
		//FIXME: add alternative goal origin
		VectorCopy(aasworld.areas[bestareanum].center, altroutegoals[numaltroutegoals].origin);
		altroutegoals[numaltroutegoals].areanum = bestareanum;
		altroutegoals[numaltroutegoals].starttraveltime = midrangeareas[bestareanum].starttime;
		altroutegoals[numaltroutegoals].goaltraveltime = midrangeareas[bestareanum].goaltime;
		altroutegoals[numaltroutegoals].extratraveltime =
					(midrangeareas[bestareanum].starttime + midrangeareas[bestareanum].goaltime) -
								goaltraveltime;
		numaltroutegoals++;
		//
#ifdef ALTROUTE_DEBUG
		AAS_ShowAreaPolygons(bestareanum, 1, qtrue);
#endif
		//don't return more than the maximum alternative route goals
		if (numaltroutegoals >= maxaltroutegoals) break;
	} //end for
#ifdef ALTROUTE_DEBUG
	botimport.Print(PRT_MESSAGE, "alternative route goals in %d msec\n", Sys_MilliSeconds() - startmillisecs);
#endif
	return numaltroutegoals;
#endif
}


// ------------------------------------------------------------------------- //




// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {

    // int-bounds
    case 0:
    {
          int start = 100;
          int startareanum = 100;
          int goal = 100;
          int goalareanum = 100;
          int travelflags = 100;
          int maxaltroutegoals = 100;
          int type = 100;
          int _len_altroutegoals0 = 1;
          int * altroutegoals = (int *) malloc(_len_altroutegoals0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_altroutegoals0; _i0++) {
            altroutegoals[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = AAS_AlternativeRouteGoals(start,startareanum,goal,goalareanum,travelflags,altroutegoals,maxaltroutegoals,type);
          printf("%d\n", benchRet); 
          free(altroutegoals);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int start = 10;
          int startareanum = 10;
          int goal = 10;
          int goalareanum = 10;
          int travelflags = 10;
          int maxaltroutegoals = 10;
          int type = 10;
          int _len_altroutegoals0 = 100;
          int * altroutegoals = (int *) malloc(_len_altroutegoals0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_altroutegoals0; _i0++) {
            altroutegoals[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = AAS_AlternativeRouteGoals(start,startareanum,goal,goalareanum,travelflags,altroutegoals,maxaltroutegoals,type);
          printf("%d\n", benchRet); 
          free(altroutegoals);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
