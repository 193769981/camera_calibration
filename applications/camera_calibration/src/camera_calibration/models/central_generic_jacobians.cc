// Copyright 2019 ETH Zürich, Thomas Schöps
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are met:
//
// 1. Redistributions of source code must retain the above copyright notice,
//    this list of conditions and the following disclaimer.
//
// 2. Redistributions in binary form must reproduce the above copyright notice,
//    this list of conditions and the following disclaimer in the documentation
//    and/or other materials provided with the distribution.
//
// 3. Neither the name of the copyright holder nor the names of its contributors
//    may be used to endorse or promote products derived from this software
//    without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
// AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
// ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
// LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
// CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
// SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
// INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
// CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
// ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
// POSSIBILITY OF SUCH DAMAGE.

namespace vis {

// opcount = 497
template <typename Scalar>
inline void CentralGenericBSplineDirectionCostFunction_ComputeResidualAndJacobian(Scalar frac_x, Scalar frac_y, Scalar measurement_x, Scalar measurement_y, Scalar measurement_z, Scalar p00_0, Scalar p00_1, Scalar p00_2, Scalar p01_0, Scalar p01_1, Scalar p01_2, Scalar p02_0, Scalar p02_1, Scalar p02_2, Scalar p03_0, Scalar p03_1, Scalar p03_2, Scalar p10_0, Scalar p10_1, Scalar p10_2, Scalar p11_0, Scalar p11_1, Scalar p11_2, Scalar p12_0, Scalar p12_1, Scalar p12_2, Scalar p13_0, Scalar p13_1, Scalar p13_2, Scalar p20_0, Scalar p20_1, Scalar p20_2, Scalar p21_0, Scalar p21_1, Scalar p21_2, Scalar p22_0, Scalar p22_1, Scalar p22_2, Scalar p23_0, Scalar p23_1, Scalar p23_2, Scalar p30_0, Scalar p30_1, Scalar p30_2, Scalar p31_0, Scalar p31_1, Scalar p31_2, Scalar p32_0, Scalar p32_1, Scalar p32_2, Scalar p33_0, Scalar p33_1, Scalar p33_2, Scalar* residuals, Scalar* jacobian_row_0, Scalar* jacobian_row_1, Scalar* jacobian_row_2) {
  const Scalar term0 = 0.166666666666667*frac_y;
  const Scalar term1 = -term0 + 0.666666666666667;
  const Scalar term2 = (frac_y - 4) * (frac_y - 4);
  const Scalar term3 = term1*term2;
  const Scalar term4 = 0.166666666666667*frac_x;
  const Scalar term5 = -term4 + 0.666666666666667;
  const Scalar term6 = (frac_x - 4) * (frac_x - 4);
  const Scalar term7 = term5*term6;
  const Scalar term8 = term4 - 0.5;
  const Scalar term9 = (frac_x - 3) * (frac_x - 3);
  const Scalar term10 = term8*term9;
  const Scalar term11 = frac_x * frac_x;
  const Scalar term12 = 0.5*frac_x*term11;
  const Scalar term13 = 19.5*frac_x - 5.5*term11 + term12 - 21.8333333333333;
  const Scalar term14 = -16*frac_x + 5*term11 - term12 + 16.6666666666667;
  const Scalar term15 = term0 - 0.5;
  const Scalar term16 = (frac_y - 3) * (frac_y - 3);
  const Scalar term17 = term15*term16;
  const Scalar term18 = frac_y * frac_y;
  const Scalar term19 = 0.5*frac_y*term18;
  const Scalar term20 = -16*frac_y + 5*term18 - term19 + 16.6666666666667;
  const Scalar term21 = 19.5*frac_y - 5.5*term18 + term19 - 21.8333333333333;
  const Scalar term22 = term17*(p30_0*term7 + p31_0*term13 + p32_0*term14 + p33_0*term10) + term20*(p20_0*term7 + p21_0*term13 + p22_0*term14 + p23_0*term10) + term21*(p10_0*term7 + p11_0*term13 + p12_0*term14 + p13_0*term10) + term3*(p00_0*term7 + p01_0*term13 + p02_0*term14 + p03_0*term10);
  const Scalar term23 = term22 * term22;
  const Scalar term24 = term17*(p30_1*term7 + p31_1*term13 + p32_1*term14 + p33_1*term10) + term20*(p20_1*term7 + p21_1*term13 + p22_1*term14 + p23_1*term10) + term21*(p10_1*term7 + p11_1*term13 + p12_1*term14 + p13_1*term10) + term3*(p00_1*term7 + p01_1*term13 + p02_1*term14 + p03_1*term10);
  const Scalar term25 = term24 * term24;
  const Scalar term26 = term17*(p30_2*term7 + p31_2*term13 + p32_2*term14 + p33_2*term10) + term20*(p20_2*term7 + p21_2*term13 + p22_2*term14 + p23_2*term10) + term21*(p10_2*term7 + p11_2*term13 + p12_2*term14 + p13_2*term10) + term3*(p00_2*term7 + p01_2*term13 + p02_2*term14 + p03_2*term10);
  const Scalar term27 = term26 * term26;
  const Scalar term28 = term23 + term25 + term27;
  const Scalar term29 = 1. / sqrt(term28);
  const Scalar term30 = term29*term5*term6;
  const Scalar term31 = term3*term30;
  const Scalar term32b = 1. / sqrt(term28);
  const Scalar term32 = term32b * term32b * term32b;
  const Scalar term33 = term1*term2*term32*term5*term6;
  const Scalar term34 = term1*term2*term22*term32*term5*term6;
  const Scalar term35 = -term24*term34;
  const Scalar term36 = -term26*term34;
  const Scalar term37 = term1*term2*term29;
  const Scalar term38 = term13*term37;
  const Scalar term39 = term1*term13*term2*term32;
  const Scalar term40 = term1*term13*term2*term22*term32;
  const Scalar term41 = -term24*term40;
  const Scalar term42 = -term26*term40;
  const Scalar term43 = term14*term37;
  const Scalar term44 = term1*term14*term2*term32;
  const Scalar term45 = term1*term14*term2*term22*term32;
  const Scalar term46 = -term24*term45;
  const Scalar term47 = -term26*term45;
  const Scalar term48 = term29*term8*term9;
  const Scalar term49 = term3*term48;
  const Scalar term50 = term1*term2*term32*term8*term9;
  const Scalar term51 = term1*term2*term22*term32*term8*term9;
  const Scalar term52 = -term24*term51;
  const Scalar term53 = -term26*term51;
  const Scalar term54 = term21*term30;
  const Scalar term55 = term21*term32*term5*term6;
  const Scalar term56 = term21*term22*term32*term5*term6;
  const Scalar term57 = -term24*term56;
  const Scalar term58 = -term26*term56;
  const Scalar term59 = term13*term29;
  const Scalar term60 = term21*term59;
  const Scalar term61 = term13*term21*term32;
  const Scalar term62 = term13*term21*term22*term32;
  const Scalar term63 = -term24*term62;
  const Scalar term64 = -term26*term62;
  const Scalar term65 = term14*term29;
  const Scalar term66 = term21*term65;
  const Scalar term67 = term14*term21*term32;
  const Scalar term68 = term14*term21*term22*term32;
  const Scalar term69 = -term24*term68;
  const Scalar term70 = -term26*term68;
  const Scalar term71 = term21*term48;
  const Scalar term72 = term21*term32*term8*term9;
  const Scalar term73 = term21*term22*term32*term8*term9;
  const Scalar term74 = -term24*term73;
  const Scalar term75 = -term26*term73;
  const Scalar term76 = term20*term30;
  const Scalar term77 = term20*term32*term5*term6;
  const Scalar term78 = term20*term22*term32*term5*term6;
  const Scalar term79 = -term24*term78;
  const Scalar term80 = -term26*term78;
  const Scalar term81 = term20*term59;
  const Scalar term82 = term13*term20*term32;
  const Scalar term83 = term13*term20*term22*term32;
  const Scalar term84 = -term24*term83;
  const Scalar term85 = -term26*term83;
  const Scalar term86 = term20*term65;
  const Scalar term87 = term14*term20*term32;
  const Scalar term88 = term14*term20*term22*term32;
  const Scalar term89 = -term24*term88;
  const Scalar term90 = -term26*term88;
  const Scalar term91 = term20*term48;
  const Scalar term92 = term20*term32*term8*term9;
  const Scalar term93 = term20*term22*term32*term8*term9;
  const Scalar term94 = -term24*term93;
  const Scalar term95 = -term26*term93;
  const Scalar term96 = term17*term30;
  const Scalar term97 = term15*term16*term32*term5*term6;
  const Scalar term98 = term15*term16*term22*term32*term5*term6;
  const Scalar term99 = -term24*term98;
  const Scalar term100 = -term26*term98;
  const Scalar term101 = term15*term16*term29;
  const Scalar term102 = term101*term13;
  const Scalar term103 = term13*term15*term16*term32;
  const Scalar term104 = term13*term15*term16*term22*term32;
  const Scalar term105 = -term104*term24;
  const Scalar term106 = -term104*term26;
  const Scalar term107 = term101*term14;
  const Scalar term108 = term14*term15*term16*term32;
  const Scalar term109 = term14*term15*term16*term22*term32;
  const Scalar term110 = -term109*term24;
  const Scalar term111 = -term109*term26;
  const Scalar term112 = term17*term48;
  const Scalar term113 = term15*term16*term32*term8*term9;
  const Scalar term114 = term15*term16*term22*term32*term8*term9;
  const Scalar term115 = -term114*term24;
  const Scalar term116 = -term114*term26;
  const Scalar term117 = term24*term26;
  const Scalar term118 = -term117*term33;
  const Scalar term119 = -term117*term39;
  const Scalar term120 = -term117*term44;
  const Scalar term121 = -term117*term50;
  const Scalar term122 = -term117*term55;
  const Scalar term123 = -term117*term61;
  const Scalar term124 = -term117*term67;
  const Scalar term125 = -term117*term72;
  const Scalar term126 = -term117*term77;
  const Scalar term127 = -term117*term82;
  const Scalar term128 = -term117*term87;
  const Scalar term129 = -term117*term92;
  const Scalar term130 = -term117*term97;
  const Scalar term131 = -term103*term117;
  const Scalar term132 = -term108*term117;
  const Scalar term133 = -term113*term117;
  
  residuals[0] = -measurement_x + term22*term29;
  residuals[1] = -measurement_y + term24*term29;
  residuals[2] = -measurement_z + term26*term29;
  jacobian_row_0[0] = -term23*term33 + term31;
  jacobian_row_0[1] = term35;
  jacobian_row_0[2] = term36;
  jacobian_row_0[3] = -term23*term39 + term38;
  jacobian_row_0[4] = term41;
  jacobian_row_0[5] = term42;
  jacobian_row_0[6] = -term23*term44 + term43;
  jacobian_row_0[7] = term46;
  jacobian_row_0[8] = term47;
  jacobian_row_0[9] = -term23*term50 + term49;
  jacobian_row_0[10] = term52;
  jacobian_row_0[11] = term53;
  jacobian_row_0[12] = -term23*term55 + term54;
  jacobian_row_0[13] = term57;
  jacobian_row_0[14] = term58;
  jacobian_row_0[15] = -term23*term61 + term60;
  jacobian_row_0[16] = term63;
  jacobian_row_0[17] = term64;
  jacobian_row_0[18] = -term23*term67 + term66;
  jacobian_row_0[19] = term69;
  jacobian_row_0[20] = term70;
  jacobian_row_0[21] = -term23*term72 + term71;
  jacobian_row_0[22] = term74;
  jacobian_row_0[23] = term75;
  jacobian_row_0[24] = -term23*term77 + term76;
  jacobian_row_0[25] = term79;
  jacobian_row_0[26] = term80;
  jacobian_row_0[27] = -term23*term82 + term81;
  jacobian_row_0[28] = term84;
  jacobian_row_0[29] = term85;
  jacobian_row_0[30] = -term23*term87 + term86;
  jacobian_row_0[31] = term89;
  jacobian_row_0[32] = term90;
  jacobian_row_0[33] = -term23*term92 + term91;
  jacobian_row_0[34] = term94;
  jacobian_row_0[35] = term95;
  jacobian_row_0[36] = -term23*term97 + term96;
  jacobian_row_0[37] = term99;
  jacobian_row_0[38] = term100;
  jacobian_row_0[39] = term102 - term103*term23;
  jacobian_row_0[40] = term105;
  jacobian_row_0[41] = term106;
  jacobian_row_0[42] = term107 - term108*term23;
  jacobian_row_0[43] = term110;
  jacobian_row_0[44] = term111;
  jacobian_row_0[45] = term112 - term113*term23;
  jacobian_row_0[46] = term115;
  jacobian_row_0[47] = term116;
  jacobian_row_1[0] = term35;
  jacobian_row_1[1] = -term25*term33 + term31;
  jacobian_row_1[2] = term118;
  jacobian_row_1[3] = term41;
  jacobian_row_1[4] = -term25*term39 + term38;
  jacobian_row_1[5] = term119;
  jacobian_row_1[6] = term46;
  jacobian_row_1[7] = -term25*term44 + term43;
  jacobian_row_1[8] = term120;
  jacobian_row_1[9] = term52;
  jacobian_row_1[10] = -term25*term50 + term49;
  jacobian_row_1[11] = term121;
  jacobian_row_1[12] = term57;
  jacobian_row_1[13] = -term25*term55 + term54;
  jacobian_row_1[14] = term122;
  jacobian_row_1[15] = term63;
  jacobian_row_1[16] = -term25*term61 + term60;
  jacobian_row_1[17] = term123;
  jacobian_row_1[18] = term69;
  jacobian_row_1[19] = -term25*term67 + term66;
  jacobian_row_1[20] = term124;
  jacobian_row_1[21] = term74;
  jacobian_row_1[22] = -term25*term72 + term71;
  jacobian_row_1[23] = term125;
  jacobian_row_1[24] = term79;
  jacobian_row_1[25] = -term25*term77 + term76;
  jacobian_row_1[26] = term126;
  jacobian_row_1[27] = term84;
  jacobian_row_1[28] = -term25*term82 + term81;
  jacobian_row_1[29] = term127;
  jacobian_row_1[30] = term89;
  jacobian_row_1[31] = -term25*term87 + term86;
  jacobian_row_1[32] = term128;
  jacobian_row_1[33] = term94;
  jacobian_row_1[34] = -term25*term92 + term91;
  jacobian_row_1[35] = term129;
  jacobian_row_1[36] = term99;
  jacobian_row_1[37] = -term25*term97 + term96;
  jacobian_row_1[38] = term130;
  jacobian_row_1[39] = term105;
  jacobian_row_1[40] = term102 - term103*term25;
  jacobian_row_1[41] = term131;
  jacobian_row_1[42] = term110;
  jacobian_row_1[43] = term107 - term108*term25;
  jacobian_row_1[44] = term132;
  jacobian_row_1[45] = term115;
  jacobian_row_1[46] = term112 - term113*term25;
  jacobian_row_1[47] = term133;
  jacobian_row_2[0] = term36;
  jacobian_row_2[1] = term118;
  jacobian_row_2[2] = -term27*term33 + term31;
  jacobian_row_2[3] = term42;
  jacobian_row_2[4] = term119;
  jacobian_row_2[5] = -term27*term39 + term38;
  jacobian_row_2[6] = term47;
  jacobian_row_2[7] = term120;
  jacobian_row_2[8] = -term27*term44 + term43;
  jacobian_row_2[9] = term53;
  jacobian_row_2[10] = term121;
  jacobian_row_2[11] = -term27*term50 + term49;
  jacobian_row_2[12] = term58;
  jacobian_row_2[13] = term122;
  jacobian_row_2[14] = -term27*term55 + term54;
  jacobian_row_2[15] = term64;
  jacobian_row_2[16] = term123;
  jacobian_row_2[17] = -term27*term61 + term60;
  jacobian_row_2[18] = term70;
  jacobian_row_2[19] = term124;
  jacobian_row_2[20] = -term27*term67 + term66;
  jacobian_row_2[21] = term75;
  jacobian_row_2[22] = term125;
  jacobian_row_2[23] = -term27*term72 + term71;
  jacobian_row_2[24] = term80;
  jacobian_row_2[25] = term126;
  jacobian_row_2[26] = -term27*term77 + term76;
  jacobian_row_2[27] = term85;
  jacobian_row_2[28] = term127;
  jacobian_row_2[29] = -term27*term82 + term81;
  jacobian_row_2[30] = term90;
  jacobian_row_2[31] = term128;
  jacobian_row_2[32] = -term27*term87 + term86;
  jacobian_row_2[33] = term95;
  jacobian_row_2[34] = term129;
  jacobian_row_2[35] = -term27*term92 + term91;
  jacobian_row_2[36] = term100;
  jacobian_row_2[37] = term130;
  jacobian_row_2[38] = -term27*term97 + term96;
  jacobian_row_2[39] = term106;
  jacobian_row_2[40] = term131;
  jacobian_row_2[41] = term102 - term103*term27;
  jacobian_row_2[42] = term111;
  jacobian_row_2[43] = term132;
  jacobian_row_2[44] = term107 - term108*term27;
  jacobian_row_2[45] = term116;
  jacobian_row_2[46] = term133;
  jacobian_row_2[47] = term112 - term113*term27;
}


// opcount = 486
template <typename Scalar>
inline void CentralGenericBSpline_Unproject_ComputeResidualAndJacobian(Scalar frac_x, Scalar frac_y, Vec3d p[4][4], Matrix<Scalar, 3, 1>* result, Matrix<Scalar, 3, 2>* dresult_dxy) {
  const Scalar term0 = 0.166666666666667*frac_y;
  const Scalar term1 = -term0 + 0.666666666666667;
  const Scalar term2 = (frac_y - 4) * (frac_y - 4);
  const Scalar term3 = (frac_x - 4) * (frac_x - 4);
  const Scalar term4 = 0.166666666666667*frac_x;
  const Scalar term5 = -term4 + 0.666666666666667;
  const Scalar term6 = p[0][0].x()*term5;
  const Scalar term7 = (frac_x - 3) * (frac_x - 3);
  const Scalar term8 = term4 - 0.5;
  const Scalar term9 = p[0][3].x()*term8;
  const Scalar term10 = frac_x * frac_x;
  const Scalar term11 = 0.5*frac_x*term10;
  const Scalar term12 = 19.5*frac_x - 5.5*term10 + term11 - 21.8333333333333;
  const Scalar term13 = -16*frac_x + 5*term10 - term11 + 16.6666666666667;
  const Scalar term14 = p[0][1].x()*term12 + p[0][2].x()*term13 + term3*term6 + term7*term9;
  const Scalar term15 = term14*term2;
  const Scalar term16 = term1*term15;
  const Scalar term17 = term0 - 0.5;
  const Scalar term18 = (frac_y - 3) * (frac_y - 3);
  const Scalar term19 = p[3][0].x()*term5;
  const Scalar term20 = p[3][3].x()*term8;
  const Scalar term21 = p[3][1].x()*term12 + p[3][2].x()*term13 + term19*term3 + term20*term7;
  const Scalar term22 = term18*term21;
  const Scalar term23 = term17*term22;
  const Scalar term24 = frac_y * frac_y;
  const Scalar term25 = 0.5*frac_y*term24;
  const Scalar term26 = -16*frac_y + 5*term24 - term25 + 16.6666666666667;
  const Scalar term27 = p[2][0].x()*term5;
  const Scalar term28 = p[2][3].x()*term8;
  const Scalar term29 = p[2][1].x()*term12 + p[2][2].x()*term13 + term27*term3 + term28*term7;
  const Scalar term30 = term26*term29;
  const Scalar term31 = 19.5*frac_y - 5.5*term24 + term25 - 21.8333333333333;
  const Scalar term32 = p[1][0].x()*term5;
  const Scalar term33 = p[1][3].x()*term8;
  const Scalar term34 = p[1][1].x()*term12 + p[1][2].x()*term13 + term3*term32 + term33*term7;
  const Scalar term35 = term31*term34;
  const Scalar term36 = term16 + term23 + term30 + term35;
  const Scalar term37 = p[0][0].y()*term5;
  const Scalar term38 = p[0][3].y()*term8;
  const Scalar term39 = p[0][1].y()*term12 + p[0][2].y()*term13 + term3*term37 + term38*term7;
  const Scalar term40 = term2*term39;
  const Scalar term41 = term1*term40;
  const Scalar term42 = p[3][0].y()*term5;
  const Scalar term43 = p[3][3].y()*term8;
  const Scalar term44 = p[3][1].y()*term12 + p[3][2].y()*term13 + term3*term42 + term43*term7;
  const Scalar term45 = term18*term44;
  const Scalar term46 = term17*term45;
  const Scalar term47 = p[2][0].y()*term5;
  const Scalar term48 = p[2][3].y()*term8;
  const Scalar term49 = p[2][1].y()*term12 + p[2][2].y()*term13 + term3*term47 + term48*term7;
  const Scalar term50 = term26*term49;
  const Scalar term51 = p[1][0].y()*term5;
  const Scalar term52 = p[1][3].y()*term8;
  const Scalar term53 = p[1][1].y()*term12 + p[1][2].y()*term13 + term3*term51 + term52*term7;
  const Scalar term54 = term31*term53;
  const Scalar term55 = term41 + term46 + term50 + term54;
  const Scalar term56 = p[0][0].z()*term5;
  const Scalar term57 = p[0][3].z()*term8;
  const Scalar term58 = p[0][1].z()*term12 + p[0][2].z()*term13 + term3*term56 + term57*term7;
  const Scalar term59 = term2*term58;
  const Scalar term60 = term1*term59;
  const Scalar term61 = p[3][0].z()*term5;
  const Scalar term62 = p[3][3].z()*term8;
  const Scalar term63 = p[3][1].z()*term12 + p[3][2].z()*term13 + term3*term61 + term62*term7;
  const Scalar term64 = term18*term63;
  const Scalar term65 = term17*term64;
  const Scalar term66 = p[2][0].z()*term5;
  const Scalar term67 = p[2][3].z()*term8;
  const Scalar term68 = p[2][1].z()*term12 + p[2][2].z()*term13 + term3*term66 + term67*term7;
  const Scalar term69 = term26*term68;
  const Scalar term70 = p[1][0].z()*term5;
  const Scalar term71 = p[1][3].z()*term8;
  const Scalar term72 = p[1][1].z()*term12 + p[1][2].z()*term13 + term3*term70 + term7*term71;
  const Scalar term73 = term31*term72;
  const Scalar term74 = term60 + term65 + term69 + term73;
  const Scalar term75 = (term36 * term36) + (term55 * term55) + (term74 * term74);
  const Scalar term76 = 1. / sqrt(term75);
  const Scalar term77 = term1*term2;
  const Scalar term78 = 0.166666666666667*term3;
  const Scalar term79 = 0.166666666666667*term7;
  const Scalar term80 = 1.5*term10;
  const Scalar term81 = -11.0*frac_x + term80 + 19.5;
  const Scalar term82 = 10*frac_x - term80 - 16;
  const Scalar term83 = 2*frac_x;
  const Scalar term84 = term83 - 8;
  const Scalar term85 = term83 - 6;
  const Scalar term86 = term17*term18;
  const Scalar term87 = term26*(-p[2][0].x()*term78 + p[2][1].x()*term81 + p[2][2].x()*term82 + p[2][3].x()*term79 + term27*term84 + term28*term85) + term31*(-p[1][0].x()*term78 + p[1][1].x()*term81 + p[1][2].x()*term82 + p[1][3].x()*term79 + term32*term84 + term33*term85) + term77*(-p[0][0].x()*term78 + p[0][1].x()*term81 + p[0][2].x()*term82 + p[0][3].x()*term79 + term6*term84 + term85*term9) + term86*(-p[3][0].x()*term78 + p[3][1].x()*term81 + p[3][2].x()*term82 + p[3][3].x()*term79 + term19*term84 + term20*term85);
  const Scalar term88b = 1. / sqrt(term75);
  const Scalar term88 = term88b * term88b * term88b;
  const Scalar term89 = (1.0L/2.0L)*term16 + (1.0L/2.0L)*term23 + (1.0L/2.0L)*term30 + (1.0L/2.0L)*term35;
  const Scalar term90 = (1.0L/2.0L)*term41 + (1.0L/2.0L)*term46 + (1.0L/2.0L)*term50 + (1.0L/2.0L)*term54;
  const Scalar term91 = term26*(-p[2][0].y()*term78 + p[2][1].y()*term81 + p[2][2].y()*term82 + p[2][3].y()*term79 + term47*term84 + term48*term85) + term31*(-p[1][0].y()*term78 + p[1][1].y()*term81 + p[1][2].y()*term82 + p[1][3].y()*term79 + term51*term84 + term52*term85) + term77*(-p[0][0].y()*term78 + p[0][1].y()*term81 + p[0][2].y()*term82 + p[0][3].y()*term79 + term37*term84 + term38*term85) + term86*(-p[3][0].y()*term78 + p[3][1].y()*term81 + p[3][2].y()*term82 + p[3][3].y()*term79 + term42*term84 + term43*term85);
  const Scalar term92 = (1.0L/2.0L)*term60 + (1.0L/2.0L)*term65 + (1.0L/2.0L)*term69 + (1.0L/2.0L)*term73;
  const Scalar term93 = term26*(-p[2][0].z()*term78 + p[2][1].z()*term81 + p[2][2].z()*term82 + p[2][3].z()*term79 + term66*term84 + term67*term85) + term31*(-p[1][0].z()*term78 + p[1][1].z()*term81 + p[1][2].z()*term82 + p[1][3].z()*term79 + term70*term84 + term71*term85) + term77*(-p[0][0].z()*term78 + p[0][1].z()*term81 + p[0][2].z()*term82 + p[0][3].z()*term79 + term56*term84 + term57*term85) + term86*(-p[3][0].z()*term78 + p[3][1].z()*term81 + p[3][2].z()*term82 + p[3][3].z()*term79 + term61*term84 + term62*term85);
  const Scalar term94 = 2*term88*(term87*term89 + term90*term91 + term92*term93);
  const Scalar term95 = 1.5*term24;
  const Scalar term96 = 10*frac_y - term95 - 16;
  const Scalar term97 = term29*term96;
  const Scalar term98 = -11.0*frac_y + term95 + 19.5;
  const Scalar term99 = term34*term98;
  const Scalar term100 = 2*frac_y;
  const Scalar term101 = term1*(term100 - 8);
  const Scalar term102 = term101*term14;
  const Scalar term103 = term17*(term100 - 6);
  const Scalar term104 = term103*term21;
  const Scalar term105 = term49*term96;
  const Scalar term106 = term53*term98;
  const Scalar term107 = term101*term39;
  const Scalar term108 = term103*term44;
  const Scalar term109 = term68*term96;
  const Scalar term110 = term72*term98;
  const Scalar term111 = term101*term58;
  const Scalar term112 = term103*term63;
  const Scalar term113 = term88*(term89*(2*term102 + 2*term104 - 0.333333333333333*term15 + 0.333333333333333*term22 + 2*term97 + 2*term99) + term90*(2*term105 + 2*term106 + 2*term107 + 2*term108 - 0.333333333333333*term40 + 0.333333333333333*term45) + term92*(2*term109 + 2*term110 + 2*term111 + 2*term112 - 0.333333333333333*term59 + 0.333333333333333*term64));
  
  (*result)[0] = term36*term76;
  (*result)[1] = term55*term76;
  (*result)[2] = term74*term76;
  (*dresult_dxy)(0, 0) = -term36*term94 + term76*term87;
  (*dresult_dxy)(0, 1) = -term113*term36 + term76*(term102 + term104 - 0.166666666666667*term15 + 0.166666666666667*term22 + term97 + term99);
  (*dresult_dxy)(1, 0) = -term55*term94 + term76*term91;
  (*dresult_dxy)(1, 1) = -term113*term55 + term76*(term105 + term106 + term107 + term108 - 0.166666666666667*term40 + 0.166666666666667*term45);
  (*dresult_dxy)(2, 0) = -term74*term94 + term76*term93;
  (*dresult_dxy)(2, 1) = -term113*term74 + term76*(term109 + term110 + term111 + term112 - 0.166666666666667*term59 + 0.166666666666667*term64);
}

}
