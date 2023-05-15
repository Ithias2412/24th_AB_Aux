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
#include "xtdGear.hpp"
class cfgWeapons 
{
    class ItemInfo;
	class 24th_Helmet_Base;
	class 24th_Helmet_Base_dp;

//Desert
class 24th_Athena_Helmet_Silver_Desert : 24th_Helmet_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[24th] Athena Helmet (Silver / Desert)";
        author = "Ithias";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
        hiddenSelectionsTextures[] = 
        {
            "24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Desert.paa",
            "24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Visor_Silver.paa"
        };
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo2"
			};
			hiddenSelectionsTextures[]=
			{
				"24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Desert.paa",
				"24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Visor_Silver.paa"
			};
		};
    };
    class 24th_Athena_Helmet_Silver_Desert_dp : 24th_Helmet_Base_dp
    {
        scope = 1;
        scopeArsenal = 1;
        displayName = "[24th] Athena Helmet (Silver / Desert)";
        hiddenSelectionsTextures[] = 
        {
            "24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Desert.paa",
            "24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Visor_Silver.paa"
        };
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo2"
			};
			hiddenSelectionsTextures[]=
			{
				"24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Desert.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
    };
class 24th_Athena_Helmet_Gold_Desert : 24th_Helmet_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[24th] Athena Helmet (Gold / Desert)";
        author = "Ithias";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
        hiddenSelectionsTextures[] = 
        {
            "24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Desert.paa",
            "24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Visor_Gold.paa"
        };
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo2"
			};
			hiddenSelectionsTextures[]=
			{
				"24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Desert.paa",
				"24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Visor_Gold.paa"
			};
		};
    };
    class 24th_Athena_Helmet_Gold_Desert_dp : 24th_Helmet_Base_dp
    {
        scope = 1;
        scopeArsenal = 1;
        displayName = "[24th] Athena Helmet (Gold / Desert)";
        hiddenSelectionsTextures[] = 
        {
            "24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Desert.paa",
            "24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Visor_Gold.paa"
        };
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo2"
			};
			hiddenSelectionsTextures[]=
			{
				"24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Desert.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
    };



//Snow
class 24th_Athena_Helmet_Silver_Snow : 24th_Helmet_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[24th] Athena Helmet (Silver / Snow)";
        author = "Ithias";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
        hiddenSelectionsTextures[] = 
        {
            "24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Snow.paa",
            "24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Visor_Silver.paa"
        };
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo2"
			};
			hiddenSelectionsTextures[]=
			{
				"24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Snow.paa",
				"24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Visor_Silver.paa"
			};
		};
    };
    class 24th_Athena_Helmet_Silver_Snow_dp : 24th_Helmet_Base_dp
    {
        scope = 1;
        scopeArsenal = 1;
        displayName = "[24th] Athena Helmet (Silver / Snow)";
        hiddenSelectionsTextures[] = 
        {
            "24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Snow.paa",
            "24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Visor_Silver.paa"
        };
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo2"
			};
			hiddenSelectionsTextures[]=
			{
				"24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Snow.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
    };
class 24th_Athena_Helmet_Gold_Snow : 24th_Helmet_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[24th] Athena Helmet (Gold / Snow)";
        author = "Ithias";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
        hiddenSelectionsTextures[] = 
        {
            "24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Snow.paa",
            "24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Visor_Gold.paa"
        };
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo2"
			};
			hiddenSelectionsTextures[]=
			{
				"24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Snow.paa",
				"24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Visor_Gold.paa"
			};
		};
    };
    class 24th_Athena_Helmet_Gold_Snow_dp : 24th_Helmet_Base_dp
    {
        scope = 1;
        scopeArsenal = 1;
        displayName = "[24th] Athena Helmet (Gold / Snow)";
        hiddenSelectionsTextures[] = 
        {
            "24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Snow.paa",
            "24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Visor_Gold.paa"
        };
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo2"
			};
			hiddenSelectionsTextures[]=
			{
				"24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Snow.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
    };



//Urban
class 24th_Athena_Helmet_Silver_Urban : 24th_Helmet_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[24th] Athena Helmet (Silver / Urban)";
        author = "Ithias";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
        hiddenSelectionsTextures[] = 
        {
            "24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Urban.paa",
            "24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Visor_Silver.paa"
        };
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo2"
			};
			hiddenSelectionsTextures[]=
			{
				"24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Urban.paa",
				"24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Visor_Silver.paa"
			};
		};
    };
    class 24th_Athena_Helmet_Silver_Urban_dp : 24th_Helmet_Base_dp
    {
        scope = 1;
        scopeArsenal = 1;
        displayName = "[24th] Athena Helmet (Silver / Urban)";
        hiddenSelectionsTextures[] = 
        {
            "24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Urban.paa",
            "24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Visor_Silver.paa"
        };
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo2"
			};
			hiddenSelectionsTextures[]=
			{
				"24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Urban.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
    };
class 24th_Athena_Helmet_Gold_Urban : 24th_Helmet_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[24th] Athena Helmet (Gold / Urban)";
        author = "Ithias";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
        hiddenSelectionsTextures[] = 
        {
            "24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Urban.paa",
            "24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Visor_Gold.paa"
        };
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo2"
			};
			hiddenSelectionsTextures[]=
			{
				"24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Urban.paa",
				"24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Visor_Gold.paa"
			};
		};
    };
    class 24th_Athena_Helmet_Gold_Urban_dp : 24th_Helmet_Base_dp
    {
        scope = 1;
        scopeArsenal = 1;
        displayName = "[24th] Athena Helmet (Gold / Urban)";
        hiddenSelectionsTextures[] = 
        {
            "24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Urban.paa",
            "24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Visor_Gold.paa"
        };
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo2"
			};
			hiddenSelectionsTextures[]=
			{
				"24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Urban.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
    };



//Woodland
class 24th_Athena_Helmet_Silver_Woodland : 24th_Helmet_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[24th] Athena Helmet (Silver / Woodland)";
        author = "Ithias";
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
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo2"
			};
			hiddenSelectionsTextures[]=
			{
				"24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Woodland.paa",
				"24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Visor_Silver.paa"
			};
		};
    };
    class 24th_Athena_Helmet_Silver_Woodland_dp : 24th_Helmet_Base_dp
    {
        scope = 1;
        scopeArsenal = 1;
        displayName = "[24th] Athena Helmet (Silver / Woodland)";
        hiddenSelectionsTextures[] = 
        {
            "24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Woodland.paa",
            "24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Visor_Silver.paa"
        };
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo2"
			};
			hiddenSelectionsTextures[]=
			{
				"24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Woodland.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
    };
class 24th_Athena_Helmet_Gold_Woodland : 24th_Helmet_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[24th] Athena Helmet (Gold / Woodland)";
        author = "Ithias";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
        hiddenSelectionsTextures[] = 
        {
            "24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Woodland.paa",
            "24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Visor_Gold.paa"
        };
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo2"
			};
			hiddenSelectionsTextures[]=
			{
				"24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Woodland.paa",
				"24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Visor_Gold.paa"
			};
		};
    };
    class 24th_Athena_Helmet_Gold_Woodland_dp : 24th_Helmet_Base_dp
    {
        scope = 1;
        scopeArsenal = 1;
        displayName = "[24th] Athena Helmet (Gold / Woodland)";
        hiddenSelectionsTextures[] = 
        {
            "24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Woodland.paa",
            "24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Visor_Gold.paa"
        };
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo2"
			};
			hiddenSelectionsTextures[]=
			{
				"24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Woodland.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
    };
// Base End
};