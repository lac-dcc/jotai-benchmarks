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
struct perf_tool {int /*<<< orphan*/ * feature; int /*<<< orphan*/ * time_conv; int /*<<< orphan*/ * stat_round; int /*<<< orphan*/ * stat; int /*<<< orphan*/ * stat_config; int /*<<< orphan*/ * cpu_map; int /*<<< orphan*/ * thread_map; int /*<<< orphan*/ * auxtrace_error; int /*<<< orphan*/ * auxtrace; int /*<<< orphan*/ * auxtrace_info; int /*<<< orphan*/ * id_index; int /*<<< orphan*/ * finished_round; scalar_t__ ordered_events; int /*<<< orphan*/ * build_id; int /*<<< orphan*/ * tracing_data; int /*<<< orphan*/ * event_update; int /*<<< orphan*/ * attr; int /*<<< orphan*/ * unthrottle; int /*<<< orphan*/ * throttle; int /*<<< orphan*/ * read; int /*<<< orphan*/ * context_switch; int /*<<< orphan*/ * itrace_start; int /*<<< orphan*/ * aux; int /*<<< orphan*/ * lost_samples; int /*<<< orphan*/ * lost; int /*<<< orphan*/ * exit; int /*<<< orphan*/ * fork; int /*<<< orphan*/ * namespaces; int /*<<< orphan*/ * comm; int /*<<< orphan*/ * mmap2; int /*<<< orphan*/ * mmap; int /*<<< orphan*/ * sample; } ;

/* Variables and functions */
 int /*<<< orphan*/ * perf_event__process_aux ; 
 int /*<<< orphan*/ * perf_event__process_itrace_start ; 
 int /*<<< orphan*/ * perf_event__process_lost ; 
 int /*<<< orphan*/ * perf_event__process_lost_samples ; 
 int /*<<< orphan*/ * perf_event__process_switch ; 
 int /*<<< orphan*/ * process_event_auxtrace_stub ; 
 int /*<<< orphan*/ * process_event_cpu_map_stub ; 
 void* process_event_op2_stub ; 
 void* process_event_sample_stub ; 
 int /*<<< orphan*/ * process_event_stat_config_stub ; 
 void* process_event_stub ; 
 int /*<<< orphan*/ * process_event_synth_attr_stub ; 
 int /*<<< orphan*/ * process_event_synth_event_update_stub ; 
 int /*<<< orphan*/ * process_event_synth_tracing_data_stub ; 
 int /*<<< orphan*/ * process_event_thread_map_stub ; 
 int /*<<< orphan*/ * process_finished_round ; 
 int /*<<< orphan*/ * process_finished_round_stub ; 
 int /*<<< orphan*/ * process_stat_round_stub ; 
 int /*<<< orphan*/ * process_stat_stub ; 

void perf_tool__fill_defaults(struct perf_tool *tool)
{
	if (tool->sample == NULL)
		tool->sample = process_event_sample_stub;
	if (tool->mmap == NULL)
		tool->mmap = process_event_stub;
	if (tool->mmap2 == NULL)
		tool->mmap2 = process_event_stub;
	if (tool->comm == NULL)
		tool->comm = process_event_stub;
	if (tool->namespaces == NULL)
		tool->namespaces = process_event_stub;
	if (tool->fork == NULL)
		tool->fork = process_event_stub;
	if (tool->exit == NULL)
		tool->exit = process_event_stub;
	if (tool->lost == NULL)
		tool->lost = perf_event__process_lost;
	if (tool->lost_samples == NULL)
		tool->lost_samples = perf_event__process_lost_samples;
	if (tool->aux == NULL)
		tool->aux = perf_event__process_aux;
	if (tool->itrace_start == NULL)
		tool->itrace_start = perf_event__process_itrace_start;
	if (tool->context_switch == NULL)
		tool->context_switch = perf_event__process_switch;
	if (tool->read == NULL)
		tool->read = process_event_sample_stub;
	if (tool->throttle == NULL)
		tool->throttle = process_event_stub;
	if (tool->unthrottle == NULL)
		tool->unthrottle = process_event_stub;
	if (tool->attr == NULL)
		tool->attr = process_event_synth_attr_stub;
	if (tool->event_update == NULL)
		tool->event_update = process_event_synth_event_update_stub;
	if (tool->tracing_data == NULL)
		tool->tracing_data = process_event_synth_tracing_data_stub;
	if (tool->build_id == NULL)
		tool->build_id = process_event_op2_stub;
	if (tool->finished_round == NULL) {
		if (tool->ordered_events)
			tool->finished_round = process_finished_round;
		else
			tool->finished_round = process_finished_round_stub;
	}
	if (tool->id_index == NULL)
		tool->id_index = process_event_op2_stub;
	if (tool->auxtrace_info == NULL)
		tool->auxtrace_info = process_event_op2_stub;
	if (tool->auxtrace == NULL)
		tool->auxtrace = process_event_auxtrace_stub;
	if (tool->auxtrace_error == NULL)
		tool->auxtrace_error = process_event_op2_stub;
	if (tool->thread_map == NULL)
		tool->thread_map = process_event_thread_map_stub;
	if (tool->cpu_map == NULL)
		tool->cpu_map = process_event_cpu_map_stub;
	if (tool->stat_config == NULL)
		tool->stat_config = process_event_stat_config_stub;
	if (tool->stat == NULL)
		tool->stat = process_stat_stub;
	if (tool->stat_round == NULL)
		tool->stat_round = process_stat_round_stub;
	if (tool->time_conv == NULL)
		tool->time_conv = process_event_op2_stub;
	if (tool->feature == NULL)
		tool->feature = process_event_op2_stub;
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
          int _len_tool0 = 1;
          struct perf_tool * tool = (struct perf_tool *) malloc(_len_tool0*sizeof(struct perf_tool));
          for(int _i0 = 0; _i0 < _len_tool0; _i0++) {
              int _len_tool__i0__feature0 = 1;
          tool[_i0].feature = (int *) malloc(_len_tool__i0__feature0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_tool__i0__feature0; _j0++) {
            tool[_i0].feature[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tool__i0__time_conv0 = 1;
          tool[_i0].time_conv = (int *) malloc(_len_tool__i0__time_conv0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_tool__i0__time_conv0; _j0++) {
            tool[_i0].time_conv[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tool__i0__stat_round0 = 1;
          tool[_i0].stat_round = (int *) malloc(_len_tool__i0__stat_round0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_tool__i0__stat_round0; _j0++) {
            tool[_i0].stat_round[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tool__i0__stat0 = 1;
          tool[_i0].stat = (int *) malloc(_len_tool__i0__stat0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_tool__i0__stat0; _j0++) {
            tool[_i0].stat[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tool__i0__stat_config0 = 1;
          tool[_i0].stat_config = (int *) malloc(_len_tool__i0__stat_config0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_tool__i0__stat_config0; _j0++) {
            tool[_i0].stat_config[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tool__i0__cpu_map0 = 1;
          tool[_i0].cpu_map = (int *) malloc(_len_tool__i0__cpu_map0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_tool__i0__cpu_map0; _j0++) {
            tool[_i0].cpu_map[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tool__i0__thread_map0 = 1;
          tool[_i0].thread_map = (int *) malloc(_len_tool__i0__thread_map0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_tool__i0__thread_map0; _j0++) {
            tool[_i0].thread_map[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tool__i0__auxtrace_error0 = 1;
          tool[_i0].auxtrace_error = (int *) malloc(_len_tool__i0__auxtrace_error0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_tool__i0__auxtrace_error0; _j0++) {
            tool[_i0].auxtrace_error[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tool__i0__auxtrace0 = 1;
          tool[_i0].auxtrace = (int *) malloc(_len_tool__i0__auxtrace0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_tool__i0__auxtrace0; _j0++) {
            tool[_i0].auxtrace[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tool__i0__auxtrace_info0 = 1;
          tool[_i0].auxtrace_info = (int *) malloc(_len_tool__i0__auxtrace_info0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_tool__i0__auxtrace_info0; _j0++) {
            tool[_i0].auxtrace_info[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tool__i0__id_index0 = 1;
          tool[_i0].id_index = (int *) malloc(_len_tool__i0__id_index0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_tool__i0__id_index0; _j0++) {
            tool[_i0].id_index[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tool__i0__finished_round0 = 1;
          tool[_i0].finished_round = (int *) malloc(_len_tool__i0__finished_round0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_tool__i0__finished_round0; _j0++) {
            tool[_i0].finished_round[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        tool[_i0].ordered_events = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_tool__i0__build_id0 = 1;
          tool[_i0].build_id = (int *) malloc(_len_tool__i0__build_id0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_tool__i0__build_id0; _j0++) {
            tool[_i0].build_id[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tool__i0__tracing_data0 = 1;
          tool[_i0].tracing_data = (int *) malloc(_len_tool__i0__tracing_data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_tool__i0__tracing_data0; _j0++) {
            tool[_i0].tracing_data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tool__i0__event_update0 = 1;
          tool[_i0].event_update = (int *) malloc(_len_tool__i0__event_update0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_tool__i0__event_update0; _j0++) {
            tool[_i0].event_update[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tool__i0__attr0 = 1;
          tool[_i0].attr = (int *) malloc(_len_tool__i0__attr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_tool__i0__attr0; _j0++) {
            tool[_i0].attr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tool__i0__unthrottle0 = 1;
          tool[_i0].unthrottle = (int *) malloc(_len_tool__i0__unthrottle0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_tool__i0__unthrottle0; _j0++) {
            tool[_i0].unthrottle[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tool__i0__throttle0 = 1;
          tool[_i0].throttle = (int *) malloc(_len_tool__i0__throttle0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_tool__i0__throttle0; _j0++) {
            tool[_i0].throttle[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tool__i0__read0 = 1;
          tool[_i0].read = (int *) malloc(_len_tool__i0__read0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_tool__i0__read0; _j0++) {
            tool[_i0].read[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tool__i0__context_switch0 = 1;
          tool[_i0].context_switch = (int *) malloc(_len_tool__i0__context_switch0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_tool__i0__context_switch0; _j0++) {
            tool[_i0].context_switch[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tool__i0__itrace_start0 = 1;
          tool[_i0].itrace_start = (int *) malloc(_len_tool__i0__itrace_start0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_tool__i0__itrace_start0; _j0++) {
            tool[_i0].itrace_start[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tool__i0__aux0 = 1;
          tool[_i0].aux = (int *) malloc(_len_tool__i0__aux0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_tool__i0__aux0; _j0++) {
            tool[_i0].aux[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tool__i0__lost_samples0 = 1;
          tool[_i0].lost_samples = (int *) malloc(_len_tool__i0__lost_samples0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_tool__i0__lost_samples0; _j0++) {
            tool[_i0].lost_samples[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tool__i0__lost0 = 1;
          tool[_i0].lost = (int *) malloc(_len_tool__i0__lost0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_tool__i0__lost0; _j0++) {
            tool[_i0].lost[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tool__i0__exit0 = 1;
          tool[_i0].exit = (int *) malloc(_len_tool__i0__exit0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_tool__i0__exit0; _j0++) {
            tool[_i0].exit[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tool__i0__fork0 = 1;
          tool[_i0].fork = (int *) malloc(_len_tool__i0__fork0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_tool__i0__fork0; _j0++) {
            tool[_i0].fork[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tool__i0__namespaces0 = 1;
          tool[_i0].namespaces = (int *) malloc(_len_tool__i0__namespaces0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_tool__i0__namespaces0; _j0++) {
            tool[_i0].namespaces[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tool__i0__comm0 = 1;
          tool[_i0].comm = (int *) malloc(_len_tool__i0__comm0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_tool__i0__comm0; _j0++) {
            tool[_i0].comm[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tool__i0__mmap20 = 1;
          tool[_i0].mmap2 = (int *) malloc(_len_tool__i0__mmap20*sizeof(int));
          for(int _j0 = 0; _j0 < _len_tool__i0__mmap20; _j0++) {
            tool[_i0].mmap2[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tool__i0__mmap0 = 1;
          tool[_i0].mmap = (int *) malloc(_len_tool__i0__mmap0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_tool__i0__mmap0; _j0++) {
            tool[_i0].mmap[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tool__i0__sample0 = 1;
          tool[_i0].sample = (int *) malloc(_len_tool__i0__sample0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_tool__i0__sample0; _j0++) {
            tool[_i0].sample[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          perf_tool__fill_defaults(tool);
          for(int _aux = 0; _aux < _len_tool0; _aux++) {
          free(tool[_aux].feature);
          }
          for(int _aux = 0; _aux < _len_tool0; _aux++) {
          free(tool[_aux].time_conv);
          }
          for(int _aux = 0; _aux < _len_tool0; _aux++) {
          free(tool[_aux].stat_round);
          }
          for(int _aux = 0; _aux < _len_tool0; _aux++) {
          free(tool[_aux].stat);
          }
          for(int _aux = 0; _aux < _len_tool0; _aux++) {
          free(tool[_aux].stat_config);
          }
          for(int _aux = 0; _aux < _len_tool0; _aux++) {
          free(tool[_aux].cpu_map);
          }
          for(int _aux = 0; _aux < _len_tool0; _aux++) {
          free(tool[_aux].thread_map);
          }
          for(int _aux = 0; _aux < _len_tool0; _aux++) {
          free(tool[_aux].auxtrace_error);
          }
          for(int _aux = 0; _aux < _len_tool0; _aux++) {
          free(tool[_aux].auxtrace);
          }
          for(int _aux = 0; _aux < _len_tool0; _aux++) {
          free(tool[_aux].auxtrace_info);
          }
          for(int _aux = 0; _aux < _len_tool0; _aux++) {
          free(tool[_aux].id_index);
          }
          for(int _aux = 0; _aux < _len_tool0; _aux++) {
          free(tool[_aux].finished_round);
          }
          for(int _aux = 0; _aux < _len_tool0; _aux++) {
          free(tool[_aux].build_id);
          }
          for(int _aux = 0; _aux < _len_tool0; _aux++) {
          free(tool[_aux].tracing_data);
          }
          for(int _aux = 0; _aux < _len_tool0; _aux++) {
          free(tool[_aux].event_update);
          }
          for(int _aux = 0; _aux < _len_tool0; _aux++) {
          free(tool[_aux].attr);
          }
          for(int _aux = 0; _aux < _len_tool0; _aux++) {
          free(tool[_aux].unthrottle);
          }
          for(int _aux = 0; _aux < _len_tool0; _aux++) {
          free(tool[_aux].throttle);
          }
          for(int _aux = 0; _aux < _len_tool0; _aux++) {
          free(tool[_aux].read);
          }
          for(int _aux = 0; _aux < _len_tool0; _aux++) {
          free(tool[_aux].context_switch);
          }
          for(int _aux = 0; _aux < _len_tool0; _aux++) {
          free(tool[_aux].itrace_start);
          }
          for(int _aux = 0; _aux < _len_tool0; _aux++) {
          free(tool[_aux].aux);
          }
          for(int _aux = 0; _aux < _len_tool0; _aux++) {
          free(tool[_aux].lost_samples);
          }
          for(int _aux = 0; _aux < _len_tool0; _aux++) {
          free(tool[_aux].lost);
          }
          for(int _aux = 0; _aux < _len_tool0; _aux++) {
          free(tool[_aux].exit);
          }
          for(int _aux = 0; _aux < _len_tool0; _aux++) {
          free(tool[_aux].fork);
          }
          for(int _aux = 0; _aux < _len_tool0; _aux++) {
          free(tool[_aux].namespaces);
          }
          for(int _aux = 0; _aux < _len_tool0; _aux++) {
          free(tool[_aux].comm);
          }
          for(int _aux = 0; _aux < _len_tool0; _aux++) {
          free(tool[_aux].mmap2);
          }
          for(int _aux = 0; _aux < _len_tool0; _aux++) {
          free(tool[_aux].mmap);
          }
          for(int _aux = 0; _aux < _len_tool0; _aux++) {
          free(tool[_aux].sample);
          }
          free(tool);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
