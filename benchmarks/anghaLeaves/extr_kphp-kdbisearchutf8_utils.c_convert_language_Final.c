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

/* Variables and functions */

unsigned int convert_language (unsigned int x) {
  switch (x) {
  case 113://q->й
    return 1081;
  case 119://w->ц
    return 1094;
  case 101://e->у
    return 1091;
  case 114://r->к
    return 1082;
  case 116://t->е
    return 1077;
  case 121://y->н
    return 1085;
  case 117://u->г
    return 1075;
  case 105://i->ш
    return 1096;
  case 111://o->щ
    return 1097;
  case 112://p->з
    return 1079;
  case 91://[->х
    return 1093;
  case 93://]->ъ
    return 1098;
  case 97://a->ф
    return 1092;
  case 115://s->ы
    return 1099;
  case 100://d->в
    return 1074;
  case 102://f->а
    return 1072;
  case 103://g->п
    return 1087;
  case 104://h->р
    return 1088;
  case 106://j->о
    return 1086;
  case 107://k->л
    return 1083;
  case 108://l->д
    return 1076;
  case 59://;->ж
    return 1078;
  case 39://'->э
    return 1101;
  case 122://z->я
    return 1103;
  case 120://x->ч
    return 1095;
  case 99://c->с
    return 1089;
  case 118://v->м
    return 1084;
  case 98://b->и
    return 1080;
  case 110://n->т
    return 1090;
  case 109://m->ь
    return 1100;
  case 44://,->б
    return 1073;
  case 46://.->ю
    return 1102;
  case 96://`->е
    return 1077;
  case 81://Q->Й
    return 1049;
  case 87://W->Ц
    return 1062;
  case 69://E->У
    return 1059;
  case 82://R->К
    return 1050;
  case 84://T->Е
    return 1045;
  case 89://Y->Н
    return 1053;
  case 85://U->Г
    return 1043;
  case 73://I->Ш
    return 1064;
  case 79://O->Щ
    return 1065;
  case 80://P->З
    return 1047;
  case 123://{->Х
    return 1061;
  case 125://}->Ъ
    return 1066;
  case 65://A->Ф
    return 1060;
  case 83://S->Ы
    return 1067;
  case 68://D->В
    return 1042;
  case 70://F->А
    return 1040;
  case 71://G->П
    return 1055;
  case 72://H->Р
    return 1056;
  case 74://J->О
    return 1054;
  case 75://K->Л
    return 1051;
  case 76://L->Д
    return 1044;
  case 58://:->Ж
    return 1046;
  case 34://"->Э
    return 1069;
  case 90://Z->Я
    return 1071;
  case 88://X->Ч
    return 1063;
  case 67://C->С
    return 1057;
  case 86://V->М
    return 1052;
  case 66://B->И
    return 1048;
  case 78://N->Т
    return 1058;
  case 77://M->Ь
    return 1068;
  case 60://<->Б
    return 1041;
  case 62://>->Ю
    return 1070;
  case 126://~->Е
    return 1045;
  case 1081://й->q
    return 113;
  case 1094://ц->w
    return 119;
  case 1091://у->e
    return 101;
  case 1082://к->r
    return 114;
  case 1077://е->t
    return 116;
  case 1085://н->y
    return 121;
  case 1075://г->u
    return 117;
  case 1096://ш->i
    return 105;
  case 1097://щ->o
    return 111;
  case 1079://з->p
    return 112;
  case 1093://х->[
    return 91;
  case 1098://ъ->]
    return 93;
  case 1092://ф->a
    return 97;
  case 1099://ы->s
    return 115;
  case 1074://в->d
    return 100;
  case 1072://а->f
    return 102;
  case 1087://п->g
    return 103;
  case 1088://р->h
    return 104;
  case 1086://о->j
    return 106;
  case 1083://л->k
    return 107;
  case 1076://д->l
    return 108;
  case 1078://ж->;
    return 59;
  case 1101://э->'
    return 39;
  case 1103://я->z
    return 122;
  case 1095://ч->x
    return 120;
  case 1089://с->c
    return 99;
  case 1084://м->v
    return 118;
  case 1080://и->b
    return 98;
  case 1090://т->n
    return 110;
  case 1100://ь->m
    return 109;
  case 1073://б->,
    return 44;
  case 1102://ю->.
    return 46;
  case 1105://ё->`
    return 96;
  case 1049://Й->Q
    return 81;
  case 1062://Ц->W
    return 87;
  case 1059://У->E
    return 69;
  case 1050://К->R
    return 82;
  case 1045://Е->T
    return 84;
  case 1053://Н->Y
    return 89;
  case 1043://Г->U
    return 85;
  case 1064://Ш->I
    return 73;
  case 1065://Щ->O
    return 79;
  case 1047://З->P
    return 80;
  case 1061://Х->{
    return 123;
  case 1066://Ъ->}
    return 125;
  case 1060://Ф->A
    return 65;
  case 1067://Ы->S
    return 83;
  case 1042://В->D
    return 68;
  case 1040://А->F
    return 70;
  case 1055://П->G
    return 71;
  case 1056://Р->H
    return 72;
  case 1054://О->J
    return 74;
  case 1051://Л->K
    return 75;
  case 1044://Д->L
    return 76;
  case 1046://Ж->:
    return 58;
  case 1069://Э->"
    return 34;
  case 1071://Я->Z
    return 90;
  case 1063://Ч->X
    return 88;
  case 1057://С->C
    return 67;
  case 1052://М->V
    return 86;
  case 1048://И->B
    return 66;
  case 1058://Т->N
    return 78;
  case 1068://Ь->M
    return 77;
  case 1041://Б-><
    return 60;
  case 1070://Ю->>
    return 62;
  case 1025://Ё->~
    return 126;
  case 48://0->0
    return 48;
  case 49://1->1
    return 49;
  case 50://2->2
    return 50;
  case 51://3->3
    return 51;
  case 52://4->4
    return 52;
  case 53://5->5
    return 53;
  case 54://6->6
    return 54;
  case 55://7->7
    return 55;
  case 56://8->8
    return 56;
  case 57://9->9
    return 57;
  default:
    if (x >= 128) {
      return x;
    }
    return 32;
  }
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
          unsigned int x = 100;
          unsigned int benchRet = convert_language(x);
          printf("%u\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int x = 255;
          unsigned int benchRet = convert_language(x);
          printf("%u\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int x = 10;
          unsigned int benchRet = convert_language(x);
          printf("%u\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
