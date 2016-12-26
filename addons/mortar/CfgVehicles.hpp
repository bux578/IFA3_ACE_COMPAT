
class CfgVehicles
{
	class Man;

	class CAManBase: Man
	{
		class ACE_SelfActions
		{
			class ACE_Equipment
			{

				class ace_ifa3mortar_rangetable_3
				{
					displayName = "$STR_ace_ifa3mortar_rangetable_action_3";
					condition = "_this call ace_ifa3mortar_fnc_rangeTableCanUse_3";
					statement = "_this call ace_ifa3mortar_fnc_rangeTableOpen_3";
					priority = 0;
					icon = "\z\ifa3_comp_ace\addons\mortar\UI\icon_rangeTable.paa";
					exceptions[] = {"notOnMap","isNotInside","isNotSitting"};
				};

				class ace_ifa3mortar_rangetable_6
				{
					displayName = "$STR_ace_ifa3mortar_rangetable_action_6";
					condition = "_this call ace_ifa3mortar_fnc_rangeTableCanUse_6";
					statement = "_this call ace_ifa3mortar_fnc_rangeTableOpen_6";
					priority = 0;
					icon = "\z\ifa3_comp_ace\addons\mortar\UI\icon_rangeTable.paa";
					exceptions[] = {"notOnMap","isNotInside","isNotSitting"};
				};
			};
		};
	};
	class LandVehicle;

	class StaticWeapon: LandVehicle
	{
		class Turrets
		{
			class MainTurret;
		};
	};

	class StaticMortar: StaticWeapon
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret {};
		};
		class ACE_Actions ;
	};
	//class Mortar_01_base_F: StaticMortar {};
	class LIB_Mortar_ACE: StaticMortar
{

		author = "Iron Front Arma 3";
		scope = private;
		transportSoldier = 0;
		cargoAction[] = {"Mortar_Gunner"};
		getInAction = "GetInMortar";
		getOutAction = "GetOutLow";
		ejectDeadGunner = true;
		editorSubcategory = "EdSubcat_Turrets";

		model = "WW2\Assets_m\Weapons\Mortars_m\WW2_Bm37.p3d";
		icon = "WW2\Assets_t\Weapons\Misc_t\Icons\Mortars\icon_Bm37_ca.paa";
		picture = "WW2\Assets_t\Vehicles\Misc_t\Pictures\Mortars\BM37_ca.paa";
		mapSize = 3;
		cost = 200000;
		accuracy = 0.25;	// accuracy needed to recognize type of this target

		// threat (VSoft,VArmor,VAir),how threatening vehicle is to unit types
		threat[] = {1,0.3,0.1};

		htMin = 1;
		htMax = 480;
		afMax = 0;
		mfMax = 0;
		mFact = 1;
		tBody = 100;

		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunnerAction = "Mortar_Gunner";
				gunnergetInAction = "";
				gunnergetOutAction = "";
				weapons[] = {};
				magazines[] = {};
				elevationMode = 0;
				maxHorizontalRotSpeed= 0.025;
				maxVerticalRotSpeed= 0.1;
				initCamElev = 0;
				minCamElev = -35;
				maxCamElev = 35;
				initElev = 0;
				minTurn = -10;
				maxTurn = 10;
				initTurn = 0;
				minelev = -10;
				maxelev = 30;
				cameraDir = "look";
				discreteDistance[] = {100,200,300,400,500,700,1000,1600,2000,2400,2800};
				discreteDistanceCameraPoint[] = {"eye"};
				discreteDistanceInitIndex = 5;
			//	turretInfoType = "RscWeaponRangeArtilleryIF";
				turretInfoType = "ACE_Mk6_RscWeaponRangeArtillery";
				gunnerForceOptics = false;
				memoryPointGunnerOptics = "eye";

				class ViewGunner
				{
					initAngleX = 0;
					minAngleX = -100;
					maxAngleX = 100;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.7;
					minFov = 0.7;
					maxFov = 0.7;
				};

				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -100;
					maxAngleX = 100;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.4;
					minFov = 0.4;
					maxFov = 0.4;
				};

				class OpticsIn
				{
					class Wide
					{
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 0.1;
						minFov = 0.1;
						maxFov = 0.1;
						visionMode[] = {"Normal"};
						thermalMode[] = {0,1};
						gunnerOpticsModel = "WW2\Assets_m\Vehicles\Optics_m\WW2_Optika_zis3.p3d";
						gunnerOpticsEffect[] = {};
					};
				};
			};
		};

		class UserActions
		{
			class Open_table
			{
				displayName = $STR_ACE_Mortar_table_shooting;
				priority = 6;
				radius = 1;
				position = "osaveze";
				showWindow = 0;
				onlyForPlayer = 1;
				shortcut = "";
				condition = "(local player) && (alive this) && (player in (crew this)) && ([this,player] call ace_ifa3mortar_fnc_rangeTableCanUse_3)";
				statement = "[] call ace_ifa3mortar_fnc_rangeTableOpen_3";
			};
		};

		class DestructionEffects
		{
			class Smoke
			{
				simulation = "particles";
				type = "WeaponWreckSmoke";
				position = "destructionEffect";
				intensity = 1;
				interval = 1;
				lifeTime = 5;
			};
		};

		artilleryScanner = 0;
		laserScanner = false;

		class assembleInfo
		{
			primary = false;
			base = "";
			assembleTo = "";
			dissasembleTo[] = {};
			displayName = "";
		};

		class ACE_SelfActions
		{
			class ace_mk6mortar_toggleMils
			{
				displayName = "Toggle MILS";
				condition = 1;
				statement = "_this call ace_ifa3mortar_fnc_toggleMils";
				exceptions[] = {};
			};
		};
	};

	class LIB_Mortar_SU_ACE: LIB_Mortar_ACE
{
	//	scope = private;
	//	side = TEast;
	//	expansion = 1;
	//	faction = LIB_RKKA;
		crew = "LIB_SOV_gun_crew";
		typicalCargo[] = {"LIB_SOV_gun_crew"};
	};

	class LIB_Mortar_GER_ACE: LIB_Mortar_ACE
{
	//	scope = private;
	//	side = TWest;
	//	expansion = 1;
	//	faction = LIB_WEHRMACHT;
		crew = "LIB_GER_gun_crew";
		typicalCargo[] = {"LIB_GER_gun_crew"};
	};

	class LIB_BM37_ACE: LIB_Mortar_SU_ACE
	{
		scope = public;
		scopeCurator = public;
		scopeArsenal = public;
		side = TEast;
		faction = LIB_RKKA;
		displayname = $STR_LIB_DN_BM37_ACE;
		model = "WW2\Assets_m\Weapons\Mortars_m\WW2_Bm37.p3d";
		picture = "WW2\Assets_t\Vehicles\Misc_t\Pictures\Mortars\BM37_ca.paa";
		author = "Iron Front Arma 3";


		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"LIB_BM37_ACE"};
				magazines[] = {"lex_82mm_HE_round"};
			};
		};

		class assembleInfo: assembleInfo
		{
			dissasembleTo[] = {"LIB_BM37_bag","LIB_BM37_bar"};
		};
	};
	class LIB_GrWr34_ACE: LIB_Mortar_GER_ACE
	{
		scope = public;
		scopeCurator = public;
		scopeArsenal = public;
		side = TWest;
		expansion = 1;
		faction = LIB_WEHRMACHT;
		displayname = $STR_LIB_DN_GRWR34_ACE;
		icon = "WW2\Assets_t\Weapons\Misc_t\Icons\Mortars\icon_GrWr34_ca.paa";
		picture = "WW2\Assets_t\Vehicles\Misc_t\Pictures\Mortars\GrWr34_ca.paa";
		model = "WW2\Assets_m\Weapons\Mortars_m\WW2_GrWr34.p3d";
		author = "Iron Front Arma 3";


		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"LIB_GRWR34_ACE"};
				magazines[] = {"lex_82mm_HE_round"};
			};
		};

		class assembleInfo: assembleInfo
		{
			dissasembleTo[] = {"LIB_GrWr34_Bag","LIB_GrWr34_bar"};
		};
		class UserActions
		{
			class Open_table
			{
				displayName = $STR_ACE_Mortar_table_shooting;
				priority = 6;
				radius = 1;
				position = "osaveze";
				showWindow = 0;
				onlyForPlayer = 1;
				shortcut = "";
				condition = "(local player) && (alive this) && (player in (crew this)) && ([this,player] call ace_ifa3mortar_fnc_rangeTableCanUse_6)";
				statement = "[] call ace_ifa3mortar_fnc_rangeTableOpen_6";
			};
		};
	};
	class NATO_Box_Base;
	class lex_82mm_ammobox_HE: NATO_Box_Base
	{
		scope = public;
		scopeCurator = public;
	//	scopeArsenal = public;
		side = TSideUnknown ;
		accuracy = 1000;
		displayName = "$STR_ace_ifa3mortar_mortar_ammobox_HE";
		model = "\z\ifa3_comp_ace\addons\mortar\data\82mm_heat_ammobox.p3d";
		author = "Lex";
		ace_cargo_size = 0.5;
		ace_cargo_canLoad = 1;
		mortarMagazines = "lex_82mm_HE_round";
		class TransportMagazines
		{
		};
		forceSupply=0;
		showWeaponCargo=0;
		transportMaxMagazines=0;
		transportMaxWeapons=0;

		class eventHandlers
		{
			init = "_this call compile preProcessFileLineNumbers ""\z\ifa3_comp_ace\addons\mortar\functions\fnc_init.sqf"";";
		};
		class AnimationSources
		{
			class BoxLidRotation
			{
				source = "user";
				initPhase = 0;
				animPeriod = 1.5;
			};

			class round_1_hide
			{
				source = "user";
				initPhase = 0;
				animPeriod = 0.001;
			};

			class round_2_hide
			{
				source = "user";
				initPhase = 0;
				animPeriod = 0.001;
			};

			class round_3_hide
			{
				source = "user";
				initPhase = 0;
				animPeriod = 0.001;
			};

			class round_4_hide
			{
				source = "user";
				initPhase = 0;
				animPeriod = 0.001;
			};

			class round_5_hide
			{
				source = "user";
				initPhase = 0;
				animPeriod = 0.001;
			};
		};

		class ACE_Actions
		{

			class ACE_MainActions
			{
				displayName = "$STR_ace_ifa3mortar_desc_mortar_ammobox_HE";
				selection = "";
				distance = 3;
				condition = "!(_target getVariable ['isOpened',false])";

				class ACE_OpenLid
					{
						displayName = "$STR_ace_ifa3mortar_open_ammobox";
						distance = 2;
						condition = "!(_target getVariable ['isOpened',false])";
						statement = "_target animate [""BoxLidRotation"",1]; _target setVariable [""isOpened"",true,true];";
						showDisabled = 0;
						exceptions[] = {};
						priority = 5;
					};
			};

			class ACE_CloseLid
			{
				selection = "rotation_action_point";
				distance = 2;
				displayName = "$STR_ace_ifa3mortar_close_ammobox";
				condition = "_target getVariable ['isOpened',true]";
				statement = "_target animate [""BoxLidRotation"",0]; _target setVariable [""isOpened"",false,true];";
				showDisabled = 0;
				exceptions[] = {};
				priority = 5;

			};

			class ACE_Round_1_Take
			{
				displayName = "$STR_ace_ifa3mortar_take";
				selection = "round_1_action_point";
				distance = 2;
				condition = "(_target getVariable ['round_1',true]) && (_target getVariable ['isOpened',true]) && ([_player,_target] call ace_ifa3mortar_fnc_canTake)";
				statement = "_target animate ['round_1_hide',1]; _target setVariable ['round_1',false,true]; [_player,_target] call compile preprocessFileLineNumbers '\z\ifa3_comp_ace\addons\mortar\functions\fnc_take_shell.sqf';";
				showDisabled = 0;
				exceptions[] = {};
				priority = 5;
			};

			class ACE_Round_1_Put
			{
				displayName = "$STR_ace_ifa3mortar_place";
				selection = "round_1_action_point";
				distance = 2;
				condition = "(!(_target getVariable ['round_1',true]) && (_target getVariable ['isOpened',true]) && ([_player,_target] call ace_ifa3mortar_fnc_canPut))";
				statement = "[_player,_target,1] call compile preprocessFileLineNumbers '\z\ifa3_comp_ace\addons\mortar\functions\fnc_put_shell.sqf';";
				showDisabled = 0;
				exceptions[] = {};
				priority = 5;
			};

			class ACE_Round_2_Take
			{
				displayName = "$STR_ace_ifa3mortar_take";
				selection = "round_2_action_point";
				distance = 2;
				condition = "(_target getVariable ['round_2',true]) && (_target getVariable ['isOpened',true]) && ([_player,_target] call ace_ifa3mortar_fnc_canTake)";
				statement = "_target animate ['round_2_hide',1]; _target setVariable ['round_2',false,true]; [_player,_target] call compile preprocessFileLineNumbers '\z\ifa3_comp_ace\addons\mortar\functions\fnc_take_shell.sqf';";
				showDisabled = 0;
				exceptions[] = {};
				priority = 5;
			};

			class ACE_Round_2_Put
			{
				displayName = "$STR_ace_ifa3mortar_place";
				selection = "round_2_action_point";
				distance = 2;
				condition = "(!(_target getVariable ['round_2',true]) && (_target getVariable ['isOpened',true]) && ([_player,_target] call ace_ifa3mortar_fnc_canPut))";
				statement = "[_player,_target,2] call compile preprocessFileLineNumbers '\z\ifa3_comp_ace\addons\mortar\functions\fnc_put_shell.sqf';";
				showDisabled = 0;
				exceptions[] = {};
				priority = 5;
			};

			class ACE_Round_3_Take
			{
				displayName = "$STR_ace_ifa3mortar_take";
				selection = "round_3_action_point";
				distance = 2;
				condition = "(_target getVariable ['round_3',true]) && (_target getVariable ['isOpened',true]) && ([_player,_target] call ace_ifa3mortar_fnc_canTake)";
				statement = "_target animate ['round_3_hide',1]; _target setVariable ['round_3',false,true]; [_player,_target] call compile preprocessFileLineNumbers '\z\ifa3_comp_ace\addons\mortar\functions\fnc_take_shell.sqf';";
				showDisabled = 0;
				exceptions[] = {};
				priority = 5;
			};

			class ACE_Round_3_Put
			{
				displayName = "$STR_ace_ifa3mortar_place";
				selection = "round_3_action_point";
				distance = 2;
				condition = "(!(_target getVariable ['round_3',true]) && (_target getVariable ['isOpened',true]) && ([_player,_target] call ace_ifa3mortar_fnc_canPut))";
				statement = "[_player,_target,3] call compile preprocessFileLineNumbers '\z\ifa3_comp_ace\addons\mortar\functions\fnc_put_shell.sqf';";
				showDisabled = 0;
				exceptions[] = {};
				priority = 5;
			};

			class ACE_Round_4_Take
			{
				displayName = "$STR_ace_ifa3mortar_take";
				selection = "round_4_action_point";
				distance = 2;
				condition = "(_target getVariable ['round_4',true]) && (_target getVariable ['isOpened',true]) && ([_player,_target] call ace_ifa3mortar_fnc_canTake)";
				statement = "_target animate ['round_4_hide',1]; _target setVariable ['round_4',false,true]; [_player,_target] call compile preprocessFileLineNumbers '\z\ifa3_comp_ace\addons\mortar\functions\fnc_take_shell.sqf';";
				showDisabled = 0;
				exceptions[] = {};
				priority = 5;
			};

			class ACE_Round_4_Put
			{
				displayName = "$STR_ace_ifa3mortar_place";
				selection = "round_4_action_point";
				distance = 2;
				condition = "(!(_target getVariable ['round_4',true]) && (_target getVariable ['isOpened',true]) && ([_player,_target] call ace_ifa3mortar_fnc_canPut))";
				statement = "[_player,_target,4] call compile preprocessFileLineNumbers '\z\ifa3_comp_ace\addons\mortar\functions\fnc_put_shell.sqf';";
				showDisabled = 0;
				exceptions[] = {};
				priority = 5;
			};

			class ACE_Round_5_Take
			{
				displayName = "$STR_ace_ifa3mortar_take";
				selection = "round_5_action_point";
				distance = 2;
				condition = "(_target getVariable ['round_5',true]) && (_target getVariable ['isOpened',true]) && ([_player,_target] call ace_ifa3mortar_fnc_canTake)";
				statement = "_target animate ['round_5_hide',1]; _target setVariable ['round_5',false,true]; [_player,_target] call compile preprocessFileLineNumbers '\z\ifa3_comp_ace\addons\mortar\functions\fnc_take_shell.sqf';";
				showDisabled = 0;
				exceptions[] = {};
				priority = 5;
			};

			class ACE_Round_5_Put
			{
				displayName = "$STR_ace_ifa3mortar_place";
				selection = "round_5_action_point";
				distance = 2;
				condition = "(!(_target getVariable ['round_5',true]) && (_target getVariable ['isOpened',true]) && ([_player,_target] call ace_ifa3mortar_fnc_canPut))";
				statement = "[_player,_target,5] call compile preprocessFileLineNumbers '\z\ifa3_comp_ace\addons\mortar\functions\fnc_put_shell.sqf';";
				showDisabled = 0;
				exceptions[] = {};
				priority = 5;
			};
		};
	};
	class lex_82mm_ammobox_Smoke: lex_82mm_ammobox_HE
	{
		displayName = "$STR_ace_ifa3mortar_mortar_ammobox_SM";
		model = "\z\ifa3_comp_ace\addons\mortar\data\82mm_smoke_ammobox.p3d";
		mortarMagazines = "lex_82mm_Smoke_round";
		class ACE_Actions: ACE_Actions
		{
			class ACE_MainActions:  ACE_MainActions
			{
				displayName = "$STR_ace_ifa3mortar_desc_mortar_ammobox_SM";
			};
		};
	};
	class lex_82mm_ammobox_Illum: lex_82mm_ammobox_HE
	{
		displayName = "$STR_ace_ifa3mortar_mortar_ammobox_IL";
		model = "\z\ifa3_comp_ace\addons\mortar\data\82mm_illum_ammobox.p3d";
		mortarMagazines = "lex_82mm_Illum_round";
		class ACE_Actions: ACE_Actions
		{
			class ACE_MainActions:  ACE_MainActions
			{
				displayName = "$STR_ace_ifa3mortar_desc_mortar_ammobox_IL";
			};
		};
	};
};
