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
struct lpfc_hba {int dummy; } ;
typedef  int /*<<< orphan*/  MAILBOX_t ;

/* Variables and functions */

void
lpfc_idiag_mbxacc_dump_issue_mbox(struct lpfc_hba *phba, MAILBOX_t *pmbox)
{
#ifdef CONFIG_SCSI_LPFC_DEBUG_FS
	uint32_t *mbx_dump_map, *mbx_dump_cnt, *mbx_word_cnt, *mbx_mbox_cmd;
	char line_buf[LPFC_MBX_ACC_LBUF_SZ];
	int len = 0;
	uint32_t *pword;
	uint8_t *pbyte;
	uint32_t i, j;

	if (idiag.cmd.opcode != LPFC_IDIAG_CMD_MBXACC_DP)
		return;

	mbx_mbox_cmd = &idiag.cmd.data[IDIAG_MBXACC_MBCMD_INDX];
	mbx_dump_map = &idiag.cmd.data[IDIAG_MBXACC_DPMAP_INDX];
	mbx_dump_cnt = &idiag.cmd.data[IDIAG_MBXACC_DPCNT_INDX];
	mbx_word_cnt = &idiag.cmd.data[IDIAG_MBXACC_WDCNT_INDX];

	if (!(*mbx_dump_map & LPFC_MBX_DMP_MBX_ALL) ||
	    (*mbx_dump_cnt == 0) ||
	    (*mbx_word_cnt == 0))
		return;

	if ((*mbx_mbox_cmd != LPFC_MBX_ALL_CMD) &&
	    (*mbx_mbox_cmd != pmbox->mbxCommand))
		return;

	/* dump buffer content */
	if (*mbx_dump_map & LPFC_MBX_DMP_MBX_WORD) {
		pr_err("Mailbox command:0x%x dump by word:\n",
		       pmbox->mbxCommand);
		pword = (uint32_t *)pmbox;
		for (i = 0; i < *mbx_word_cnt; i++) {
			if (!(i % 8)) {
				if (i != 0)
					pr_err("%s\n", line_buf);
				len = 0;
				memset(line_buf, 0, LPFC_MBX_ACC_LBUF_SZ);
				len += snprintf(line_buf+len,
						LPFC_MBX_ACC_LBUF_SZ-len,
						"%03d: ", i);
			}
			len += snprintf(line_buf+len, LPFC_MBX_ACC_LBUF_SZ-len,
					"%08x ",
					((uint32_t)*pword) & 0xffffffff);
			pword++;
		}
		if ((i - 1) % 8)
			pr_err("%s\n", line_buf);
		pr_err("\n");
	}
	if (*mbx_dump_map & LPFC_MBX_DMP_MBX_BYTE) {
		pr_err("Mailbox command:0x%x dump by byte:\n",
		       pmbox->mbxCommand);
		pbyte = (uint8_t *)pmbox;
		for (i = 0; i < *mbx_word_cnt; i++) {
			if (!(i % 8)) {
				if (i != 0)
					pr_err("%s\n", line_buf);
				len = 0;
				memset(line_buf, 0, LPFC_MBX_ACC_LBUF_SZ);
				len += snprintf(line_buf+len,
						LPFC_MBX_ACC_LBUF_SZ-len,
						"%03d: ", i);
			}
			for (j = 0; j < 4; j++) {
				len += snprintf(line_buf+len,
						LPFC_MBX_ACC_LBUF_SZ-len,
						"%02x",
						((uint8_t)*pbyte) & 0xff);
				pbyte++;
			}
			len += snprintf(line_buf+len,
					LPFC_MBX_ACC_LBUF_SZ-len, " ");
		}
		if ((i - 1) % 8)
			pr_err("%s\n", line_buf);
		pr_err("\n");
	}
	(*mbx_dump_cnt)--;

	/* Clean out command structure on reaching dump count */
	if (*mbx_dump_cnt == 0)
		memset(&idiag, 0, sizeof(idiag));
	return;
#endif
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
          int _len_phba0 = 1;
          struct lpfc_hba * phba = (struct lpfc_hba *) malloc(_len_phba0*sizeof(struct lpfc_hba));
          for(int _i0 = 0; _i0 < _len_phba0; _i0++) {
            phba[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pmbox0 = 1;
          int * pmbox = (int *) malloc(_len_pmbox0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pmbox0; _i0++) {
            pmbox[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          lpfc_idiag_mbxacc_dump_issue_mbox(phba,pmbox);
          free(phba);
          free(pmbox);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
