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
typedef  int uint8_t ;
struct PNG_Chunk_IHDR {int ColourType; int BitDepth; } ;
typedef  int /*<<< orphan*/  qboolean ;
typedef  int byte ;

/* Variables and functions */
#define  PNG_BitDepth_1 137 
#define  PNG_BitDepth_16 136 
#define  PNG_BitDepth_2 135 
#define  PNG_BitDepth_4 134 
#define  PNG_BitDepth_8 133 
#define  PNG_ColourType_Grey 132 
#define  PNG_ColourType_GreyAlpha 131 
#define  PNG_ColourType_Indexed 130 
#define  PNG_ColourType_True 129 
#define  PNG_ColourType_TrueAlpha 128 
 int Q3IMAGE_BYTESPERPIXEL ; 
 int /*<<< orphan*/  qfalse ; 
 int /*<<< orphan*/  qtrue ; 

__attribute__((used)) static qboolean ConvertPixel(struct PNG_Chunk_IHDR *IHDR,
		byte                  *OutPtr,
		uint8_t               *DecompPtr,
		qboolean               HasTransparentColour,
		uint8_t               *TransparentColour,
		uint8_t               *OutPal)
{
	/*
	 *  input verification
	 */

	if(!(IHDR && OutPtr && DecompPtr && TransparentColour && OutPal))
	{
		return(qfalse);
	}

	switch(IHDR->ColourType)
	{
		case PNG_ColourType_Grey :
		{
			switch(IHDR->BitDepth)
			{
				case PNG_BitDepth_1 :
				case PNG_BitDepth_2 :
				case PNG_BitDepth_4 :
				{
					uint8_t Step;
					uint8_t GreyValue;

					Step = 0xFF / ((1 << IHDR->BitDepth) - 1);

					GreyValue = DecompPtr[0] * Step;

					OutPtr[0] = GreyValue;
					OutPtr[1] = GreyValue;
					OutPtr[2] = GreyValue;
					OutPtr[3] = 0xFF;

					/*
					 *  Grey supports full transparency for one specified colour
					 */

					if(HasTransparentColour)
					{
						if(TransparentColour[1] == DecompPtr[0])
						{
							OutPtr[3] = 0x00;
						}
					}


					break;
				}

				case PNG_BitDepth_8 :
				case PNG_BitDepth_16 :
				{
					OutPtr[0] = DecompPtr[0];
					OutPtr[1] = DecompPtr[0];
					OutPtr[2] = DecompPtr[0];
					OutPtr[3] = 0xFF;

					/*
					 *  Grey supports full transparency for one specified colour
					 */

					if(HasTransparentColour)
					{
						if(IHDR->BitDepth == PNG_BitDepth_8)
						{
							if(TransparentColour[1] == DecompPtr[0])
							{
								OutPtr[3] = 0x00;
							}
						}
						else
						{
							if((TransparentColour[0] == DecompPtr[0]) && (TransparentColour[1] == DecompPtr[1]))
							{
								OutPtr[3] = 0x00;
							}
						}
					}

					break;
				}

				default :
				{
					return(qfalse);
				}
			}

			break;
		}

		case PNG_ColourType_True :
		{
			switch(IHDR->BitDepth)
			{
				case PNG_BitDepth_8 :
				{
					OutPtr[0] = DecompPtr[0];
					OutPtr[1] = DecompPtr[1];
					OutPtr[2] = DecompPtr[2];
					OutPtr[3] = 0xFF;

					/*
					 *  True supports full transparency for one specified colour
					 */

					if(HasTransparentColour)
					{
						if((TransparentColour[1] == DecompPtr[0]) &&
								(TransparentColour[3] == DecompPtr[1]) &&
								(TransparentColour[5] == DecompPtr[2]))
						{
							OutPtr[3] = 0x00;
						}
					}

					break;
				}

				case PNG_BitDepth_16 :
				{
					/*
					 *  We use only the upper byte.
					 */

					OutPtr[0] = DecompPtr[0];
					OutPtr[1] = DecompPtr[2];
					OutPtr[2] = DecompPtr[4];
					OutPtr[3] = 0xFF;

					/*
					 *  True supports full transparency for one specified colour
					 */

					if(HasTransparentColour)
					{
						if((TransparentColour[0] == DecompPtr[0]) && (TransparentColour[1] == DecompPtr[1]) &&
								(TransparentColour[2] == DecompPtr[2]) && (TransparentColour[3] == DecompPtr[3]) &&
								(TransparentColour[4] == DecompPtr[4]) && (TransparentColour[5] == DecompPtr[5]))
						{
							OutPtr[3] = 0x00;
						}
					}

					break;
				}

				default :
				{
					return(qfalse);
				}
			}

			break;
		}

		case PNG_ColourType_Indexed :
		{
			OutPtr[0] = OutPal[DecompPtr[0] * Q3IMAGE_BYTESPERPIXEL + 0];
			OutPtr[1] = OutPal[DecompPtr[0] * Q3IMAGE_BYTESPERPIXEL + 1];
			OutPtr[2] = OutPal[DecompPtr[0] * Q3IMAGE_BYTESPERPIXEL + 2];
			OutPtr[3] = OutPal[DecompPtr[0] * Q3IMAGE_BYTESPERPIXEL + 3];

			break;
		}

		case PNG_ColourType_GreyAlpha :
		{
			switch(IHDR->BitDepth)
			{
				case PNG_BitDepth_8 :
				{
					OutPtr[0] = DecompPtr[0];
					OutPtr[1] = DecompPtr[0];
					OutPtr[2] = DecompPtr[0];
					OutPtr[3] = DecompPtr[1];

					break;
				}

				case PNG_BitDepth_16 :
				{
					/*
					 *  We use only the upper byte.
					 */

					OutPtr[0] = DecompPtr[0];
					OutPtr[1] = DecompPtr[0];
					OutPtr[2] = DecompPtr[0];
					OutPtr[3] = DecompPtr[2];

					break;
				}

				default :
				{
					return(qfalse);
				}
			}

			break;
		}

		case PNG_ColourType_TrueAlpha :
		{
			switch(IHDR->BitDepth)
			{
				case PNG_BitDepth_8 :
				{
					OutPtr[0] = DecompPtr[0];
					OutPtr[1] = DecompPtr[1];
					OutPtr[2] = DecompPtr[2];
					OutPtr[3] = DecompPtr[3];

					break;
				}

				case PNG_BitDepth_16 :
				{
					/*
					 *  We use only the upper byte.
					 */

					OutPtr[0] = DecompPtr[0];
					OutPtr[1] = DecompPtr[2];
					OutPtr[2] = DecompPtr[4];
					OutPtr[3] = DecompPtr[6];

					break;
				}

				default :
				{
					return(qfalse);
				}
			}

			break;
		}

		default :
		{
			return(qfalse);
		}
	}

	return(qtrue);
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
          int HasTransparentColour = 100;
          int _len_IHDR0 = 1;
          struct PNG_Chunk_IHDR * IHDR = (struct PNG_Chunk_IHDR *) malloc(_len_IHDR0*sizeof(struct PNG_Chunk_IHDR));
          for(int _i0 = 0; _i0 < _len_IHDR0; _i0++) {
            IHDR[_i0].ColourType = ((-2 * (next_i()%2)) + 1) * next_i();
        IHDR[_i0].BitDepth = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_OutPtr0 = 1;
          int * OutPtr = (int *) malloc(_len_OutPtr0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_OutPtr0; _i0++) {
            OutPtr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_DecompPtr0 = 1;
          int * DecompPtr = (int *) malloc(_len_DecompPtr0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_DecompPtr0; _i0++) {
            DecompPtr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_TransparentColour0 = 1;
          int * TransparentColour = (int *) malloc(_len_TransparentColour0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_TransparentColour0; _i0++) {
            TransparentColour[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_OutPal0 = 1;
          int * OutPal = (int *) malloc(_len_OutPal0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_OutPal0; _i0++) {
            OutPal[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ConvertPixel(IHDR,OutPtr,DecompPtr,HasTransparentColour,TransparentColour,OutPal);
          printf("%d\n", benchRet); 
          free(IHDR);
          free(OutPtr);
          free(DecompPtr);
          free(TransparentColour);
          free(OutPal);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
