class CfgPatches {
	class Athena_AI {
		units[] = 
        {
			""
        };
		weapons[] = 
        {
            ""
        };
		requiredVersion = 0.100000;
		requiredAddons[] = {};
	};
};
//#include "xtdGear.hpp"
class cfgWeapons 
{
    class V_PlateCarrierSpec_blk;
	class VestItem;
	class 24th_Armor_Rifleman;
	class 24th_Helmet_Base;
	class HeadgearItem;
	class VES_BDU_Evolved_Slim;
	class UniformItem;

	
    class 24th_Athena_Armor_AI: 24th_Armor_Rifleman
    {
        scope=2;
        scopeCurator = 2;
        scopeArsenal = 2;
        dlc = "24th AUX";
        author = "Capt. Whiskey / Ithias";
        displayName = "[24th] Athena Armor (AI)";
		model= "\OPTRE_UNSC_Units\Army\armor.p3d";
        hiddenSelectionsMaterials[] = 
		{
			"24th_AB_AUX\Equipment\AI\Tex\VR_Armor.rvmat",
			"24th_AB_AUX\Equipment\AI\Tex\VR_Armor.rvmat",
			"24th_AB_AUX\Equipment\AI\Tex\VR_Armor.rvmat",
			"24th_AB_AUX\Equipment\AI\Tex\VR_Armor.rvmat",
			"24th_AB_AUX\Equipment\AI\Tex\VR_Armor.rvmat",
		};
        hiddenSelectionsTextures[] = 
		{
			"#(argb,8,8,3)color(0.75,0.75,0.75,1,ca)",
			"#(argb,8,8,3)color(0.75,0.75,0.75,1,ca)",
			"#(argb,8,8,3)color(0.75,0.75,0.75,1,ca)",
			"#(argb,8,8,3)color(0.75,0.75,0.75,1,ca)",
			"#(argb,8,8,3)color(0.75,0.75,0.75,1,ca)",
		};
        class ItemInfo: VestItem
        {
            containerClass = "Supply100";
            mass = 80;
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"camo6",
				//"A_Base",
				//"A_ChestArmor",
				"A_Ghillie",
				//"A_KneesLeft",
				//"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
				//"A_ShinArmorLeft",
				//"A_ShinArmorRight",
				"A_TacPad",
				//"A_ThighArmorLeft",
				//"A_ThighArmorRight",
				//"AS_BaseLeft",
				//"AS_BaseRight",
				//"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				//"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
            hiddenSelectionsMaterials[] = 
			{
				"24th_AB_AUX\Equipment\AI\Tex\VR_Armor.rvmat",
				"24th_AB_AUX\Equipment\AI\Tex\VR_Armor.rvmat",
				"24th_AB_AUX\Equipment\AI\Tex\VR_Armor.rvmat",
				"24th_AB_AUX\Equipment\AI\Tex\VR_Armor.rvmat",
				"24th_AB_AUX\Equipment\AI\Tex\VR_Armor.rvmat",
				"24th_AB_AUX\Equipment\AI\Tex\VR_Armor.rvmat",
			};
            hiddenSelectionsTextures[] = 
			{
				"#(argb,8,8,3)color(0.75,0.75,0.75,1,ca)",
				"#(argb,8,8,3)color(0.75,0.75,0.75,1,ca)",
				"#(argb,8,8,3)color(0.75,0.75,0.75,1,ca)",
				"#(argb,8,8,3)color(0.75,0.75,0.75,1,ca)",
				"#(argb,8,8,3)color(0.75,0.75,0.75,1,ca)",
				"#(argb,8,8,3)color(0.75,0.75,0.75,1,ca)",
			};
            modelSides[] = {6};
			class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 40;
                    passThrough = 0.1;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 40;
                    passThrough = 0.1;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 45;
                    passThrough = 0.1;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 45;
                    passThrough = 0.1;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 45;
                    passThrough = 0.1;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.1;
                    armor = 40;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 40;
                    passThrough = 0.1;
                };
			};
        };
    };
class 24th_Athena_Helmet_AI: 24th_Helmet_Base
	{
        scope = 2;
        scopeArsenal = 2;
        displayName = "[24th] Athena Helmet (AI)";
        author = "Ithias";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3",
		};
        hiddenSelectionsMaterials[] = 
		{
			"24th_AB_AUX\Equipment\AI\Tex\VR_Patrol.rvmat",
			"24th_AB_AUX\Equipment\AI\Tex\VR_Patrol.rvmat",
			"24th_AB_AUX\Equipment\AI\Tex\VR_Patrol.rvmat",
		};
        hiddenSelectionsTextures[] = 
        {
			"#(argb,8,8,3)color(0.75,0.75,0.75,1,ca)",
			"#(argb,8,8,3)color(0.75,0.75,0.75,1,ca)",
			"#(argb,8,8,3)color(0.75,0.75,0.75,1,ca)",
        };
		class ItemInfo: HeadgearItem
		{
			mass=1;
			uniformModel="\OPTRE_UNSC_Units\Army\aa_helmet";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
			};
			hiddenSelectionsMaterials[] = 
			{
				"24th_AB_AUX\Equipment\AI\Tex\VR_Patrol.rvmat",
				"24th_AB_AUX\Equipment\AI\Tex\VR_Patrol.rvmat",
				"24th_AB_AUX\Equipment\AI\Tex\VR_Patrol.rvmat",
			};
			hiddenSelectionsTextures[] = 
			{
				"#(argb,8,8,3)color(0.75,0.75,0.75,1,ca)",
				"#(argb,8,8,3)color(0.75,0.75,0.75,1,ca)",
				"#(argb,8,8,3)color(0.75,0.75,0.75,1,ca)",
			};
            class HitpointsProtectionInfo
			{
				class Face
				{
					armor=20;
					hitpointName="HitFace";
					passThrough=0.1;
				};
				class Head
				{
					armor=40;
					hitPointName="HitHead";
					passThrough=0.1;
				};
				class Neck
				{
					armor=15;
					hitpointName="HitNeck";
					passThrough=0.1;
				};
			};
        };
	};
	class 24th_Athena_Helmet_AI_dp: 24th_Athena_Helmet_AI
	{
        scope = 1;
        scopeArsenal = 1;
        displayName = "[24th] Athena Helmet (AI)";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3",
		};
        hiddenSelectionsMaterials[] = 
		{
			"24th_AB_AUX\Equipment\AI\Tex\VR_Patrol.rvmat",
			"24th_AB_AUX\Equipment\AI\Tex\VR_Patrol.rvmat",
			"24th_AB_AUX\Equipment\AI\Tex\VR_Patrol.rvmat",
		};
        hiddenSelectionsTextures[] = 
        {
			"#(argb,8,8,3)color(0.75,0.75,0.75,1,ca)",
			"#(argb,8,8,3)color(0.75,0.75,0.75,1,ca)",
			"#(argb,8,8,3)color(0.75,0.75,0.75,1,ca)",
        };
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
			};
			hiddenSelectionsMaterials[] = 
			{
				"24th_AB_AUX\Equipment\AI\Tex\VR_Patrol.rvmat",
				"24th_AB_AUX\Equipment\AI\Tex\VR_Patrol.rvmat",
				"24th_AB_AUX\Equipment\AI\Tex\VR_Patrol.rvmat",
			};
			hiddenSelectionsTextures[] = 
			{
				"#(argb,8,8,3)color(0.75,0.75,0.75,1,ca)",
				"#(argb,8,8,3)color(0.75,0.75,0.75,1,ca)",
				"#(argb,8,8,3)color(0.75,0.75,0.75,1,ca)",
			};
		};
	};

class 24th_Athena_BDU_Slim_AI: VES_BDU_Evolved_Slim
    {
        dlc="24th";
		scope=2;
		author="Ithias";
		displayName="[24th] Combat Uniform (Urban)";
		picture="\optre_unsc_units\army\icons\army_uniform";
		CBRN_protection=1;
		class ItemInfo: UniformItem
		{
			containerClass="Supply120";
			mass=40;
			uniformType = "Neopren";
			uniformModel="";
			uniformClass="24th_Athena_BDU_V_Slim_AI";
		};
	};
};

class CfgVehicles
{
class VES_BDU_V_Evolved_Slim;

class 24th_Athena_BDU_V_Slim_AI: VES_BDU_V_Evolved_Slim
	{
		scope=1;
        uniformclass="24th_Athena_BDU_Slim_AI";
        hiddenSelectionsMaterials[] = 
		{
			"24th_AB_AUX\Equipment\AI\Tex\VR_Apollo.rvmat",
			"24th_AB_AUX\Equipment\AI\Tex\VR_Apollo.rvmat",
			"24th_AB_AUX\Equipment\AI\Tex\VR_Apollo.rvmat",
		};
        hiddenSelectionsTextures[] = 
        {
			"#(argb,8,8,3)color(0.75,0.75,0.75,1,ca)",
			"#(argb,8,8,3)color(0.75,0.75,0.75,1,ca)",
			"#(argb,8,8,3)color(0.75,0.75,0.75,1,ca)",
        };
	};
};