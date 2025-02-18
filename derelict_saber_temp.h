#ifdef CONFIG_TOP
#include "proffieboard_config.h"
#define NUM_BLADES 1
#define NUM_BUTTONS 1
#define VOLUME 2000
const unsigned int maxLedsPerStrip = 144;
#define CLASH_THRESHOLD_G 2.5
#define ENABLE_AUDIO
#define ENABLE_MOTION
#define ENABLE_WS2811
#define ENABLE_SD
#define NO_COLOR_SWING
#define IDLE_OFF_TIME 90 * 1000
#define SAVE_STATE
#define SA22C_TWIST_ON
#define SA22C_TWIST_OFF
#endif



#ifdef CONFIG_PRESETS
Preset presets[] = {
   { "Ancient", "tracks/venus.wav",
  StylePtr<Layers<
  Mix<Int<12288>,Rgb<190,100,0>,Yellow>,
  RandomL<Rgb<190,100,0>>,
  ResponsiveLockupL<NavajoWhite,TrInstant,TrInstant,Int<26000>>,
  ResponsiveLightningBlockL<RotateColorsX<Sin<Int<100>,Int<16384>>,Mix<Int<16384>,Rgb<150,0,220>,GhostWhite>>>,
  ResponsiveMeltL<Mix<TwistAngle<>,Red,Yellow>>,
  ResponsiveDragL<White>,
  ResponsiveClashL<GhostWhite,TrInstant,TrFade<200>,Int<26000>>,
  ResponsiveBlastL<GhostWhite>,
  ResponsiveBlastWaveL<GhostWhite>,
  ResponsiveBlastFadeL<GhostWhite>,
  ResponsiveStabL<White>,
  OnSparkL<Gradient<Black,Pulsing<NavajoWhite,GhostWhite,800>,Black>,Int<1200>>,
  InOutTrL<TrWipe<300>,TrWipeIn<500>>>>(), "cyan"},
	
     { "Executioner", "tracks/mars.wav",
 StylePtr<Layers<
  Mix<Int<12288>,Rgb<190,100,0>,Yellow>,
  AudioFlickerL<Rgb<140,150,0>>,
  ResponsiveLockupL<White,TrInstant,TrInstant,Int<26000>>,
  ResponsiveLightningBlockL<White>,
  ResponsiveMeltL<Mix<TwistAngle<>,Red,Yellow>>,
  ResponsiveDragL<White>,
  ResponsiveClashL<White,TrInstant,TrFade<200>,Int<26000>>,
  ResponsiveBlastL<White>,
  ResponsiveBlastWaveL<White>,
  ResponsiveBlastFadeL<White>,
  ResponsiveStabL<White>,
  InOutTrL<TrConcat<TrWaveX<White>,NavajoWhite,TrSmoothFade<300>>,TrWipeIn<500>>>>(), "Executioner"},
	
    { "Korriban", "tracks/mercury.wav",
StylePtr<Layers<
  Mix<Int<12288>,Rgb<190,100,0>,Yellow>,
  AudioFlickerL<Rgb<140,150,0>>,
  ResponsiveLockupL<White,TrInstant,TrInstant,Int<26000>>,
  ResponsiveLightningBlockL<White>,
  ResponsiveMeltL<Mix<TwistAngle<>,Red,Yellow>>,
  ResponsiveDragL<White>,
  ResponsiveClashL<White,TrInstant,TrFade<200>,Int<26000>>,
  ResponsiveBlastL<White>,
  ResponsiveBlastWaveL<White>,
  ResponsiveBlastFadeL<Red>,
  ResponsiveStabL<White>,
  InOutTrL<TrConcat<TrBoing<300,4>,NavajoWhite,TrSmoothFade<600>>,TrWipeIn<500>>>>(), "Korriban"},
	
	{"Legion", "tracks/",
StylePtr<Layers<
  Black,
  Mix<Int<12288>,Red,RandomL<Red>>,
  ResponsiveLockupL<White,TrInstant,TrInstant,Int<26000>>,
  TransitionEffectL<TrConcat<TrConcat<TrWipeInSparkTipX<Magenta,Int<300>>,BrownNoiseFlicker<Green,Magenta,50>,TrWipeSparkTipX<HumpFlicker<DodgerBlue,Magenta,50>,Int<300>>>,BrownNoiseFlicker<DodgerBlue,Magenta,50>,TrBoing<300,2>>,EFFECT_LOCKUP_END>,
  ResponsiveLightningBlockL<White,TrInstant,TrBoing<600,3>>,
  TransitionEffectL<TrConcat<TrConcat<TrWipeInSparkTipX<Magenta,Int<300>>,BrownNoiseFlicker<Green,Magenta,50>,TrWipeSparkTipX<HumpFlicker<DodgerBlue,Magenta,50>,Int<300>>>,BrownNoiseFlicker<DodgerBlue,Magenta,50>,TrBoing<300,2>>,EFFECT_FORCE>,
  ResponsiveMeltL<Mix<TwistAngle<>,Red,Yellow>>,
  ResponsiveClashL<Gradient<NavajoWhite,LightYellow,Green>,TrFade<100>,TrBoing<400,2>,Int<26000>,Int<6000>,Int<20000>>,
  ResponsiveDragL<White>,
  ResponsiveBlastL<White>,
  ResponsiveBlastWaveL<White>,
  ResponsiveBlastFadeL<White>,
  ResponsiveStabL<White>,
  MultiTransitionEffectL<TrConcat<TrBoing<800,6>,BrownNoiseFlicker<Yellow,Black,50>,TrInstant>,EFFECT_IGNITION>,
  InOutTrL<TrConcat<TrWaveX<Gradient<Black,Pulsing<GhostWhite,Black,800>,Black>>,White,TrSmoothFade<300>>,TrWipeInSparkTipX<White,Int<500>,Int<800>>>>>(),"Legion"},
	 
	
  { "Corellian", "tracks/venus.wav",
StylePtr<Layers<
  Red,
  RandomL<Tomato>,
  ResponsiveLockupL<White,TrInstant,TrInstant,Int<26000>>,
  LockupTrL<BrownNoiseFlicker<Blue,Magenta,50>,TrWipeInSparkTipX<White,Int<200>>,TrConcat<TrWaveX<White>,NavajoWhite,TrBoing<300,2>>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,
  ResponsiveMeltL<Mix<TwistAngle<>,Red,Yellow>>,
  ResponsiveDragL<White>,
  ResponsiveClashL<White,TrInstant,TrFade<200>,Int<26000>>,
  ResponsiveBlastL<White>,
  ResponsiveBlastWaveL<White>,
  ResponsiveBlastFadeL<White>,
  ResponsiveStabL<White>,
  InOutTrL<TrConcat<TrWipeInSparkTipX<White,Int<200>>,HumpFlicker<OrangeRed,NavajoWhite,50>,TrSmoothFade<500>>,TrWipeIn<500>>>>(),"Corellian"},
 
   { "RgueCmdr", "tracks/venus.wav",
    StyleFirePtr<BLUE, CYAN>(), "blue fire"},
   { "TthCrstl", "tracks/mars.wav",
    StylePtr<InOutHelper<EASYBLADE(OnSpark<GREEN>, WHITE), 300, 800> >(), "green"},
   { "TeensySF", "tracks/mercury.wav",
    StyleNormalPtr<WHITE, RED, 300, 800, RED>(), "white"},
   { "SmthJedi", "tracks/uranus.wav",
    StyleNormalPtr<AudioFlicker<YELLOW, WHITE>, BLUE, 300, 800>(), "yellow"},
   { "SmthGrey", "tracks/venus.wav",
    StylePtr<InOutSparkTip<EASYBLADE(MAGENTA, WHITE), 300, 800> >(), "magenta"},
   { "SmthFuzz", "tracks/mars.wav",
    StyleNormalPtr<Gradient<RED, BLUE>, Gradient<CYAN, YELLOW>, 300, 800>(), "gradient"},
   { "RgueCmdr", "tracks/mercury.wav",
    StyleRainbowPtr<300, 800>(), "rainbow"},
   { "TthCrstl", "tracks/uranus.wav",
    StyleStrobePtr<WHITE, Rainbow, 15, 300, 800>(), "strobe"},
   { "TeensySF", "tracks/venus.wav",
    &style_pov, "POV"},
   { "SmthJedi", "tracks/mars.wav",
    &style_charging, "Battery\nLevel"}
};
BladeConfig blades[] = {
 { 0, WS2811BladePtr<144, WS2811_ACTUALLY_800kHz | WS2811_GRB>(), CONFIGARRAY(presets) },
};
#endif

#ifdef CONFIG_BUTTONS
Button PowerButton(BUTTON_POWER, powerButtonPin, "pow");
#endif
