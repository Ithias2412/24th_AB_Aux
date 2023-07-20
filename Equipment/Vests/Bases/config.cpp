class CfgPatches {
	class Athena_Armor_Base {
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
    class ItemInfo;
	class VestItem;
	class OPTRE_UNSC_M52A_Armor_Base;
	class Hands;
	class Pelvis;

//Base Start

class 24th_Armor_Recruit: OPTRE_UNSC_M52A_Armor_Base
	{
        scope=1
		author="Article 2 Studios";
		picture="\OPTRE_UNSC_Units\Army\icons\Army_vest_wdl.paa";
		displayName="M52A Body Armor (Heavy) [Woodland]";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_Base",
			"A_ChestArmor",
			"A_Ghillie",
			"A_KneesLeft",
			"A_KneesRight",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_ODST",
			"A_ShinArmorLeft",
			"A_ShinArmorRight",
			"A_TacPad",
			"A_ThighArmorLeft",
			"A_ThighArmorRight",
			"AS_BaseLeft",
			"AS_BaseRight",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
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
		hiddenSelectionsTextures[]=
		{
			"OPTRE_UNSC_Units\Army\data\vest_co.paa",
			"optre_unsc_units\army\data\armor_co.paa",
			"optre_unsc_units\army\data\legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			containerClass="Supply100";
			vestType = "Rebreather";
			mass=80;
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
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
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
				"AS_LargeLeft",
				"AS_LargeRight",
				//"AS_MediumLeft",
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
				//"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			hiddenSelectionsTextures[]=
			{
				"OPTRE_UNSC_Units\Army\data\vest_co.paa",
				"optre_unsc_units\army\data\armor_co.paa",
				"optre_unsc_units\army\data\legs_co.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"optre_unsc_units\army\data\odst_armor_co.paa"
			};
		};
	};	

class 24th_Armor_Rifleman: 24th_Armor_Recruit
	{
		author="Article 2 Studios";
		picture="\OPTRE_UNSC_Units\Army\icons\Army_vest_wdl.paa";
		displayName="M52A Body Armor (Heavy) [Woodland]";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
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
				//"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				//"AP_AR",
				"AP_Pack",
				//"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				//"AP_Thigh",
				"AP_Frag",
				//"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};

class 24th_Armor_TL: 24th_Armor_Recruit
	{
		author="Article 2 Studios";
		picture="\OPTRE_UNSC_Units\Army\icons\Army_vest_wdl.paa";
		displayName="M52A Body Armor (Heavy) [Woodland]";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
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
				//"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				//"AP_Knife",
				"AP_MGThigh",
				//"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				//"AP_Thigh",
				//"AP_Frag",
				//"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};

class 24th_Armor_SL: 24th_Armor_Recruit
	{
		author="Article 2 Studios";
		picture="\OPTRE_UNSC_Units\Army\icons\Army_vest_wdl.paa";
		displayName="M52A Body Armor (Heavy) [Woodland]";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				//"A_Base",
				//"A_ChestArmor",
				"A_Ghillie",
				//"A_KneesLeft", //hard knees
				//"A_KneesRight",
				"A_KneesMarLeft", //soft knees
				"A_KneesMarRight",
				"A_ODST", 
				//"A_ShinArmorLeft", //Shin Plates
				//"A_ShinArmorRight",
				"A_TacPad", //Small screen on left wrist
				//"A_ThighArmorLeft", //Thigh Plate
				//"A_ThighArmorRight",
				//"AS_BaseLeft", //Under pad that sits on the uniform
				//"AS_BaseRight",
				//"AS_LargeLeft", //Tall plate
				"AS_LargeRight",
				"AS_MediumLeft", //Mid sized plate 
				//"AS_MediumRight", 
				"AS_ODSTCQBLeft", //V plate that points down
				"AS_ODSTCQBRight", 
				"AS_ODSTLeft", //Standard ODST
				"AS_ODSTRight",
				"AS_ODSTSniperLeft", //Tall pauldron, short lower
				"AS_ODSTSniperRight",
				"AS_SmallLeft", //Small Oval shaped
				"AS_SmallRight",
				//"AP_AR", //Front AR packs, Need both to work <<
				"AP_BR", //Front 3 BR pouches
				"AP_Canteen", //Left Hip
				"AP_GL", //40mm belt on front
				//"AP_Knife", //Chest knife
				//"AP_MGThigh", //Right thigh ammo pouch
				//"AP_AR", //Front AR packs, Need both to work <<
				//"AP_Pack", //Center Chest Pouch
				"AP_Pistol", //Right Hip, ammo pouch
				"AP_Rounds", //Sniper rounds On Left Sholder
				"AP_SG", //Shotgun Shells on right of chestplate
				"AP_SMG", //Lower SMG ammo pouches
				"AP_Sniper", //2 large pouches on front
				//"AP_Thigh", //Left Thigh ammo pouch
				//"AP_Frag", //Right hip
				//"AP_Smoke", //Left Hip
				"APO_AR", //2 AR pouches, Spaced to work with ODST armor
				"APO_BR", //2 BR pouches, Spaced to work with ODST armor
				"APO_Knife", //Back Knife
				"APO_SMG", // Upper SMG ammo pouches
				"APO_Sniper", //large pouches on front, Spaced to work with ODST armor
				"CustomKit_Scorch" //Twin back knifes and 2 AR pouches
			};
		};
	};

class 24th_Armor_Medic: 24th_Armor_Recruit
	{
		author="Article 2 Studios";
		picture="\OPTRE_UNSC_Units\Army\icons\Army_vest_wdl.paa";
		displayName="M52A Body Armor (Heavy) [Woodland]";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
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
				//"AP_AR",
				"AP_BR",
				//"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				//"AP_MGThigh",
				//"AP_AR",
				"AP_Pack",
				//"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				//"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};

class 24th_Armor_JTAC: 24th_Armor_Recruit
	{
		author="Article 2 Studios";
		picture="\OPTRE_UNSC_Units\Army\icons\Army_vest_wdl.paa";
		displayName="M52A Body Armor (Heavy) [Woodland]";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
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
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				//"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				//"AP_AR",
				//"AP_Pack",
				//"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				//"AP_Thigh",
				"AP_Frag",
				//"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
// Base End

//Heavy Base Start

class 24th_Armor_Recruit_Heavy: 24th_Armor_Recruit
	{
        scope=1
		author="Article 2 Studios";
		picture="\OPTRE_UNSC_Units\Army\icons\Army_vest_wdl.paa";
		displayName="M52A Body Armor (Heavy) [Woodland]";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_Base",
			"A_ChestArmor",
			"A_Ghillie",
			"A_KneesLeft",
			"A_KneesRight",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_ODST",
			"A_ShinArmorLeft",
			"A_ShinArmorRight",
			"A_TacPad",
			"A_ThighArmorLeft",
			"A_ThighArmorRight",
			"AS_BaseLeft",
			"AS_BaseRight",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
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
		hiddenSelectionsTextures[]=
		{
			"OPTRE_UNSC_Units\Army\data\vest_co.paa",
			"optre_unsc_units\army\data\armor_co.paa",
			"optre_unsc_units\army\data\legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			containerClass="Supply100";
			vestType = "Rebreather";
			mass=80;
			class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 45;
                    passThrough = 0.1;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 45;
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
                    armor = 45;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 45;
                    passThrough = 0.1;
                };
            };
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				//"A_Base",
				//"A_ChestArmor",
				"A_Ghillie",
				//"A_KneesLeft",
				//"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				//"A_ODST",
				//"A_ShinArmorLeft",
				//"A_ShinArmorRight",
				//"A_TacPad",
				//"A_ThighArmorLeft",
				//"A_ThighArmorRight",
				//"AS_BaseLeft",
				//"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				//"AS_MediumLeft",
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
				//"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			hiddenSelectionsTextures[]=
			{
				"OPTRE_UNSC_Units\Army\data\vest_co.paa",
				"optre_unsc_units\army\data\armor_co.paa",
				"optre_unsc_units\army\data\legs_co.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"optre_unsc_units\army\data\odst_armor_co.paa"
			};
		};
	};	

class 24th_Armor_Rifleman_Heavy: 24th_Armor_Recruit_Heavy
	{
		author="Article 2 Studios";
		picture="\OPTRE_UNSC_Units\Army\icons\Army_vest_wdl.paa";
		displayName="M52A Body Armor (Heavy) [Woodland]";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				//"A_Base",
				//"A_ChestArmor",
				"A_Ghillie",
				//"A_KneesLeft",
				//"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				//"A_ODST",
				//"A_ShinArmorLeft",
				//"A_ShinArmorRight",
				//"A_TacPad",
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
				//"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				//"AP_Thigh",
				"AP_Frag",
				//"AP_Smoke",
				//"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};

class 24th_Armor_TL_Heavy: 24th_Armor_Recruit_Heavy
	{
		author="Article 2 Studios";
		picture="\OPTRE_UNSC_Units\Army\icons\Army_vest_wdl.paa";
		displayName="M52A Body Armor (Heavy) [Woodland]";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				//"A_Base",
				//"A_ChestArmor",
				"A_Ghillie",
				//"A_KneesLeft",
				//"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				//"A_ODST",
				//"A_ShinArmorLeft",
				//"A_ShinArmorRight",
				//"A_TacPad",
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
				//"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				//"AP_Thigh",
				//"AP_Frag",
				//"AP_Smoke",
				//"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};

class 24th_Armor_SL_Heavy: 24th_Armor_Recruit_Heavy
	{
		author="Article 2 Studios";
		picture="\OPTRE_UNSC_Units\Army\icons\Army_vest_wdl.paa";
		displayName="M52A Body Armor (Heavy) [Woodland]";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				//"A_Base",
				//"A_ChestArmor",
				"A_Ghillie",
				//"A_KneesLeft", //hard knees
				//"A_KneesRight",
				"A_KneesMarLeft", //soft knees
				"A_KneesMarRight",
				//"A_ODST", 
				//"A_ShinArmorLeft", //Shin Plates
				//"A_ShinArmorRight",
				//"A_TacPad", //Small screen on left wrist
				//"A_ThighArmorLeft", //Thigh Plate
				//"A_ThighArmorRight",
				//"AS_BaseLeft", //Under pad that sits on the uniform
				//"AS_BaseRight",
				//"AS_LargeLeft", //Tall plate
				"AS_LargeRight",
				"AS_MediumLeft", //Mid sized plate 
				//"AS_MediumRight", 
				"AS_ODSTCQBLeft", //V plate that points down
				"AS_ODSTCQBRight", 
				"AS_ODSTLeft", //Standard ODST
				"AS_ODSTRight",
				"AS_ODSTSniperLeft", //Tall pauldron, short lower
				"AS_ODSTSniperRight",
				"AS_SmallLeft", //Small Oval shaped
				"AS_SmallRight",
				"AP_AR", //Front AR packs, Need both to work <<
				"AP_BR", //Front 3 BR pouches
				"AP_Canteen", //Left Hip
				"AP_GL", //40mm belt on front
				//"AP_Knife", //Chest knife
				//"AP_MGThigh", //Right thigh ammo pouch
				"AP_AR", //Front AR packs, Need both to work <<
				"AP_Pack", //Center Chest Pouch
				"AP_Pistol", //Right Hip, ammo pouch
				"AP_Rounds", //Sniper rounds On Left Sholder
				"AP_SG", //Shotgun Shells on right of chestplate
				"AP_SMG", //Lower SMG ammo pouches
				"AP_Sniper", //2 large pouches on front
				//"AP_Thigh", //Left Thigh ammo pouch
				//"AP_Frag", //Right hip
				//"AP_Smoke", //Left Hip
				//"APO_AR", //2 AR pouches, Spaced to work with ODST armor
				"APO_BR", //2 BR pouches, Spaced to work with ODST armor
				"APO_Knife", //Back Knife
				//"APO_SMG", // Upper SMG ammo pouches
				"APO_Sniper", //large pouches on front, Spaced to work with ODST armor
				"CustomKit_Scorch" //Twin back knifes and 2 AR pouches
			};
		};
	};

class 24th_Armor_Medic_Heavy: 24th_Armor_Recruit_Heavy
	{
		author="Article 2 Studios";
		picture="\OPTRE_UNSC_Units\Army\icons\Army_vest_wdl.paa";
		displayName="M52A Body Armor (Heavy) [Woodland]";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				//"A_Base",
				//"A_ChestArmor",
				"A_Ghillie",
				//"A_KneesLeft",
				//"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				//"A_ODST",
				//"A_ShinArmorLeft",
				//"A_ShinArmorRight",
				//"A_TacPad",
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
				//"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				//"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				//"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				//"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				//"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};

class 24th_Armor_JTAC_Heavy: 24th_Armor_Recruit_Heavy
	{
		author="Article 2 Studios";
		picture="\OPTRE_UNSC_Units\Army\icons\Army_vest_wdl.paa";
		displayName="M52A Body Armor (Heavy) [Woodland]";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				//"A_Base",
				//"A_ChestArmor",
				"A_Ghillie",
				//"A_KneesLeft",
				//"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				//"A_ODST",
				//"A_ShinArmorLeft",
				//"A_ShinArmorRight",
				//"A_TacPad",
				//"A_ThighArmorLeft",
				//"A_ThighArmorRight",
				//"AS_BaseLeft",
				//"AS_BaseRight",
				//"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
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
				//"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				//"AP_Thigh",
				"AP_Frag",
				//"AP_Smoke",
				//"APO_AR",
				"APO_BR",
				"APO_Knife",
				//"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
// Base End

};