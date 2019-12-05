// Copyright 2017, 2019 ETH Zürich, Thomas Schöps
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


#pragma once

#include <cuda_runtime.h>

namespace vis {

constexpr int kNumSamples = 81;

extern __constant__ float kSamplesCUDA[kNumSamples][2];

// // Sphere:
// constexpr float kSamples[kNumSamples][2] = {
//     {-0.352334470334, -0.698301652151},
//     {0.30186894608, -0.855127426665},
//     {0.0717640086134, -0.268622166175},
//     {-0.884002150451, 0.0148714663788},
//     {-0.925008683116, -0.132708632675},
//     {-0.150961621715, 0.653704249344},
//     {-0.752396077701, -0.553522070786},
//     {0.254866444811, 0.895417884914},
//     {0.154205897235, -0.206639050698},
//     {0.716936918097, -0.420781427337},
//     {-0.383036351796, 0.63225271824},
//     {-0.638547240152, 0.163200327325},
//     {0.277826937852, -0.255204914549},
//     {0.0954889314191, -0.874422050053},
//     {0.360799946364, -0.144815388661},
//     {-0.371705659246, 0.171123727015},
//     {-0.0936312472584, -0.400466006273},
//     {0.588758963045, 0.397988867459},
//     {-0.511806978556, 0.148847420517},
//     {0.0503930076229, 0.750274991147},
//     {0.458890578878, -0.42412447022},
//     {-0.16375435643, 0.51428185913},
//     {-0.696030930679, -0.0220737990484},
//     {-0.921585485905, 0.336431713069},
//     {0.529141732426, 0.146051880555},
//     {0.750955623662, -0.372504974304},
//     {0.390590732547, 0.18873975421},
//     {0.159790408565, -0.0875893373972},
//     {-0.0518033251607, 0.328304410949},
//     {-0.878661144806, 0.402984042609},
//     {0.643849573219, -0.430808935812},
//     {-0.228417115107, 0.337305431768},
//     {-0.954874143889, -0.0766094274005},
//     {-0.741319555963, -0.504770332606},
//     {-0.218100593734, 0.742843948253},
//     {-0.8388373976, -0.101625198101},
//     {0.0988798182881, 0.766767652883},
//     {0.638559675671, 0.727968939397},
//     {-0.443157870972, -0.169406965577},
//     {-0.282457669337, 0.768385654396},
//     {-0.647564543019, -0.536086266361},
//     {-0.533327832638, -0.0300745393173},
//     {0.178247007465, -0.474506761403},
//     {-0.261492854211, 0.132682447413},
//     {0.90619585105, 0.380987314272},
//     {0.0309828661416, 0.235185498818},
//     {0.352400164899, -0.892014213552},
//     {0.799066020116, 0.559938981412},
//     {0.749026368269, 0.595746242393},
//     {-0.215242186217, -0.202042335359},
//     {-0.792925812579, 0.268579131371},
//     {-0.582473629108, -0.675393624456},
//     {-0.319892695535, -0.894848792219},
//     {-0.797071263955, -0.272780155931},
//     {0.228137975577, -0.702899029338},
//     {-0.495484486886, -0.305220907893},
//     {-0.271673120943, -0.754315538476},
//     {-0.0680210816801, -0.0323306871675},
//     {-0.314728323514, -0.470486216566},
//     {0.657710756243, -0.677122778947},
//     {0.0565147900842, -0.706794922202},
//     {0.0863448517642, -0.945915017156},
//     {0.0562188818766, 0.957002485438},
//     {0.726650060579, 0.392393571816},
//     {-0.477769605541, -0.266600416478},
//     {-0.665915930931, 0.543875816804},
//     {0.0651847949858, 0.558109782676},
//     {-0.340670009904, -0.553916653794},
//     {0.705257597493, 0.612157169571},
//     {0.636665886651, 0.479746040751},
//     {-0.546521019937, 0.035277448487},
//     {-0.28887491329, -0.942039698517},
//     {-0.481651273464, 0.3850438834},
//     {0.913030152683, -0.105544644467},
//     {0.910001262643, -0.270728229276},
//     {-0.559075354008, -0.546308346539},
//     {-0.606587673161, -0.591253273448},
//     {0.248132794876, 0.800616675768},
//     {0.680871054559, -0.0410531474769},
//     {0.305956085682, 0.599287489699},
//     {-0.830443027099, 0.32117130041}
// };

// Square:
constexpr float kSamples[kNumSamples][2] = {
    {0.912068543778f, 0.895654974119f},
    {-0.886897264546f, -0.830256009682f},
    {0.670997756259f, 0.471939978137f},
    {0.33946080288f, -0.383727084822f},
    {0.211888331357f, 0.213603467282f},
    {0.162408034224f, -0.68323425949f},
    {-0.138660719417f, -0.212936359589f},
    {0.446024162475f, 0.989639125899f},
    {0.898790946186f, 0.0883540948586f},
    {-0.110291622548f, -0.463518516701f},
    {-0.928151341214f, -0.945110285818f},
    {-0.0702122758054f, -0.363069744293f},
    {-0.239970156199f, 0.783578915657f},
    {0.0515055382921f, 0.121020722053f},
    {-0.52775318577f, -0.952283841718f},
    {-0.349714142478f, -0.726605214027f},
    {0.0204476916744f, 0.997367136385f},
    {0.348959394692f, -0.636313006354f},
    {0.787143073166f, 0.593519842843f},
    {0.468803383788f, 0.813187299795f},
    {0.525770967666f, 0.579495274924f},
    {-0.292426044317f, 0.961953146144f},
    {0.923801875796f, -0.677630693392f},
    {0.508008143304f, 0.430301796475f},
    {-0.077186604516f, 0.0607114322469f},
    {-0.0199721562996f, 0.849664144189f},
    {0.00168212526131f, 0.663048979584f},
    {-0.292151590263f, 0.765701837163f},
    {0.799401177513f, -0.0779756702367f},
    {0.13541014084f, 0.840660878384f},
    {0.447545907744f, -0.0267828902768f},
    {-0.556377978018f, -0.350665512462f},
    {0.39914327614f, -0.667860629012f},
    {0.815880993252f, -0.4637249742f},
    {0.822755671736f, -0.380873750101f},
    {0.914723423112f, 0.412411612735f},
    {0.00849763396664f, 0.0354955122971f},
    {0.302828797934f, 0.175889423589f},
    {-0.376311350898f, -0.584363050924f},
    {0.0237833167106f, 0.868308718268f},
    {0.246530173452f, -0.849249261852f},
    {0.640799989424f, 0.451898574955f},
    {0.815307241903f, -0.617194533392f},
    {0.489565448555f, -0.882482207203f},
    {0.305819854869f, -0.453800535326f},
    {-0.54676694151f, 0.750982342896f},
    {-0.787468034709f, 0.0447253307179f},
    {0.70788601437f, -0.510336044062f},
    {-0.579042122609f, 0.761163518733f},
    {-0.154164703221f, 0.43392219781f},
    {-0.936253859747f, -0.275286177394f},
    {-0.656238015749f, 0.345530882827f},
    {-0.834193645191f, 0.909124330691f},
    {-0.949310570346f, 0.458847014884f},
    {-0.957710260554f, -0.488619891885f},
    {0.626708774805f, -0.685763422626f},
    {-0.632522381498f, 0.382990852027f},
    {-0.228868237295f, -0.913678008405f},
    {0.980003092406f, -0.697159782487f},
    {-0.927462011513f, -0.311597988926f},
    {0.23047896665f, 0.484919246252f},
    {-0.773770193964f, -0.325572453607f},
    {-0.938378284747f, -0.102693475015f},
    {0.531939873176f, 0.479893327441f},
    {0.8040403167f, 0.51132430735f},
    {0.724891552651f, 0.410690280102f},
    {-0.0544409758034f, -0.548944859304f},
    {0.321656997314f, -0.367388146543f},
    {-0.795901789901f, -0.104356277162f},
    {0.749526082696f, -0.744927070762f},
    {0.169911396221f, -0.21409489979f},
    {0.0296053935284f, -0.712341072046f},
    {0.919462372974f, -0.481807153496f},
    {0.212155878107f, -0.160488908689f},
    {-0.96393356175f, 0.115900247678f},
    {-0.718861242077f, -0.886438008354f},
    {-0.932887507503f, -0.677669969638f},
    {-0.808256112734f, 0.270151395077f},
    {0.0165183680713f, 0.966932188095f},
    {0.868260637394f, 0.989050466519f},
    {-0.535052318664f, -0.110605089761f}
};

void InitPatchMatchSamples();

}
