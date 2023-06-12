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
       0            empty\n\
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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
typedef  unsigned char uint8_t ;
struct mg_str {unsigned char len; char* p; } ;
struct TYPE_2__ {size_t len; scalar_t__ p; } ;
struct mg_mqtt_message {TYPE_1__ payload; } ;

/* Variables and functions */

int mg_mqtt_next_subscribe_topic(struct mg_mqtt_message *msg,
                                 struct mg_str *topic, uint8_t *qos, int pos) {
  unsigned char *buf = (unsigned char *) msg->payload.p + pos;
  int new_pos;

  if ((size_t) pos >= msg->payload.len) return -1;

  topic->len = buf[0] << 8 | buf[1];
  topic->p = (char *) buf + 2;
  new_pos = pos + 2 + topic->len + 1;
  if ((size_t) new_pos > msg->payload.len) return -1;
  *qos = buf[2 + topic->len];
  return new_pos;
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {

    // empty
    case 0:
    {
          int pos = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_msg0 = 1;
          struct mg_mqtt_message * msg = (struct mg_mqtt_message *) malloc(_len_msg0*sizeof(struct mg_mqtt_message));
          for(int _i0 = 0; _i0 < _len_msg0; _i0++) {
              msg[_i0].payload.len = ((-2 * (next_i()%2)) + 1) * next_i();
          msg[_i0].payload.p = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          int _len_topic0 = 1;
          struct mg_str * topic = (struct mg_str *) malloc(_len_topic0*sizeof(struct mg_str));
          for(int _i0 = 0; _i0 < _len_topic0; _i0++) {
              topic[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_topic__i0__p0 = 1;
          topic[_i0].p = (char *) malloc(_len_topic__i0__p0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_topic__i0__p0; _j0++) {
            topic[_i0].p[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          int _len_qos0 = 1;
          unsigned char * qos = (unsigned char *) malloc(_len_qos0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_qos0; _i0++) {
            qos[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = mg_mqtt_next_subscribe_topic(msg,topic,qos,pos);
          printf("%d\n", benchRet); 
          free(msg);
          for(int _aux = 0; _aux < _len_topic0; _aux++) {
          free(topic[_aux].p);
          }
          free(topic);
          free(qos);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
