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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
typedef  int combining_type ;
typedef  int char_type ;

/* Variables and functions */

combining_type mark_for_codepoint(char_type c) {
	switch(c) { // {{{
		case 0: return 0;
		case 768: case 769: case 770: case 771: case 772: case 773: case 774: case 775: case 776: case 777: case 778: case 779: case 780: case 781: case 782: case 783: case 784: case 785: case 786: case 787: case 788: case 789: case 790: case 791: case 792: case 793: case 794: case 795: case 796: case 797: case 798: case 799: case 800: case 801: case 802: case 803: case 804: case 805: case 806: case 807: case 808: case 809: case 810: case 811: case 812: case 813: case 814: case 815: case 816: case 817: case 818: case 819: case 820: case 821: case 822: case 823: case 824: case 825: case 826: case 827: case 828: case 829: case 830: case 831: case 832: case 833: case 834: case 835: case 836: case 837: case 838: case 839: case 840: case 841: case 842: case 843: case 844: case 845: case 846: case 847: case 848: case 849: case 850: case 851: case 852: case 853: case 854: case 855: case 856: case 857: case 858: case 859: case 860: case 861: case 862: case 863: case 864: case 865: case 866: case 867: case 868: case 869: case 870: case 871: case 872: case 873: case 874: case 875: case 876: case 877: case 878: case 879: return 1 + c - 768;
		case 1155: case 1156: case 1157: case 1158: case 1159: case 1160: case 1161: return 113 + c - 1155;
		case 1425: case 1426: case 1427: case 1428: case 1429: case 1430: case 1431: case 1432: case 1433: case 1434: case 1435: case 1436: case 1437: case 1438: case 1439: case 1440: case 1441: case 1442: case 1443: case 1444: case 1445: case 1446: case 1447: case 1448: case 1449: case 1450: case 1451: case 1452: case 1453: case 1454: case 1455: case 1456: case 1457: case 1458: case 1459: case 1460: case 1461: case 1462: case 1463: case 1464: case 1465: case 1466: case 1467: case 1468: case 1469: return 120 + c - 1425;
		case 1471: return 165;
		case 1473: case 1474: return 166 + c - 1473;
		case 1476: case 1477: return 168 + c - 1476;
		case 1479: return 170;
		case 1552: case 1553: case 1554: case 1555: case 1556: case 1557: case 1558: case 1559: case 1560: case 1561: case 1562: return 171 + c - 1552;
		case 1611: case 1612: case 1613: case 1614: case 1615: case 1616: case 1617: case 1618: case 1619: case 1620: case 1621: case 1622: case 1623: case 1624: case 1625: case 1626: case 1627: case 1628: case 1629: case 1630: case 1631: return 182 + c - 1611;
		case 1648: return 203;
		case 1750: case 1751: case 1752: case 1753: case 1754: case 1755: case 1756: return 204 + c - 1750;
		case 1759: case 1760: case 1761: case 1762: case 1763: case 1764: return 211 + c - 1759;
		case 1767: case 1768: return 217 + c - 1767;
		case 1770: case 1771: case 1772: case 1773: return 219 + c - 1770;
		case 1809: return 223;
		case 1840: case 1841: case 1842: case 1843: case 1844: case 1845: case 1846: case 1847: case 1848: case 1849: case 1850: case 1851: case 1852: case 1853: case 1854: case 1855: case 1856: case 1857: case 1858: case 1859: case 1860: case 1861: case 1862: case 1863: case 1864: case 1865: case 1866: return 224 + c - 1840;
		case 1958: case 1959: case 1960: case 1961: case 1962: case 1963: case 1964: case 1965: case 1966: case 1967: case 1968: return 251 + c - 1958;
		case 2027: case 2028: case 2029: case 2030: case 2031: case 2032: case 2033: case 2034: case 2035: return 262 + c - 2027;
		case 2045: return 271;
		case 2070: case 2071: case 2072: case 2073: return 272 + c - 2070;
		case 2075: case 2076: case 2077: case 2078: case 2079: case 2080: case 2081: case 2082: case 2083: return 276 + c - 2075;
		case 2085: case 2086: case 2087: return 285 + c - 2085;
		case 2089: case 2090: case 2091: case 2092: case 2093: return 288 + c - 2089;
		case 2137: case 2138: case 2139: return 293 + c - 2137;
		case 2259: case 2260: case 2261: case 2262: case 2263: case 2264: case 2265: case 2266: case 2267: case 2268: case 2269: case 2270: case 2271: case 2272: case 2273: return 296 + c - 2259;
		case 2275: case 2276: case 2277: case 2278: case 2279: case 2280: case 2281: case 2282: case 2283: case 2284: case 2285: case 2286: case 2287: case 2288: case 2289: case 2290: case 2291: case 2292: case 2293: case 2294: case 2295: case 2296: case 2297: case 2298: case 2299: case 2300: case 2301: case 2302: case 2303: case 2304: case 2305: case 2306: case 2307: return 311 + c - 2275;
		case 2362: case 2363: case 2364: return 344 + c - 2362;
		case 2366: case 2367: case 2368: case 2369: case 2370: case 2371: case 2372: case 2373: case 2374: case 2375: case 2376: case 2377: case 2378: case 2379: case 2380: case 2381: case 2382: case 2383: return 347 + c - 2366;
		case 2385: case 2386: case 2387: case 2388: case 2389: case 2390: case 2391: return 365 + c - 2385;
		case 2402: case 2403: return 372 + c - 2402;
		case 2433: case 2434: case 2435: return 374 + c - 2433;
		case 2492: return 377;
		case 2494: case 2495: case 2496: case 2497: case 2498: case 2499: case 2500: return 378 + c - 2494;
		case 2503: case 2504: return 385 + c - 2503;
		case 2507: case 2508: case 2509: return 387 + c - 2507;
		case 2519: return 390;
		case 2530: case 2531: return 391 + c - 2530;
		case 2558: return 393;
		case 2561: case 2562: case 2563: return 394 + c - 2561;
		case 2620: return 397;
		case 2622: case 2623: case 2624: case 2625: case 2626: return 398 + c - 2622;
		case 2631: case 2632: return 403 + c - 2631;
		case 2635: case 2636: case 2637: return 405 + c - 2635;
		case 2641: return 408;
		case 2672: case 2673: return 409 + c - 2672;
		case 2677: return 411;
		case 2689: case 2690: case 2691: return 412 + c - 2689;
		case 2748: return 415;
		case 2750: case 2751: case 2752: case 2753: case 2754: case 2755: case 2756: case 2757: return 416 + c - 2750;
		case 2759: case 2760: case 2761: return 424 + c - 2759;
		case 2763: case 2764: case 2765: return 427 + c - 2763;
		case 2786: case 2787: return 430 + c - 2786;
		case 2810: case 2811: case 2812: case 2813: case 2814: case 2815: return 432 + c - 2810;
		case 2817: case 2818: case 2819: return 438 + c - 2817;
		case 2876: return 441;
		case 2878: case 2879: case 2880: case 2881: case 2882: case 2883: case 2884: return 442 + c - 2878;
		case 2887: case 2888: return 449 + c - 2887;
		case 2891: case 2892: case 2893: return 451 + c - 2891;
		case 2902: case 2903: return 454 + c - 2902;
		case 2914: case 2915: return 456 + c - 2914;
		case 2946: return 458;
		case 3006: case 3007: case 3008: case 3009: case 3010: return 459 + c - 3006;
		case 3014: case 3015: case 3016: return 464 + c - 3014;
		case 3018: case 3019: case 3020: case 3021: return 467 + c - 3018;
		case 3031: return 471;
		case 3072: case 3073: case 3074: case 3075: case 3076: return 472 + c - 3072;
		case 3134: case 3135: case 3136: case 3137: case 3138: case 3139: case 3140: return 477 + c - 3134;
		case 3142: case 3143: case 3144: return 484 + c - 3142;
		case 3146: case 3147: case 3148: case 3149: return 487 + c - 3146;
		case 3157: case 3158: return 491 + c - 3157;
		case 3170: case 3171: return 493 + c - 3170;
		case 3201: case 3202: case 3203: return 495 + c - 3201;
		case 3260: return 498;
		case 3262: case 3263: case 3264: case 3265: case 3266: case 3267: case 3268: return 499 + c - 3262;
		case 3270: case 3271: case 3272: return 506 + c - 3270;
		case 3274: case 3275: case 3276: case 3277: return 509 + c - 3274;
		case 3285: case 3286: return 513 + c - 3285;
		case 3298: case 3299: return 515 + c - 3298;
		case 3328: case 3329: case 3330: case 3331: return 517 + c - 3328;
		case 3387: case 3388: return 521 + c - 3387;
		case 3390: case 3391: case 3392: case 3393: case 3394: case 3395: case 3396: return 523 + c - 3390;
		case 3398: case 3399: case 3400: return 530 + c - 3398;
		case 3402: case 3403: case 3404: case 3405: return 533 + c - 3402;
		case 3415: return 537;
		case 3426: case 3427: return 538 + c - 3426;
		case 3458: case 3459: return 540 + c - 3458;
		case 3530: return 542;
		case 3535: case 3536: case 3537: case 3538: case 3539: case 3540: return 543 + c - 3535;
		case 3542: return 549;
		case 3544: case 3545: case 3546: case 3547: case 3548: case 3549: case 3550: case 3551: return 550 + c - 3544;
		case 3570: case 3571: return 558 + c - 3570;
		case 3633: return 560;
		case 3636: case 3637: case 3638: case 3639: case 3640: case 3641: case 3642: return 561 + c - 3636;
		case 3655: case 3656: case 3657: case 3658: case 3659: case 3660: case 3661: case 3662: return 568 + c - 3655;
		case 3761: return 576;
		case 3764: case 3765: case 3766: case 3767: case 3768: case 3769: case 3770: case 3771: case 3772: return 577 + c - 3764;
		case 3784: case 3785: case 3786: case 3787: case 3788: case 3789: return 586 + c - 3784;
		case 3864: case 3865: return 592 + c - 3864;
		case 3893: return 594;
		case 3895: return 595;
		case 3897: return 596;
		case 3902: case 3903: return 597 + c - 3902;
		case 3953: case 3954: case 3955: case 3956: case 3957: case 3958: case 3959: case 3960: case 3961: case 3962: case 3963: case 3964: case 3965: case 3966: case 3967: case 3968: case 3969: case 3970: case 3971: case 3972: return 599 + c - 3953;
		case 3974: case 3975: return 619 + c - 3974;
		case 3981: case 3982: case 3983: case 3984: case 3985: case 3986: case 3987: case 3988: case 3989: case 3990: case 3991: return 621 + c - 3981;
		case 3993: case 3994: case 3995: case 3996: case 3997: case 3998: case 3999: case 4000: case 4001: case 4002: case 4003: case 4004: case 4005: case 4006: case 4007: case 4008: case 4009: case 4010: case 4011: case 4012: case 4013: case 4014: case 4015: case 4016: case 4017: case 4018: case 4019: case 4020: case 4021: case 4022: case 4023: case 4024: case 4025: case 4026: case 4027: case 4028: return 632 + c - 3993;
		case 4038: return 668;
		case 4139: case 4140: case 4141: case 4142: case 4143: case 4144: case 4145: case 4146: case 4147: case 4148: case 4149: case 4150: case 4151: case 4152: case 4153: case 4154: case 4155: case 4156: case 4157: case 4158: return 669 + c - 4139;
		case 4182: case 4183: case 4184: case 4185: return 689 + c - 4182;
		case 4190: case 4191: case 4192: return 693 + c - 4190;
		case 4194: case 4195: case 4196: return 696 + c - 4194;
		case 4199: case 4200: case 4201: case 4202: case 4203: case 4204: case 4205: return 699 + c - 4199;
		case 4209: case 4210: case 4211: case 4212: return 706 + c - 4209;
		case 4226: case 4227: case 4228: case 4229: case 4230: case 4231: case 4232: case 4233: case 4234: case 4235: case 4236: case 4237: return 710 + c - 4226;
		case 4239: return 722;
		case 4250: case 4251: case 4252: case 4253: return 723 + c - 4250;
		case 4957: case 4958: case 4959: return 727 + c - 4957;
		case 5906: case 5907: case 5908: return 730 + c - 5906;
		case 5938: case 5939: case 5940: return 733 + c - 5938;
		case 5970: case 5971: return 736 + c - 5970;
		case 6002: case 6003: return 738 + c - 6002;
		case 6068: case 6069: case 6070: case 6071: case 6072: case 6073: case 6074: case 6075: case 6076: case 6077: case 6078: case 6079: case 6080: case 6081: case 6082: case 6083: case 6084: case 6085: case 6086: case 6087: case 6088: case 6089: case 6090: case 6091: case 6092: case 6093: case 6094: case 6095: case 6096: case 6097: case 6098: case 6099: return 740 + c - 6068;
		case 6109: return 772;
		case 6155: case 6156: case 6157: return 773 + c - 6155;
		case 6277: case 6278: return 776 + c - 6277;
		case 6313: return 778;
		case 6432: case 6433: case 6434: case 6435: case 6436: case 6437: case 6438: case 6439: case 6440: case 6441: case 6442: case 6443: return 779 + c - 6432;
		case 6448: case 6449: case 6450: case 6451: case 6452: case 6453: case 6454: case 6455: case 6456: case 6457: case 6458: case 6459: return 791 + c - 6448;
		case 6679: case 6680: case 6681: case 6682: case 6683: return 803 + c - 6679;
		case 6741: case 6742: case 6743: case 6744: case 6745: case 6746: case 6747: case 6748: case 6749: case 6750: return 808 + c - 6741;
		case 6752: case 6753: case 6754: case 6755: case 6756: case 6757: case 6758: case 6759: case 6760: case 6761: case 6762: case 6763: case 6764: case 6765: case 6766: case 6767: case 6768: case 6769: case 6770: case 6771: case 6772: case 6773: case 6774: case 6775: case 6776: case 6777: case 6778: case 6779: case 6780: return 818 + c - 6752;
		case 6783: return 847;
		case 6832: case 6833: case 6834: case 6835: case 6836: case 6837: case 6838: case 6839: case 6840: case 6841: case 6842: case 6843: case 6844: case 6845: case 6846: return 848 + c - 6832;
		case 6912: case 6913: case 6914: case 6915: case 6916: return 863 + c - 6912;
		case 6964: case 6965: case 6966: case 6967: case 6968: case 6969: case 6970: case 6971: case 6972: case 6973: case 6974: case 6975: case 6976: case 6977: case 6978: case 6979: case 6980: return 868 + c - 6964;
		case 7019: case 7020: case 7021: case 7022: case 7023: case 7024: case 7025: case 7026: case 7027: return 885 + c - 7019;
		case 7040: case 7041: case 7042: return 894 + c - 7040;
		case 7073: case 7074: case 7075: case 7076: case 7077: case 7078: case 7079: case 7080: case 7081: case 7082: case 7083: case 7084: case 7085: return 897 + c - 7073;
		case 7142: case 7143: case 7144: case 7145: case 7146: case 7147: case 7148: case 7149: case 7150: case 7151: case 7152: case 7153: case 7154: case 7155: return 910 + c - 7142;
		case 7204: case 7205: case 7206: case 7207: case 7208: case 7209: case 7210: case 7211: case 7212: case 7213: case 7214: case 7215: case 7216: case 7217: case 7218: case 7219: case 7220: case 7221: case 7222: case 7223: return 924 + c - 7204;
		case 7376: case 7377: case 7378: return 944 + c - 7376;
		case 7380: case 7381: case 7382: case 7383: case 7384: case 7385: case 7386: case 7387: case 7388: case 7389: case 7390: case 7391: case 7392: case 7393: case 7394: case 7395: case 7396: case 7397: case 7398: case 7399: case 7400: return 947 + c - 7380;
		case 7405: return 968;
		case 7412: return 969;
		case 7415: case 7416: case 7417: return 970 + c - 7415;
		case 7616: case 7617: case 7618: case 7619: case 7620: case 7621: case 7622: case 7623: case 7624: case 7625: case 7626: case 7627: case 7628: case 7629: case 7630: case 7631: case 7632: case 7633: case 7634: case 7635: case 7636: case 7637: case 7638: case 7639: case 7640: case 7641: case 7642: case 7643: case 7644: case 7645: case 7646: case 7647: case 7648: case 7649: case 7650: case 7651: case 7652: case 7653: case 7654: case 7655: case 7656: case 7657: case 7658: case 7659: case 7660: case 7661: case 7662: case 7663: case 7664: case 7665: case 7666: case 7667: case 7668: case 7669: case 7670: case 7671: case 7672: case 7673: return 973 + c - 7616;
		case 7675: case 7676: case 7677: case 7678: case 7679: return 1031 + c - 7675;
		case 8205: return 1036;
		case 8400: case 8401: case 8402: case 8403: case 8404: case 8405: case 8406: case 8407: case 8408: case 8409: case 8410: case 8411: case 8412: case 8413: case 8414: case 8415: case 8416: case 8417: case 8418: case 8419: case 8420: case 8421: case 8422: case 8423: case 8424: case 8425: case 8426: case 8427: case 8428: case 8429: case 8430: case 8431: case 8432: return 1037 + c - 8400;
		case 11503: case 11504: case 11505: return 1070 + c - 11503;
		case 11647: return 1073;
		case 11744: case 11745: case 11746: case 11747: case 11748: case 11749: case 11750: case 11751: case 11752: case 11753: case 11754: case 11755: case 11756: case 11757: case 11758: case 11759: case 11760: case 11761: case 11762: case 11763: case 11764: case 11765: case 11766: case 11767: case 11768: case 11769: case 11770: case 11771: case 11772: case 11773: case 11774: case 11775: return 1074 + c - 11744;
		case 12330: case 12331: case 12332: case 12333: case 12334: case 12335: return 1106 + c - 12330;
		case 12441: case 12442: return 1112 + c - 12441;
		case 42607: case 42608: case 42609: case 42610: return 1114 + c - 42607;
		case 42612: case 42613: case 42614: case 42615: case 42616: case 42617: case 42618: case 42619: case 42620: case 42621: return 1118 + c - 42612;
		case 42654: case 42655: return 1128 + c - 42654;
		case 42736: case 42737: return 1130 + c - 42736;
		case 43010: return 1132;
		case 43014: return 1133;
		case 43019: return 1134;
		case 43043: case 43044: case 43045: case 43046: case 43047: return 1135 + c - 43043;
		case 43136: case 43137: return 1140 + c - 43136;
		case 43188: case 43189: case 43190: case 43191: case 43192: case 43193: case 43194: case 43195: case 43196: case 43197: case 43198: case 43199: case 43200: case 43201: case 43202: case 43203: case 43204: case 43205: return 1142 + c - 43188;
		case 43232: case 43233: case 43234: case 43235: case 43236: case 43237: case 43238: case 43239: case 43240: case 43241: case 43242: case 43243: case 43244: case 43245: case 43246: case 43247: case 43248: case 43249: return 1160 + c - 43232;
		case 43263: return 1178;
		case 43302: case 43303: case 43304: case 43305: case 43306: case 43307: case 43308: case 43309: return 1179 + c - 43302;
		case 43335: case 43336: case 43337: case 43338: case 43339: case 43340: case 43341: case 43342: case 43343: case 43344: case 43345: case 43346: case 43347: return 1187 + c - 43335;
		case 43392: case 43393: case 43394: case 43395: return 1200 + c - 43392;
		case 43443: case 43444: case 43445: case 43446: case 43447: case 43448: case 43449: case 43450: case 43451: case 43452: case 43453: case 43454: case 43455: case 43456: return 1204 + c - 43443;
		case 43493: return 1218;
		case 43561: case 43562: case 43563: case 43564: case 43565: case 43566: case 43567: case 43568: case 43569: case 43570: case 43571: case 43572: case 43573: case 43574: return 1219 + c - 43561;
		case 43587: return 1233;
		case 43596: case 43597: return 1234 + c - 43596;
		case 43643: case 43644: case 43645: return 1236 + c - 43643;
		case 43696: return 1239;
		case 43698: case 43699: case 43700: return 1240 + c - 43698;
		case 43703: case 43704: return 1243 + c - 43703;
		case 43710: case 43711: return 1245 + c - 43710;
		case 43713: return 1247;
		case 43755: case 43756: case 43757: case 43758: case 43759: return 1248 + c - 43755;
		case 43765: case 43766: return 1253 + c - 43765;
		case 44003: case 44004: case 44005: case 44006: case 44007: case 44008: case 44009: case 44010: return 1255 + c - 44003;
		case 44012: case 44013: return 1263 + c - 44012;
		case 64286: return 1265;
		case 65024: case 65025: case 65026: case 65027: case 65028: case 65029: case 65030: case 65031: case 65032: case 65033: case 65034: case 65035: case 65036: case 65037: case 65038: case 65039: return 1266 + c - 65024;
		case 65056: case 65057: case 65058: case 65059: case 65060: case 65061: case 65062: case 65063: case 65064: case 65065: case 65066: case 65067: case 65068: case 65069: case 65070: case 65071: return 1282 + c - 65056;
		case 66045: return 1298;
		case 66272: return 1299;
		case 66422: case 66423: case 66424: case 66425: case 66426: return 1300 + c - 66422;
		case 68097: case 68098: case 68099: return 1305 + c - 68097;
		case 68101: case 68102: return 1308 + c - 68101;
		case 68108: case 68109: case 68110: case 68111: return 1310 + c - 68108;
		case 68152: case 68153: case 68154: return 1314 + c - 68152;
		case 68159: return 1317;
		case 68325: case 68326: return 1318 + c - 68325;
		case 68900: case 68901: case 68902: case 68903: return 1320 + c - 68900;
		case 69446: case 69447: case 69448: case 69449: case 69450: case 69451: case 69452: case 69453: case 69454: case 69455: case 69456: return 1324 + c - 69446;
		case 69632: case 69633: case 69634: return 1335 + c - 69632;
		case 69688: case 69689: case 69690: case 69691: case 69692: case 69693: case 69694: case 69695: case 69696: case 69697: case 69698: case 69699: case 69700: case 69701: case 69702: return 1338 + c - 69688;
		case 69759: case 69760: case 69761: case 69762: return 1353 + c - 69759;
		case 69808: case 69809: case 69810: case 69811: case 69812: case 69813: case 69814: case 69815: case 69816: case 69817: case 69818: return 1357 + c - 69808;
		case 69888: case 69889: case 69890: return 1368 + c - 69888;
		case 69927: case 69928: case 69929: case 69930: case 69931: case 69932: case 69933: case 69934: case 69935: case 69936: case 69937: case 69938: case 69939: case 69940: return 1371 + c - 69927;
		case 69957: case 69958: return 1385 + c - 69957;
		case 70003: return 1387;
		case 70016: case 70017: case 70018: return 1388 + c - 70016;
		case 70067: case 70068: case 70069: case 70070: case 70071: case 70072: case 70073: case 70074: case 70075: case 70076: case 70077: case 70078: case 70079: case 70080: return 1391 + c - 70067;
		case 70089: case 70090: case 70091: case 70092: return 1405 + c - 70089;
		case 70188: case 70189: case 70190: case 70191: case 70192: case 70193: case 70194: case 70195: case 70196: case 70197: case 70198: case 70199: return 1409 + c - 70188;
		case 70206: return 1421;
		case 70367: case 70368: case 70369: case 70370: case 70371: case 70372: case 70373: case 70374: case 70375: case 70376: case 70377: case 70378: return 1422 + c - 70367;
		case 70400: case 70401: case 70402: case 70403: return 1434 + c - 70400;
		case 70459: case 70460: return 1438 + c - 70459;
		case 70462: case 70463: case 70464: case 70465: case 70466: case 70467: case 70468: return 1440 + c - 70462;
		case 70471: case 70472: return 1447 + c - 70471;
		case 70475: case 70476: case 70477: return 1449 + c - 70475;
		case 70487: return 1452;
		case 70498: case 70499: return 1453 + c - 70498;
		case 70502: case 70503: case 70504: case 70505: case 70506: case 70507: case 70508: return 1455 + c - 70502;
		case 70512: case 70513: case 70514: case 70515: case 70516: return 1462 + c - 70512;
		case 70709: case 70710: case 70711: case 70712: case 70713: case 70714: case 70715: case 70716: case 70717: case 70718: case 70719: case 70720: case 70721: case 70722: case 70723: case 70724: case 70725: case 70726: return 1467 + c - 70709;
		case 70750: return 1485;
		case 70832: case 70833: case 70834: case 70835: case 70836: case 70837: case 70838: case 70839: case 70840: case 70841: case 70842: case 70843: case 70844: case 70845: case 70846: case 70847: case 70848: case 70849: case 70850: case 70851: return 1486 + c - 70832;
		case 71087: case 71088: case 71089: case 71090: case 71091: case 71092: case 71093: return 1506 + c - 71087;
		case 71096: case 71097: case 71098: case 71099: case 71100: case 71101: case 71102: case 71103: case 71104: return 1513 + c - 71096;
		case 71132: case 71133: return 1522 + c - 71132;
		case 71216: case 71217: case 71218: case 71219: case 71220: case 71221: case 71222: case 71223: case 71224: case 71225: case 71226: case 71227: case 71228: case 71229: case 71230: case 71231: case 71232: return 1524 + c - 71216;
		case 71339: case 71340: case 71341: case 71342: case 71343: case 71344: case 71345: case 71346: case 71347: case 71348: case 71349: case 71350: case 71351: return 1541 + c - 71339;
		case 71453: case 71454: case 71455: case 71456: case 71457: case 71458: case 71459: case 71460: case 71461: case 71462: case 71463: case 71464: case 71465: case 71466: case 71467: return 1554 + c - 71453;
		case 71724: case 71725: case 71726: case 71727: case 71728: case 71729: case 71730: case 71731: case 71732: case 71733: case 71734: case 71735: case 71736: case 71737: case 71738: return 1569 + c - 71724;
		case 72145: case 72146: case 72147: case 72148: case 72149: case 72150: case 72151: return 1584 + c - 72145;
		case 72154: case 72155: case 72156: case 72157: case 72158: case 72159: case 72160: return 1591 + c - 72154;
		case 72164: return 1598;
		case 72193: case 72194: case 72195: case 72196: case 72197: case 72198: case 72199: case 72200: case 72201: case 72202: return 1599 + c - 72193;
		case 72243: case 72244: case 72245: case 72246: case 72247: case 72248: case 72249: return 1609 + c - 72243;
		case 72251: case 72252: case 72253: case 72254: return 1616 + c - 72251;
		case 72263: return 1620;
		case 72273: case 72274: case 72275: case 72276: case 72277: case 72278: case 72279: case 72280: case 72281: case 72282: case 72283: return 1621 + c - 72273;
		case 72330: case 72331: case 72332: case 72333: case 72334: case 72335: case 72336: case 72337: case 72338: case 72339: case 72340: case 72341: case 72342: case 72343: case 72344: case 72345: return 1632 + c - 72330;
		case 72751: case 72752: case 72753: case 72754: case 72755: case 72756: case 72757: case 72758: return 1648 + c - 72751;
		case 72760: case 72761: case 72762: case 72763: case 72764: case 72765: case 72766: case 72767: return 1656 + c - 72760;
		case 72850: case 72851: case 72852: case 72853: case 72854: case 72855: case 72856: case 72857: case 72858: case 72859: case 72860: case 72861: case 72862: case 72863: case 72864: case 72865: case 72866: case 72867: case 72868: case 72869: case 72870: case 72871: return 1664 + c - 72850;
		case 72873: case 72874: case 72875: case 72876: case 72877: case 72878: case 72879: case 72880: case 72881: case 72882: case 72883: case 72884: case 72885: case 72886: return 1686 + c - 72873;
		case 73009: case 73010: case 73011: case 73012: case 73013: case 73014: return 1700 + c - 73009;
		case 73018: return 1706;
		case 73020: case 73021: return 1707 + c - 73020;
		case 73023: case 73024: case 73025: case 73026: case 73027: case 73028: case 73029: return 1709 + c - 73023;
		case 73031: return 1716;
		case 73098: case 73099: case 73100: case 73101: case 73102: return 1717 + c - 73098;
		case 73104: case 73105: return 1722 + c - 73104;
		case 73107: case 73108: case 73109: case 73110: case 73111: return 1724 + c - 73107;
		case 73459: case 73460: case 73461: case 73462: return 1729 + c - 73459;
		case 92912: case 92913: case 92914: case 92915: case 92916: return 1733 + c - 92912;
		case 92976: case 92977: case 92978: case 92979: case 92980: case 92981: case 92982: return 1738 + c - 92976;
		case 94031: return 1745;
		case 94033: case 94034: case 94035: case 94036: case 94037: case 94038: case 94039: case 94040: case 94041: case 94042: case 94043: case 94044: case 94045: case 94046: case 94047: case 94048: case 94049: case 94050: case 94051: case 94052: case 94053: case 94054: case 94055: case 94056: case 94057: case 94058: case 94059: case 94060: case 94061: case 94062: case 94063: case 94064: case 94065: case 94066: case 94067: case 94068: case 94069: case 94070: case 94071: case 94072: case 94073: case 94074: case 94075: case 94076: case 94077: case 94078: case 94079: case 94080: case 94081: case 94082: case 94083: case 94084: case 94085: case 94086: case 94087: return 1746 + c - 94033;
		case 94095: case 94096: case 94097: case 94098: return 1801 + c - 94095;
		case 113821: case 113822: return 1805 + c - 113821;
		case 119141: case 119142: case 119143: case 119144: case 119145: return 1807 + c - 119141;
		case 119149: case 119150: case 119151: case 119152: case 119153: case 119154: return 1812 + c - 119149;
		case 119163: case 119164: case 119165: case 119166: case 119167: case 119168: case 119169: case 119170: return 1818 + c - 119163;
		case 119173: case 119174: case 119175: case 119176: case 119177: case 119178: case 119179: return 1826 + c - 119173;
		case 119210: case 119211: case 119212: case 119213: return 1833 + c - 119210;
		case 119362: case 119363: case 119364: return 1837 + c - 119362;
		case 121344: case 121345: case 121346: case 121347: case 121348: case 121349: case 121350: case 121351: case 121352: case 121353: case 121354: case 121355: case 121356: case 121357: case 121358: case 121359: case 121360: case 121361: case 121362: case 121363: case 121364: case 121365: case 121366: case 121367: case 121368: case 121369: case 121370: case 121371: case 121372: case 121373: case 121374: case 121375: case 121376: case 121377: case 121378: case 121379: case 121380: case 121381: case 121382: case 121383: case 121384: case 121385: case 121386: case 121387: case 121388: case 121389: case 121390: case 121391: case 121392: case 121393: case 121394: case 121395: case 121396: case 121397: case 121398: return 1840 + c - 121344;
		case 121403: case 121404: case 121405: case 121406: case 121407: case 121408: case 121409: case 121410: case 121411: case 121412: case 121413: case 121414: case 121415: case 121416: case 121417: case 121418: case 121419: case 121420: case 121421: case 121422: case 121423: case 121424: case 121425: case 121426: case 121427: case 121428: case 121429: case 121430: case 121431: case 121432: case 121433: case 121434: case 121435: case 121436: case 121437: case 121438: case 121439: case 121440: case 121441: case 121442: case 121443: case 121444: case 121445: case 121446: case 121447: case 121448: case 121449: case 121450: case 121451: case 121452: return 1895 + c - 121403;
		case 121461: return 1945;
		case 121476: return 1946;
		case 121499: case 121500: case 121501: case 121502: case 121503: return 1947 + c - 121499;
		case 121505: case 121506: case 121507: case 121508: case 121509: case 121510: case 121511: case 121512: case 121513: case 121514: case 121515: case 121516: case 121517: case 121518: case 121519: return 1952 + c - 121505;
		case 122880: case 122881: case 122882: case 122883: case 122884: case 122885: case 122886: return 1967 + c - 122880;
		case 122888: case 122889: case 122890: case 122891: case 122892: case 122893: case 122894: case 122895: case 122896: case 122897: case 122898: case 122899: case 122900: case 122901: case 122902: case 122903: case 122904: return 1974 + c - 122888;
		case 122907: case 122908: case 122909: case 122910: case 122911: case 122912: case 122913: return 1991 + c - 122907;
		case 122915: case 122916: return 1998 + c - 122915;
		case 122918: case 122919: case 122920: case 122921: case 122922: return 2000 + c - 122918;
		case 123184: case 123185: case 123186: case 123187: case 123188: case 123189: case 123190: return 2005 + c - 123184;
		case 123628: case 123629: case 123630: case 123631: return 2012 + c - 123628;
		case 125136: case 125137: case 125138: case 125139: case 125140: case 125141: case 125142: return 2016 + c - 125136;
		case 125252: case 125253: case 125254: case 125255: case 125256: case 125257: case 125258: return 2023 + c - 125252;
		case 127995: case 127996: case 127997: case 127998: case 127999: return 2030 + c - 127995;
		case 917760: case 917761: case 917762: case 917763: case 917764: case 917765: case 917766: case 917767: case 917768: case 917769: case 917770: case 917771: case 917772: case 917773: case 917774: case 917775: case 917776: case 917777: case 917778: case 917779: case 917780: case 917781: case 917782: case 917783: case 917784: case 917785: case 917786: case 917787: case 917788: case 917789: case 917790: case 917791: case 917792: case 917793: case 917794: case 917795: case 917796: case 917797: case 917798: case 917799: case 917800: case 917801: case 917802: case 917803: case 917804: case 917805: case 917806: case 917807: case 917808: case 917809: case 917810: case 917811: case 917812: case 917813: case 917814: case 917815: case 917816: case 917817: case 917818: case 917819: case 917820: case 917821: case 917822: case 917823: case 917824: case 917825: case 917826: case 917827: case 917828: case 917829: case 917830: case 917831: case 917832: case 917833: case 917834: case 917835: case 917836: case 917837: case 917838: case 917839: case 917840: case 917841: case 917842: case 917843: case 917844: case 917845: case 917846: case 917847: case 917848: case 917849: case 917850: case 917851: case 917852: case 917853: case 917854: case 917855: case 917856: case 917857: case 917858: case 917859: case 917860: case 917861: case 917862: case 917863: case 917864: case 917865: case 917866: case 917867: case 917868: case 917869: case 917870: case 917871: case 917872: case 917873: case 917874: case 917875: case 917876: case 917877: case 917878: case 917879: case 917880: case 917881: case 917882: case 917883: case 917884: case 917885: case 917886: case 917887: case 917888: case 917889: case 917890: case 917891: case 917892: case 917893: case 917894: case 917895: case 917896: case 917897: case 917898: case 917899: case 917900: case 917901: case 917902: case 917903: case 917904: case 917905: case 917906: case 917907: case 917908: case 917909: case 917910: case 917911: case 917912: case 917913: case 917914: case 917915: case 917916: case 917917: case 917918: case 917919: case 917920: case 917921: case 917922: case 917923: case 917924: case 917925: case 917926: case 917927: case 917928: case 917929: case 917930: case 917931: case 917932: case 917933: case 917934: case 917935: case 917936: case 917937: case 917938: case 917939: case 917940: case 917941: case 917942: case 917943: case 917944: case 917945: case 917946: case 917947: case 917948: case 917949: case 917950: case 917951: case 917952: case 917953: case 917954: case 917955: case 917956: case 917957: case 917958: case 917959: case 917960: case 917961: case 917962: case 917963: case 917964: case 917965: case 917966: case 917967: case 917968: case 917969: case 917970: case 917971: case 917972: case 917973: case 917974: case 917975: case 917976: case 917977: case 917978: case 917979: case 917980: case 917981: case 917982: case 917983: case 917984: case 917985: case 917986: case 917987: case 917988: case 917989: case 917990: case 917991: case 917992: case 917993: case 917994: case 917995: case 917996: case 917997: case 917998: case 917999: return 2035 + c - 917760;
default: return 0;
	} // }}}
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
          int c = 100;
          int benchRet = mark_for_codepoint(c);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int c = 255;
          int benchRet = mark_for_codepoint(c);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int c = 10;
          int benchRet = mark_for_codepoint(c);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
