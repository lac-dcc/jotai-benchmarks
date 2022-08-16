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
typedef  int /*<<< orphan*/  UINT ;
typedef  int /*<<< orphan*/  ETH ;

/* Variables and functions */

UINT EthGetMtu(ETH *e)
{
#if	defined(UNIX_LINUX) || defined(UNIX_BSD) || defined(UNIX_SOLARIS)
	UINT ret = 0;
#ifdef	UNIX_SOLARIS
	struct lifreq ifr;
#else	// UNIX_SOLARIS
	struct ifreq ifr;
#endif	// UNIX_SOLARIS
	int s;
	// Validate arguments
	if (e == NULL || e->Tap != NULL)
	{
		return 0;
	}
	if (e->IsRawIpMode)
	{
		return 0;
	}

	if (e->CurrentMtu != 0)
	{
		return e->CurrentMtu;
	}

#if	defined(UNIX_BSD) || defined(UNIX_SOLARIS)
	s = e->SocketBsdIf;
#else	// defined(UNIX_BSD) || defined(UNIX_SOLARIS)
	s = e->Socket;
#endif	// defined(UNIX_BSD) || defined(UNIX_SOLARIS)

	Zero(&ifr, sizeof(ifr));

#ifdef	UNIX_SOLARIS
	StrCpy(ifr.lifr_name, sizeof(ifr.lifr_name), e->Name);
#else	// UNIX_SOLARIS
	StrCpy(ifr.ifr_name, sizeof(ifr.ifr_name), e->Name);
#endif	// UNIX_SOLARIS

#ifdef	UNIX_SOLARIS
	if (ioctl(s, SIOCGLIFMTU, &ifr) < 0)
	{
		// failed
		return 0;
	}
#else	// UNIX_SOLARIS
	if (ioctl(s, SIOCGIFMTU, &ifr) < 0)
	{
		// failed
		return 0;
	}
#endif	// UNIX_SOLARIS

#ifdef	UNIX_SOLARIS
	ret = ifr.lifr_mtu + 14;
#else	// UNIX_SOLARIS
	ret = ifr.ifr_mtu + 14;
#endif	// UNIX_SOLARIS

	e->CurrentMtu = ret;

	Debug("%s: GetMtu: %u\n", e->Name, ret);

	return ret;
#else	// defined(UNIX_LINUX) || defined(UNIX_BSD) || defined(UNIX_SOLARIS)
	return 0;
#endif	// defined(UNIX_LINUX) || defined(UNIX_BSD) || defined(UNIX_SOLARIS)
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
          int _len_e0 = 1;
          int * e = (int *) malloc(_len_e0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_e0; _i0++) {
            e[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = EthGetMtu(e);
          printf("%d\n", benchRet); 
          free(e);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_e0 = 100;
          int * e = (int *) malloc(_len_e0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_e0; _i0++) {
            e[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = EthGetMtu(e);
          printf("%d\n", benchRet); 
          free(e);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
