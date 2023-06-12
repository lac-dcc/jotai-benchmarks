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

/* Variables and functions */
#define  NFS4ERR_ACCESS 231 
#define  NFS4ERR_ADMIN_REVOKED 230 
#define  NFS4ERR_ATTRNOTSUPP 229 
#define  NFS4ERR_BACK_CHAN_BUSY 228 
#define  NFS4ERR_BADCHAR 227 
#define  NFS4ERR_BADHANDLE 226 
#define  NFS4ERR_BADIOMODE 225 
#define  NFS4ERR_BADLAYOUT 224 
#define  NFS4ERR_BADNAME 223 
#define  NFS4ERR_BADOWNER 222 
#define  NFS4ERR_BADSESSION 221 
#define  NFS4ERR_BADSLOT 220 
#define  NFS4ERR_BADTYPE 219 
#define  NFS4ERR_BADXDR 218 
#define  NFS4ERR_BAD_COOKIE 217 
#define  NFS4ERR_BAD_HIGH_SLOT 216 
#define  NFS4ERR_BAD_RANGE 215 
#define  NFS4ERR_BAD_SEQID 214 
#define  NFS4ERR_BAD_SESSION_DIGEST 213 
#define  NFS4ERR_BAD_STATEID 212 
#define  NFS4ERR_CB_PATH_DOWN 211 
#define  NFS4ERR_CLID_INUSE 210 
#define  NFS4ERR_CLIENTID_BUSY 209 
#define  NFS4ERR_COMPLETE_ALREADY 208 
#define  NFS4ERR_CONN_NOT_BOUND_TO_SESSION 207 
#define  NFS4ERR_DEADLOCK 206 
#define  NFS4ERR_DEADSESSION 205 
#define  NFS4ERR_DELAY 204 
#define  NFS4ERR_DELEG_ALREADY_WANTED 203 
#define  NFS4ERR_DELEG_REVOKED 202 
#define  NFS4ERR_DENIED 201 
#define  NFS4ERR_DIRDELEG_UNAVAIL 200 
#define  NFS4ERR_DQUOT 199 
#define  NFS4ERR_ENCR_ALG_UNSUPP 198 
#define  NFS4ERR_EXIST 197 
#define  NFS4ERR_EXPIRED 196 
#define  NFS4ERR_FBIG 195 
#define  NFS4ERR_FHEXPIRED 194 
#define  NFS4ERR_FILE_OPEN 193 
#define  NFS4ERR_GRACE 192 
#define  NFS4ERR_HASH_ALG_UNSUPP 191 
#define  NFS4ERR_INVAL 190 
#define  NFS4ERR_IO 189 
#define  NFS4ERR_ISDIR 188 
#define  NFS4ERR_LAYOUTTRYLATER 187 
#define  NFS4ERR_LAYOUTUNAVAILABLE 186 
#define  NFS4ERR_LEASE_MOVED 185 
#define  NFS4ERR_LOCKED 184 
#define  NFS4ERR_LOCKS_HELD 183 
#define  NFS4ERR_LOCK_NOTSUPP 182 
#define  NFS4ERR_LOCK_RANGE 181 
#define  NFS4ERR_MINOR_VERS_MISMATCH 180 
#define  NFS4ERR_MLINK 179 
#define  NFS4ERR_MOVED 178 
#define  NFS4ERR_NAMETOOLONG 177 
#define  NFS4ERR_NOENT 176 
#define  NFS4ERR_NOFILEHANDLE 175 
#define  NFS4ERR_NOMATCHING_LAYOUT 174 
#define  NFS4ERR_NOSPC 173 
#define  NFS4ERR_NOTDIR 172 
#define  NFS4ERR_NOTEMPTY 171 
#define  NFS4ERR_NOTSUPP 170 
#define  NFS4ERR_NOT_ONLY_OP 169 
#define  NFS4ERR_NOT_SAME 168 
#define  NFS4ERR_NO_GRACE 167 
#define  NFS4ERR_NXIO 166 
#define  NFS4ERR_OLD_STATEID 165 
#define  NFS4ERR_OPENMODE 164 
#define  NFS4ERR_OP_ILLEGAL 163 
#define  NFS4ERR_OP_NOT_IN_SESSION 162 
#define  NFS4ERR_PERM 161 
#define  NFS4ERR_PNFS_IO_HOLE 160 
#define  NFS4ERR_PNFS_NO_LAYOUT 159 
#define  NFS4ERR_RECALLCONFLICT 158 
#define  NFS4ERR_RECLAIM_BAD 157 
#define  NFS4ERR_RECLAIM_CONFLICT 156 
#define  NFS4ERR_REJECT_DELEG 155 
#define  NFS4ERR_REP_TOO_BIG 154 
#define  NFS4ERR_REP_TOO_BIG_TO_CACHE 153 
#define  NFS4ERR_REQ_TOO_BIG 152 
#define  NFS4ERR_RESOURCE 151 
#define  NFS4ERR_RESTOREFH 150 
#define  NFS4ERR_RETRY_UNCACHED_REP 149 
#define  NFS4ERR_RETURNCONFLICT 148 
#define  NFS4ERR_ROFS 147 
#define  NFS4ERR_SAME 146 
#define  NFS4ERR_SEQUENCE_POS 145 
#define  NFS4ERR_SEQ_FALSE_RETRY 144 
#define  NFS4ERR_SEQ_MISORDERED 143 
#define  NFS4ERR_SERVERFAULT 142 
#define  NFS4ERR_SHARE_DENIED 141 
#define  NFS4ERR_STALE 140 
#define  NFS4ERR_STALE_CLIENTID 139 
#define  NFS4ERR_STALE_STATEID 138 
#define  NFS4ERR_SYMLINK 137 
#define  NFS4ERR_TOOSMALL 136 
#define  NFS4ERR_TOO_MANY_OPS 135 
#define  NFS4ERR_UNKNOWN_LAYOUTTYPE 134 
#define  NFS4ERR_UNSAFE_COMPOUND 133 
#define  NFS4ERR_WRONGSEC 132 
#define  NFS4ERR_WRONG_CRED 131 
#define  NFS4ERR_WRONG_TYPE 130 
#define  NFS4ERR_XDEV 129 
#define  NFS4_OK 128 

const char* nfs_error_string(int status)
{
    switch (status)
    {
    case NFS4_OK: return "NFS4_OK";
    case NFS4ERR_PERM: return "NFS4ERR_PERM";
    case NFS4ERR_NOENT: return "NFS4ERR_NOENT";
    case NFS4ERR_IO: return "NFS4ERR_IO";
    case NFS4ERR_NXIO: return "NFS4ERR_NXIO";
    case NFS4ERR_ACCESS: return "NFS4ERR_ACCESS";
    case NFS4ERR_EXIST: return "NFS4ERR_EXIST";
    case NFS4ERR_XDEV: return "NFS4ERR_XDEV";
    case NFS4ERR_NOTDIR: return "NFS4ERR_NOTDIR";
    case NFS4ERR_ISDIR: return "NFS4ERR_ISDIR";
    case NFS4ERR_INVAL: return "NFS4ERR_INVAL";
    case NFS4ERR_FBIG: return "NFS4ERR_FBIG";
    case NFS4ERR_NOSPC: return "NFS4ERR_NOSPC";
    case NFS4ERR_ROFS: return "NFS4ERR_ROFS";
    case NFS4ERR_MLINK: return "NFS4ERR_MLINK";
    case NFS4ERR_NAMETOOLONG: return "NFS4ERR_NAMETOOLONG";
    case NFS4ERR_NOTEMPTY: return "NFS4ERR_NOTEMPTY";
    case NFS4ERR_DQUOT: return "NFS4ERR_DQUOT";
    case NFS4ERR_STALE: return "NFS4ERR_STALE";
    case NFS4ERR_BADHANDLE: return "NFS4ERR_BADHANDLE";
    case NFS4ERR_BAD_COOKIE: return "NFS4ERR_BAD_COOKIE";
    case NFS4ERR_NOTSUPP: return "NFS4ERR_NOTSUPP";
    case NFS4ERR_TOOSMALL: return "NFS4ERR_TOOSMALL";
    case NFS4ERR_SERVERFAULT: return "NFS4ERR_SERVERFAULT";
    case NFS4ERR_BADTYPE: return "NFS4ERR_BADTYPE";
    case NFS4ERR_DELAY: return "NFS4ERR_DELAY";
    case NFS4ERR_SAME: return "NFS4ERR_SAME";
    case NFS4ERR_DENIED: return "NFS4ERR_DENIED";
    case NFS4ERR_EXPIRED: return "NFS4ERR_EXPIRED";
    case NFS4ERR_LOCKED: return "NFS4ERR_LOCKED";
    case NFS4ERR_GRACE: return "NFS4ERR_GRACE";
    case NFS4ERR_FHEXPIRED: return "NFS4ERR_FHEXPIRED";
    case NFS4ERR_SHARE_DENIED: return "NFS4ERR_SHARE_DENIED";
    case NFS4ERR_WRONGSEC: return "NFS4ERR_WRONGSEC";
    case NFS4ERR_CLID_INUSE: return "NFS4ERR_CLID_INUSE";
    case NFS4ERR_RESOURCE: return "NFS4ERR_RESOURCE";
    case NFS4ERR_MOVED: return "NFS4ERR_MOVED";
    case NFS4ERR_NOFILEHANDLE: return "NFS4ERR_NOFILEHANDLE";
    case NFS4ERR_MINOR_VERS_MISMATCH: return "NFS4ERR_MINOR_VERS_MISMATCH";
    case NFS4ERR_STALE_CLIENTID: return "NFS4ERR_STALE_CLIENTID";
    case NFS4ERR_STALE_STATEID: return "NFS4ERR_STALE_STATEID";
    case NFS4ERR_OLD_STATEID: return "NFS4ERR_OLD_STATEID";
    case NFS4ERR_BAD_STATEID: return "NFS4ERR_BAD_STATEID";
    case NFS4ERR_BAD_SEQID: return "NFS4ERR_BAD_SEQID";
    case NFS4ERR_NOT_SAME: return "NFS4ERR_NOT_SAME";
    case NFS4ERR_LOCK_RANGE: return "NFS4ERR_LOCK_RANGE";
    case NFS4ERR_SYMLINK: return "NFS4ERR_SYMLINK";
    case NFS4ERR_RESTOREFH: return "NFS4ERR_RESTOREFH";
    case NFS4ERR_LEASE_MOVED: return "NFS4ERR_LEASE_MOVED";
    case NFS4ERR_ATTRNOTSUPP: return "NFS4ERR_ATTRNOTSUPP";
    case NFS4ERR_NO_GRACE: return "NFS4ERR_NO_GRACE";
    case NFS4ERR_RECLAIM_BAD: return "NFS4ERR_RECLAIM_BAD";
    case NFS4ERR_RECLAIM_CONFLICT: return "NFS4ERR_RECLAIM_CONFLICT";
    case NFS4ERR_BADXDR: return "NFS4ERR_BADXDR";
    case NFS4ERR_LOCKS_HELD: return "NFS4ERR_LOCKS_HELD";
    case NFS4ERR_OPENMODE: return "NFS4ERR_OPENMODE";
    case NFS4ERR_BADOWNER: return "NFS4ERR_BADOWNER";
    case NFS4ERR_BADCHAR: return "NFS4ERR_BADCHAR";
    case NFS4ERR_BADNAME: return "NFS4ERR_BADNAME";
    case NFS4ERR_BAD_RANGE: return "NFS4ERR_BAD_RANGE";
    case NFS4ERR_LOCK_NOTSUPP: return "NFS4ERR_LOCK_NOTSUPP";
    case NFS4ERR_OP_ILLEGAL: return "NFS4ERR_OP_ILLEGAL";
    case NFS4ERR_DEADLOCK: return "NFS4ERR_DEADLOCK";
    case NFS4ERR_FILE_OPEN: return "NFS4ERR_FILE_OPEN";
    case NFS4ERR_ADMIN_REVOKED: return "NFS4ERR_ADMIN_REVOKED";
    case NFS4ERR_CB_PATH_DOWN: return "NFS4ERR_CB_PATH_DOWN";
    case NFS4ERR_BADIOMODE: return "NFS4ERR_BADIOMODE";
    case NFS4ERR_BADLAYOUT: return "NFS4ERR_BADLAYOUT";
    case NFS4ERR_BAD_SESSION_DIGEST: return "NFS4ERR_BAD_SESSION_DIGEST";
    case NFS4ERR_BADSESSION: return "NFS4ERR_BADSESSION";
    case NFS4ERR_BADSLOT: return "NFS4ERR_BADSLOT";
    case NFS4ERR_COMPLETE_ALREADY: return "NFS4ERR_COMPLETE_ALREADY";
    case NFS4ERR_CONN_NOT_BOUND_TO_SESSION: return "NFS4ERR_CONN_NOT_BOUND_TO_SESSION";
    case NFS4ERR_DELEG_ALREADY_WANTED: return "NFS4ERR_DELEG_ALREADY_WANTED";
    case NFS4ERR_BACK_CHAN_BUSY: return "NFS4ERR_BACK_CHAN_BUSY";
    case NFS4ERR_LAYOUTTRYLATER: return "NFS4ERR_LAYOUTTRYLATER";
    case NFS4ERR_LAYOUTUNAVAILABLE: return "NFS4ERR_LAYOUTUNAVAILABLE";
    case NFS4ERR_NOMATCHING_LAYOUT: return "NFS4ERR_NOMATCHING_LAYOUT";
    case NFS4ERR_RECALLCONFLICT: return "NFS4ERR_RECALLCONFLICT";
    case NFS4ERR_UNKNOWN_LAYOUTTYPE: return "NFS4ERR_UNKNOWN_LAYOUTTYPE";
    case NFS4ERR_SEQ_MISORDERED: return "NFS4ERR_SEQ_MISORDERED";
    case NFS4ERR_SEQUENCE_POS: return "NFS4ERR_SEQUENCE_POS";
    case NFS4ERR_REQ_TOO_BIG: return "NFS4ERR_REQ_TOO_BIG";
    case NFS4ERR_REP_TOO_BIG: return "NFS4ERR_REP_TOO_BIG";
    case NFS4ERR_REP_TOO_BIG_TO_CACHE: return "NFS4ERR_REP_TOO_BIG_TO_CACHE";
    case NFS4ERR_RETRY_UNCACHED_REP: return "NFS4ERR_RETRY_UNCACHED_REP";
    case NFS4ERR_UNSAFE_COMPOUND: return "NFS4ERR_UNSAFE_COMPOUND";
    case NFS4ERR_TOO_MANY_OPS: return "NFS4ERR_TOO_MANY_OPS";
    case NFS4ERR_OP_NOT_IN_SESSION: return "NFS4ERR_OP_NOT_IN_SESSION";
    case NFS4ERR_HASH_ALG_UNSUPP: return "NFS4ERR_HASH_ALG_UNSUPP";
    case NFS4ERR_CLIENTID_BUSY: return "NFS4ERR_CLIENTID_BUSY";
    case NFS4ERR_PNFS_IO_HOLE: return "NFS4ERR_PNFS_IO_HOLE";
    case NFS4ERR_SEQ_FALSE_RETRY: return "NFS4ERR_SEQ_FALSE_RETRY";
    case NFS4ERR_BAD_HIGH_SLOT: return "NFS4ERR_BAD_HIGH_SLOT";
    case NFS4ERR_DEADSESSION: return "NFS4ERR_DEADSESSION";
    case NFS4ERR_ENCR_ALG_UNSUPP: return "NFS4ERR_ENCR_ALG_UNSUPP";
    case NFS4ERR_PNFS_NO_LAYOUT: return "NFS4ERR_PNFS_NO_LAYOUT";
    case NFS4ERR_NOT_ONLY_OP: return "NFS4ERR_NOT_ONLY_OP";
    case NFS4ERR_WRONG_CRED: return "NFS4ERR_WRONG_CRED";
    case NFS4ERR_WRONG_TYPE: return "NFS4ERR_WRONG_TYPE";
    case NFS4ERR_DIRDELEG_UNAVAIL: return "NFS4ERR_DIRDELEG_UNAVAIL";
    case NFS4ERR_REJECT_DELEG: return "NFS4ERR_REJECT_DELEG";
    case NFS4ERR_RETURNCONFLICT: return "NFS4ERR_RETURNCONFLICT";
    case NFS4ERR_DELEG_REVOKED: return "NFS4ERR_DELEG_REVOKED";
    default: return "invalid nfs error code";
    }
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
          // static_instructions_O0 : 14
          // dynamic_instructions_O0 : 14
          // ------------------------------- 
          // static_instructions_O1 : 5
          // dynamic_instructions_O1 : 5
          // ------------------------------- 
          // static_instructions_O2 : 5
          // dynamic_instructions_O2 : 5
          // ------------------------------- 
          // static_instructions_O3 : 5
          // dynamic_instructions_O3 : 5
          // ------------------------------- 
          // static_instructions_Ofast : 5
          // dynamic_instructions_Ofast : 5
          // ------------------------------- 
          // static_instructions_Os : 5
          // dynamic_instructions_Os : 5
          // ------------------------------- 
          // static_instructions_Oz : 5
          // dynamic_instructions_Oz : 5
          // ------------------------------- 

          int status = 100;
        
          const char * benchRet = nfs_error_string(status);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 14
          // dynamic_instructions_O0 : 14
          // ------------------------------- 
          // static_instructions_O1 : 5
          // dynamic_instructions_O1 : 5
          // ------------------------------- 
          // static_instructions_O2 : 5
          // dynamic_instructions_O2 : 5
          // ------------------------------- 
          // static_instructions_O3 : 5
          // dynamic_instructions_O3 : 5
          // ------------------------------- 
          // static_instructions_Ofast : 5
          // dynamic_instructions_Ofast : 5
          // ------------------------------- 
          // static_instructions_Os : 5
          // dynamic_instructions_Os : 5
          // ------------------------------- 
          // static_instructions_Oz : 5
          // dynamic_instructions_Oz : 5
          // ------------------------------- 

          int status = 255;
        
          const char * benchRet = nfs_error_string(status);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 14
          // dynamic_instructions_O0 : 14
          // ------------------------------- 
          // static_instructions_O1 : 5
          // dynamic_instructions_O1 : 5
          // ------------------------------- 
          // static_instructions_O2 : 5
          // dynamic_instructions_O2 : 5
          // ------------------------------- 
          // static_instructions_O3 : 5
          // dynamic_instructions_O3 : 5
          // ------------------------------- 
          // static_instructions_Ofast : 5
          // dynamic_instructions_Ofast : 5
          // ------------------------------- 
          // static_instructions_Os : 5
          // dynamic_instructions_Os : 5
          // ------------------------------- 
          // static_instructions_Oz : 5
          // dynamic_instructions_Oz : 5
          // ------------------------------- 

          int status = 10;
        
          const char * benchRet = nfs_error_string(status);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 14
          // dynamic_instructions_O0 : 14
          // ------------------------------- 
          // static_instructions_O1 : 5
          // dynamic_instructions_O1 : 5
          // ------------------------------- 
          // static_instructions_O2 : 5
          // dynamic_instructions_O2 : 5
          // ------------------------------- 
          // static_instructions_O3 : 5
          // dynamic_instructions_O3 : 5
          // ------------------------------- 
          // static_instructions_Ofast : 5
          // dynamic_instructions_Ofast : 5
          // ------------------------------- 
          // static_instructions_Os : 5
          // dynamic_instructions_Os : 5
          // ------------------------------- 
          // static_instructions_Oz : 5
          // dynamic_instructions_Oz : 5
          // ------------------------------- 

          int status = ((-2 * (next_i()%2)) + 1) * next_i();
        
          const char * benchRet = nfs_error_string(status);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
