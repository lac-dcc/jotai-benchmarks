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
typedef  int /*<<< orphan*/  PARSED_COMMAND ;
typedef  int /*<<< orphan*/  INT ;

/* Variables and functions */
 int /*<<< orphan*/  nErrorLevel ; 

__attribute__((used)) static INT
ExecutePipeline(PARSED_COMMAND *Cmd)
{
#ifdef FEATURE_REDIRECTION
    HANDLE hInput = NULL;
    HANDLE hOldConIn = GetStdHandle(STD_INPUT_HANDLE);
    HANDLE hOldConOut = GetStdHandle(STD_OUTPUT_HANDLE);
    HANDLE hProcess[MAXIMUM_WAIT_OBJECTS];
    INT nProcesses = 0;
    DWORD dwExitCode;

    /* Do all but the last pipe command */
    do
    {
        HANDLE hPipeRead, hPipeWrite;
        if (nProcesses > (MAXIMUM_WAIT_OBJECTS - 2))
        {
            error_too_many_parameters(_T("|"));
            goto failed;
        }

        /* Create the pipe that this process will write into.
         * Make the handles non-inheritable initially, because this
         * process shouldn't inherit the reading handle. */
        if (!CreatePipe(&hPipeRead, &hPipeWrite, NULL, 0))
        {
            error_no_pipe();
            goto failed;
        }

        /* The writing side of the pipe is STDOUT for this process */
        SetHandleInformation(hPipeWrite, HANDLE_FLAG_INHERIT, HANDLE_FLAG_INHERIT);
        SetStdHandle(STD_OUTPUT_HANDLE, hPipeWrite);

        /* Execute it (error check is done later for easier cleanup) */
        hProcess[nProcesses] = ExecuteAsync(Cmd->Subcommands);
        CloseHandle(hPipeWrite);
        if (hInput)
            CloseHandle(hInput);

        /* The reading side of the pipe will be STDIN for the next process */
        SetHandleInformation(hPipeRead, HANDLE_FLAG_INHERIT, HANDLE_FLAG_INHERIT);
        SetStdHandle(STD_INPUT_HANDLE, hPipeRead);
        hInput = hPipeRead;

        if (!hProcess[nProcesses])
            goto failed;
        nProcesses++;

        Cmd = Cmd->Subcommands->Next;
    } while (Cmd->Type == C_PIPE);

    /* The last process uses the original STDOUT */
    SetStdHandle(STD_OUTPUT_HANDLE, hOldConOut);
    hProcess[nProcesses] = ExecuteAsync(Cmd);
    if (!hProcess[nProcesses])
        goto failed;
    nProcesses++;
    CloseHandle(hInput);
    SetStdHandle(STD_INPUT_HANDLE, hOldConIn);

    /* Wait for all processes to complete */
    EnterCriticalSection(&ChildProcessRunningLock);
    WaitForMultipleObjects(nProcesses, hProcess, TRUE, INFINITE);
    LeaveCriticalSection(&ChildProcessRunningLock);

    /* Use the exit code of the last process in the pipeline */
    GetExitCodeProcess(hProcess[nProcesses - 1], &dwExitCode);
    nErrorLevel = (INT)dwExitCode;

    while (--nProcesses >= 0)
        CloseHandle(hProcess[nProcesses]);
    return nErrorLevel;

failed:
    if (hInput)
        CloseHandle(hInput);
    while (--nProcesses >= 0)
    {
        TerminateProcess(hProcess[nProcesses], 0);
        CloseHandle(hProcess[nProcesses]);
    }
    SetStdHandle(STD_INPUT_HANDLE, hOldConIn);
    SetStdHandle(STD_OUTPUT_HANDLE, hOldConOut);
#endif

    return nErrorLevel;
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
          int _len_Cmd0 = 1;
          int * Cmd = (int *) malloc(_len_Cmd0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_Cmd0; _i0++) {
            Cmd[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ExecutePipeline(Cmd);
          printf("%d\n", benchRet); 
          free(Cmd);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_Cmd0 = 100;
          int * Cmd = (int *) malloc(_len_Cmd0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_Cmd0; _i0++) {
            Cmd[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ExecutePipeline(Cmd);
          printf("%d\n", benchRet); 
          free(Cmd);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
