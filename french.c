
/* This file was generated automatically by the Snowball to ANSI C compiler */

#include "header.h"

extern int french_stem(struct SN_env * z);
static int r_un_accent(struct SN_env * z);
static int r_un_double(struct SN_env * z);
static int r_residual_suffix(struct SN_env * z);
static int r_verb_suffix(struct SN_env * z);
static int r_i_verb_suffix(struct SN_env * z);
static int r_standard_suffix(struct SN_env * z);
static int r_R2(struct SN_env * z);
static int r_R1(struct SN_env * z);
static int r_RV(struct SN_env * z);
static int r_mark_regions(struct SN_env * z);
static int r_postlude(struct SN_env * z);
static int r_prelude(struct SN_env * z);

static symbol s_0_1[1] = { 'I' };
static symbol s_0_2[1] = { 'U' };
static symbol s_0_3[1] = { 'Y' };

static struct among a_0[4] =
{
/*  0 */ { 0, 0, -1, 4, 0},
/*  1 */ { 1, s_0_1, 0, 1, 0},
/*  2 */ { 1, s_0_2, 0, 2, 0},
/*  3 */ { 1, s_0_3, 0, 3, 0}
};

static symbol s_1_0[3] = { 'i', 'q', 'U' };
static symbol s_1_1[3] = { 'a', 'b', 'l' };
static symbol s_1_2[3] = { 'e', 'u', 's' };
static symbol s_1_3[2] = { 'i', 'v' };

static struct among a_1[4] =
{
/*  0 */ { 3, s_1_0, -1, 3, 0},
/*  1 */ { 3, s_1_1, -1, 3, 0},
/*  2 */ { 3, s_1_2, -1, 2, 0},
/*  3 */ { 2, s_1_3, -1, 1, 0}
};

static symbol s_2_0[2] = { 'i', 'c' };
static symbol s_2_1[4] = { 'a', 'b', 'i', 'l' };
static symbol s_2_2[2] = { 'i', 'v' };

static struct among a_2[3] =
{
/*  0 */ { 2, s_2_0, -1, 2, 0},
/*  1 */ { 4, s_2_1, -1, 1, 0},
/*  2 */ { 2, s_2_2, -1, 3, 0}
};

static symbol s_3_0[4] = { 'i', 'q', 'U', 'e' };
static symbol s_3_1[6] = { 'a', 't', 'r', 'i', 'c', 'e' };
static symbol s_3_2[4] = { 'a', 'n', 'c', 'e' };
static symbol s_3_3[4] = { 'e', 'n', 'c', 'e' };
static symbol s_3_4[5] = { 'l', 'o', 'g', 'i', 'e' };
static symbol s_3_5[4] = { 'a', 'b', 'l', 'e' };
static symbol s_3_6[4] = { 'i', 's', 'm', 'e' };
static symbol s_3_7[4] = { 'e', 'u', 's', 'e' };
static symbol s_3_8[4] = { 'i', 's', 't', 'e' };
static symbol s_3_9[3] = { 'i', 'v', 'e' };
static symbol s_3_10[2] = { 'i', 'f' };
static symbol s_3_11[5] = { 'u', 's', 'i', 'o', 'n' };
static symbol s_3_12[5] = { 'a', 't', 'i', 'o', 'n' };
static symbol s_3_13[5] = { 'u', 't', 'i', 'o', 'n' };
static symbol s_3_14[5] = { 'a', 't', 'e', 'u', 'r' };
static symbol s_3_15[5] = { 'i', 'q', 'U', 'e', 's' };
static symbol s_3_16[7] = { 'a', 't', 'r', 'i', 'c', 'e', 's' };
static symbol s_3_17[5] = { 'a', 'n', 'c', 'e', 's' };
static symbol s_3_18[5] = { 'e', 'n', 'c', 'e', 's' };
static symbol s_3_19[6] = { 'l', 'o', 'g', 'i', 'e', 's' };
static symbol s_3_20[5] = { 'a', 'b', 'l', 'e', 's' };
static symbol s_3_21[5] = { 'i', 's', 'm', 'e', 's' };
static symbol s_3_22[5] = { 'e', 'u', 's', 'e', 's' };
static symbol s_3_23[5] = { 'i', 's', 't', 'e', 's' };
static symbol s_3_24[4] = { 'i', 'v', 'e', 's' };
static symbol s_3_25[3] = { 'i', 'f', 's' };
static symbol s_3_26[6] = { 'u', 's', 'i', 'o', 'n', 's' };
static symbol s_3_27[6] = { 'a', 't', 'i', 'o', 'n', 's' };
static symbol s_3_28[6] = { 'u', 't', 'i', 'o', 'n', 's' };
static symbol s_3_29[6] = { 'a', 't', 'e', 'u', 'r', 's' };
static symbol s_3_30[5] = { 'm', 'e', 'n', 't', 's' };
static symbol s_3_31[6] = { 'e', 'm', 'e', 'n', 't', 's' };
static symbol s_3_32[9] = { 'i', 's', 's', 'e', 'm', 'e', 'n', 't', 's' };
static symbol s_3_33[4] = { 'i', 't', 130, 's' };
static symbol s_3_34[4] = { 'm', 'e', 'n', 't' };
static symbol s_3_35[5] = { 'e', 'm', 'e', 'n', 't' };
static symbol s_3_36[8] = { 'i', 's', 's', 'e', 'm', 'e', 'n', 't' };
static symbol s_3_37[6] = { 'a', 'm', 'm', 'e', 'n', 't' };
static symbol s_3_38[6] = { 'e', 'm', 'm', 'e', 'n', 't' };
static symbol s_3_39[3] = { 'a', 'u', 'x' };
static symbol s_3_40[4] = { 'e', 'a', 'u', 'x' };
static symbol s_3_41[3] = { 'e', 'u', 'x' };
static symbol s_3_42[3] = { 'i', 't', 130 };

static struct among a_3[43] =
{
/*  0 */ { 4, s_3_0, -1, 1, 0},
/*  1 */ { 6, s_3_1, -1, 2, 0},
/*  2 */ { 4, s_3_2, -1, 1, 0},
/*  3 */ { 4, s_3_3, -1, 5, 0},
/*  4 */ { 5, s_3_4, -1, 3, 0},
/*  5 */ { 4, s_3_5, -1, 1, 0},
/*  6 */ { 4, s_3_6, -1, 1, 0},
/*  7 */ { 4, s_3_7, -1, 11, 0},
/*  8 */ { 4, s_3_8, -1, 1, 0},
/*  9 */ { 3, s_3_9, -1, 8, 0},
/* 10 */ { 2, s_3_10, -1, 8, 0},
/* 11 */ { 5, s_3_11, -1, 4, 0},
/* 12 */ { 5, s_3_12, -1, 2, 0},
/* 13 */ { 5, s_3_13, -1, 4, 0},
/* 14 */ { 5, s_3_14, -1, 2, 0},
/* 15 */ { 5, s_3_15, -1, 1, 0},
/* 16 */ { 7, s_3_16, -1, 2, 0},
/* 17 */ { 5, s_3_17, -1, 1, 0},
/* 18 */ { 5, s_3_18, -1, 5, 0},
/* 19 */ { 6, s_3_19, -1, 3, 0},
/* 20 */ { 5, s_3_20, -1, 1, 0},
/* 21 */ { 5, s_3_21, -1, 1, 0},
/* 22 */ { 5, s_3_22, -1, 11, 0},
/* 23 */ { 5, s_3_23, -1, 1, 0},
/* 24 */ { 4, s_3_24, -1, 8, 0},
/* 25 */ { 3, s_3_25, -1, 8, 0},
/* 26 */ { 6, s_3_26, -1, 4, 0},
/* 27 */ { 6, s_3_27, -1, 2, 0},
/* 28 */ { 6, s_3_28, -1, 4, 0},
/* 29 */ { 6, s_3_29, -1, 2, 0},
/* 30 */ { 5, s_3_30, -1, 15, 0},
/* 31 */ { 6, s_3_31, 30, 6, 0},
/* 32 */ { 9, s_3_32, 31, 12, 0},
/* 33 */ { 4, s_3_33, -1, 7, 0},
/* 34 */ { 4, s_3_34, -1, 15, 0},
/* 35 */ { 5, s_3_35, 34, 6, 0},
/* 36 */ { 8, s_3_36, 35, 12, 0},
/* 37 */ { 6, s_3_37, 34, 13, 0},
/* 38 */ { 6, s_3_38, 34, 14, 0},
/* 39 */ { 3, s_3_39, -1, 10, 0},
/* 40 */ { 4, s_3_40, 39, 9, 0},
/* 41 */ { 3, s_3_41, -1, 1, 0},
/* 42 */ { 3, s_3_42, -1, 7, 0}
};

static symbol s_4_0[3] = { 'i', 'r', 'a' };
static symbol s_4_1[2] = { 'i', 'e' };
static symbol s_4_2[4] = { 'i', 's', 's', 'e' };
static symbol s_4_3[7] = { 'i', 's', 's', 'a', 'n', 't', 'e' };
static symbol s_4_4[1] = { 'i' };
static symbol s_4_5[4] = { 'i', 'r', 'a', 'i' };
static symbol s_4_6[2] = { 'i', 'r' };
static symbol s_4_7[4] = { 'i', 'r', 'a', 's' };
static symbol s_4_8[3] = { 'i', 'e', 's' };
static symbol s_4_9[4] = { 140, 'm', 'e', 's' };
static symbol s_4_10[5] = { 'i', 's', 's', 'e', 's' };
static symbol s_4_11[8] = { 'i', 's', 's', 'a', 'n', 't', 'e', 's' };
static symbol s_4_12[4] = { 140, 't', 'e', 's' };
static symbol s_4_13[2] = { 'i', 's' };
static symbol s_4_14[5] = { 'i', 'r', 'a', 'i', 's' };
static symbol s_4_15[6] = { 'i', 's', 's', 'a', 'i', 's' };
static symbol s_4_16[6] = { 'i', 'r', 'i', 'o', 'n', 's' };
static symbol s_4_17[7] = { 'i', 's', 's', 'i', 'o', 'n', 's' };
static symbol s_4_18[5] = { 'i', 'r', 'o', 'n', 's' };
static symbol s_4_19[6] = { 'i', 's', 's', 'o', 'n', 's' };
static symbol s_4_20[7] = { 'i', 's', 's', 'a', 'n', 't', 's' };
static symbol s_4_21[2] = { 'i', 't' };
static symbol s_4_22[5] = { 'i', 'r', 'a', 'i', 't' };
static symbol s_4_23[6] = { 'i', 's', 's', 'a', 'i', 't' };
static symbol s_4_24[6] = { 'i', 's', 's', 'a', 'n', 't' };
static symbol s_4_25[7] = { 'i', 'r', 'a', 'I', 'e', 'n', 't' };
static symbol s_4_26[8] = { 'i', 's', 's', 'a', 'I', 'e', 'n', 't' };
static symbol s_4_27[5] = { 'i', 'r', 'e', 'n', 't' };
static symbol s_4_28[6] = { 'i', 's', 's', 'e', 'n', 't' };
static symbol s_4_29[5] = { 'i', 'r', 'o', 'n', 't' };
static symbol s_4_30[2] = { 140, 't' };
static symbol s_4_31[5] = { 'i', 'r', 'i', 'e', 'z' };
static symbol s_4_32[6] = { 'i', 's', 's', 'i', 'e', 'z' };
static symbol s_4_33[4] = { 'i', 'r', 'e', 'z' };
static symbol s_4_34[5] = { 'i', 's', 's', 'e', 'z' };

static struct among a_4[35] =
{
/*  0 */ { 3, s_4_0, -1, 1, 0},
/*  1 */ { 2, s_4_1, -1, 1, 0},
/*  2 */ { 4, s_4_2, -1, 1, 0},
/*  3 */ { 7, s_4_3, -1, 1, 0},
/*  4 */ { 1, s_4_4, -1, 1, 0},
/*  5 */ { 4, s_4_5, 4, 1, 0},
/*  6 */ { 2, s_4_6, -1, 1, 0},
/*  7 */ { 4, s_4_7, -1, 1, 0},
/*  8 */ { 3, s_4_8, -1, 1, 0},
/*  9 */ { 4, s_4_9, -1, 1, 0},
/* 10 */ { 5, s_4_10, -1, 1, 0},
/* 11 */ { 8, s_4_11, -1, 1, 0},
/* 12 */ { 4, s_4_12, -1, 1, 0},
/* 13 */ { 2, s_4_13, -1, 1, 0},
/* 14 */ { 5, s_4_14, 13, 1, 0},
/* 15 */ { 6, s_4_15, 13, 1, 0},
/* 16 */ { 6, s_4_16, -1, 1, 0},
/* 17 */ { 7, s_4_17, -1, 1, 0},
/* 18 */ { 5, s_4_18, -1, 1, 0},
/* 19 */ { 6, s_4_19, -1, 1, 0},
/* 20 */ { 7, s_4_20, -1, 1, 0},
/* 21 */ { 2, s_4_21, -1, 1, 0},
/* 22 */ { 5, s_4_22, 21, 1, 0},
/* 23 */ { 6, s_4_23, 21, 1, 0},
/* 24 */ { 6, s_4_24, -1, 1, 0},
/* 25 */ { 7, s_4_25, -1, 1, 0},
/* 26 */ { 8, s_4_26, -1, 1, 0},
/* 27 */ { 5, s_4_27, -1, 1, 0},
/* 28 */ { 6, s_4_28, -1, 1, 0},
/* 29 */ { 5, s_4_29, -1, 1, 0},
/* 30 */ { 2, s_4_30, -1, 1, 0},
/* 31 */ { 5, s_4_31, -1, 1, 0},
/* 32 */ { 6, s_4_32, -1, 1, 0},
/* 33 */ { 4, s_4_33, -1, 1, 0},
/* 34 */ { 5, s_4_34, -1, 1, 0}
};

static symbol s_5_0[1] = { 'a' };
static symbol s_5_1[3] = { 'e', 'r', 'a' };
static symbol s_5_2[4] = { 'a', 's', 's', 'e' };
static symbol s_5_3[4] = { 'a', 'n', 't', 'e' };
static symbol s_5_4[2] = { 130, 'e' };
static symbol s_5_5[2] = { 'a', 'i' };
static symbol s_5_6[4] = { 'e', 'r', 'a', 'i' };
static symbol s_5_7[2] = { 'e', 'r' };
static symbol s_5_8[2] = { 'a', 's' };
static symbol s_5_9[4] = { 'e', 'r', 'a', 's' };
static symbol s_5_10[4] = { 131, 'm', 'e', 's' };
static symbol s_5_11[5] = { 'a', 's', 's', 'e', 's' };
static symbol s_5_12[5] = { 'a', 'n', 't', 'e', 's' };
static symbol s_5_13[4] = { 131, 't', 'e', 's' };
static symbol s_5_14[3] = { 130, 'e', 's' };
static symbol s_5_15[3] = { 'a', 'i', 's' };
static symbol s_5_16[5] = { 'e', 'r', 'a', 'i', 's' };
static symbol s_5_17[4] = { 'i', 'o', 'n', 's' };
static symbol s_5_18[6] = { 'e', 'r', 'i', 'o', 'n', 's' };
static symbol s_5_19[7] = { 'a', 's', 's', 'i', 'o', 'n', 's' };
static symbol s_5_20[5] = { 'e', 'r', 'o', 'n', 's' };
static symbol s_5_21[4] = { 'a', 'n', 't', 's' };
static symbol s_5_22[2] = { 130, 's' };
static symbol s_5_23[3] = { 'a', 'i', 't' };
static symbol s_5_24[5] = { 'e', 'r', 'a', 'i', 't' };
static symbol s_5_25[3] = { 'a', 'n', 't' };
static symbol s_5_26[5] = { 'a', 'I', 'e', 'n', 't' };
static symbol s_5_27[7] = { 'e', 'r', 'a', 'I', 'e', 'n', 't' };
static symbol s_5_28[5] = { 138, 'r', 'e', 'n', 't' };
static symbol s_5_29[6] = { 'a', 's', 's', 'e', 'n', 't' };
static symbol s_5_30[5] = { 'e', 'r', 'o', 'n', 't' };
static symbol s_5_31[2] = { 131, 't' };
static symbol s_5_32[2] = { 'e', 'z' };
static symbol s_5_33[3] = { 'i', 'e', 'z' };
static symbol s_5_34[5] = { 'e', 'r', 'i', 'e', 'z' };
static symbol s_5_35[6] = { 'a', 's', 's', 'i', 'e', 'z' };
static symbol s_5_36[4] = { 'e', 'r', 'e', 'z' };
static symbol s_5_37[1] = { 130 };

static struct among a_5[38] =
{
/*  0 */ { 1, s_5_0, -1, 3, 0},
/*  1 */ { 3, s_5_1, 0, 2, 0},
/*  2 */ { 4, s_5_2, -1, 3, 0},
/*  3 */ { 4, s_5_3, -1, 3, 0},
/*  4 */ { 2, s_5_4, -1, 2, 0},
/*  5 */ { 2, s_5_5, -1, 3, 0},
/*  6 */ { 4, s_5_6, 5, 2, 0},
/*  7 */ { 2, s_5_7, -1, 2, 0},
/*  8 */ { 2, s_5_8, -1, 3, 0},
/*  9 */ { 4, s_5_9, 8, 2, 0},
/* 10 */ { 4, s_5_10, -1, 3, 0},
/* 11 */ { 5, s_5_11, -1, 3, 0},
/* 12 */ { 5, s_5_12, -1, 3, 0},
/* 13 */ { 4, s_5_13, -1, 3, 0},
/* 14 */ { 3, s_5_14, -1, 2, 0},
/* 15 */ { 3, s_5_15, -1, 3, 0},
/* 16 */ { 5, s_5_16, 15, 2, 0},
/* 17 */ { 4, s_5_17, -1, 1, 0},
/* 18 */ { 6, s_5_18, 17, 2, 0},
/* 19 */ { 7, s_5_19, 17, 3, 0},
/* 20 */ { 5, s_5_20, -1, 2, 0},
/* 21 */ { 4, s_5_21, -1, 3, 0},
/* 22 */ { 2, s_5_22, -1, 2, 0},
/* 23 */ { 3, s_5_23, -1, 3, 0},
/* 24 */ { 5, s_5_24, 23, 2, 0},
/* 25 */ { 3, s_5_25, -1, 3, 0},
/* 26 */ { 5, s_5_26, -1, 3, 0},
/* 27 */ { 7, s_5_27, 26, 2, 0},
/* 28 */ { 5, s_5_28, -1, 2, 0},
/* 29 */ { 6, s_5_29, -1, 3, 0},
/* 30 */ { 5, s_5_30, -1, 2, 0},
/* 31 */ { 2, s_5_31, -1, 3, 0},
/* 32 */ { 2, s_5_32, -1, 2, 0},
/* 33 */ { 3, s_5_33, 32, 2, 0},
/* 34 */ { 5, s_5_34, 33, 2, 0},
/* 35 */ { 6, s_5_35, 33, 3, 0},
/* 36 */ { 4, s_5_36, 32, 2, 0},
/* 37 */ { 1, s_5_37, -1, 2, 0}
};

static symbol s_6_0[1] = { 'e' };
static symbol s_6_1[4] = { 'I', 138, 'r', 'e' };
static symbol s_6_2[4] = { 'i', 138, 'r', 'e' };
static symbol s_6_3[3] = { 'i', 'o', 'n' };
static symbol s_6_4[3] = { 'I', 'e', 'r' };
static symbol s_6_5[3] = { 'i', 'e', 'r' };
static symbol s_6_6[1] = { 137 };

static struct among a_6[7] =
{
/*  0 */ { 1, s_6_0, -1, 3, 0},
/*  1 */ { 4, s_6_1, 0, 2, 0},
/*  2 */ { 4, s_6_2, 0, 2, 0},
/*  3 */ { 3, s_6_3, -1, 1, 0},
/*  4 */ { 3, s_6_4, -1, 2, 0},
/*  5 */ { 3, s_6_5, -1, 2, 0},
/*  6 */ { 1, s_6_6, -1, 4, 0}
};

static symbol s_7_0[3] = { 'e', 'l', 'l' };
static symbol s_7_1[4] = { 'e', 'i', 'l', 'l' };
static symbol s_7_2[3] = { 'e', 'n', 'n' };
static symbol s_7_3[3] = { 'o', 'n', 'n' };
static symbol s_7_4[3] = { 'e', 't', 't' };

static struct among a_7[5] =
{
/*  0 */ { 3, s_7_0, -1, -1, 0},
/*  1 */ { 4, s_7_1, -1, -1, 0},
/*  2 */ { 3, s_7_2, -1, -1, 0},
/*  3 */ { 3, s_7_3, -1, -1, 0},
/*  4 */ { 3, s_7_4, -1, -1, 0}
};

static unsigned char g_v[] = { 17, 65, 16, 1, 150, 15, 100 };

static unsigned char g_keep_with_s[] = { 1, 65, 20, 0, 0, 2 };

static symbol s_0[] = { 'u' };
static symbol s_1[] = { 'U' };
static symbol s_2[] = { 'i' };
static symbol s_3[] = { 'I' };
static symbol s_4[] = { 'y' };
static symbol s_5[] = { 'Y' };
static symbol s_6[] = { 'y' };
static symbol s_7[] = { 'Y' };
static symbol s_8[] = { 'q' };
static symbol s_9[] = { 'u' };
static symbol s_10[] = { 'U' };
static symbol s_11[] = { 'i' };
static symbol s_12[] = { 'u' };
static symbol s_13[] = { 'y' };
static symbol s_14[] = { 'i', 'c' };
static symbol s_15[] = { 'i', 'q', 'U' };
static symbol s_16[] = { 'l', 'o', 'g' };
static symbol s_17[] = { 'u' };
static symbol s_18[] = { 'e', 'n', 't' };
static symbol s_19[] = { 'a', 't' };
static symbol s_20[] = { 'e', 'u', 'x' };
static symbol s_21[] = { 'a', 'b', 'l' };
static symbol s_22[] = { 'i', 'q', 'U' };
static symbol s_23[] = { 'a', 't' };
static symbol s_24[] = { 'i', 'c' };
static symbol s_25[] = { 'i', 'q', 'U' };
static symbol s_26[] = { 'e', 'a', 'u' };
static symbol s_27[] = { 'a', 'l' };
static symbol s_28[] = { 'e', 'u', 'x' };
static symbol s_29[] = { 'a', 'n', 't' };
static symbol s_30[] = { 'e', 'n', 't' };
static symbol s_31[] = { 'e' };
static symbol s_32[] = { 's' };
static symbol s_33[] = { 's' };
static symbol s_34[] = { 't' };
static symbol s_35[] = { 'i' };
static symbol s_36[] = { 'g', 'u' };
static symbol s_37[] = { 130 };
static symbol s_38[] = { 138 };
static symbol s_39[] = { 'e' };
static symbol s_40[] = { 'Y' };
static symbol s_41[] = { 'i' };
static symbol s_42[] = { 135 };
static symbol s_43[] = { 'c' };

static int r_prelude(struct SN_env * z) {
    while(1) { /* repeat, line 38 */
        int c = z->c;
        while(1) { /* goto, line 38 */
            int c = z->c;
            {   int c = z->c; /* or, line 44 */
                if (!(in_grouping(z, g_v, 97, 151))) goto lab3;
                z->bra = z->c; /* [, line 40 */
                {   int c = z->c; /* or, line 40 */
                    if (!(eq_s(z, 1, s_0))) goto lab5;
                    z->ket = z->c; /* ], line 40 */
                    if (!(in_grouping(z, g_v, 97, 151))) goto lab5;
                    slice_from_s(z, 1, s_1); /* <-, line 40 */
                    goto lab4;
                lab5:
                    z->c = c;
                    if (!(eq_s(z, 1, s_2))) goto lab6;
                    z->ket = z->c; /* ], line 41 */
                    if (!(in_grouping(z, g_v, 97, 151))) goto lab6;
                    slice_from_s(z, 1, s_3); /* <-, line 41 */
                    goto lab4;
                lab6:
                    z->c = c;
                    if (!(eq_s(z, 1, s_4))) goto lab3;
                    z->ket = z->c; /* ], line 42 */
                    slice_from_s(z, 1, s_5); /* <-, line 42 */
                }
            lab4:
                goto lab2;
            lab3:
                z->c = c;
                z->bra = z->c; /* [, line 45 */
                if (!(eq_s(z, 1, s_6))) goto lab7;
                z->ket = z->c; /* ], line 45 */
                if (!(in_grouping(z, g_v, 97, 151))) goto lab7;
                slice_from_s(z, 1, s_7); /* <-, line 45 */
                goto lab2;
            lab7:
                z->c = c;
                if (!(eq_s(z, 1, s_8))) goto lab1;
                z->bra = z->c; /* [, line 47 */
                if (!(eq_s(z, 1, s_9))) goto lab1;
                z->ket = z->c; /* ], line 47 */
                slice_from_s(z, 1, s_10); /* <-, line 47 */
            }
        lab2:
            z->c = c;
            break;
        lab1:
            z->c = c;
            if (z->c >= z->l) goto lab0;
            z->c++;
        }
        continue;
    lab0:
        z->c = c;
        break;
    }
    return 1;
}

static int r_mark_regions(struct SN_env * z) {
    z->I[0] = z->l;
    z->I[1] = z->l;
    z->I[2] = z->l;
    {   int c = z->c; /* do, line 56 */
        {   int c = z->c; /* or, line 57 */
            if (!(in_grouping(z, g_v, 97, 151))) goto lab2;
            if (!(in_grouping(z, g_v, 97, 151))) goto lab2;
            if (z->c >= z->l) goto lab2;
            z->c++; /* next, line 57 */
            goto lab1;
        lab2:
            z->c = c;
            if (z->c >= z->l) goto lab0;
            z->c++; /* next, line 57 */
            while(1) { /* gopast, line 57 */
                if (!(in_grouping(z, g_v, 97, 151))) goto lab3;
                break;
            lab3:
                if (z->c >= z->l) goto lab0;
                z->c++;
            }
        }
    lab1:
        z->I[0] = z->c; /* setmark pV, line 58 */
    lab0:
        z->c = c;
    }
    {   int c = z->c; /* do, line 60 */
        while(1) { /* gopast, line 61 */
            if (!(in_grouping(z, g_v, 97, 151))) goto lab5;
            break;
        lab5:
            if (z->c >= z->l) goto lab4;
            z->c++;
        }
        while(1) { /* gopast, line 61 */
            if (!(out_grouping(z, g_v, 97, 151))) goto lab6;
            break;
        lab6:
            if (z->c >= z->l) goto lab4;
            z->c++;
        }
        z->I[1] = z->c; /* setmark p1, line 61 */
        while(1) { /* gopast, line 62 */
            if (!(in_grouping(z, g_v, 97, 151))) goto lab7;
            break;
        lab7:
            if (z->c >= z->l) goto lab4;
            z->c++;
        }
        while(1) { /* gopast, line 62 */
            if (!(out_grouping(z, g_v, 97, 151))) goto lab8;
            break;
        lab8:
            if (z->c >= z->l) goto lab4;
            z->c++;
        }
        z->I[2] = z->c; /* setmark p2, line 62 */
    lab4:
        z->c = c;
    }
    return 1;
}

static int r_postlude(struct SN_env * z) {
    int among_var;
    while(1) { /* repeat, line 66 */
        int c = z->c;
        z->bra = z->c; /* [, line 68 */
        among_var = find_among(z, a_0, 4); /* substring, line 68 */
        if (!(among_var)) goto lab0;
        z->ket = z->c; /* ], line 68 */
        switch(among_var) {
            case 0: goto lab0;
            case 1:
                slice_from_s(z, 1, s_11); /* <-, line 69 */
                break;
            case 2:
                slice_from_s(z, 1, s_12); /* <-, line 70 */
                break;
            case 3:
                slice_from_s(z, 1, s_13); /* <-, line 71 */
                break;
            case 4:
                if (z->c >= z->l) goto lab0;
                z->c++; /* next, line 72 */
                break;
        }
        continue;
    lab0:
        z->c = c;
        break;
    }
    return 1;
}

static int r_RV(struct SN_env * z) {
    if (!(z->I[0] <= z->c)) return 0;
    return 1;
}

static int r_R1(struct SN_env * z) {
    if (!(z->I[1] <= z->c)) return 0;
    return 1;
}

static int r_R2(struct SN_env * z) {
    if (!(z->I[2] <= z->c)) return 0;
    return 1;
}

static int r_standard_suffix(struct SN_env * z) {
    int among_var;
    z->ket = z->c; /* [, line 84 */
    among_var = find_among_b(z, a_3, 43); /* substring, line 84 */
    if (!(among_var)) return 0;
    z->bra = z->c; /* ], line 84 */
    switch(among_var) {
        case 0: return 0;
        case 1:
            if (!r_R2(z)) return 0; /* call R2, line 88 */
            slice_del(z); /* delete, line 88 */
            break;
        case 2:
            if (!r_R2(z)) return 0; /* call R2, line 91 */
            slice_del(z); /* delete, line 91 */
            {   int m = z->l - z->c; /* try, line 92 */
                z->ket = z->c; /* [, line 92 */
                if (!(eq_s_b(z, 2, s_14))) { z->c = z->l - m; goto lab0; }
                z->bra = z->c; /* ], line 92 */
                {   int m = z->l - z->c; /* or, line 92 */
                    if (!r_R2(z)) goto lab2; /* call R2, line 92 */
                    slice_del(z); /* delete, line 92 */
                    goto lab1;
                lab2:
                    z->c = z->l - m;
                    slice_from_s(z, 3, s_15); /* <-, line 92 */
                }
            lab1:
            lab0:
                ;
            }
            break;
        case 3:
            if (!r_R2(z)) return 0; /* call R2, line 96 */
            slice_from_s(z, 3, s_16); /* <-, line 96 */
            break;
        case 4:
            if (!r_R2(z)) return 0; /* call R2, line 99 */
            slice_from_s(z, 1, s_17); /* <-, line 99 */
            break;
        case 5:
            if (!r_R2(z)) return 0; /* call R2, line 102 */
            slice_from_s(z, 3, s_18); /* <-, line 102 */
            break;
        case 6:
            if (!r_RV(z)) return 0; /* call RV, line 106 */
            slice_del(z); /* delete, line 106 */
            {   int m = z->l - z->c; /* try, line 107 */
                z->ket = z->c; /* [, line 108 */
                among_var = find_among_b(z, a_1, 4); /* substring, line 108 */
                if (!(among_var)) { z->c = z->l - m; goto lab3; }
                z->bra = z->c; /* ], line 108 */
                switch(among_var) {
                    case 0: { z->c = z->l - m; goto lab3; }
                    case 1:
                        if (!r_R2(z)) { z->c = z->l - m; goto lab3; } /* call R2, line 109 */
                        slice_del(z); /* delete, line 109 */
                        z->ket = z->c; /* [, line 109 */
                        if (!(eq_s_b(z, 2, s_19))) { z->c = z->l - m; goto lab3; }
                        z->bra = z->c; /* ], line 109 */
                        if (!r_R2(z)) { z->c = z->l - m; goto lab3; } /* call R2, line 109 */
                        slice_del(z); /* delete, line 109 */
                        break;
                    case 2:
                        {   int m = z->l - z->c; /* or, line 110 */
                            if (!r_R2(z)) goto lab5; /* call R2, line 110 */
                            slice_del(z); /* delete, line 110 */
                            goto lab4;
                        lab5:
                            z->c = z->l - m;
                            if (!r_R1(z)) { z->c = z->l - m; goto lab3; } /* call R1, line 110 */
                            slice_from_s(z, 3, s_20); /* <-, line 110 */
                        }
                    lab4:
                        break;
                    case 3:
                        if (!r_R2(z)) { z->c = z->l - m; goto lab3; } /* call R2, line 111 */
                        slice_del(z); /* delete, line 111 */
                        break;
                }
            lab3:
                ;
            }
            break;
        case 7:
            if (!r_R2(z)) return 0; /* call R2, line 118 */
            slice_del(z); /* delete, line 118 */
            {   int m = z->l - z->c; /* try, line 119 */
                z->ket = z->c; /* [, line 120 */
                among_var = find_among_b(z, a_2, 3); /* substring, line 120 */
                if (!(among_var)) { z->c = z->l - m; goto lab6; }
                z->bra = z->c; /* ], line 120 */
                switch(among_var) {
                    case 0: { z->c = z->l - m; goto lab6; }
                    case 1:
                        {   int m = z->l - z->c; /* or, line 121 */
                            if (!r_R2(z)) goto lab8; /* call R2, line 121 */
                            slice_del(z); /* delete, line 121 */
                            goto lab7;
                        lab8:
                            z->c = z->l - m;
                            slice_from_s(z, 3, s_21); /* <-, line 121 */
                        }
                    lab7:
                        break;
                    case 2:
                        {   int m = z->l - z->c; /* or, line 122 */
                            if (!r_R2(z)) goto lab10; /* call R2, line 122 */
                            slice_del(z); /* delete, line 122 */
                            goto lab9;
                        lab10:
                            z->c = z->l - m;
                            slice_from_s(z, 3, s_22); /* <-, line 122 */
                        }
                    lab9:
                        break;
                    case 3:
                        if (!r_R2(z)) { z->c = z->l - m; goto lab6; } /* call R2, line 123 */
                        slice_del(z); /* delete, line 123 */
                        break;
                }
            lab6:
                ;
            }
            break;
        case 8:
            if (!r_R2(z)) return 0; /* call R2, line 130 */
            slice_del(z); /* delete, line 130 */
            {   int m = z->l - z->c; /* try, line 131 */
                z->ket = z->c; /* [, line 131 */
                if (!(eq_s_b(z, 2, s_23))) { z->c = z->l - m; goto lab11; }
                z->bra = z->c; /* ], line 131 */
                if (!r_R2(z)) { z->c = z->l - m; goto lab11; } /* call R2, line 131 */
                slice_del(z); /* delete, line 131 */
                z->ket = z->c; /* [, line 131 */
                if (!(eq_s_b(z, 2, s_24))) { z->c = z->l - m; goto lab11; }
                z->bra = z->c; /* ], line 131 */
                {   int m = z->l - z->c; /* or, line 131 */
                    if (!r_R2(z)) goto lab13; /* call R2, line 131 */
                    slice_del(z); /* delete, line 131 */
                    goto lab12;
                lab13:
                    z->c = z->l - m;
                    slice_from_s(z, 3, s_25); /* <-, line 131 */
                }
            lab12:
            lab11:
                ;
            }
            break;
        case 9:
            slice_from_s(z, 3, s_26); /* <-, line 133 */
            break;
        case 10:
            if (!r_R1(z)) return 0; /* call R1, line 134 */
            slice_from_s(z, 2, s_27); /* <-, line 134 */
            break;
        case 11:
            {   int m = z->l - z->c; /* or, line 136 */
                if (!r_R2(z)) goto lab15; /* call R2, line 136 */
                slice_del(z); /* delete, line 136 */
                goto lab14;
            lab15:
                z->c = z->l - m;
                if (!r_R1(z)) return 0; /* call R1, line 136 */
                slice_from_s(z, 3, s_28); /* <-, line 136 */
            }
        lab14:
            break;
        case 12:
            if (!r_R1(z)) return 0; /* call R1, line 139 */
            if (!(out_grouping_b(z, g_v, 97, 151))) return 0;
            slice_del(z); /* delete, line 139 */
            break;
        case 13:
            if (!r_RV(z)) return 0; /* call RV, line 144 */
            slice_from_s(z, 3, s_29); /* <-, line 144 */
            return 0; /* fail, line 144 */
            break;
        case 14:
            if (!r_RV(z)) return 0; /* call RV, line 145 */
            slice_from_s(z, 3, s_30); /* <-, line 145 */
            return 0; /* fail, line 145 */
            break;
        case 15:
            {   int m_test = z->l - z->c; /* test, line 147 */
                if (!(in_grouping_b(z, g_v, 97, 151))) return 0;
                if (!r_RV(z)) return 0; /* call RV, line 147 */
                z->c = z->l - m_test;
            }
            slice_del(z); /* delete, line 147 */
            return 0; /* fail, line 147 */
            break;
    }
    return 1;
}

static int r_i_verb_suffix(struct SN_env * z) {
    int among_var;
    {   int m = z->l - z->c; /* setlimit, line 152 */
        int m3;
        if (z->c < z->I[0]) return 0;
        z->c = z->I[0]; /* tomark, line 152 */
        m3 = z->lb; z->lb = z->c;
        z->c = z->l - m;
        z->ket = z->c; /* [, line 153 */
        among_var = find_among_b(z, a_4, 35); /* substring, line 153 */
        if (!(among_var)) { z->lb = m3; return 0; }
        z->bra = z->c; /* ], line 153 */
        switch(among_var) {
            case 0: { z->lb = m3; return 0; }
            case 1:
                if (!(out_grouping_b(z, g_v, 97, 151))) { z->lb = m3; return 0; }
                slice_del(z); /* delete, line 159 */
                break;
        }
        z->lb = m3;
    }
    return 1;
}

static int r_verb_suffix(struct SN_env * z) {
    int among_var;
    {   int m = z->l - z->c; /* setlimit, line 163 */
        int m3;
        if (z->c < z->I[0]) return 0;
        z->c = z->I[0]; /* tomark, line 163 */
        m3 = z->lb; z->lb = z->c;
        z->c = z->l - m;
        z->ket = z->c; /* [, line 164 */
        among_var = find_among_b(z, a_5, 38); /* substring, line 164 */
        if (!(among_var)) { z->lb = m3; return 0; }
        z->bra = z->c; /* ], line 164 */
        switch(among_var) {
            case 0: { z->lb = m3; return 0; }
            case 1:
                if (!r_R2(z)) { z->lb = m3; return 0; } /* call R2, line 166 */
                slice_del(z); /* delete, line 166 */
                break;
            case 2:
                slice_del(z); /* delete, line 174 */
                break;
            case 3:
                slice_del(z); /* delete, line 179 */
                {   int m = z->l - z->c; /* try, line 180 */
                    z->ket = z->c; /* [, line 180 */
                    if (!(eq_s_b(z, 1, s_31))) { z->c = z->l - m; goto lab0; }
                    z->bra = z->c; /* ], line 180 */
                    slice_del(z); /* delete, line 180 */
                lab0:
                    ;
                }
                break;
        }
        z->lb = m3;
    }
    return 1;
}

static int r_residual_suffix(struct SN_env * z) {
    int among_var;
    {   int m = z->l - z->c; /* try, line 188 */
        z->ket = z->c; /* [, line 188 */
        if (!(eq_s_b(z, 1, s_32))) { z->c = z->l - m; goto lab0; }
        z->bra = z->c; /* ], line 188 */
        {   int m_test = z->l - z->c; /* test, line 188 */
            if (!(out_grouping_b(z, g_keep_with_s, 97, 138))) { z->c = z->l - m; goto lab0; }
            z->c = z->l - m_test;
        }
        slice_del(z); /* delete, line 188 */
    lab0:
        ;
    }
    {   int m = z->l - z->c; /* setlimit, line 189 */
        int m3;
        if (z->c < z->I[0]) return 0;
        z->c = z->I[0]; /* tomark, line 189 */
        m3 = z->lb; z->lb = z->c;
        z->c = z->l - m;
        z->ket = z->c; /* [, line 190 */
        among_var = find_among_b(z, a_6, 7); /* substring, line 190 */
        if (!(among_var)) { z->lb = m3; return 0; }
        z->bra = z->c; /* ], line 190 */
        switch(among_var) {
            case 0: { z->lb = m3; return 0; }
            case 1:
                if (!r_R2(z)) { z->lb = m3; return 0; } /* call R2, line 191 */
                {   int m = z->l - z->c; /* or, line 191 */
                    if (!(eq_s_b(z, 1, s_33))) goto lab2;
                    goto lab1;
                lab2:
                    z->c = z->l - m;
                    if (!(eq_s_b(z, 1, s_34))) { z->lb = m3; return 0; }
                }
            lab1:
                slice_del(z); /* delete, line 191 */
                break;
            case 2:
                slice_from_s(z, 1, s_35); /* <-, line 193 */
                break;
            case 3:
                slice_del(z); /* delete, line 194 */
                break;
            case 4:
                if (!(eq_s_b(z, 2, s_36))) { z->lb = m3; return 0; }
                slice_del(z); /* delete, line 195 */
                break;
        }
        z->lb = m3;
    }
    return 1;
}

static int r_un_double(struct SN_env * z) {
    {   int m_test = z->l - z->c; /* test, line 201 */
        if (!(find_among_b(z, a_7, 5))) return 0; /* among, line 201 */
        z->c = z->l - m_test;
    }
    z->ket = z->c; /* [, line 201 */
    if (z->c <= z->lb) return 0;
    z->c--; /* next, line 201 */
    z->bra = z->c; /* ], line 201 */
    slice_del(z); /* delete, line 201 */
    return 1;
}

static int r_un_accent(struct SN_env * z) {
    {   int i = 1;
        while(1) { /* atleast, line 205 */
            if (!(out_grouping_b(z, g_v, 97, 151))) goto lab0;
            i--;
            continue;
        lab0:
            break;
        }
        if (i > 0) return 0;
    }
    z->ket = z->c; /* [, line 206 */
    {   int m = z->l - z->c; /* or, line 206 */
        if (!(eq_s_b(z, 1, s_37))) goto lab2;
        goto lab1;
    lab2:
        z->c = z->l - m;
        if (!(eq_s_b(z, 1, s_38))) return 0;
    }
lab1:
    z->bra = z->c; /* ], line 206 */
    slice_from_s(z, 1, s_39); /* <-, line 206 */
    return 1;
}

extern int french_stem(struct SN_env * z) {
    {   int c = z->c; /* do, line 212 */
        if (!r_prelude(z)) goto lab0; /* call prelude, line 212 */
    lab0:
        z->c = c;
    }
    {   int c = z->c; /* do, line 213 */
        if (!r_mark_regions(z)) goto lab1; /* call mark_regions, line 213 */
    lab1:
        z->c = c;
    }
    z->lb = z->c; z->c = z->l; /* backwards, line 214 */

    {   int m = z->l - z->c; /* do, line 216 */
        {   int m = z->l - z->c; /* or, line 226 */
            {   int m = z->l - z->c; /* and, line 222 */
                {   int m = z->l - z->c; /* or, line 218 */
                    if (!r_standard_suffix(z)) goto lab6; /* call standard_suffix, line 218 */
                    goto lab5;
                lab6:
                    z->c = z->l - m;
                    if (!r_i_verb_suffix(z)) goto lab7; /* call i_verb_suffix, line 219 */
                    goto lab5;
                lab7:
                    z->c = z->l - m;
                    if (!r_verb_suffix(z)) goto lab4; /* call verb_suffix, line 220 */
                }
            lab5:
                z->c = z->l - m;
                {   int m = z->l - z->c; /* try, line 223 */
                    z->ket = z->c; /* [, line 223 */
                    {   int m = z->l - z->c; /* or, line 223 */
                        if (!(eq_s_b(z, 1, s_40))) goto lab10;
                        z->bra = z->c; /* ], line 223 */
                        slice_from_s(z, 1, s_41); /* <-, line 223 */
                        goto lab9;
                    lab10:
                        z->c = z->l - m;
                        if (!(eq_s_b(z, 1, s_42))) { z->c = z->l - m; goto lab8; }
                        z->bra = z->c; /* ], line 224 */
                        slice_from_s(z, 1, s_43); /* <-, line 224 */
                    }
                lab9:
                lab8:
                    ;
                }
            }
            goto lab3;
        lab4:
            z->c = z->l - m;
            if (!r_residual_suffix(z)) goto lab2; /* call residual_suffix, line 227 */
        }
    lab3:
    lab2:
        z->c = z->l - m;
    }
    {   int m = z->l - z->c; /* do, line 232 */
        if (!r_un_double(z)) goto lab11; /* call un_double, line 232 */
    lab11:
        z->c = z->l - m;
    }
    {   int m = z->l - z->c; /* do, line 233 */
        if (!r_un_accent(z)) goto lab12; /* call un_accent, line 233 */
    lab12:
        z->c = z->l - m;
    }
    z->c = z->lb;
    {   int c = z->c; /* do, line 235 */
        if (!r_postlude(z)) goto lab13; /* call postlude, line 235 */
    lab13:
        z->c = c;
    }
    return 1;
}

extern struct SN_env * french_create_env(void) { return SN_create_env(0, 3, 0); }

extern void french_close_env(struct SN_env * z) { SN_close_env(z); }

