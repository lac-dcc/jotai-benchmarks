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
       0            big-arr\n\
       1            big-arr-10x\n\
       2            empty\n\
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
typedef  int WORD ;
typedef  int ULONG ;
typedef  int /*<<< orphan*/  UCHAR ;
typedef  int /*<<< orphan*/ * PUCHAR ;

/* Variables and functions */

__attribute__((used)) static PUCHAR lznt1_decompress_chunk(UCHAR *dst, ULONG dst_size, UCHAR *src, ULONG src_size)
{
    UCHAR *src_cur, *src_end, *dst_cur, *dst_end;
    ULONG displacement_bits, length_bits;
    ULONG code_displacement, code_length;
    WORD flags, code;

    src_cur = src;
    src_end = src + src_size;
    dst_cur = dst;
    dst_end = dst + dst_size;

    /* Partial decompression is no error on Windows. */
    while (src_cur < src_end && dst_cur < dst_end)
    {
        /* read flags header */
        flags = 0x8000 | *src_cur++;

        /* parse following 8 entities, either uncompressed data or backwards reference */
        while ((flags & 0xFF00) && src_cur < src_end)
        {
            if (flags & 1)
            {
                /* backwards reference */
                if (src_cur + sizeof(WORD) > src_end)
                    return NULL;
                code = *(WORD *)src_cur;
                src_cur += sizeof(WORD);

                /* find length / displacement bits */
                for (displacement_bits = 12; displacement_bits > 4; displacement_bits--)
                    if ((1 << (displacement_bits - 1)) < dst_cur - dst) break;
                length_bits       = 16 - displacement_bits;
                code_length       = (code & ((1 << length_bits) - 1)) + 3;
                code_displacement = (code >> length_bits) + 1;

                /* ensure reference is valid */
                if (dst_cur < dst + code_displacement)
                    return NULL;

                /* copy bytes of chunk - we can't use memcpy()
                 * since source and dest can be overlapping */
                while (code_length--)
                {
                    if (dst_cur >= dst_end) return dst_cur;
                    *dst_cur = *(dst_cur - code_displacement);
                    dst_cur++;
                }
            }
            else
            {
                /* uncompressed data */
                if (dst_cur >= dst_end) return dst_cur;
                *dst_cur++ = *src_cur++;
            }
            flags >>= 1;
        }

    }

    return dst_cur;
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {


    // big-arr
    case 0:
    {
          // static_instructions_O0 : 136
          // dynamic_instructions_O0 : 5353
          // ------------------------------- 
          // static_instructions_O1 : 75
          // dynamic_instructions_O1 : 1928
          // ------------------------------- 
          // static_instructions_O2 : 75
          // dynamic_instructions_O2 : 1928
          // ------------------------------- 
          // static_instructions_O3 : 75
          // dynamic_instructions_O3 : 1928
          // ------------------------------- 
          // static_instructions_Ofast : 75
          // dynamic_instructions_Ofast : 1928
          // ------------------------------- 
          // static_instructions_Os : 73
          // dynamic_instructions_Os : 1926
          // ------------------------------- 
          // static_instructions_Oz : 82
          // dynamic_instructions_Oz : 2191
          // ------------------------------- 

          int dst_size = 255;
        
          int src_size = 255;
        
          int _len_dst0 = 65025;
          int * dst = (int *) malloc(_len_dst0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_src0 = 65025;
          int * src = (int *) malloc(_len_src0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int * benchRet = lznt1_decompress_chunk(dst,dst_size,src,src_size);
          printf("%d\n", (*benchRet)); 
          free(dst);
          free(src);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 136
          // dynamic_instructions_O0 : 453
          // ------------------------------- 
          // static_instructions_O1 : 75
          // dynamic_instructions_O1 : 213
          // ------------------------------- 
          // static_instructions_O2 : 75
          // dynamic_instructions_O2 : 213
          // ------------------------------- 
          // static_instructions_O3 : 75
          // dynamic_instructions_O3 : 213
          // ------------------------------- 
          // static_instructions_Ofast : 75
          // dynamic_instructions_Ofast : 213
          // ------------------------------- 
          // static_instructions_Os : 73
          // dynamic_instructions_Os : 211
          // ------------------------------- 
          // static_instructions_Oz : 82
          // dynamic_instructions_Oz : 231
          // ------------------------------- 

          int dst_size = 10;
        
          int src_size = 10;
        
          int _len_dst0 = 100;
          int * dst = (int *) malloc(_len_dst0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_src0 = 100;
          int * src = (int *) malloc(_len_src0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int * benchRet = lznt1_decompress_chunk(dst,dst_size,src,src_size);
          printf("%d\n", (*benchRet)); 
          free(dst);
          free(src);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 34
          // dynamic_instructions_O0 : 34
          // ------------------------------- 
          // static_instructions_O1 : 13
          // dynamic_instructions_O1 : 13
          // ------------------------------- 
          // static_instructions_O2 : 13
          // dynamic_instructions_O2 : 13
          // ------------------------------- 
          // static_instructions_O3 : 13
          // dynamic_instructions_O3 : 13
          // ------------------------------- 
          // static_instructions_Ofast : 13
          // dynamic_instructions_Ofast : 13
          // ------------------------------- 
          // static_instructions_Os : 13
          // dynamic_instructions_Os : 13
          // ------------------------------- 
          // static_instructions_Oz : 25
          // dynamic_instructions_Oz : 25
          // ------------------------------- 

          int dst_size = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int src_size = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_dst0 = 1;
          int * dst = (int *) malloc(_len_dst0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_src0 = 1;
          int * src = (int *) malloc(_len_src0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int * benchRet = lznt1_decompress_chunk(dst,dst_size,src,src_size);
          printf("%d\n", (*benchRet)); 
          free(dst);
          free(src);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
