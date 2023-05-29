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

//Unit Helmets
class 24th_Athena_Helmet_Desert : 24th_Helmet_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[24th] Athena Helmet (Desert)";
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
    class 24th_Athena_Helmet_Desert_dp : 24th_Helmet_Base_dp
    {
        scope = 1;
        scopeArsenal = 1;
        displayName = "[24th] Athena Helmet (Desert)";
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
	
class 24th_Athena_Helmet_Snow : 24th_Helmet_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[24th] Athena Helmet (Snow)";
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
    class 24th_Athena_Helmet_Snow_dp : 24th_Helmet_Base_dp
    {
        scope = 1;
        scopeArsenal = 1;
        displayName = "[24th] Athena Helmet (Snow)";
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

class 24th_Athena_Helmet_Urban : 24th_Helmet_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[24th] Athena Helmet (Urban)";
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
    class 24th_Athena_Helmet_Urban_dp : 24th_Helmet_Base_dp
    {
        scope = 1;
        scopeArsenal = 1;
        displayName = "[24th] Athena Helmet (Urban)";
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

class 24th_Athena_Helmet_Woodland : 24th_Helmet_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[24th] Athena Helmet (Woodland)";
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
    class 24th_Athena_Helmet_Woodland_dp : 24th_Helmet_Base_dp
    {
        scope = 1;
        scopeArsenal = 1;
        displayName = "[24th] Athena Helmet (Woodland)";
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
//JTAC Helmets
class 24th_Athena_Helmet_Desert_JTAC : 24th_Helmet_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[24th] Athena Helmet (JTAC / Desert)";
        author = "Ithias";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
        hiddenSelectionsTextures[] = 
        {
            "24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Desert_JTAC.paa",
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
				"24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Desert_JTAC.paa",
				"24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Visor_Silver.paa"
			};
		};
    };
    class 24th_Athena_Helmet_Desert_JTAC_dp : 24th_Helmet_Base_dp
    {
        scope = 1;
        scopeArsenal = 1;
        displayName = "[24th] Athena Helmet (JTAC / Desert)";
        hiddenSelectionsTextures[] = 
        {
            "24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Desert_JTAC.paa",
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
				"24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Desert_JTAC.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
    };

class 24th_Athena_Helmet_Snow_JTAC : 24th_Helmet_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[24th] Athena Helmet (JTAC / Snow)";
        author = "Ithias";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
        hiddenSelectionsTextures[] = 
        {
            "24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Snow_JTAC.paa",
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
				"24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Snow_JTAC.paa",
				"24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Visor_Silver.paa"
			};
		};
    };
    class 24th_Athena_Helmet_Snow_JTAC_dp : 24th_Helmet_Base_dp
    {
        scope = 1;
        scopeArsenal = 1;
        displayName = "[24th] Athena Helmet (JTAC / Snow)";
        hiddenSelectionsTextures[] = 
        {
            "24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Snow_JTAC.paa",
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
				"24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Snow_JTAC.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
    };

class 24th_Athena_Helmet_Urban_JTAC : 24th_Helmet_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[24th] Athena Helmet (JTAC / Urban)";
        author = "Ithias";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
        hiddenSelectionsTextures[] = 
        {
            "24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Urban_JTAC.paa",
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
				"24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Urban_JTAC.paa",
				"24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Visor_Silver.paa"
			};
		};
    };
    class 24th_Athena_Helmet_Urban_JTAC_dp : 24th_Helmet_Base_dp
    {
        scope = 1;
        scopeArsenal = 1;
        displayName = "[24th] Athena Helmet (JTAC / Urban)";
        hiddenSelectionsTextures[] = 
        {
            "24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Urban_JTAC.paa",
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
				"24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Urban_JTAC.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
    };

class 24th_Athena_Helmet_Woodland_JTAC : 24th_Helmet_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[24th] Athena Helmet (JTAC / Woodland)";
        author = "Ithias";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
        hiddenSelectionsTextures[] = 
        {
            "24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Woodland_JTAC.paa",
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
				"24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Woodland_JTAC.paa",
				"24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Visor_Silver.paa"
			};
		};
    };
    class 24th_Athena_Helmet_Woodland_JTAC_dp : 24th_Helmet_Base_dp
    {
        scope = 1;
        scopeArsenal = 1;
        displayName = "[24th] Athena Helmet (JTAC / Woodland)";
        hiddenSelectionsTextures[] = 
        {
            "24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Woodland_JTAC.paa",
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
				"24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Woodland_JTAC.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
    };

//Medic Helmets
class 24th_Athena_Helmet_Desert_Medic : 24th_Helmet_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[24th] Athena Helmet (Medic / Desert)";
        author = "Ithias";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
        hiddenSelectionsTextures[] = 
        {
            "24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Desert_Medic.paa",
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
				"24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Desert_Medic.paa",
				"24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Visor_Silver.paa"
			};
		};
    };
    class 24th_Athena_Helmet_Desert_Medic_dp : 24th_Helmet_Base_dp
    {
        scope = 1;
        scopeArsenal = 1;
        displayName = "[24th] Athena Helmet (Medic / Desert)";
        hiddenSelectionsTextures[] = 
        {
            "24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Desert_Medic.paa",
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
				"24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Desert_Medic.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
    };

class 24th_Athena_Helmet_Snow_Medic : 24th_Helmet_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[24th] Athena Helmet (Medic / Snow)";
        author = "Ithias";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
        hiddenSelectionsTextures[] = 
        {
            "24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Snow_Medic.paa",
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
				"24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Snow_Medic.paa",
				"24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Visor_Silver.paa"
			};
		};
    };
    class 24th_Athena_Helmet_Snow_Medic_dp : 24th_Helmet_Base_dp
    {
        scope = 1;
        scopeArsenal = 1;
        displayName = "[24th] Athena Helmet (Medic / Snow)";
        hiddenSelectionsTextures[] = 
        {
            "24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Snow_Medic.paa",
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
				"24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Snow_Medic.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
    };

class 24th_Athena_Helmet_Urban_Medic : 24th_Helmet_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[24th] Athena Helmet (Medic / Urban)";
        author = "Ithias";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
        hiddenSelectionsTextures[] = 
        {
            "24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Urban_Medic.paa",
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
				"24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Urban_Medic.paa",
				"24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Visor_Silver.paa"
			};
		};
    };
    class 24th_Athena_Helmet_Urban_Medic_dp : 24th_Helmet_Base_dp
    {
        scope = 1;
        scopeArsenal = 1;
        displayName = "[24th] Athena Helmet (Medic / Urban)";
        hiddenSelectionsTextures[] = 
        {
            "24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Urban_Medic.paa",
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
				"24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Urban_Medic.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
    };

class 24th_Athena_Helmet_Woodland_Medic : 24th_Helmet_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[24th] Athena Helmet (Medic / Woodland)";
        author = "Ithias";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
        hiddenSelectionsTextures[] = 
        {
            "24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Woodland_Medic.paa",
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
				"24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Woodland_Medic.paa",
				"24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Visor_Silver.paa"
			};
		};
    };
    class 24th_Athena_Helmet_Woodland_Medic_dp : 24th_Helmet_Base_dp
    {
        scope = 1;
        scopeArsenal = 1;
        displayName = "[24th] Athena Helmet (Medic / Woodland)";
        hiddenSelectionsTextures[] = 
        {
            "24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Woodland_Medic.paa",
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
				"24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Woodland_Medic.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
    };

//Claymore Helmets
class 24th_Athena_Helmet_Desert_Claymore : 24th_Helmet_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[24th] Athena Helmet (Claymore / Desert)";
        author = "Ithias";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
        hiddenSelectionsTextures[] = 
        {
            "24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Desert_Claymore.paa",
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
				"24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Desert_Claymore.paa",
				"24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Visor_Silver.paa"
			};
		};
    };
    class 24th_Athena_Helmet_Desert_Claymore_dp : 24th_Helmet_Base_dp
    {
        scope = 1;
        scopeArsenal = 1;
        displayName = "[24th] Athena Helmet (Claymore / Desert)";
        hiddenSelectionsTextures[] = 
        {
            "24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Desert_Claymore.paa",
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
				"24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Desert_Claymore.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
    };

class 24th_Athena_Helmet_Snow_Claymore : 24th_Helmet_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[24th] Athena Helmet (Claymore / Snow)";
        author = "Ithias";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
        hiddenSelectionsTextures[] = 
        {
            "24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Snow_Claymore.paa",
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
				"24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Snow_Claymore.paa",
				"24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Visor_Silver.paa"
			};
		};
    };
    class 24th_Athena_Helmet_Snow_Claymore_dp : 24th_Helmet_Base_dp
    {
        scope = 1;
        scopeArsenal = 1;
        displayName = "[24th] Athena Helmet (Claymore / Snow)";
        hiddenSelectionsTextures[] = 
        {
            "24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Snow_Claymore.paa",
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
				"24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Snow_Claymore.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
    };

class 24th_Athena_Helmet_Urban_Claymore : 24th_Helmet_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[24th] Athena Helmet (Claymore / Urban)";
        author = "Ithias";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
        hiddenSelectionsTextures[] = 
        {
            "24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Urban_Claymore.paa",
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
				"24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Urban_Claymore.paa",
				"24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Visor_Silver.paa"
			};
		};
    };
    class 24th_Athena_Helmet_Urban_Claymore_dp : 24th_Helmet_Base_dp
    {
        scope = 1;
        scopeArsenal = 1;
        displayName = "[24th] Athena Helmet (Claymore / Urban)";
        hiddenSelectionsTextures[] = 
        {
            "24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Urban_Claymore.paa",
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
				"24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Urban_Claymore.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
    };

class 24th_Athena_Helmet_Woodland_Claymore : 24th_Helmet_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[24th] Athena Helmet (Claymore / Woodland)";
        author = "Ithias";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
        hiddenSelectionsTextures[] = 
        {
            "24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Woodland_Claymore.paa",
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
				"24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Woodland_Claymore.paa",
				"24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Visor_Silver.paa"
			};
		};
    };
    class 24th_Athena_Helmet_Woodland_Claymore_dp : 24th_Helmet_Base_dp
    {
        scope = 1;
        scopeArsenal = 1;
        displayName = "[24th] Athena Helmet (Claymore / Woodland)";
        hiddenSelectionsTextures[] = 
        {
            "24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Woodland_Claymore.paa",
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
				"24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Woodland_Claymore.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
    };

//Javelin Helmets
class 24th_Athena_Helmet_Desert_Javelin : 24th_Helmet_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[24th] Athena Helmet (Javelin / Desert)";
        author = "Ithias";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
        hiddenSelectionsTextures[] = 
        {
            "24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Desert_Javelin.paa",
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
				"24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Desert_Javelin.paa",
				"24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Visor_Silver.paa"
			};
		};
    };
    class 24th_Athena_Helmet_Desert_Javelin_dp : 24th_Helmet_Base_dp
    {
        scope = 1;
        scopeArsenal = 1;
        displayName = "[24th] Athena Helmet (Javelin / Desert)";
        hiddenSelectionsTextures[] = 
        {
            "24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Desert_Javelin.paa",
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
				"24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Desert_Javelin.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
    };

class 24th_Athena_Helmet_Snow_Javelin : 24th_Helmet_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[24th] Athena Helmet (Javelin / Snow)";
        author = "Ithias";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
        hiddenSelectionsTextures[] = 
        {
            "24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Snow_Javelin.paa",
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
				"24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Snow_Javelin.paa",
				"24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Visor_Silver.paa"
			};
		};
    };
    class 24th_Athena_Helmet_Snow_Javelin_dp : 24th_Helmet_Base_dp
    {
        scope = 1;
        scopeArsenal = 1;
        displayName = "[24th] Athena Helmet (Javelin / Snow)";
        hiddenSelectionsTextures[] = 
        {
            "24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Snow_Javelin.paa",
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
				"24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Snow_Javelin.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
    };

class 24th_Athena_Helmet_Urban_Javelin : 24th_Helmet_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[24th] Athena Helmet (Javelin / Urban)";
        author = "Ithias";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
        hiddenSelectionsTextures[] = 
        {
            "24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Urban_Javelin.paa",
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
				"24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Urban_Javelin.paa",
				"24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Visor_Silver.paa"
			};
		};
    };
    class 24th_Athena_Helmet_Urban_Javelin_dp : 24th_Helmet_Base_dp
    {
        scope = 1;
        scopeArsenal = 1;
        displayName = "[24th] Athena Helmet (Javelin / Urban)";
        hiddenSelectionsTextures[] = 
        {
            "24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Urban_Javelin.paa",
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
				"24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Urban_Javelin.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
    };

class 24th_Athena_Helmet_Woodland_Javelin : 24th_Helmet_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[24th] Athena Helmet (Javelin / Woodland)";
        author = "Ithias";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
        hiddenSelectionsTextures[] = 
        {
            "24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Woodland_Javelin.paa",
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
				"24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Woodland_Javelin.paa",
				"24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Visor_Silver.paa"
			};
		};
    };
    class 24th_Athena_Helmet_Woodland_Javelin_dp : 24th_Helmet_Base_dp
    {
        scope = 1;
        scopeArsenal = 1;
        displayName = "[24th] Athena Helmet (Javelin / Woodland)";
        hiddenSelectionsTextures[] = 
        {
            "24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Woodland_Javelin.paa",
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
				"24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Woodland_Javelin.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
    };

//Dagger Helmets
class 24th_Athena_Helmet_Desert_Dagger : 24th_Helmet_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[24th] Athena Helmet (Dagger / Desert)";
        author = "Ithias";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
        hiddenSelectionsTextures[] = 
        {
            "24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Desert_Dagger.paa",
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
				"24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Desert_Dagger.paa",
				"24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Visor_Silver.paa"
			};
		};
    };
    class 24th_Athena_Helmet_Desert_Dagger_dp : 24th_Helmet_Base_dp
    {
        scope = 1;
        scopeArsenal = 1;
        displayName = "[24th] Athena Helmet (Dagger / Desert)";
        hiddenSelectionsTextures[] = 
        {
            "24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Desert_Dagger.paa",
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
				"24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Desert_Dagger.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
    };

class 24th_Athena_Helmet_Snow_Dagger : 24th_Helmet_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[24th] Athena Helmet (Dagger / Snow)";
        author = "Ithias";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
        hiddenSelectionsTextures[] = 
        {
            "24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Snow_Dagger.paa",
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
				"24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Snow_Dagger.paa",
				"24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Visor_Silver.paa"
			};
		};
    };
    class 24th_Athena_Helmet_Snow_Dagger_dp : 24th_Helmet_Base_dp
    {
        scope = 1;
        scopeArsenal = 1;
        displayName = "[24th] Athena Helmet (Dagger / Snow)";
        hiddenSelectionsTextures[] = 
        {
            "24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Snow_Dagger.paa",
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
				"24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Snow_Dagger.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
    };

class 24th_Athena_Helmet_Urban_Dagger : 24th_Helmet_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[24th] Athena Helmet (Dagger / Urban)";
        author = "Ithias";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
        hiddenSelectionsTextures[] = 
        {
            "24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Urban_Dagger.paa",
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
				"24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Urban_Dagger.paa",
				"24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Visor_Silver.paa"
			};
		};
    };
    class 24th_Athena_Helmet_Urban_Dagger_dp : 24th_Helmet_Base_dp
    {
        scope = 1;
        scopeArsenal = 1;
        displayName = "[24th] Athena Helmet (Dagger / Urban)";
        hiddenSelectionsTextures[] = 
        {
            "24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Urban_Dagger.paa",
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
				"24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Urban_Dagger.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
    };

class 24th_Athena_Helmet_Woodland_Dagger : 24th_Helmet_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[24th] Athena Helmet (Dagger / Woodland)";
        author = "Ithias";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
        hiddenSelectionsTextures[] = 
        {
            "24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Woodland_Dagger.paa",
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
				"24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Woodland_Dagger.paa",
				"24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Visor_Silver.paa"
			};
		};
    };
    class 24th_Athena_Helmet_Woodland_Dagger_dp : 24th_Helmet_Base_dp
    {
        scope = 1;
        scopeArsenal = 1;
        displayName = "[24th] Athena Helmet (Dagger / Woodland)";
        hiddenSelectionsTextures[] = 
        {
            "24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Woodland_Dagger.paa",
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
				"24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Woodland_Dagger.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
    };
};