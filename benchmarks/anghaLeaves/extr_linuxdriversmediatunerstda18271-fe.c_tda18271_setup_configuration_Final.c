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
struct tda18271_priv {int /*<<< orphan*/  output_opt; int /*<<< orphan*/  small_i2c; int /*<<< orphan*/  config; int /*<<< orphan*/  role; int /*<<< orphan*/  gate; } ;
struct tda18271_config {int /*<<< orphan*/  output_opt; int /*<<< orphan*/  small_i2c; int /*<<< orphan*/  config; int /*<<< orphan*/  role; int /*<<< orphan*/  gate; } ;
struct dvb_frontend {struct tda18271_priv* tuner_priv; } ;

/* Variables and functions */
 int /*<<< orphan*/  TDA18271_39_BYTE_CHUNK_INIT ; 
 int /*<<< orphan*/  TDA18271_GATE_AUTO ; 
 int /*<<< orphan*/  TDA18271_MASTER ; 
 int /*<<< orphan*/  TDA18271_OUTPUT_LT_XT_ON ; 

__attribute__((used)) static int tda18271_setup_configuration(struct dvb_frontend *fe,
					struct tda18271_config *cfg)
{
	struct tda18271_priv *priv = fe->tuner_priv;

	priv->gate = (cfg) ? cfg->gate : TDA18271_GATE_AUTO;
	priv->role = (cfg) ? cfg->role : TDA18271_MASTER;
	priv->config = (cfg) ? cfg->config : 0;
	priv->small_i2c = (cfg) ?
		cfg->small_i2c : TDA18271_39_BYTE_CHUNK_INIT;
	priv->output_opt = (cfg) ?
		cfg->output_opt : TDA18271_OUTPUT_LT_XT_ON;

	return 0;
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
          int _len_fe0 = 1;
          struct dvb_frontend * fe = (struct dvb_frontend *) malloc(_len_fe0*sizeof(struct dvb_frontend));
          for(int _i0 = 0; _i0 < _len_fe0; _i0++) {
              int _len_fe__i0__tuner_priv0 = 1;
          fe[_i0].tuner_priv = (struct tda18271_priv *) malloc(_len_fe__i0__tuner_priv0*sizeof(struct tda18271_priv));
          for(int _j0 = 0; _j0 < _len_fe__i0__tuner_priv0; _j0++) {
            fe[_i0].tuner_priv->output_opt = ((-2 * (next_i()%2)) + 1) * next_i();
        fe[_i0].tuner_priv->small_i2c = ((-2 * (next_i()%2)) + 1) * next_i();
        fe[_i0].tuner_priv->config = ((-2 * (next_i()%2)) + 1) * next_i();
        fe[_i0].tuner_priv->role = ((-2 * (next_i()%2)) + 1) * next_i();
        fe[_i0].tuner_priv->gate = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_cfg0 = 1;
          struct tda18271_config * cfg = (struct tda18271_config *) malloc(_len_cfg0*sizeof(struct tda18271_config));
          for(int _i0 = 0; _i0 < _len_cfg0; _i0++) {
            cfg[_i0].output_opt = ((-2 * (next_i()%2)) + 1) * next_i();
        cfg[_i0].small_i2c = ((-2 * (next_i()%2)) + 1) * next_i();
        cfg[_i0].config = ((-2 * (next_i()%2)) + 1) * next_i();
        cfg[_i0].role = ((-2 * (next_i()%2)) + 1) * next_i();
        cfg[_i0].gate = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = tda18271_setup_configuration(fe,cfg);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_fe0; _aux++) {
          free(fe[_aux].tuner_priv);
          }
          free(fe);
          free(cfg);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
