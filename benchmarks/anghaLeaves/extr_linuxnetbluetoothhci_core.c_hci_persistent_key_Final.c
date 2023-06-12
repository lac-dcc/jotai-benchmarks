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
       1            big-arr\n\
       2            big-arr-10x\n\
       3            empty\n\
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
typedef  int u8 ;
struct hci_dev {int dummy; } ;
struct hci_conn {scalar_t__ type; int auth_type; int remote_auth; } ;

/* Variables and functions */
 int HCI_LK_CHANGED_COMBINATION ; 
 int HCI_LK_DEBUG_COMBINATION ; 
 scalar_t__ LE_LINK ; 

__attribute__((used)) static bool hci_persistent_key(struct hci_dev *hdev, struct hci_conn *conn,
			       u8 key_type, u8 old_key_type)
{
	/* Legacy key */
	if (key_type < 0x03)
		return true;

	/* Debug keys are insecure so don't store them persistently */
	if (key_type == HCI_LK_DEBUG_COMBINATION)
		return false;

	/* Changed combination key and there's no previous one */
	if (key_type == HCI_LK_CHANGED_COMBINATION && old_key_type == 0xff)
		return false;

	/* Security mode 3 case */
	if (!conn)
		return true;

	/* BR/EDR key derived using SC from an LE link */
	if (conn->type == LE_LINK)
		return true;

	/* Neither local nor remote side had no-bonding as requirement */
	if (conn->auth_type > 0x01 && conn->remote_auth > 0x01)
		return true;

	/* Local side had dedicated bonding as requirement */
	if (conn->auth_type == 0x02 || conn->auth_type == 0x03)
		return true;

	/* Remote side had dedicated bonding as requirement */
	if (conn->remote_auth == 0x02 || conn->remote_auth == 0x03)
		return true;

	/* If none of the above criteria match, then don't store the key
	 * persistently */
	return false;
}

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
          // static_instructions_O0 : 39
          // dynamic_instructions_O0 : 39
          // ------------------------------- 
          // static_instructions_O1 : 28
          // dynamic_instructions_O1 : 28
          // ------------------------------- 
          // static_instructions_O2 : 24
          // dynamic_instructions_O2 : 24
          // ------------------------------- 
          // static_instructions_O3 : 24
          // dynamic_instructions_O3 : 24
          // ------------------------------- 
          // static_instructions_Ofast : 24
          // dynamic_instructions_Ofast : 24
          // ------------------------------- 
          // static_instructions_Os : 25
          // dynamic_instructions_Os : 25
          // ------------------------------- 
          // static_instructions_Oz : 26
          // dynamic_instructions_Oz : 26
          // ------------------------------- 

          int key_type = 100;
        
          int old_key_type = 100;
        
          int _len_hdev0 = 1;
          struct hci_dev * hdev = (struct hci_dev *) malloc(_len_hdev0*sizeof(struct hci_dev));
          for(int _i0 = 0; _i0 < _len_hdev0; _i0++) {
              hdev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_conn0 = 1;
          struct hci_conn * conn = (struct hci_conn *) malloc(_len_conn0*sizeof(struct hci_conn));
          for(int _i0 = 0; _i0 < _len_conn0; _i0++) {
              conn[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          conn[_i0].auth_type = ((-2 * (next_i()%2)) + 1) * next_i();
          conn[_i0].remote_auth = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = hci_persistent_key(hdev,conn,key_type,old_key_type);
          printf("%d\n", benchRet); 
          free(hdev);
          free(conn);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 39
          // dynamic_instructions_O0 : 39
          // ------------------------------- 
          // static_instructions_O1 : 30
          // dynamic_instructions_O1 : 30
          // ------------------------------- 
          // static_instructions_O2 : 26
          // dynamic_instructions_O2 : 26
          // ------------------------------- 
          // static_instructions_O3 : 26
          // dynamic_instructions_O3 : 26
          // ------------------------------- 
          // static_instructions_Ofast : 26
          // dynamic_instructions_Ofast : 26
          // ------------------------------- 
          // static_instructions_Os : 27
          // dynamic_instructions_Os : 27
          // ------------------------------- 
          // static_instructions_Oz : 28
          // dynamic_instructions_Oz : 28
          // ------------------------------- 

          int key_type = 255;
        
          int old_key_type = 255;
        
          int _len_hdev0 = 65025;
          struct hci_dev * hdev = (struct hci_dev *) malloc(_len_hdev0*sizeof(struct hci_dev));
          for(int _i0 = 0; _i0 < _len_hdev0; _i0++) {
              hdev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_conn0 = 65025;
          struct hci_conn * conn = (struct hci_conn *) malloc(_len_conn0*sizeof(struct hci_conn));
          for(int _i0 = 0; _i0 < _len_conn0; _i0++) {
              conn[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          conn[_i0].auth_type = ((-2 * (next_i()%2)) + 1) * next_i();
          conn[_i0].remote_auth = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = hci_persistent_key(hdev,conn,key_type,old_key_type);
          printf("%d\n", benchRet); 
          free(hdev);
          free(conn);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 39
          // dynamic_instructions_O0 : 39
          // ------------------------------- 
          // static_instructions_O1 : 28
          // dynamic_instructions_O1 : 28
          // ------------------------------- 
          // static_instructions_O2 : 24
          // dynamic_instructions_O2 : 24
          // ------------------------------- 
          // static_instructions_O3 : 24
          // dynamic_instructions_O3 : 24
          // ------------------------------- 
          // static_instructions_Ofast : 24
          // dynamic_instructions_Ofast : 24
          // ------------------------------- 
          // static_instructions_Os : 25
          // dynamic_instructions_Os : 25
          // ------------------------------- 
          // static_instructions_Oz : 26
          // dynamic_instructions_Oz : 26
          // ------------------------------- 

          int key_type = 10;
        
          int old_key_type = 10;
        
          int _len_hdev0 = 100;
          struct hci_dev * hdev = (struct hci_dev *) malloc(_len_hdev0*sizeof(struct hci_dev));
          for(int _i0 = 0; _i0 < _len_hdev0; _i0++) {
              hdev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_conn0 = 100;
          struct hci_conn * conn = (struct hci_conn *) malloc(_len_conn0*sizeof(struct hci_conn));
          for(int _i0 = 0; _i0 < _len_conn0; _i0++) {
              conn[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          conn[_i0].auth_type = ((-2 * (next_i()%2)) + 1) * next_i();
          conn[_i0].remote_auth = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = hci_persistent_key(hdev,conn,key_type,old_key_type);
          printf("%d\n", benchRet); 
          free(hdev);
          free(conn);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 13
          // dynamic_instructions_O0 : 13
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 9
          // dynamic_instructions_Oz : 9
          // ------------------------------- 

          int key_type = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int old_key_type = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_hdev0 = 1;
          struct hci_dev * hdev = (struct hci_dev *) malloc(_len_hdev0*sizeof(struct hci_dev));
          for(int _i0 = 0; _i0 < _len_hdev0; _i0++) {
              hdev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_conn0 = 1;
          struct hci_conn * conn = (struct hci_conn *) malloc(_len_conn0*sizeof(struct hci_conn));
          for(int _i0 = 0; _i0 < _len_conn0; _i0++) {
              conn[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          conn[_i0].auth_type = ((-2 * (next_i()%2)) + 1) * next_i();
          conn[_i0].remote_auth = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = hci_persistent_key(hdev,conn,key_type,old_key_type);
          printf("%d\n", benchRet); 
          free(hdev);
          free(conn);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
