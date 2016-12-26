class CfgAmmo {

	class Sh_82mm_AMOS;
	class Flare_82mm_AMOS_White;
	class HE_82mm_mortar: Sh_82mm_AMOS
	{
		hit = 150;
		indirectHit = 20;
		indirectHitRange = 10;
		explosioneffects = "ifa3_GrenadeExplosion";
		model = "\z\ifa3_comp_ace\addons\mortar\data\82mm_het_shell";
		soundFly[] = {"WW2\Assets_s\Weapons\Misc_s\Mortars_Bm37\Bm_37_SoundFly.wss",1,1,300};
	};
	class Smoke_82mm_mortar_White: Sh_82mm_AMOS
	{
		hit = 10;
		indirectHit = 5;
		indirectHitRange = 5;
		explosive = 0.8;
		ExplosionEffects = "if_WPExplosion";
		CraterEffects = "";
		model = "\z\ifa3_comp_ace\addons\mortar\data\82mm_smoke_shell";
		soundFly[] = {"WW2\Assets_s\Weapons\Misc_s\Mortars_Bm37\Bm_37_SoundFly.wss",1,1,300};
	};

	class Illum_82mm_mortar_White: Flare_82mm_AMOS_White
	{
		model = "\z\ifa3_comp_ace\addons\mortar\data\82mm_illum_shell";
		soundFly[] = {"WW2\Assets_s\Weapons\Misc_s\Mortars_Bm37\Bm_37_SoundFly.wss",1,1,300};
	};

};