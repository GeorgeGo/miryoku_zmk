// Copyright 2022 Manna Harbour
// https://github.com/manna-harbour/miryoku

#if !defined (MIRYOKU_LAYOUTMAPPING_ERI)

#define MIRYOKU_LAYOUTMAPPING_ERI( \
K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
) \
K22  K00  K10  K13  K04       K05  K15  K25  K17  K08 \
K23  K20  K01  K12  K03       K27  K16  K06  K26  K07 \
K24  K21  K14  K11  K02       K29  K19  K09  K28  K18 \
          K32  K33  K34       K35  K36  K37 

#define MIRYOKU_KLUDGE_TOPROWCOMBOS_LEFTPINKIE 1 2
#define MIRYOKU_KLUDGE_TOPROWCOMBOS_LEFTINNERINDEX 2 3
#define MIRYOKU_KLUDGE_TOPROWCOMBOS_RIGHTINNERINDEX 6 7
#define MIRYOKU_KLUDGE_TOPROWCOMBOS_RIGHTPINKIE 7 8

#define MIRYOKU_KLUDGE_BOTTOMROWCOMBOS_LEFTPINKIE 21 22
#define MIRYOKU_KLUDGE_BOTTOMROWCOMBOS_LEFTINNERINDEX 22 23
#define MIRYOKU_KLUDGE_BOTTOMROWCOMBOS_RIGHTINNERINDEX 26 27
#define MIRYOKU_KLUDGE_BOTTOMROWCOMBOS_RIGHTPINKIE 27 28

#define MIRYOKU_KLUDGE_THUMBCOMBOS_LEFT 31 32
#define MIRYOKU_KLUDGE_THUMBCOMBOS_RIGHT 33 34


#endif

#define MIRYOKU_MAPPING MIRYOKU_LAYOUTMAPPING_ERI
