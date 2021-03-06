class CfgVehicles
{
/*	class LandVehicle;
	class StaticWeapon;
	class StaticCannon;
	class StaticATWeapon;
	class LIB_StaticCanon_base;
	class Tank;

	class Tank_F: Tank
	{

		class ACE_SelfActions
		{
			class ACE_ifa3reload_loadTurretAmmo
			{
				displayName = "$STR_ACE_ifa3reload_load_ammo";
				condition = 1;
				statement = "";
				insertChildren = "_this call ACE_ifa3reload_fnc_loadTurretAmmo";
			};

			class ACE_ifa3reload_unloadTurretAmmo
			{
				displayName = "$STR_ACE_ifa3reload_unload_ammo";
				condition = 1;
				statement = "";
				insertChildren = "_this call ACE_ifa3reload_fnc_unloadTurretAmmo";
			};
		};
	};


	class LIB_StaticCannon_base: StaticCannon
	{
		class ACE_Actions
		{
			class ACE_ifa3reload_loadStaticAmmo
			{
				displayName = "$STR_ACE_ifa3reload_load_ammo";
				distance = 3.5;
				condition = 1;
				statement = "";
				icon = "\z\ifa3_comp_ace\addons\reload\ui\icon_load_interact.paa";
				selection = "konec hlavne";
				insertChildren = "_this call ACE_ifa3reload_fnc_loadStaticAmmo";
			};
			class ACE_ifa3reload_unloadStaticAmmo
			{
				displayName = "$STR_ACE_ifa3reload_unload_ammo";
				distance = 3.5;
				condition = "_this call ace_ifa3reload_fnc_canUnloadStaticAmmo";
				statement = "[_target,_player,2] call ace_ifa3reload_fnc_unloadStaticAmmoTimer";
				icon = "\z\ifa3_comp_ace\addons\reload\ui\icon_unload_interact.paa";
				selection = "konec hlavne";
			};
		};
	};

	class LIB_Flakvierling_38_base: LIB_StaticCanon_base
	{
		class ACE_Actions
		{
			class ACE_ifa3reload_loadStaticAmmo
			{
				displayName = "$STR_ACE_ifa3reload_load_ammo";
				distance = 3.9;
				condition = 1;
				statement = "";
				icon = "\z\ifa3_comp_ace\addons\reload\ui\icon_load_interact.paa";
				selection = "konec hlavne";
				insertChildren = "_this call ACE_ifa3reload_fnc_loadStaticAmmo";
			};
			class ACE_ifa3reload_unloadStaticAmmo
			{
				displayName = "$STR_ACE_ifa3reload_unload_ammo";
				distance = 3.9;
				condition = "_this call ace_ifa3reload_fnc_canUnloadStaticAmmo";
				statement = "[_target,_player,2] call ace_ifa3reload_fnc_unloadStaticAmmoTimer";
				icon = "\z\ifa3_comp_ace\addons\reload\ui\icon_unload_interact.paa";
				selection = "konec hlavne";
			};
		};
	};
	class LIB_FlaK_38_base: LIB_StaticCanon_base
	{
		class ACE_Actions
		{
			class ACE_ifa3reload_loadStaticAmmo
			{
				displayName = "$STR_ACE_ifa3reload_load_ammo";
				distance = 3.5;
				condition = 1;
				statement = "";
				icon = "\z\ifa3_comp_ace\addons\reload\ui\icon_load_interact.paa";
				selection = "konec hlavne";
				insertChildren = "_this call ACE_ifa3reload_fnc_loadStaticAmmo";
			};
			class ACE_ifa3reload_unloadStaticAmmo
			{
				displayName = "$STR_ACE_ifa3reload_unload_ammo";
				distance = 3.5;
				condition = "_this call ace_ifa3reload_fnc_canUnloadStaticAmmo";
				statement = "[_target,_player,2] call ace_ifa3reload_fnc_unloadStaticAmmoTimer";
				icon = "\z\ifa3_comp_ace\addons\reload\ui\icon_unload_interact.paa";
				selection = "konec hlavne";
			};
		};
	};

	class Car: LandVehicle
	{
		class ACE_SelfActions
		{
			class ACE_ifa3reload_loadTurretAmmo
			{
				displayName = "$STR_ACE_ifa3reload_load_ammo";
				condition = 1;
				statement = "";
				insertChildren = "_this call ACE_ifa3reload_fnc_loadTurretAmmo";
			};

			class ACE_ifa3reload_unloadTurretAmmo
			{
				displayName = "$STR_ACE_ifa3reload_unload_ammo";
				condition = 1;
				statement = "";
				insertChildren = "_this call ACE_ifa3reload_fnc_unloadTurretAmmo";
			};
		};
		class NewTurret;
		class AnimationSources;
	};

	class StaticMGWeapon: StaticWeapon
	{
		class ACE_Actions
		{
			class ACE_ifa3reload_loadStaticAmmo
			{
				displayName = "$STR_ACE_ifa3reload_load_ammo";
				distance = 2.5;
				condition = 1;
				statement = "";
				icon = "\z\ifa3_comp_ace\addons\reload\ui\icon_load_interact.paa";
				selection = "konec hlavne";
				insertChildren = "_this call ACE_ifa3reload_fnc_loadStaticAmmo";
			};
			class ACE_ifa3reload_unloadStaticAmmo
			{
				displayName = "$STR_ACE_ifa3reload_unload_ammo";
				distance = 2.5;
				condition = "_this call ace_ifa3reload_fnc_canUnloadStaticAmmo";
				statement = "[_target,_player,2] call ace_ifa3reload_fnc_unloadStaticAmmoTimer";
				icon = "\z\ifa3_comp_ace\addons\reload\ui\icon_unload_interact.paa";
				selection = "konec hlavne";
			};
		};
	};
	class StaticMortar: StaticWeapon
	{
		class ACE_Actions
		{
			class ACE_ifa3reload_loadStaticAmmo
			{
				displayName = "$STR_ACE_ifa3reload_load_ammo";
				distance = 2.5;
				condition = 1;
				statement = "";
				icon = "\z\ifa3_comp_ace\addons\reload\ui\icon_load_interact.paa";
				selection = "usti hlavne";
				insertChildren = "_this call ACE_ifa3reload_fnc_loadStaticAmmo";
			};
			class ACE_ifa3reload_unloadStaticAmmo
			{
				displayName = "$STR_ACE_ifa3reload_unload_ammo";
				distance = 2.5;
				condition = "_this call ace_ifa3reload_fnc_canUnloadStaticAmmo";
				statement = "[_target,_player,2] call ace_ifa3reload_fnc_unloadStaticAmmoTimer";
				icon = "\z\ifa3_comp_ace\addons\reload\ui\icon_unload_interact.paa";
				selection = "usti hlavne";
			};
		};
	};

	class IFa3_M4A3_75: Tank_F
	{
		class TransportMagazines
		{
			class _xx_LIB_M42A1_M1_HE_mag
			{
				magazine = "LIB_M42A1_M1_HE";
				count = 60;
			};
			class _xx_LIB_M61_M1_AP_mag
			{
				magazine = "LIB_M61_M1_AP";
				count = 30;
			};
			class _xx_LIB_T45_M1_APCR_mag
			{
				magazine = "LIB_T45_M1_APCR";
				count = 14;
			};
			class _xx_LIB_250Rnd_M1919A4_mag
			{
				magazine = "LIB_250Rnd_M1919A4";
				count = 20;
			};
			class _xx_LIB_1Rnd_flare_white_mag
			{
				magazine = "LIB_1Rnd_flare_white";
				count = 2;
			};
			class _xx_LIB_1Rnd_flare_red_mag
			{
				magazine = "LIB_1Rnd_flare_red";
				count = 2;
			};
			class _xx_LIB_1Rnd_flare_green_mag
			{
				magazine = "LIB_1Rnd_flare_green";
				count = 2;
			};
			class _xx_LIB_30Rnd_45ACP_mag
			{
				magazine = "LIB_30Rnd_45ACP";
				count = 4;
			};
			class _xx_ifa3_1Rnd_signalflare_red
			{
				magazine = "ifa3_1Rnd_signalflare_red";
				count = 5;
			};
		};
		class TransportWeapons
		{
			class _xx_LIB_FLARE_PISTOL
			{
				weapon = "LIB_FLARE_PISTOL";
				count = 1;
			};
			class _xx_LIB_M1A1_Thompson
			{
				weapon = "LIB_M1A1_Thompson";
				count = 1;
			};
		};
		class TransportItems
		{
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 4;
			};
			class _xx_ACE_CableTie
			{
				name = "ACE_CableTie";
				count = 10;
			};
		};
		class TransportBackpacks
		{
			class _xx_B_LIB_SOV_RA_Rucksack_E
			{
				backpack = "B_LIB_SOV_RA_Rucksack_E";
				count = 1;
			};
		};
	};
	class ifa3_M4A2_SOV: IFa3_M4A3_75
	{
		class TransportMagazines
		{
			class _xx_LIB_M42A1_M1_HE_mag
			{
				magazine = "LIB_M42A1_M1_HE";
				count = 60;
			};
			class _xx_LIB_M61_M1_AP_mag
			{
				magazine = "LIB_M61_M1_AP";
				count = 30;
			};
			class _xx_LIB_T45_M1_APCR_mag
			{
				magazine = "LIB_T45_M1_APCR";
				count = 14;
			};
			class _xx_LIB_250Rnd_M1919A4_mag
			{
				magazine = "LIB_250Rnd_M1919A4";
				count = 20;
			};
			class _xx_LIB_1Rnd_flare_white_mag
			{
				magazine = "LIB_1Rnd_flare_white";
				count = 2;
			};
			class _xx_LIB_1Rnd_flare_red_mag
			{
				magazine = "LIB_1Rnd_flare_red";
				count = 2;
			};
			class _xx_LIB_1Rnd_flare_green_mag
			{
				magazine = "LIB_1Rnd_flare_green";
				count = 2;
			};
			class _xx_ifa3_1Rnd_signalflare_red
			{
				magazine = "ifa3_1Rnd_signalflare_red";
				count = 5;
			};
		};
		class TransportWeapons
		{
			class _xx_LIB_FLARE_PISTOL
			{
				weapon = "LIB_FLARE_PISTOL";
				count = 1;
			};
		};
		class TransportItems
		{
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 4;
			};
			class _xx_ACE_CableTie
			{
				name = "ACE_CableTie";
				count = 10;
			};
		};
		class TransportBackpacks
		{
			class _xx_B_LIB_SOV_RA_Rucksack_E
			{
				backpack = "B_LIB_SOV_RA_Rucksack_E";
				count = 1;
			};
		};
	};

	class ifa3_PzKpfwIV_H_base: Tank_F {};

	class ifa3_PzKpfwIV_H: ifa3_PzKpfwIV_H_base
	{
		class TransportMagazines {

			class _xx_LIB_SprGr34_KWK40_HE_mag
			{
				magazine = "LIB_SprGr34_KWK40_HE";
				count = 60;
			};
			class _xx_LIB_PzGr39_KWK40_AP_mag
			{
				magazine = "LIB_PzGr39_KWK40_AP";
				count = 30;
			};
			class _xx_LIB_PzGr40_KWK40_APCR_mag
			{
				magazine = "LIB_PzGr40_KWK40_APCR";
				count = 10;
			};

			class _xx_LIB_150rnd_MG34_mag
			{
				magazine = "LIB_150rnd_MG34";
				count = 20;
			};

			class _xx_LIB_1Rnd_flare_white_mag
			{
				magazine = "LIB_1Rnd_flare_white";
				count = 2;
			};
			class _xx_LIB_1Rnd_flare_red_mag
			{
				magazine = "LIB_1Rnd_flare_red";
				count = 2;
			};
			class _xx_LIB_1Rnd_flare_green_mag
			{
				magazine = "LIB_1Rnd_flare_green";
				count = 2;
			};
			class _xx_LIB_32Rnd_9x19_mag
			{
				magazine = "LIB_32Rnd_9x19";
				count = 4;
			};
			class _xx_ifa3_1Rnd_signalflare_red
			{
				magazine = "ifa3_1Rnd_signalflare_red";
				count = 5;
			};
		};

		class TransportWeapons
		{
			class _xx_LIB_FLARE_PISTOL
			{
				weapon = "LIB_FLARE_PISTOL";
				count = 1;
			};
			class _xx_LIB_MP40
			{
				weapon = "LIB_MP40";
				count = 1;
			};
		};
		class TransportItems
		{
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 4;
			};
			class _xx_ACE_CableTie
			{
				name = "ACE_CableTie";
				count = 10;
			};
		};
		class TransportBackpacks
		{
			class _xx_B_LIB_GER_Backpack_e
			{
				backpack = "B_LIB_GER_Backpack_e";
				count = 1;
			};
		};
	};

	class ifa3_StuG_III_G_base: Tank_F {};

	class ifa3_StuG_III_G: ifa3_StuG_III_G_base
	{
		class TransportMagazines {

			class _xx_LIB_SprGr34_KWK40_HE_mag
			{
				magazine = "LIB_SprGr34_KWK40_HE";
				count = 30;
			};
			class _xx_LIB_PzGr39_KWK40_AP_mag
			{
				magazine = "LIB_PzGr39_KWK40_AP";
				count = 15;
			};
			class _xx_LIB_PzGr40_KWK40_APCR_mag
			{
				magazine = "LIB_PzGr40_KWK40_APCR";
				count = 5;
			};

			class _xx_LIB_1Rnd_flare_white_mag
			{
				magazine = "LIB_1Rnd_flare_white";
				count = 2;
			};
			class _xx_LIB_1Rnd_flare_red_mag
			{
				magazine = "LIB_1Rnd_flare_red";
				count = 2;
			};
			class _xx_LIB_1Rnd_flare_green_mag
			{
				magazine = "LIB_1Rnd_flare_green";
				count = 2;
			};
			class _xx_LIB_32Rnd_9x19_mag
			{
				magazine = "LIB_32Rnd_9x19";
				count = 4;
			};
			class _xx_ifa3_1Rnd_signalflare_red
			{
				magazine = "ifa3_1Rnd_signalflare_red";
				count = 5;
			};
		};

		class TransportWeapons
		{
			class _xx_LIB_FLARE_PISTOL
			{
				weapon = "LIB_FLARE_PISTOL";
				count = 1;
			};
			class _xx_LIB_MP40
			{
				weapon = "LIB_MP40";
				count = 1;
			};
		};
		class TransportItems
		{
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 4;
			};
			class _xx_ACE_CableTie
			{
				name = "ACE_CableTie";
				count = 10;
			};
		};
		class TransportBackpacks
		{
			class _xx_B_LIB_GER_Backpack_e
			{
				backpack = "B_LIB_GER_Backpack_e";
				count = 1;
			};
		};
	};

	class ifa3_jp38_base: Tank_F {};
	class ifa3_jp38C: ifa3_jp38_base
	{
		class TransportMagazines {

			class _xx_LIB_SprGr34_KWK40_HE_mag
			{
				magazine = "LIB_SprGr34_KWK40_HE";
				count = 20;
			};
			class _xx_LIB_PzGr39_KWK40_AP_mag
			{
				magazine = "LIB_PzGr39_KWK40_AP";
				count = 16;
			};
			class _xx_LIB_PzGr40_KWK40_APCR_mag
			{
				magazine = "LIB_PzGr40_KWK40_APCR";
				count = 5;
			};
		class _xx_lib_50Rnd_792x57
			{
				magazine = "lib_50Rnd_792x57";
				count = 30;
			};
			class _xx_LIB_1Rnd_flare_white_mag
			{
				magazine = "LIB_1Rnd_flare_white";
				count = 2;
			};
			class _xx_LIB_1Rnd_flare_red_mag
			{
				magazine = "LIB_1Rnd_flare_red";
				count = 2;
			};
			class _xx_LIB_1Rnd_flare_green_mag
			{
				magazine = "LIB_1Rnd_flare_green";
				count = 2;
			};
			class _xx_LIB_32Rnd_9x19_mag
			{
				magazine = "lib_30Rnd_792x33";
				count = 4;
			};
			class _xx_ifa3_1Rnd_signalflare_red
			{
				magazine = "ifa3_1Rnd_signalflare_red";
				count = 5;
			};
		};

		class TransportWeapons
		{
			class _xx_LIB_FLARE_PISTOL
			{
				weapon = "LIB_FLARE_PISTOL";
				count = 1;
			};
			class _xx_LIB_MP44
			{
				weapon = "LIB_MP44";
				count = 1;
			};
		};
		class TransportItems
		{
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 4;
			};
			class _xx_ACE_CableTie
			{
				name = "ACE_CableTie";
				count = 10;
			};
		};
		class TransportBackpacks
		{
			class _xx_B_LIB_GER_Backpack_e
			{
				backpack = "B_LIB_GER_Backpack_e";
				count = 1;
			};
		};
	};
		class ifa3_jp38: ifa3_jp38C {};
	class ifa3_StuH_42: ifa3_StuG_III_G
	{
		class TransportMagazines {

			class _xx_LIB_SprGr34_KWK40_HE_mag
			{
				magazine = "LIB_FHGr_leFH18_HE";
				count = 26;
			};
			class _xx_LIB_PzGr39_KWK40_AP_mag
			{
				magazine = "LIB_PzGr_leFH18_AP";
				count = 5;
			};
			class _xx_LIB_PzGr40_KWK40_APCR_mag
			{
				magazine = "LIB_GR39rot_leFH18_HI";
				count = 5;
			};

			class _xx_LIB_1Rnd_flare_white_mag
			{
				magazine = "LIB_1Rnd_flare_white";
				count = 2;
			};
			class _xx_LIB_1Rnd_flare_red_mag
			{
				magazine = "LIB_1Rnd_flare_red";
				count = 2;
			};
			class _xx_LIB_1Rnd_flare_green_mag
			{
				magazine = "LIB_1Rnd_flare_green";
				count = 2;
			};
			class _xx_LIB_32Rnd_9x19_mag
			{
				magazine = "LIB_32Rnd_9x19";
				count = 4;
			};
			class _xx_ifa3_1Rnd_signalflare_red
			{
				magazine = "ifa3_1Rnd_signalflare_red";
				count = 5;
			};
		};
	};

	class ifa3_pz3j: Tank_F
	{
		class TransportMagazines {

			class _xx_IFa3_1x_SprGr38_KWK_39_mag
			{
				magazine = "IFa3_1x_SprGr38_KWK_39";
				count = 35;
			};
			class _xx_IFa3_1x_Pzgr39_KWK_39_mag
			{
				magazine = "IFa3_1x_Pzgr39_KWK_39";
				count = 45;
			};
			class _xx_IFa3_1x_Pzgr40_KWK_39_mag
			{
				magazine = "IFa3_1x_Pzgr40_KWK_39";
				count = 12;
			};

			class _xx_LIB_150rnd_MG34_mag
			{
				magazine = "LIB_150rnd_MG34";
				count = 30;
			};

			class _xx_LIB_1Rnd_flare_white_mag
			{
				magazine = "LIB_1Rnd_flare_white";
				count = 2;
			};
			class _xx_LIB_1Rnd_flare_red_mag
			{
				magazine = "LIB_1Rnd_flare_red";
				count = 2;
			};
			class _xx_LIB_1Rnd_flare_green_mag
			{
				magazine = "LIB_1Rnd_flare_green";
				count = 2;
			};
			class _xx_LIB_32Rnd_9x19_mag
			{
				magazine = "LIB_32Rnd_9x19";
				count = 4;
			};
			class _xx_ifa3_1Rnd_signalflare_red
			{
				magazine = "ifa3_1Rnd_signalflare_red";
				count = 5;
			};
		};

		class TransportWeapons
		{
			class _xx_LIB_FLARE_PISTOL
			{
				weapon = "LIB_FLARE_PISTOL";
				count = 1;
			};
			class _xx_LIB_MP40
			{
				weapon = "LIB_MP40";
				count = 1;
			};
		};
		class TransportItems
		{
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 4;
			};
			class _xx_ACE_CableTie
			{
				name = "ACE_CableTie";
				count = 10;
			};
		};
		class TransportBackpacks
		{
			class _xx_B_LIB_GER_Backpack_e
			{
				backpack = "B_LIB_GER_Backpack_e";
				count = 1;
			};
		};
	};
	class ifa3_pz3N: ifa3_pz3j
	{
		class TransportMagazines {

			class _xx_IFa3_1x_SprGr34_KWK_37_mag
			{
				magazine = "IFa3_1x_SprGr34_KWK_37";
				count = 30;
			};
			class _xx_IFa3_1x_K_Gr_rotPz_KWK_37_mag
			{
				magazine = "IFa3_1x_K_Gr_rotPz_KWK_37";
				count = 12;
			};
			class _xx_IFa3_1x_HI_Gr38C_KWK_37_mag
			{
				magazine = "IFa3_1x_HI_Gr38C_KWK_37";
				count = 20;
			};

			class _xx_LIB_150rnd_MG34_mag
			{
				magazine = "LIB_150rnd_MG34";
				count = 16;
			};
			class _xx_LIB_1Rnd_flare_white_mag
			{
				magazine = "LIB_1Rnd_flare_white";
				count = 2;
			};
			class _xx_LIB_1Rnd_flare_red_mag
			{
				magazine = "LIB_1Rnd_flare_red";
				count = 2;
			};
			class _xx_LIB_1Rnd_flare_green_mag
			{
				magazine = "LIB_1Rnd_flare_green";
				count = 2;
			};
			class _xx_LIB_32Rnd_9x19_mag
			{
				magazine = "LIB_32Rnd_9x19";
				count = 4;
			};
			class _xx_ifa3_1Rnd_signalflare_red
			{
				magazine = "ifa3_1Rnd_signalflare_red";
				count = 5;
			};
		};
	};

	class ifa3_pz3J_sov: ifa3_pz3j
	{
		class TransportMagazines {

			class _xx_IFa3_1x_SprGr38_KWK_39_mag
			{
				magazine = "IFa3_1x_SprGr38_KWK_39";
				count = 35;
			};
			class _xx_IFa3_1x_Pzgr39_KWK_39_mag
			{
				magazine = "IFa3_1x_Pzgr39_KWK_39";
				count = 45;
			};

			class _xx_LIB_150rnd_MG34_mag
			{
				magazine = "LIB_150rnd_MG34";
				count = 20;
			};

			class _xx_LIB_1Rnd_flare_white_mag
			{
				magazine = "LIB_1Rnd_flare_white";
				count = 2;
			};
			class _xx_LIB_1Rnd_flare_red_mag
			{
				magazine = "LIB_1Rnd_flare_red";
				count = 2;
			};
			class _xx_LIB_1Rnd_flare_green_mag
			{
				magazine = "LIB_1Rnd_flare_green";
				count = 2;
			};
			class _xx_ifa3_1Rnd_signalflare_red
			{
				magazine = "ifa3_1Rnd_signalflare_red";
				count = 5;
			};
		};

		class TransportWeapons
		{
			class _xx_LIB_FLARE_PISTOL
			{
				weapon = "LIB_FLARE_PISTOL";
				count = 1;
			};
		};
		class TransportItems
		{
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 4;
			};
			class _xx_ACE_CableTie
			{
				name = "ACE_CableTie";
				count = 10;
			};
		};
		class TransportBackpacks
		{
			class _xx_B_LIB_SOV_RA_Rucksack_E
			{
				backpack = "B_LIB_SOV_RA_Rucksack_E";
				count = 1;
			};
		};
	};

	class pz2f: Tank_F
	{
		class TransportMagazines {

			class _xx_LIB_10x_SprGr_KWK_38_mag
			{
				magazine = "LIB_10x_SprGr_KWK_38";
				count = 10;
			};
			class _xx_LIB_10x_Pzgr_KWK_38_mag
			{
				magazine = "LIB_10x_Pzgr_KWK_38";
				count = 4;
			};
			class _xx_LIB_10x_Pzgr40_KWK_38_mag
			{
				magazine = "LIB_10x_Pzgr40_KWK_38";
				count = 4;
			};

			class _xx_LIB_150rnd_MG34_mag
			{
				magazine = "LIB_150rnd_MG34";
				count = 15;
			};

			class _xx_LIB_1Rnd_flare_white_mag
			{
				magazine = "LIB_1Rnd_flare_white";
				count = 2;
			};
			class _xx_LIB_1Rnd_flare_red_mag
			{
				magazine = "LIB_1Rnd_flare_red";
				count = 2;
			};
			class _xx_LIB_1Rnd_flare_green_mag
			{
				magazine = "LIB_1Rnd_flare_green";
				count = 2;
			};
			class _xx_LIB_32Rnd_9x19_mag
			{
				magazine = "LIB_32Rnd_9x19";
				count = 4;
			};
			class _xx_ifa3_1Rnd_signalflare_red
			{
				magazine = "ifa3_1Rnd_signalflare_red";
				count = 5;
			};
		};

		class TransportWeapons
		{
			class _xx_LIB_FLARE_PISTOL
			{
				weapon = "LIB_FLARE_PISTOL";
				count = 1;
			};
			class _xx_LIB_MP40
			{
				weapon = "LIB_MP40";
				count = 1;
			};
		};
		class TransportItems
		{
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 4;
			};
			class _xx_ACE_CableTie
			{
				name = "ACE_CableTie";
				count = 10;
			};
		};
		class TransportBackpacks
		{
			class _xx_B_LIB_GER_Backpack_e
			{
				backpack = "B_LIB_GER_Backpack_e";
				count = 1;
			};
		};
	};
	class pz2f2: pz2f {};

	class ifa3_t60: Tank_F
	{
		class TransportMagazines {

			class _xx_ifa3_58x_OT_20_mag
			{
				magazine = "ifa3_58x_OT_20";
				count = 6;
			};
			class _xx_ifa3_58x_BZT_20_mag
			{
				magazine = "ifa3_58x_BZT_20";
				count = 5;
			};
			class _xx_ifa3_58x_BP_20_mag
			{
				magazine = "ifa3_58x_BP_20";
				count = 2;
			};

			class _xx_lib_63Rnd_762x54_mag
			{
				magazine = "lib_63Rnd_762x54";
				count = 15;
			};

			class _xx_LIB_1Rnd_flare_white_mag
			{
				magazine = "LIB_1Rnd_flare_white";
				count = 2;
			};
			class _xx_LIB_1Rnd_flare_red_mag
			{
				magazine = "LIB_1Rnd_flare_red";
				count = 2;
			};
			class _xx_LIB_1Rnd_flare_green_mag
			{
				magazine = "LIB_1Rnd_flare_green";
				count = 2;
			};
			class _xx_ifa3_1Rnd_signalflare_red
			{
				magazine = "ifa3_1Rnd_signalflare_red";
				count = 5;
			};
		};

		class TransportWeapons
		{
			class _xx_LIB_FLARE_PISTOL
			{
				weapon = "LIB_FLARE_PISTOL";
				count = 1;
			};
		};
		class TransportItems
		{
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 4;
			};
			class _xx_ACE_CableTie
			{
				name = "ACE_CableTie";
				count = 10;
			};
		};
		class TransportBackpacks
		{
			class _xx_B_LIB_SOV_RA_Rucksack_E
			{
				backpack = "B_LIB_SOV_RA_Rucksack_E";
				count = 1;
			};
		};
	};

	class Truck_F: Car_F {};
	class LIB_Truck_base: Truck_F {};
	class LIB_zis5v_base: LIB_Truck_base {};
	class lib_zis5v_61K: lib_zis5v_base
	{
		class TransportMagazines {

			class _xx_LIB_5x_61k_mag
			{
				magazine = "LIB_5x_61k";
				count = 30;
			};
			class _xx_LIB_5x_61kAP_mag
			{
				magazine = "LIB_5x_61kAP";
				count = 15;
			};

			class _xx_LIB_1Rnd_flare_white_mag
			{
				magazine = "LIB_1Rnd_flare_white";
				count = 2;
			};
			class _xx_LIB_1Rnd_flare_red_mag
			{
				magazine = "LIB_1Rnd_flare_red";
				count = 2;
			};
			class _xx_LIB_1Rnd_flare_green_mag
			{
				magazine = "LIB_1Rnd_flare_green";
				count = 2;
			};
			class _xx_ifa3_1Rnd_signalflare_red
			{
				magazine = "ifa3_1Rnd_signalflare_red";
				count = 5;
			};
		};

		class TransportWeapons
		{
			class _xx_LIB_FLARE_PISTOL
			{
				weapon = "LIB_FLARE_PISTOL";
				count = 1;
			};
		};
		class TransportItems
		{
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 0;
			};
			class _xx_ACE_CableTie
			{
				name = "ACE_CableTie";
				count = 10;
			};
		};
		class TransportBackpacks
		{
			class _xx_B_LIB_SOV_RA_Rucksack_E
			{
				backpack = "B_LIB_SOV_RA_Rucksack_E";
				count = 1;
			};
		};
	};
	class Wheeled_APC: Car {};

	class LIB_Wheeled_APC_base: Wheeled_APC_F {};
	class LIB_SdKfz251_base: LIB_Wheeled_APC_base {};
	class LIB_SdKfz251: LIB_SdKfz251_base
	{
		class TransportMagazines
	{

			class _xx_LIB_250rnd_792x57_mag
			{
				magazine = "LIB_250rnd_792x57";
				count = 5;
			};
			class _xx_lib_250Rnd_792x57_sS_mag
			{
				magazine = "lib_250Rnd_792x57_sS";
				count = 1;
			};
			class _xx_lib_250Rnd_792x57_SMK_mag
			{
				magazine = "lib_250Rnd_792x57_SMK";
				count = 1;
			};

			class _xx_LIB_1Rnd_flare_white_mag
			{
				magazine = "LIB_1Rnd_flare_white";
				count = 2;
			};
			class _xx_LIB_1Rnd_flare_red_mag
			{
				magazine = "LIB_1Rnd_flare_red";
				count = 2;
			};
			class _xx_LIB_1Rnd_flare_green_mag
			{
				magazine = "LIB_1Rnd_flare_green";
				count = 2;
			};
			class _xx_ifa3_1Rnd_signalflare_red
			{
				magazine = "ifa3_1Rnd_signalflare_red";
				count = 5;
			};
		};

		class TransportWeapons
		{
			class _xx_LIB_FLARE_PISTOL
			{
				weapon = "LIB_FLARE_PISTOL";
				count = 1;
			};
		};
		class TransportItems
		{
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 0;
			};
			class _xx_ACE_CableTie
			{
				name = "ACE_CableTie";
				count = 10;
			};
		};
		class TransportBackpacks
		{
			class _xx_B_LIB_GER_Backpack_e
			{
				backpack = "B_LIB_GER_Backpack_e";
				count = 1;
			};
		};
	};

	class Lib_SdKfz251_captured: Lib_sdkfz251
	{
		class TransportBackpacks
		{
			class _xx_B_LIB_GER_Backpack_e
			{
				backpack = "B_LIB_SOV_RA_Rucksack_E";
				count = 1;
			};
		};
	};

	class LIB_SdKfz_7_base: LIB_SdKfz251_base
{
		class TransportMagazines {};
		class TransportWeapons {};
		class TransportItems {};
		class TransportBackpacks {};
	};
	class LIB_SdKfz_7_AA: LIB_SdKfz_7_base
	{
		class TransportMagazines
	{

			class _xx_LIB_80x_SprGr_FlaK_38_mag
			{
				magazine = "LIB_80x_SprGr_FlaK_38";
				count = 10;
			};

			class _xx_LIB_1Rnd_flare_white_mag
			{
				magazine = "LIB_1Rnd_flare_white";
				count = 2;
			};
			class _xx_LIB_1Rnd_flare_red_mag
			{
				magazine = "LIB_1Rnd_flare_red";
				count = 2;
			};
			class _xx_LIB_1Rnd_flare_green_mag
			{
				magazine = "LIB_1Rnd_flare_green";
				count = 2;
			};
			class _xx_ifa3_1Rnd_signalflare_red
			{
				magazine = "ifa3_1Rnd_signalflare_red";
				count = 5;
			};
		};

		class TransportWeapons
		{
			class _xx_LIB_FLARE_PISTOL
			{
				weapon = "LIB_FLARE_PISTOL";
				count = 1;
			};
		};
		class TransportItems
		{
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 0;
			};
			class _xx_ACE_CableTie
			{
				name = "ACE_CableTie";
				count = 10;
			};
		};
		class TransportBackpacks
		{
			class _xx_B_LIB_GER_Backpack_e
			{
				backpack = "B_LIB_GER_Backpack_e";
				count = 1;
			};
		};
	};
	class LIB_US_M3_Halftrack: LIB_SdKfz251_base
	{
		class TransportMagazines {

			class _xx_100Rnd_127x99_M2_mag
			{
				magazine = "LIB_100Rnd_127x99_M2";
				count = 7;
			};
			class _xx_LIB_1Rnd_flare_white_mag
			{
				magazine = "LIB_1Rnd_flare_white";
				count = 2;
			};
			class _xx_LIB_1Rnd_flare_red_mag
			{
				magazine = "LIB_1Rnd_flare_red";
				count = 2;
			};
			class _xx_LIB_1Rnd_flare_green_mag
			{
				magazine = "LIB_1Rnd_flare_green";
				count = 2;
			};
			class _xx_ifa3_1Rnd_signalflare_red
			{
				magazine = "ifa3_1Rnd_signalflare_red";
				count = 5;
			};
		};

		class TransportWeapons
		{
			class _xx_LIB_FLARE_PISTOL
			{
				weapon = "LIB_FLARE_PISTOL";
				count = 1;
			};
		};
		class TransportItems
		{
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 0;
			};
			class _xx_ACE_CableTie
			{
				name = "ACE_CableTie";
				count = 10;
			};
		};
		class TransportBackpacks
		{
			class _xx_B_LIB_SOV_RA_Rucksack_E
			{
				backpack = "B_LIB_SOV_RA_Rucksack_E";
				count = 1;
			};
		};
	};

	class LIB_SOV_M3_Halftrack: LIB_US_M3_Halftrack {};
	class LIB_Scout_M3_base: LIB_Truck_base {};
	class LIB_Scout_M3: LIB_Scout_M3_base
	{
		class TransportMagazines {

			class _xx_100Rnd_127x99_M2_mag
			{
				magazine = "LIB_100Rnd_127x99_M2";
				count = 7;
			};
			class _xx_LIB_1Rnd_flare_white_mag
			{
				magazine = "LIB_1Rnd_flare_white";
				count = 2;
			};
			class _xx_LIB_1Rnd_flare_red_mag
			{
				magazine = "LIB_1Rnd_flare_red";
				count = 2;
			};
			class _xx_LIB_1Rnd_flare_green_mag
			{
				magazine = "LIB_1Rnd_flare_green";
				count = 2;
			};
			class _xx_ifa3_1Rnd_signalflare_red
			{
				magazine = "ifa3_1Rnd_signalflare_red";
				count = 5;
			};
		};

		class TransportWeapons
		{
			class _xx_LIB_FLARE_PISTOL
			{
				weapon = "LIB_FLARE_PISTOL";
				count = 1;
			};
		};
		class TransportItems
		{
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 0;
			};
			class _xx_ACE_CableTie
			{
				name = "ACE_CableTie";
				count = 10;
			};
		};
		class TransportBackpacks
		{
			class _xx_B_LIB_SOV_RA_Rucksack_E
			{
				backpack = "B_LIB_SOV_RA_Rucksack_E";
				count = 1;
			};
		};
	};
	class LIB_US_Scout_M3: LIB_Scout_M3_base {};
	class LIB_Car_base: Car_F {};
	class LIB_Kfz1_base: LIB_Car_base {};
	class LIB_Kfz1: LIB_Kfz1_base {};
	class LIB_Kfz1_MG42: LIB_Kfz1_base
	{
		class TransportMagazines
		{

			class _xx_LIB_50rnd_792x57_mag
			{
				magazine = "LIB_50rnd_792x57";
				count = 10;
			};
		};
		class TransportBackpacks
		{
			class _xx_B_LIB_GER_Backpack_e
			{
				backpack = "B_LIB_GER_Backpack_e";
				count = 1;
			};
		};
	};*/
};
