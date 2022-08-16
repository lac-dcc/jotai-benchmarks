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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct audit_field {int type; int val; int /*<<< orphan*/  op; } ;
struct TYPE_2__ {int listnr; } ;
struct audit_entry {TYPE_1__ rule; } ;

/* Variables and functions */
#define  AUDIT_ARCH 173 
#define  AUDIT_ARG0 172 
#define  AUDIT_ARG1 171 
#define  AUDIT_ARG2 170 
#define  AUDIT_ARG3 169 
#define  AUDIT_DEVMAJOR 168 
#define  AUDIT_DEVMINOR 167 
#define  AUDIT_DIR 166 
#define  AUDIT_EGID 165 
#define  AUDIT_EUID 164 
#define  AUDIT_EXE 163 
#define  AUDIT_EXIT 162 
#define  AUDIT_FIELD_COMPARE 161 
#define  AUDIT_FILETYPE 160 
#define  AUDIT_FILTERKEY 159 
 int AUDIT_FILTER_EXCLUDE ; 
#define  AUDIT_FILTER_FS 158 
 int AUDIT_FILTER_USER ; 
#define  AUDIT_FSGID 157 
#define  AUDIT_FSTYPE 156 
#define  AUDIT_FSUID 155 
#define  AUDIT_GID 154 
#define  AUDIT_INODE 153 
#define  AUDIT_LOGINUID 152 
#define  AUDIT_LOGINUID_SET 151 
 int AUDIT_MAX_FIELD_COMPARE ; 
#define  AUDIT_MSGTYPE 150 
#define  AUDIT_OBJ_GID 149 
#define  AUDIT_OBJ_LEV_HIGH 148 
#define  AUDIT_OBJ_LEV_LOW 147 
#define  AUDIT_OBJ_ROLE 146 
#define  AUDIT_OBJ_TYPE 145 
#define  AUDIT_OBJ_UID 144 
#define  AUDIT_OBJ_USER 143 
#define  AUDIT_PERM 142 
#define  AUDIT_PERS 141 
#define  AUDIT_PID 140 
#define  AUDIT_PPID 139 
#define  AUDIT_SESSIONID 138 
#define  AUDIT_SGID 137 
#define  AUDIT_SUBJ_CLR 136 
#define  AUDIT_SUBJ_ROLE 135 
#define  AUDIT_SUBJ_SEN 134 
#define  AUDIT_SUBJ_TYPE 133 
#define  AUDIT_SUBJ_USER 132 
#define  AUDIT_SUCCESS 131 
#define  AUDIT_SUID 130 
#define  AUDIT_UID 129 
#define  AUDIT_WATCH 128 
 int /*<<< orphan*/  Audit_bitmask ; 
 int /*<<< orphan*/  Audit_bittest ; 
 int /*<<< orphan*/  Audit_equal ; 
 int /*<<< orphan*/  Audit_not_equal ; 
 int EINVAL ; 
 int S_IFMT ; 

__attribute__((used)) static int audit_field_valid(struct audit_entry *entry, struct audit_field *f)
{
	switch(f->type) {
	case AUDIT_MSGTYPE:
		if (entry->rule.listnr != AUDIT_FILTER_EXCLUDE &&
		    entry->rule.listnr != AUDIT_FILTER_USER)
			return -EINVAL;
		break;
	case AUDIT_FSTYPE:
		if (entry->rule.listnr != AUDIT_FILTER_FS)
			return -EINVAL;
		break;
	}

	switch(entry->rule.listnr) {
	case AUDIT_FILTER_FS:
		switch(f->type) {
		case AUDIT_FSTYPE:
		case AUDIT_FILTERKEY:
			break;
		default:
			return -EINVAL;
		}
	}

	switch(f->type) {
	default:
		return -EINVAL;
	case AUDIT_UID:
	case AUDIT_EUID:
	case AUDIT_SUID:
	case AUDIT_FSUID:
	case AUDIT_LOGINUID:
	case AUDIT_OBJ_UID:
	case AUDIT_GID:
	case AUDIT_EGID:
	case AUDIT_SGID:
	case AUDIT_FSGID:
	case AUDIT_OBJ_GID:
	case AUDIT_PID:
	case AUDIT_PERS:
	case AUDIT_MSGTYPE:
	case AUDIT_PPID:
	case AUDIT_DEVMAJOR:
	case AUDIT_DEVMINOR:
	case AUDIT_EXIT:
	case AUDIT_SUCCESS:
	case AUDIT_INODE:
	case AUDIT_SESSIONID:
		/* bit ops are only useful on syscall args */
		if (f->op == Audit_bitmask || f->op == Audit_bittest)
			return -EINVAL;
		break;
	case AUDIT_ARG0:
	case AUDIT_ARG1:
	case AUDIT_ARG2:
	case AUDIT_ARG3:
	case AUDIT_SUBJ_USER:
	case AUDIT_SUBJ_ROLE:
	case AUDIT_SUBJ_TYPE:
	case AUDIT_SUBJ_SEN:
	case AUDIT_SUBJ_CLR:
	case AUDIT_OBJ_USER:
	case AUDIT_OBJ_ROLE:
	case AUDIT_OBJ_TYPE:
	case AUDIT_OBJ_LEV_LOW:
	case AUDIT_OBJ_LEV_HIGH:
	case AUDIT_WATCH:
	case AUDIT_DIR:
	case AUDIT_FILTERKEY:
		break;
	case AUDIT_LOGINUID_SET:
		if ((f->val != 0) && (f->val != 1))
			return -EINVAL;
	/* FALL THROUGH */
	case AUDIT_ARCH:
	case AUDIT_FSTYPE:
		if (f->op != Audit_not_equal && f->op != Audit_equal)
			return -EINVAL;
		break;
	case AUDIT_PERM:
		if (f->val & ~15)
			return -EINVAL;
		break;
	case AUDIT_FILETYPE:
		if (f->val & ~S_IFMT)
			return -EINVAL;
		break;
	case AUDIT_FIELD_COMPARE:
		if (f->val > AUDIT_MAX_FIELD_COMPARE)
			return -EINVAL;
		break;
	case AUDIT_EXE:
		if (f->op != Audit_not_equal && f->op != Audit_equal)
			return -EINVAL;
		break;
	}
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
          int _len_entry0 = 1;
          struct audit_entry * entry = (struct audit_entry *) malloc(_len_entry0*sizeof(struct audit_entry));
          for(int _i0 = 0; _i0 < _len_entry0; _i0++) {
            entry[_i0].rule.listnr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_f0 = 1;
          struct audit_field * f = (struct audit_field *) malloc(_len_f0*sizeof(struct audit_field));
          for(int _i0 = 0; _i0 < _len_f0; _i0++) {
            f[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
        f[_i0].val = ((-2 * (next_i()%2)) + 1) * next_i();
        f[_i0].op = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = audit_field_valid(entry,f);
          printf("%d\n", benchRet); 
          free(entry);
          free(f);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
