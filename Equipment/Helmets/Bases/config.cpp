class CfgPatches {
	class Athena_Helmets {
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
	class OPTRE_UNSC_CH252A_Helmet_Base;
	class HeadgearItem;

//Base Start

class 24th_Helmet_Base: OPTRE_UNSC_CH252A_Helmet_Base
	{
		author="Idk";
		displayName="WORK GOD DANGIT";
		model="\OPTRE_UNSC_Units\Army\aa_helmet.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
        hiddenSelectionsTextures[] = 
        {
            "24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Woodland.paa",
            "24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Visor_Silver.paa"
        };
		optreVarietys[]=
		{
			"_dp",
			"",
			"_broken"
		};
		optreHUDStyle="ODST_1";
		class ItemInfo: HeadgearItem
        {
            mass=1;
            uniformModel="\OPTRE_UNSC_Units\Army\aa_helmet";
			modelSides[]={6};
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
	class 24th_Helmet_Base_dp: 24th_Helmet_Base
	{
		author="Idk";
		displayName="WORK GOD DANGIT";
		model="\OPTRE_UNSC_Units\Army\aa_helmet.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
        hiddenSelectionsTextures[] = 
        {
            "24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Woodland.paa",
            "24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Visor_Silver.paa"
        };
		optreVarietys[]=
		{
			"_dp",
			"",
			"_broken"
		};
		optreHUDStyle="ODST_1";
		class ItemInfo: HeadgearItem
        {
            mass=1;
            uniformModel="\OPTRE_UNSC_Units\Army\aa_helmet";
			modelSides[]={6};
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

//Base End





// Base End
};