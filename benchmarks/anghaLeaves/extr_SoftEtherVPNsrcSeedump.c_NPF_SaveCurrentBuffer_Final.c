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
typedef  int /*<<< orphan*/  POPEN_INSTANCE ;
typedef  int /*<<< orphan*/  NTSTATUS ;

/* Variables and functions */
 int /*<<< orphan*/  STATUS_SUCCESS ; 

NTSTATUS NPF_SaveCurrentBuffer(POPEN_INSTANCE Open)
{
#if 0

   Thead=Open->Bhead;
   Ttail=Open->Btail;
   TLastByte=Open->BLastByte;
   
    IF_LOUD(DbgPrint("NPF: NPF_SaveCurrentBuffer.\n");)

   // Get the address of the buffer
   CurrBuff=Open->Buffer;
   //
   // Fill the application buffer
   //
   if( Ttail < Thead )
   {
      if(Open->MaxDumpBytes &&
         (UINT)Open->DumpOffset.QuadPart /*+ GetBuffOccupation(Open)*/ > Open->MaxDumpBytes)
      {
         // Size limit reached
         UINT PktLen;
         
         SizeToDump = 0;
         
         // Scan the buffer to detect the exact amount of data to save
         while(TRUE){
            PktLen = ((struct sf_pkthdr*)(CurrBuff + Thead + SizeToDump))->caplen + sizeof(struct sf_pkthdr);
            
            if((UINT)Open->DumpOffset.QuadPart + SizeToDump + PktLen > Open->MaxDumpBytes)
               break;
            
            SizeToDump += PktLen;
         }
         
      }
      else
         SizeToDump = TLastByte-Thead;
      
      lMdl=IoAllocateMdl(CurrBuff+Thead, SizeToDump, FALSE, FALSE, NULL);
      if (lMdl == NULL)
      {
         // No memory: stop dump
         IF_LOUD(DbgPrint("NPF: dump thread: Failed to allocate Mdl\n");)
         return STATUS_UNSUCCESSFUL;
      }
      
      MmBuildMdlForNonPagedPool(lMdl);
      
      // Write to disk
      NPF_WriteDumpFile(Open->DumpFileObject,
         &Open->DumpOffset,
         SizeToDump,
         lMdl,
         &IoStatus);
      
      IoFreeMdl(lMdl);
      
      if(!NT_SUCCESS(IoStatus.Status)){
         // Error
         return STATUS_UNSUCCESSFUL;
      }
      
      if(SizeToDump != TLastByte-Thead){
         // Size limit reached.
         Open->DumpLimitReached = TRUE;
   
         // Awake the application
         KeSetEvent(Open->ReadEvent,0,FALSE);

         return STATUS_UNSUCCESSFUL;
      }
      
      // Update the packet buffer
      Open->DumpOffset.QuadPart+=(TLastByte-Thead);
      Open->BLastByte=Ttail;
      Open->Bhead=0;
   }

   if( Ttail > Thead ){
      
      if(Open->MaxDumpBytes &&
         (UINT)Open->DumpOffset.QuadPart /* +GetBuffOccupation(Open)*/ > Open->MaxDumpBytes)
      {
         // Size limit reached
         UINT PktLen;
                  
         SizeToDump = 0;
         
         // Scan the buffer to detect the exact amount of data to save
         while(Thead + SizeToDump < Ttail){

            PktLen = ((struct sf_pkthdr*)(CurrBuff + Thead + SizeToDump))->caplen + sizeof(struct sf_pkthdr);
            
            if((UINT)Open->DumpOffset.QuadPart + SizeToDump + PktLen > Open->MaxDumpBytes)
               break;
            
            SizeToDump += PktLen;
         }
         
      }
      else
         SizeToDump = Ttail-Thead;
            
      lMdl=IoAllocateMdl(CurrBuff+Thead, SizeToDump, FALSE, FALSE, NULL);
      if (lMdl == NULL)
      {
         // No memory: stop dump
         IF_LOUD(DbgPrint("NPF: dump thread: Failed to allocate Mdl\n");)
         return STATUS_UNSUCCESSFUL;
      }
      
      MmBuildMdlForNonPagedPool(lMdl);
      
      // Write to disk
      NPF_WriteDumpFile(Open->DumpFileObject,
         &Open->DumpOffset,
         SizeToDump,
         lMdl,
         &IoStatus);
      
      IoFreeMdl(lMdl);
      
      if(!NT_SUCCESS(IoStatus.Status)){
         // Error
         return STATUS_UNSUCCESSFUL;
      }
      
      if(SizeToDump != Ttail-Thead){
         // Size limit reached.
         Open->DumpLimitReached = TRUE;

         // Awake the application
         KeSetEvent(Open->ReadEvent,0,FALSE);
         
         return STATUS_UNSUCCESSFUL;
      }
      
      // Update the packet buffer
      Open->DumpOffset.QuadPart+=(Ttail-Thead);         
      Open->Bhead=Ttail;
      
   }
#endif
   return STATUS_SUCCESS;
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
          int Open = 100;
          int benchRet = NPF_SaveCurrentBuffer(Open);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int Open = 255;
          int benchRet = NPF_SaveCurrentBuffer(Open);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int Open = 10;
          int benchRet = NPF_SaveCurrentBuffer(Open);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
