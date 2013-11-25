#include "GainPatch.hpp"
#include "TemplatePatch.hpp"
#include "SimpleDelayPatch.hpp"
#include "ParametricEqPatch.hpp"
#include "OverdrivePatch.hpp"
#include "PhaserPatch.hpp"
#include "StateVariableFilterPatch.hpp"
#include "ResonantFilterPatch.hpp"
#include "FlangerPatch.hpp"
#include "LeakyIntegratorPatch.hpp"
#include "LpfDelayPatch.hpp"
#include "LpfDelayPhaserPatch.hpp"
#include "WaveshaperPatch.hpp"
#include "FreeVerbPatch.hpp"
#include "OctaveDownPatch.hpp"
#include "TestTonePatch.hpp"
#include "StereoMixerPatch.hpp"
#include "Contest/blo_bleep.hpp"
#include "Contest/BiasPatch.hpp"
#include "Contest/BitH8rPatch.hpp"
#include "Contest/ConnyPatch.hpp"
#include "Contest/DroneBox.hpp"
#include "Contest/DualTremoloPatch.hpp"
#include "VibroFlangePatch.hpp"
#include "RingModulatorPatch.hpp"
#include "FourBandsEqPatch.hpp"
#include "EnvelopeFilterPatch.hpp"   /* too cpu intensive ? (sqrt...) */
//#include "JotReverbPatch.hpp"   /* too cpu intensive ? (sqrt...) */
// #include "EnvelopeFilterPatch.hpp" /* too cpu intensive (sqrt...) */
// #include "Contest/BiasedDelayPatch.hpp"  /* triggers NMI_Handler () */
// #include "Contest/JumpDelay.hpp" /* uses calloc and free */
// #include "Contest/SampleJitterPatch.hpp" /* requires juce::Random */
// #include "Contest/SirenPatch.hpp" /* causes assert_failed in DMA_GetFlagStatus() */
