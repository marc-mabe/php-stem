
/* This file was generated automatically by the Snowball to ANSI C compiler */

#include "header.h"

extern int english_stem(struct SN_env * z);
static int r_exception(struct SN_env * z);
static int r_Step_5(struct SN_env * z);
static int r_Step_4(struct SN_env * z);
static int r_Step_3(struct SN_env * z);
static int r_Step_2(struct SN_env * z);
static int r_Step_1c(struct SN_env * z);
static int r_Step_1b(struct SN_env * z);
static int r_Step_1a(struct SN_env * z);
static int r_R2(struct SN_env * z);
static int r_R1(struct SN_env * z);
static int r_shortv(struct SN_env * z);
static int r_mark_regions(struct SN_env * z);
static int r_postlude(struct SN_env * z);
static int r_prelude(struct SN_env * z);

static symbol s_0_0[5] = { 'g', 'e', 'n', 'e', 'r' };

static struct among a_0[1] =
{
/*  0 */ { 5, s_0_0, -1, -1, 0}
};

static symbol s_1_0[3] = { 'i', 'e', 'd' };
static symbol s_1_1[1] = { 's' };
static symbol s_1_2[3] = { 'i', 'e', 's' };
static symbol s_1_3[4] = { 's', 's', 'e', 's' };
static symbol s_1_4[2] = { 's', 's' };
static symbol s_1_5[2] = { 'u', 's' };

static struct among a_1[6] =
{
/*  0 */ { 3, s_1_0, -1, 2, 0},
/*  1 */ { 1, s_1_1, -1, 3, 0},
/*  2 */ { 3, s_1_2, 1, 2, 0},
/*  3 */ { 4, s_1_3, 1, 1, 0},
/*  4 */ { 2, s_1_4, 1, -1, 0},
/*  5 */ { 2, s_1_5, 1, -1, 0}
};

static symbol s_2_1[2] = { 'b', 'b' };
static symbol s_2_2[2] = { 'd', 'd' };
static symbol s_2_3[2] = { 'f', 'f' };
static symbol s_2_4[2] = { 'g', 'g' };
static symbol s_2_5[2] = { 'b', 'l' };
static symbol s_2_6[2] = { 'm', 'm' };
static symbol s_2_7[2] = { 'n', 'n' };
static symbol s_2_8[2] = { 'p', 'p' };
static symbol s_2_9[2] = { 'r', 'r' };
static symbol s_2_10[2] = { 'a', 't' };
static symbol s_2_11[2] = { 't', 't' };
static symbol s_2_12[2] = { 'i', 'z' };

static struct among a_2[13] =
{
/*  0 */ { 0, 0, -1, 3, 0},
/*  1 */ { 2, s_2_1, 0, 2, 0},
/*  2 */ { 2, s_2_2, 0, 2, 0},
/*  3 */ { 2, s_2_3, 0, 2, 0},
/*  4 */ { 2, s_2_4, 0, 2, 0},
/*  5 */ { 2, s_2_5, 0, 1, 0},
/*  6 */ { 2, s_2_6, 0, 2, 0},
/*  7 */ { 2, s_2_7, 0, 2, 0},
/*  8 */ { 2, s_2_8, 0, 2, 0},
/*  9 */ { 2, s_2_9, 0, 2, 0},
/* 10 */ { 2, s_2_10, 0, 1, 0},
/* 11 */ { 2, s_2_11, 0, 2, 0},
/* 12 */ { 2, s_2_12, 0, 1, 0}
};

static symbol s_3_0[2] = { 'e', 'd' };
static symbol s_3_1[3] = { 'e', 'e', 'd' };
static symbol s_3_2[3] = { 'i', 'n', 'g' };
static symbol s_3_3[4] = { 'e', 'd', 'l', 'y' };
static symbol s_3_4[5] = { 'e', 'e', 'd', 'l', 'y' };
static symbol s_3_5[5] = { 'i', 'n', 'g', 'l', 'y' };

static struct among a_3[6] =
{
/*  0 */ { 2, s_3_0, -1, 2, 0},
/*  1 */ { 3, s_3_1, 0, 1, 0},
/*  2 */ { 3, s_3_2, -1, 2, 0},
/*  3 */ { 4, s_3_3, -1, 2, 0},
/*  4 */ { 5, s_3_4, 3, 1, 0},
/*  5 */ { 5, s_3_5, -1, 2, 0}
};

static symbol s_4_0[4] = { 'a', 'n', 'c', 'i' };
static symbol s_4_1[4] = { 'e', 'n', 'c', 'i' };
static symbol s_4_2[3] = { 'o', 'g', 'i' };
static symbol s_4_3[2] = { 'l', 'i' };
static symbol s_4_4[3] = { 'b', 'l', 'i' };
static symbol s_4_5[4] = { 'a', 'b', 'l', 'i' };
static symbol s_4_6[4] = { 'a', 'l', 'l', 'i' };
static symbol s_4_7[5] = { 'f', 'u', 'l', 'l', 'i' };
static symbol s_4_8[6] = { 'l', 'e', 's', 's', 'l', 'i' };
static symbol s_4_9[5] = { 'o', 'u', 's', 'l', 'i' };
static symbol s_4_10[5] = { 'e', 'n', 't', 'l', 'i' };
static symbol s_4_11[5] = { 'a', 'l', 'i', 't', 'i' };
static symbol s_4_12[6] = { 'b', 'i', 'l', 'i', 't', 'i' };
static symbol s_4_13[5] = { 'i', 'v', 'i', 't', 'i' };
static symbol s_4_14[6] = { 't', 'i', 'o', 'n', 'a', 'l' };
static symbol s_4_15[7] = { 'a', 't', 'i', 'o', 'n', 'a', 'l' };
static symbol s_4_16[5] = { 'a', 'l', 'i', 's', 'm' };
static symbol s_4_17[5] = { 'a', 't', 'i', 'o', 'n' };
static symbol s_4_18[7] = { 'i', 'z', 'a', 't', 'i', 'o', 'n' };
static symbol s_4_19[4] = { 'i', 'z', 'e', 'r' };
static symbol s_4_20[4] = { 'a', 't', 'o', 'r' };
static symbol s_4_21[7] = { 'i', 'v', 'e', 'n', 'e', 's', 's' };
static symbol s_4_22[7] = { 'f', 'u', 'l', 'n', 'e', 's', 's' };
static symbol s_4_23[7] = { 'o', 'u', 's', 'n', 'e', 's', 's' };

static struct among a_4[24] =
{
/*  0 */ { 4, s_4_0, -1, 3, 0},
/*  1 */ { 4, s_4_1, -1, 2, 0},
/*  2 */ { 3, s_4_2, -1, 13, 0},
/*  3 */ { 2, s_4_3, -1, 16, 0},
/*  4 */ { 3, s_4_4, 3, 12, 0},
/*  5 */ { 4, s_4_5, 4, 4, 0},
/*  6 */ { 4, s_4_6, 3, 8, 0},
/*  7 */ { 5, s_4_7, 3, 14, 0},
/*  8 */ { 6, s_4_8, 3, 15, 0},
/*  9 */ { 5, s_4_9, 3, 10, 0},
/* 10 */ { 5, s_4_10, 3, 5, 0},
/* 11 */ { 5, s_4_11, -1, 8, 0},
/* 12 */ { 6, s_4_12, -1, 12, 0},
/* 13 */ { 5, s_4_13, -1, 11, 0},
/* 14 */ { 6, s_4_14, -1, 1, 0},
/* 15 */ { 7, s_4_15, 14, 7, 0},
/* 16 */ { 5, s_4_16, -1, 8, 0},
/* 17 */ { 5, s_4_17, -1, 7, 0},
/* 18 */ { 7, s_4_18, 17, 6, 0},
/* 19 */ { 4, s_4_19, -1, 6, 0},
/* 20 */ { 4, s_4_20, -1, 7, 0},
/* 21 */ { 7, s_4_21, -1, 11, 0},
/* 22 */ { 7, s_4_22, -1, 9, 0},
/* 23 */ { 7, s_4_23, -1, 10, 0}
};

static symbol s_5_0[5] = { 'i', 'c', 'a', 't', 'e' };
static symbol s_5_1[5] = { 'a', 't', 'i', 'v', 'e' };
static symbol s_5_2[5] = { 'a', 'l', 'i', 'z', 'e' };
static symbol s_5_3[5] = { 'i', 'c', 'i', 't', 'i' };
static symbol s_5_4[4] = { 'i', 'c', 'a', 'l' };
static symbol s_5_5[6] = { 't', 'i', 'o', 'n', 'a', 'l' };
static symbol s_5_6[7] = { 'a', 't', 'i', 'o', 'n', 'a', 'l' };
static symbol s_5_7[3] = { 'f', 'u', 'l' };
static symbol s_5_8[4] = { 'n', 'e', 's', 's' };

static struct among a_5[9] =
{
/*  0 */ { 5, s_5_0, -1, 4, 0},
/*  1 */ { 5, s_5_1, -1, 6, 0},
/*  2 */ { 5, s_5_2, -1, 3, 0},
/*  3 */ { 5, s_5_3, -1, 4, 0},
/*  4 */ { 4, s_5_4, -1, 4, 0},
/*  5 */ { 6, s_5_5, -1, 1, 0},
/*  6 */ { 7, s_5_6, 5, 2, 0},
/*  7 */ { 3, s_5_7, -1, 5, 0},
/*  8 */ { 4, s_5_8, -1, 5, 0}
};

static symbol s_6_0[2] = { 'i', 'c' };
static symbol s_6_1[4] = { 'a', 'n', 'c', 'e' };
static symbol s_6_2[4] = { 'e', 'n', 'c', 'e' };
static symbol s_6_3[4] = { 'a', 'b', 'l', 'e' };
static symbol s_6_4[4] = { 'i', 'b', 'l', 'e' };
static symbol s_6_5[3] = { 'a', 't', 'e' };
static symbol s_6_6[3] = { 'i', 'v', 'e' };
static symbol s_6_7[3] = { 'i', 'z', 'e' };
static symbol s_6_8[3] = { 'i', 't', 'i' };
static symbol s_6_9[2] = { 'a', 'l' };
static symbol s_6_10[3] = { 'i', 's', 'm' };
static symbol s_6_11[3] = { 'i', 'o', 'n' };
static symbol s_6_12[2] = { 'e', 'r' };
static symbol s_6_13[3] = { 'o', 'u', 's' };
static symbol s_6_14[3] = { 'a', 'n', 't' };
static symbol s_6_15[3] = { 'e', 'n', 't' };
static symbol s_6_16[4] = { 'm', 'e', 'n', 't' };
static symbol s_6_17[5] = { 'e', 'm', 'e', 'n', 't' };

static struct among a_6[18] =
{
/*  0 */ { 2, s_6_0, -1, 1, 0},
/*  1 */ { 4, s_6_1, -1, 1, 0},
/*  2 */ { 4, s_6_2, -1, 1, 0},
/*  3 */ { 4, s_6_3, -1, 1, 0},
/*  4 */ { 4, s_6_4, -1, 1, 0},
/*  5 */ { 3, s_6_5, -1, 1, 0},
/*  6 */ { 3, s_6_6, -1, 1, 0},
/*  7 */ { 3, s_6_7, -1, 1, 0},
/*  8 */ { 3, s_6_8, -1, 1, 0},
/*  9 */ { 2, s_6_9, -1, 1, 0},
/* 10 */ { 3, s_6_10, -1, 1, 0},
/* 11 */ { 3, s_6_11, -1, 2, 0},
/* 12 */ { 2, s_6_12, -1, 1, 0},
/* 13 */ { 3, s_6_13, -1, 1, 0},
/* 14 */ { 3, s_6_14, -1, 1, 0},
/* 15 */ { 3, s_6_15, -1, 1, 0},
/* 16 */ { 4, s_6_16, 15, 1, 0},
/* 17 */ { 5, s_6_17, 16, 1, 0}
};

static symbol s_7_0[1] = { 'e' };
static symbol s_7_1[1] = { 'l' };

static struct among a_7[2] =
{
/*  0 */ { 1, s_7_0, -1, 1, 0},
/*  1 */ { 1, s_7_1, -1, 2, 0}
};

static symbol s_8_0[5] = { 'a', 'n', 'd', 'e', 's' };
static symbol s_8_1[5] = { 'a', 't', 'l', 'a', 's' };
static symbol s_8_2[4] = { 'b', 'i', 'a', 's' };
static symbol s_8_3[7] = { 'c', 'a', 'n', 'n', 'i', 'n', 'g' };
static symbol s_8_4[8] = { 'c', 'a', 'n', 'n', 'i', 'n', 'g', 's' };
static symbol s_8_5[6] = { 'c', 'o', 's', 'm', 'o', 's' };
static symbol s_8_6[5] = { 'd', 'y', 'i', 'n', 'g' };
static symbol s_8_7[5] = { 'e', 'a', 'r', 'l', 'y' };
static symbol s_8_8[6] = { 'e', 'x', 'c', 'e', 'e', 'd' };
static symbol s_8_9[6] = { 'g', 'e', 'n', 't', 'l', 'y' };
static symbol s_8_10[4] = { 'h', 'o', 'w', 'e' };
static symbol s_8_11[4] = { 'i', 'd', 'l', 'y' };
static symbol s_8_12[6] = { 'i', 'n', 'n', 'i', 'n', 'g' };
static symbol s_8_13[7] = { 'i', 'n', 'n', 'i', 'n', 'g', 's' };
static symbol s_8_14[5] = { 'l', 'y', 'i', 'n', 'g' };
static symbol s_8_15[4] = { 'n', 'e', 'w', 's' };
static symbol s_8_16[4] = { 'o', 'n', 'l', 'y' };
static symbol s_8_17[6] = { 'o', 'u', 't', 'i', 'n', 'g' };
static symbol s_8_18[7] = { 'o', 'u', 't', 'i', 'n', 'g', 's' };
static symbol s_8_19[7] = { 'p', 'r', 'o', 'c', 'e', 'e', 'd' };
static symbol s_8_20[6] = { 's', 'i', 'n', 'g', 'l', 'y' };
static symbol s_8_21[5] = { 's', 'k', 'i', 'e', 's' };
static symbol s_8_22[4] = { 's', 'k', 'i', 's' };
static symbol s_8_23[3] = { 's', 'k', 'y' };
static symbol s_8_24[7] = { 's', 'u', 'c', 'c', 'e', 'e', 'd' };
static symbol s_8_25[5] = { 't', 'y', 'i', 'n', 'g' };
static symbol s_8_26[4] = { 'u', 'g', 'l', 'y' };

static struct among a_8[27] =
{
/*  0 */ { 5, s_8_0, -1, -1, 0},
/*  1 */ { 5, s_8_1, -1, -1, 0},
/*  2 */ { 4, s_8_2, -1, -1, 0},
/*  3 */ { 7, s_8_3, -1, -1, 0},
/*  4 */ { 8, s_8_4, 3, 8, 0},
/*  5 */ { 6, s_8_5, -1, -1, 0},
/*  6 */ { 5, s_8_6, -1, 3, 0},
/*  7 */ { 5, s_8_7, -1, 12, 0},
/*  8 */ { 6, s_8_8, -1, -1, 0},
/*  9 */ { 6, s_8_9, -1, 10, 0},
/* 10 */ { 4, s_8_10, -1, -1, 0},
/* 11 */ { 4, s_8_11, -1, 9, 0},
/* 12 */ { 6, s_8_12, -1, -1, 0},
/* 13 */ { 7, s_8_13, 12, 6, 0},
/* 14 */ { 5, s_8_14, -1, 4, 0},
/* 15 */ { 4, s_8_15, -1, -1, 0},
/* 16 */ { 4, s_8_16, -1, 13, 0},
/* 17 */ { 6, s_8_17, -1, -1, 0},
/* 18 */ { 7, s_8_18, 17, 7, 0},
/* 19 */ { 7, s_8_19, -1, -1, 0},
/* 20 */ { 6, s_8_20, -1, 14, 0},
/* 21 */ { 5, s_8_21, -1, 2, 0},
/* 22 */ { 4, s_8_22, -1, 1, 0},
/* 23 */ { 3, s_8_23, -1, -1, 0},
/* 24 */ { 7, s_8_24, -1, -1, 0},
/* 25 */ { 5, s_8_25, -1, 5, 0},
/* 26 */ { 4, s_8_26, -1, 11, 0}
};

static unsigned char g_v[] = { 17, 65, 16, 1 };

static unsigned char g_v_WXY[] = { 1, 17, 65, 208, 1 };

static unsigned char g_valid_LI[] = { 111, 26, 5 };

static symbol s_0[] = { 'y' };
static symbol s_1[] = { 'Y' };
static symbol s_2[] = { 'y' };
static symbol s_3[] = { 'Y' };
static symbol s_4[] = { 's', 's' };
static symbol s_5[] = { 'i', 'e' };
static symbol s_6[] = { 'i' };
static symbol s_7[] = { 'e', 'e' };
static symbol s_8[] = { 'e' };
static symbol s_9[] = { 'e' };
static symbol s_10[] = { 'y' };
static symbol s_11[] = { 'Y' };
static symbol s_12[] = { 'i' };
static symbol s_13[] = { 't', 'i', 'o', 'n' };
static symbol s_14[] = { 'e', 'n', 'c', 'e' };
static symbol s_15[] = { 'a', 'n', 'c', 'e' };
static symbol s_16[] = { 'a', 'b', 'l', 'e' };
static symbol s_17[] = { 'e', 'n', 't' };
static symbol s_18[] = { 'i', 'z', 'e' };
static symbol s_19[] = { 'a', 't', 'e' };
static symbol s_20[] = { 'a', 'l' };
static symbol s_21[] = { 'f', 'u', 'l' };
static symbol s_22[] = { 'o', 'u', 's' };
static symbol s_23[] = { 'i', 'v', 'e' };
static symbol s_24[] = { 'b', 'l', 'e' };
static symbol s_25[] = { 'l' };
static symbol s_26[] = { 'o', 'g' };
static symbol s_27[] = { 'f', 'u', 'l' };
static symbol s_28[] = { 'l', 'e', 's', 's' };
static symbol s_29[] = { 't', 'i', 'o', 'n' };
static symbol s_30[] = { 'a', 't', 'e' };
static symbol s_31[] = { 'a', 'l' };
static symbol s_32[] = { 'i', 'c' };
static symbol s_33[] = { 's' };
static symbol s_34[] = { 't' };
static symbol s_35[] = { 'l' };
static symbol s_36[] = { 's', 'k', 'i' };
static symbol s_37[] = { 's', 'k', 'y' };
static symbol s_38[] = { 'd', 'i', 'e' };
static symbol s_39[] = { 'l', 'i', 'e' };
static symbol s_40[] = { 't', 'i', 'e' };
static symbol s_41[] = { 'i', 'n', 'n', 'i', 'n', 'g' };
static symbol s_42[] = { 'o', 'u', 't', 'i', 'n', 'g' };
static symbol s_43[] = { 'c', 'a', 'n', 'n', 'i', 'n', 'g' };
static symbol s_44[] = { 'i', 'd', 'l' };
static symbol s_45[] = { 'g', 'e', 'n', 't', 'l' };
static symbol s_46[] = { 'u', 'g', 'l', 'i' };
static symbol s_47[] = { 'e', 'a', 'r', 'l', 'i' };
static symbol s_48[] = { 'o', 'n', 'l', 'i' };
static symbol s_49[] = { 's', 'i', 'n', 'g', 'l' };
static symbol s_50[] = { 'Y' };
static symbol s_51[] = { 'y' };

static int r_prelude(struct SN_env * z) {
    z->B[0] = 0; /* unset Y_found, line 23 */
    {   int c = z->c; /* do, line 24 */
        z->bra = z->c; /* [, line 24 */
        if (!(eq_s(z, 1, s_0))) goto lab0;
        z->ket = z->c; /* ], line 24 */
        if (!(in_grouping(z, g_v, 97, 121))) goto lab0;
        slice_from_s(z, 1, s_1); /* <-, line 24 */
        z->B[0] = 1; /* set Y_found, line 24 */
    lab0:
        z->c = c;
    }
    {   int c = z->c; /* do, line 25 */
        while(1) { /* repeat, line 25 */
            int c = z->c;
            while(1) { /* goto, line 25 */
                int c = z->c;
                if (!(in_grouping(z, g_v, 97, 121))) goto lab3;
                z->bra = z->c; /* [, line 25 */
                if (!(eq_s(z, 1, s_2))) goto lab3;
                z->ket = z->c; /* ], line 25 */
                z->c = c;
                break;
            lab3:
                z->c = c;
                if (z->c >= z->l) goto lab2;
                z->c++;
            }
            slice_from_s(z, 1, s_3); /* <-, line 25 */
            z->B[0] = 1; /* set Y_found, line 25 */
            continue;
        lab2:
            z->c = c;
            break;
        }
    lab1:
        z->c = c;
    }
    return 1;
}

static int r_mark_regions(struct SN_env * z) {
    z->I[0] = z->l;
    z->I[1] = z->l;
    {   int c = z->c; /* do, line 31 */
        {   int c = z->c; /* or, line 35 */
            if (!(find_among(z, a_0, 1))) goto lab2; /* among, line 32 */
            goto lab1;
        lab2:
            z->c = c;
            while(1) { /* gopast, line 35 */
                if (!(in_grouping(z, g_v, 97, 121))) goto lab3;
                break;
            lab3:
                if (z->c >= z->l) goto lab0;
                z->c++;
            }
            while(1) { /* gopast, line 35 */
                if (!(out_grouping(z, g_v, 97, 121))) goto lab4;
                break;
            lab4:
                if (z->c >= z->l) goto lab0;
                z->c++;
            }
        }
    lab1:
        z->I[0] = z->c; /* setmark p1, line 36 */
        while(1) { /* gopast, line 37 */
            if (!(in_grouping(z, g_v, 97, 121))) goto lab5;
            break;
        lab5:
            if (z->c >= z->l) goto lab0;
            z->c++;
        }
        while(1) { /* gopast, line 37 */
            if (!(out_grouping(z, g_v, 97, 121))) goto lab6;
            break;
        lab6:
            if (z->c >= z->l) goto lab0;
            z->c++;
        }
        z->I[1] = z->c; /* setmark p2, line 37 */
    lab0:
        z->c = c;
    }
    return 1;
}

static int r_shortv(struct SN_env * z) {
    {   int m = z->l - z->c; /* or, line 45 */
        if (!(out_grouping_b(z, g_v_WXY, 89, 121))) goto lab1;
        if (!(in_grouping_b(z, g_v, 97, 121))) goto lab1;
        if (!(out_grouping_b(z, g_v, 97, 121))) goto lab1;
        goto lab0;
    lab1:
        z->c = z->l - m;
        if (!(out_grouping_b(z, g_v, 97, 121))) return 0;
        if (!(in_grouping_b(z, g_v, 97, 121))) return 0;
        if (z->c > z->lb) return 0; /* atlimit, line 46 */
    }
lab0:
    return 1;
}

static int r_R1(struct SN_env * z) {
    if (!(z->I[0] <= z->c)) return 0;
    return 1;
}

static int r_R2(struct SN_env * z) {
    if (!(z->I[1] <= z->c)) return 0;
    return 1;
}

static int r_Step_1a(struct SN_env * z) {
    int among_var;
    z->ket = z->c; /* [, line 53 */
    among_var = find_among_b(z, a_1, 6); /* substring, line 53 */
    if (!(among_var)) return 0;
    z->bra = z->c; /* ], line 53 */
    switch(among_var) {
        case 0: return 0;
        case 1:
            slice_from_s(z, 2, s_4); /* <-, line 54 */
            break;
        case 2:
            {   int m = z->l - z->c; /* or, line 56 */
                if (z->c <= z->lb) goto lab1;
                z->c--; /* next, line 56 */
                if (z->c > z->lb) goto lab1; /* atlimit, line 56 */
                slice_from_s(z, 2, s_5); /* <-, line 56 */
                goto lab0;
            lab1:
                z->c = z->l - m;
                slice_from_s(z, 1, s_6); /* <-, line 56 */
            }
        lab0:
            break;
        case 3:
            if (z->c <= z->lb) return 0;
            z->c--; /* next, line 57 */
            while(1) { /* gopast, line 57 */
                if (!(in_grouping_b(z, g_v, 97, 121))) goto lab2;
                break;
            lab2:
                if (z->c <= z->lb) return 0;
                z->c--;
            }
            slice_del(z); /* delete, line 57 */
            break;
    }
    return 1;
}

static int r_Step_1b(struct SN_env * z) {
    int among_var;
    z->ket = z->c; /* [, line 63 */
    among_var = find_among_b(z, a_3, 6); /* substring, line 63 */
    if (!(among_var)) return 0;
    z->bra = z->c; /* ], line 63 */
    switch(among_var) {
        case 0: return 0;
        case 1:
            if (!r_R1(z)) return 0; /* call R1, line 65 */
            slice_from_s(z, 2, s_7); /* <-, line 65 */
            break;
        case 2:
            {   int m_test = z->l - z->c; /* test, line 68 */
                while(1) { /* gopast, line 68 */
                    if (!(in_grouping_b(z, g_v, 97, 121))) goto lab0;
                    break;
                lab0:
                    if (z->c <= z->lb) return 0;
                    z->c--;
                }
                z->c = z->l - m_test;
            }
            slice_del(z); /* delete, line 68 */
            {   int m_test = z->l - z->c; /* test, line 69 */
                among_var = find_among_b(z, a_2, 13); /* substring, line 69 */
                if (!(among_var)) return 0;
                z->c = z->l - m_test;
            }
            switch(among_var) {
                case 0: return 0;
                case 1:
                    {   int c = z->c;
                        insert_s(z, z->c, z->c, 1, s_8); /* <+, line 71 */
                        z->c = c;
                    }
                    break;
                case 2:
                    z->ket = z->c; /* [, line 74 */
                    if (z->c <= z->lb) return 0;
                    z->c--; /* next, line 74 */
                    z->bra = z->c; /* ], line 74 */
                    slice_del(z); /* delete, line 74 */
                    break;
                case 3:
                    if (z->c != z->I[0]) return 0; /* atmark, line 75 */
                    {   int m_test = z->l - z->c; /* test, line 75 */
                        if (!r_shortv(z)) return 0; /* call shortv, line 75 */
                        z->c = z->l - m_test;
                    }
                    {   int c = z->c;
                        insert_s(z, z->c, z->c, 1, s_9); /* <+, line 75 */
                        z->c = c;
                    }
                    break;
            }
            break;
    }
    return 1;
}

static int r_Step_1c(struct SN_env * z) {
    z->ket = z->c; /* [, line 82 */
    {   int m = z->l - z->c; /* or, line 82 */
        if (!(eq_s_b(z, 1, s_10))) goto lab1;
        goto lab0;
    lab1:
        z->c = z->l - m;
        if (!(eq_s_b(z, 1, s_11))) return 0;
    }
lab0:
    z->bra = z->c; /* ], line 82 */
    if (!(out_grouping_b(z, g_v, 97, 121))) return 0;
    {   int m = z->l - z->c; /* not, line 83 */
        if (z->c > z->lb) goto lab2; /* atlimit, line 83 */
        return 0;
    lab2:
        z->c = z->l - m;
    }
    slice_from_s(z, 1, s_12); /* <-, line 84 */
    return 1;
}

static int r_Step_2(struct SN_env * z) {
    int among_var;
    z->ket = z->c; /* [, line 88 */
    among_var = find_among_b(z, a_4, 24); /* substring, line 88 */
    if (!(among_var)) return 0;
    z->bra = z->c; /* ], line 88 */
    if (!r_R1(z)) return 0; /* call R1, line 88 */
    switch(among_var) {
        case 0: return 0;
        case 1:
            slice_from_s(z, 4, s_13); /* <-, line 89 */
            break;
        case 2:
            slice_from_s(z, 4, s_14); /* <-, line 90 */
            break;
        case 3:
            slice_from_s(z, 4, s_15); /* <-, line 91 */
            break;
        case 4:
            slice_from_s(z, 4, s_16); /* <-, line 92 */
            break;
        case 5:
            slice_from_s(z, 3, s_17); /* <-, line 93 */
            break;
        case 6:
            slice_from_s(z, 3, s_18); /* <-, line 95 */
            break;
        case 7:
            slice_from_s(z, 3, s_19); /* <-, line 97 */
            break;
        case 8:
            slice_from_s(z, 2, s_20); /* <-, line 99 */
            break;
        case 9:
            slice_from_s(z, 3, s_21); /* <-, line 100 */
            break;
        case 10:
            slice_from_s(z, 3, s_22); /* <-, line 102 */
            break;
        case 11:
            slice_from_s(z, 3, s_23); /* <-, line 104 */
            break;
        case 12:
            slice_from_s(z, 3, s_24); /* <-, line 106 */
            break;
        case 13:
            if (!(eq_s_b(z, 1, s_25))) return 0;
            slice_from_s(z, 2, s_26); /* <-, line 107 */
            break;
        case 14:
            slice_from_s(z, 3, s_27); /* <-, line 108 */
            break;
        case 15:
            slice_from_s(z, 4, s_28); /* <-, line 109 */
            break;
        case 16:
            if (!(in_grouping_b(z, g_valid_LI, 98, 116))) return 0;
            slice_del(z); /* delete, line 110 */
            break;
    }
    return 1;
}

static int r_Step_3(struct SN_env * z) {
    int among_var;
    z->ket = z->c; /* [, line 115 */
    among_var = find_among_b(z, a_5, 9); /* substring, line 115 */
    if (!(among_var)) return 0;
    z->bra = z->c; /* ], line 115 */
    if (!r_R1(z)) return 0; /* call R1, line 115 */
    switch(among_var) {
        case 0: return 0;
        case 1:
            slice_from_s(z, 4, s_29); /* <-, line 116 */
            break;
        case 2:
            slice_from_s(z, 3, s_30); /* <-, line 117 */
            break;
        case 3:
            slice_from_s(z, 2, s_31); /* <-, line 118 */
            break;
        case 4:
            slice_from_s(z, 2, s_32); /* <-, line 120 */
            break;
        case 5:
            slice_del(z); /* delete, line 122 */
            break;
        case 6:
            if (!r_R2(z)) return 0; /* call R2, line 124 */
            slice_del(z); /* delete, line 124 */
            break;
    }
    return 1;
}

static int r_Step_4(struct SN_env * z) {
    int among_var;
    z->ket = z->c; /* [, line 129 */
    among_var = find_among_b(z, a_6, 18); /* substring, line 129 */
    if (!(among_var)) return 0;
    z->bra = z->c; /* ], line 129 */
    if (!r_R2(z)) return 0; /* call R2, line 129 */
    switch(among_var) {
        case 0: return 0;
        case 1:
            slice_del(z); /* delete, line 132 */
            break;
        case 2:
            {   int m = z->l - z->c; /* or, line 133 */
                if (!(eq_s_b(z, 1, s_33))) goto lab1;
                goto lab0;
            lab1:
                z->c = z->l - m;
                if (!(eq_s_b(z, 1, s_34))) return 0;
            }
        lab0:
            slice_del(z); /* delete, line 133 */
            break;
    }
    return 1;
}

static int r_Step_5(struct SN_env * z) {
    int among_var;
    z->ket = z->c; /* [, line 138 */
    among_var = find_among_b(z, a_7, 2); /* substring, line 138 */
    if (!(among_var)) return 0;
    z->bra = z->c; /* ], line 138 */
    switch(among_var) {
        case 0: return 0;
        case 1:
            {   int m = z->l - z->c; /* or, line 139 */
                if (!r_R2(z)) goto lab1; /* call R2, line 139 */
                goto lab0;
            lab1:
                z->c = z->l - m;
                if (!r_R1(z)) return 0; /* call R1, line 139 */
                {   int m = z->l - z->c; /* not, line 139 */
                    if (!r_shortv(z)) goto lab2; /* call shortv, line 139 */
                    return 0;
                lab2:
                    z->c = z->l - m;
                }
            }
        lab0:
            slice_del(z); /* delete, line 139 */
            break;
        case 2:
            if (!r_R2(z)) return 0; /* call R2, line 140 */
            if (!(eq_s_b(z, 1, s_35))) return 0;
            slice_del(z); /* delete, line 140 */
            break;
    }
    return 1;
}

static int r_exception(struct SN_env * z) {
    int among_var;
    z->bra = z->c; /* [, line 147 */
    among_var = find_among(z, a_8, 27); /* substring, line 147 */
    if (!(among_var)) return 0;
    z->ket = z->c; /* ], line 147 */
    if (z->c < z->l) return 0; /* atlimit, line 147 */
    switch(among_var) {
        case 0: return 0;
        case 1:
            slice_from_s(z, 3, s_36); /* <-, line 151 */
            break;
        case 2:
            slice_from_s(z, 3, s_37); /* <-, line 152 */
            break;
        case 3:
            slice_from_s(z, 3, s_38); /* <-, line 153 */
            break;
        case 4:
            slice_from_s(z, 3, s_39); /* <-, line 154 */
            break;
        case 5:
            slice_from_s(z, 3, s_40); /* <-, line 155 */
            break;
        case 6:
            slice_from_s(z, 6, s_41); /* <-, line 156 */
            break;
        case 7:
            slice_from_s(z, 6, s_42); /* <-, line 157 */
            break;
        case 8:
            slice_from_s(z, 7, s_43); /* <-, line 158 */
            break;
        case 9:
            slice_from_s(z, 3, s_44); /* <-, line 162 */
            break;
        case 10:
            slice_from_s(z, 5, s_45); /* <-, line 163 */
            break;
        case 11:
            slice_from_s(z, 4, s_46); /* <-, line 164 */
            break;
        case 12:
            slice_from_s(z, 5, s_47); /* <-, line 165 */
            break;
        case 13:
            slice_from_s(z, 4, s_48); /* <-, line 166 */
            break;
        case 14:
            slice_from_s(z, 5, s_49); /* <-, line 167 */
            break;
    }
    return 1;
}

static int r_postlude(struct SN_env * z) {
    if (!(z->B[0])) return 0; /* Boolean test Y_found, line 185 */
    while(1) { /* repeat, line 185 */
        int c = z->c;
        while(1) { /* goto, line 185 */
            int c = z->c;
            z->bra = z->c; /* [, line 185 */
            if (!(eq_s(z, 1, s_50))) goto lab1;
            z->ket = z->c; /* ], line 185 */
            z->c = c;
            break;
        lab1:
            z->c = c;
            if (z->c >= z->l) goto lab0;
            z->c++;
        }
        slice_from_s(z, 1, s_51); /* <-, line 185 */
        continue;
    lab0:
        z->c = c;
        break;
    }
    return 1;
}

extern int english_stem(struct SN_env * z) {
    {   int c = z->c; /* or, line 189 */
        if (!r_exception(z)) goto lab1; /* call exception, line 189 */
        goto lab0;
    lab1:
        z->c = c;
        {   int c_test = z->c; /* test, line 191 */
            {   int c = z->c + 3;
                if (0 > c || c > z->l) return 0;
                z->c = c; /* hop, line 191 */
            }
            z->c = c_test;
        }
        {   int c = z->c; /* do, line 192 */
            if (!r_prelude(z)) goto lab2; /* call prelude, line 192 */
        lab2:
            z->c = c;
        }
        {   int c = z->c; /* do, line 193 */
            if (!r_mark_regions(z)) goto lab3; /* call mark_regions, line 193 */
        lab3:
            z->c = c;
        }
        z->lb = z->c; z->c = z->l; /* backwards, line 194 */

        {   int m = z->l - z->c; /* do, line 196 */
            if (!r_Step_1a(z)) goto lab4; /* call Step_1a, line 196 */
        lab4:
            z->c = z->l - m;
        }
        {   int m = z->l - z->c; /* do, line 197 */
            if (!r_Step_1b(z)) goto lab5; /* call Step_1b, line 197 */
        lab5:
            z->c = z->l - m;
        }
        {   int m = z->l - z->c; /* do, line 198 */
            if (!r_Step_1c(z)) goto lab6; /* call Step_1c, line 198 */
        lab6:
            z->c = z->l - m;
        }
        {   int m = z->l - z->c; /* do, line 200 */
            if (!r_Step_2(z)) goto lab7; /* call Step_2, line 200 */
        lab7:
            z->c = z->l - m;
        }
        {   int m = z->l - z->c; /* do, line 201 */
            if (!r_Step_3(z)) goto lab8; /* call Step_3, line 201 */
        lab8:
            z->c = z->l - m;
        }
        {   int m = z->l - z->c; /* do, line 202 */
            if (!r_Step_4(z)) goto lab9; /* call Step_4, line 202 */
        lab9:
            z->c = z->l - m;
        }
        {   int m = z->l - z->c; /* do, line 204 */
            if (!r_Step_5(z)) goto lab10; /* call Step_5, line 204 */
        lab10:
            z->c = z->l - m;
        }
        z->c = z->lb;
        {   int c = z->c; /* do, line 206 */
            if (!r_postlude(z)) goto lab11; /* call postlude, line 206 */
        lab11:
            z->c = c;
        }
    }
lab0:
    return 1;
}

extern struct SN_env * english_create_env(void) { return SN_create_env(0, 2, 1); }

extern void english_close_env(struct SN_env * z) { SN_close_env(z); }

