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

/* Variables and functions */

int mbedtls_x509_test(int verbose,  char *ca_crt,  size_t ca_crt_len, char *cli_crt, size_t cli_crt_len)
{
#if defined(MBEDTLS_SHA1_C)
    int ret;
    uint32_t flags;
    mbedtls_x509_crt cacert;
    mbedtls_x509_crt clicert;

    if( verbose != 0 )
        os_printf( "  X.509 certificate load: " );

    mbedtls_x509_crt_init( &clicert );

    ret = mbedtls_x509_crt_parse( &clicert, (const unsigned char *) cli_crt,
                           cli_crt_len );
    if( ret != 0 )
    {
        if( verbose != 0 )
            os_printf( "failed\n" );

        return( ret );
    }

    mbedtls_x509_crt_init( &cacert );

    ret = mbedtls_x509_crt_parse( &cacert, (const unsigned char *) ca_crt,
                          ca_crt_len );
    if( ret != 0 )
    {
        if( verbose != 0 )
            os_printf( "failed\n" );

        return( ret );
    }

    if( verbose != 0 )
        os_printf( "passed\n  X.509 signature verify: ");

    ret = mbedtls_x509_crt_verify( &clicert, &cacert, NULL, NULL, &flags, NULL, NULL );
    if( ret != 0 )
    {
        if( verbose != 0 )
            os_printf( "failed\n" );

        return( ret );
    }

    if( verbose != 0 )
        os_printf( "passed\n\n");

    mbedtls_x509_crt_free( &cacert  );
    mbedtls_x509_crt_free( &clicert );

    return( 0 );
#else
    ((void) verbose);
    return( 0 );
#endif /* MBEDTLS_CERTS_C && MBEDTLS_SHA1_C */
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
          int verbose = 100;
          unsigned long ca_crt_len = 100;
          unsigned long cli_crt_len = 100;
          int _len_ca_crt0 = 1;
          char * ca_crt = (char *) malloc(_len_ca_crt0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_ca_crt0; _i0++) {
            ca_crt[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cli_crt0 = 1;
          char * cli_crt = (char *) malloc(_len_cli_crt0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_cli_crt0; _i0++) {
            cli_crt[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mbedtls_x509_test(verbose,ca_crt,ca_crt_len,cli_crt,cli_crt_len);
          printf("%d\n", benchRet); 
          free(ca_crt);
          free(cli_crt);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
