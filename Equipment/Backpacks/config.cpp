class CfgPatches {
	class 24th_Backpacks {
		units[] = 
        {
            "",
			""
        };
		weapons[] = 
        {
            "",
            ""
        };
		requiredVersion = 0.100000;
		requiredAddons[] = {};
	};
};
#include "xtdGear.hpp"
class CfgVehicles
{
	class OPTRE_UNSC_Rucksack;
	class OPTRE_ANPRC_521_Green;
    class OPTRE_ANPRC_515;
	class OPTRE_UNSC_Rucksack_Medic;
	class OPTRE_UNSC_Rucksack_Heavy;
	class OPTRE_ONI_Researcher_Suitcase;
	class B_Parachute;
	class OPTRE_UNSC_Backpack;
	class OPTRE_S12_SOLA_Jetpack;

//Base Items


	/*class OPTRE_S12_SOLA_Jetpack: OPTRE_ILCS_Rucksack_Black
	{
		dlc="OPTRE";
		author="Article 2 Studios";
		picture="\OPTRE_weapons\backpacks\icons\icon_jetpack_ca.paa";
		displayName="S12 SOLA Jetpack";
		model="\OPTRE_weapons\backpacks\jetpack.p3d";
		model="\OPTRE_weapons\backpacks\jetpack_on.p3d";
		maximumLoad=1;
		mass=60;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"optre_weapons\backpacks\data\jetpack_co.paa"
		};
	};*/

//Woodland Rucksacks
	class 24th_Athena_Rucksack_Basic_Woodland: OPTRE_UNSC_Rucksack
	{
		dlc="24th Aux";
		author="Ithias";
        scope=2;
        scopeCurator=2;
		displayName="[24th] Athena Rucksack (Basic / Woodland)";
		model="\OPTRE_unsc_units\army\rucksack.p3d";
		maximumLoad=350;
		mass=40;
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"B_Addons",
			"B_Medic",
			"B_Radio"
		};
		hiddenSelectionsTextures[]=
		{
			"24th_AB_AUX\Equipment\Backpacks\Tex\24th_Athena_Rucksack_Woodland.paa",
			""
		};
	};

	class 24th_Athena_Rucksack_Heavy_Woodland: 24th_Athena_Rucksack_Basic_Woodland
	{
		dlc="24th Aux";
		author="Ithias";
		displayName="[24th] Athena Rucksack (Heavy / Woodland)";
		maximumLoad=400;
		mass=50;
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"B_Medic",
			"B_Radio"
		};
	};

	class 24th_Athena_Rucksack_Medic_Woodland: 24th_Athena_Rucksack_Basic_Woodland
	{
		dlc="24th Aux";
		author="Ithias";
		displayName="[24th] Athena Rucksack (Medic / Woodland)";
        maximumLoad=400;
        mass=50;
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"B_Addons",
			"B_Radio"
		};
	};

	class 24th_Athena_Rucksack_Basic_Woodland_LR: 24th_Athena_Rucksack_Basic_Woodland
	{
		dlc="24th Aux";
		author="Ithias";
        scope=2;
        scopeCurator=2;
		displayName="[24th] Athena Rucksack (NCO LR / Woodland)";
		model="\OPTRE_unsc_units\army\rucksack.p3d";
		maximumLoad=350;
		mass=40;
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"B_Addons",
			"B_Medic",
			"B_Radio"
		};
		hiddenSelectionsTextures[]=
		{
			"24th_AB_AUX\Equipment\Backpacks\Tex\24th_Athena_Rucksack_Woodland.paa",
			""
		};
		tf_isolatedAmount=0.64999998;
        tf_encryptionCode="tf_west_radio_code";
        tf_dialog="anarc210_radio_dialog";
        tf_subtype="digital_lr";
        tf_range=120000;
        tf_dialogUpdate="[""%1""] call TFAR_fnc_updateLRDialogToChannel;";
        tf_hasLRradio=1;
	};

//Urban Rucksacks
	class 24th_Athena_Rucksack_Basic_Urban: OPTRE_UNSC_Rucksack
	{
		dlc="24th Aux";
		author="Ithias";
        scope=2;
        scopeCurator=2;
		displayName="[24th] Athena Rucksack (Basic / Urban)";
		model="\OPTRE_unsc_units\army\rucksack.p3d";
		maximumLoad=350;
		mass=40;
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"B_Addons",
			"B_Medic",
			"B_Radio"
		};
		hiddenSelectionsTextures[]=
		{
			"24th_AB_AUX\Equipment\Backpacks\Tex\24th_Athena_Rucksack_Urban.paa",
			""
		};
	};

	class 24th_Athena_Rucksack_Heavy_Urban: 24th_Athena_Rucksack_Basic_Urban
	{
		dlc="24th Aux";
		author="Ithias";
		displayName="[24th] Athena Rucksack (Heavy / Urban)";
		maximumLoad=400;
		mass=50;
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"B_Medic",
			"B_Radio"
		};
	};

	class 24th_Athena_Rucksack_Medic_Urban: 24th_Athena_Rucksack_Basic_Urban
	{
		dlc="24th Aux";
		author="Ithias";
		displayName="[24th] Athena Rucksack (Medic / Urban)";
        maximumLoad=400;
        mass=50;
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"B_Addons",
			"B_Radio"
		};
	};

	class 24th_Athena_Rucksack_Basic_Urban_LR: 24th_Athena_Rucksack_Basic_Urban
	{
		dlc="24th Aux";
		author="Ithias";
        scope=2;
        scopeCurator=2;
		displayName="[24th] Athena Rucksack (NCO LR / Urban)";
		model="\OPTRE_unsc_units\army\rucksack.p3d";
		maximumLoad=350;
		mass=40;
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"B_Addons",
			"B_Medic",
			"B_Radio"
		};
		hiddenSelectionsTextures[]=
		{
			"24th_AB_AUX\Equipment\Backpacks\Tex\24th_Athena_Rucksack_Urban.paa",
			""
		};
		tf_isolatedAmount=0.64999998;
        tf_encryptionCode="tf_west_radio_code";
        tf_dialog="anarc210_radio_dialog";
        tf_subtype="digital_lr";
        tf_range=120000;
        tf_dialogUpdate="[""%1""] call TFAR_fnc_updateLRDialogToChannel;";
        tf_hasLRradio=1;
	};

//Desert Rucksacks
	class 24th_Athena_Rucksack_Basic_Desert: OPTRE_UNSC_Rucksack
	{
		dlc="24th Aux";
		author="Ithias";
        scope=2;
        scopeCurator=2;
		displayName="[24th] Athena Rucksack (Basic / Desert)";
		model="\OPTRE_unsc_units\army\rucksack.p3d";
		maximumLoad=350;
		mass=40;
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"B_Addons",
			"B_Medic",
			"B_Radio"
		};
		hiddenSelectionsTextures[]=
		{
			"24th_AB_AUX\Equipment\Backpacks\Tex\24th_Athena_Rucksack_Desert.paa",
			""
		};
	};

	class 24th_Athena_Rucksack_Heavy_Desert: 24th_Athena_Rucksack_Basic_Desert
	{
		dlc="24th Aux";
		author="Ithias";
		displayName="[24th] Athena Rucksack (Heavy / Desert)";
		maximumLoad=400;
		mass=50;
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"B_Medic",
			"B_Radio"
		};
	};

	class 24th_Athena_Rucksack_Medic_Desert: 24th_Athena_Rucksack_Basic_Desert
	{
		dlc="24th Aux";
		author="Ithias";
		displayName="[24th] Athena Rucksack (Medic / Desert)";
        maximumLoad=400;
        mass=50;
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"B_Addons",
			"B_Radio"
		};
	};

	class 24th_Athena_Rucksack_Basic_Desert_LR: 24th_Athena_Rucksack_Basic_Desert
	{
		dlc="24th Aux";
		author="Ithias";
        scope=2;
        scopeCurator=2;
		displayName="[24th] Athena Rucksack (NCO LR / Desert)";
		model="\OPTRE_unsc_units\army\rucksack.p3d";
		maximumLoad=350;
		mass=40;
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"B_Addons",
			"B_Medic",
			"B_Radio"
		};
		hiddenSelectionsTextures[]=
		{
			"24th_AB_AUX\Equipment\Backpacks\Tex\24th_Athena_Rucksack_Desert.paa",
			""
		};
		tf_isolatedAmount=0.64999998;
        tf_encryptionCode="tf_west_radio_code";
        tf_dialog="anarc210_radio_dialog";
        tf_subtype="digital_lr";
        tf_range=120000;
        tf_dialogUpdate="[""%1""] call TFAR_fnc_updateLRDialogToChannel;";
        tf_hasLRradio=1;
	};

//Snow Rucksack

	class 24th_Athena_Rucksack_Basic_Snow: OPTRE_UNSC_Rucksack
	{
		dlc="24th Aux";
		author="Ithias";
        scope=2;
        scopeCurator=2;
		displayName="[24th] Athena Rucksack (Basic / Snow)";
		model="\OPTRE_unsc_units\army\rucksack.p3d";
		maximumLoad=350;
		mass=40;
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"B_Addons",
			"B_Medic",
			"B_Radio"
		};
		hiddenSelectionsTextures[]=
		{
			"24th_AB_AUX\Equipment\Backpacks\Tex\24th_Athena_Rucksack_Snow.paa",
			""
		};
	};

	class 24th_Athena_Rucksack_Heavy_Snow: 24th_Athena_Rucksack_Basic_Snow
	{
		dlc="24th Aux";
		author="Ithias";
		displayName="[24th] Athena Rucksack (Heavy / Snow)";
		maximumLoad=400;
		mass=50;
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"B_Medic",
			"B_Radio"
		};
	};

	class 24th_Athena_Rucksack_Medic_Snow: 24th_Athena_Rucksack_Basic_Snow
	{
		dlc="24th Aux";
		author="Ithias";
		displayName="[24th] Athena Rucksack (Medic / Snow)";
        maximumLoad=400;
        mass=50;
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"B_Addons",
			"B_Radio"
		};
	};

	class 24th_Athena_Rucksack_Basic_Snow_LR: 24th_Athena_Rucksack_Basic_Snow
	{
		dlc="24th Aux";
		author="Ithias";
        scope=2;
        scopeCurator=2;
		displayName="[24th] Athena Rucksack (NCO LR / Snow)";
		model="\OPTRE_unsc_units\army\rucksack.p3d";
		maximumLoad=350;
		mass=40;
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"B_Addons",
			"B_Medic",
			"B_Radio"
		};
		hiddenSelectionsTextures[]=
		{
			"24th_AB_AUX\Equipment\Backpacks\Tex\24th_Athena_Rucksack_Snow.paa",
			""
		};
		tf_isolatedAmount=0.64999998;
        tf_encryptionCode="tf_west_radio_code";
        tf_dialog="anarc210_radio_dialog";
        tf_subtype="digital_lr";
        tf_range=120000;
        tf_dialogUpdate="[""%1""] call TFAR_fnc_updateLRDialogToChannel;";
        tf_hasLRradio=1;
	};


//Satchel

    class 24th_Athena_Satchel_Medic: OPTRE_ONI_Researcher_Suitcase
    {
		author="Ithias";
		dlc="24th Aux";
		scope=2;
		scopeArsenal=2;
		displayName="[24th] Athena Satchel (Medic)";
		tf_isolatedAmount=0.64999998;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="anarc210_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=120000;
		tf_dialogUpdate="[""%1""] call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
/*		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_Aux\tex\Backpacks\research_bag_CO_Medical.paa"
		}; */
		maximumLoad=400;
		mass=1;
	};

//Customs
//Longbow
	class 24th_Pilot_Parachute: B_Parachute
	{
		author="Ithias";
		scope=2;
		displayName="[24th] Longbow Parachute";
		maximumLoad=0;
		mass=1;
		tf_isolatedAmount=0.64999998;
        tf_encryptionCode="tf_west_radio_code";
        tf_dialog="anarc210_radio_dialog";
        tf_subtype="digital_lr";
        tf_range=120000;
        tf_dialogUpdate="[""%1""] call TFAR_fnc_updateLRDialogToChannel;";
        tf_hasLRradio=1;
		backpackSimulation="ParachuteSteerable";
		ParachuteClass="Steerable_Parachute_F";
        ace_reserveParachute = "24th_Pilot_Parachute";
        ace_hasReserveParachute = 1;
	};

//JTAC LR

	class 24th_Athena_Rucksack_JTAC_Urban: OPTRE_ANPRC_521_Green
	{
		dlc="24th Aux";
		author="Ithias";
		scope=2;
		scopeCurator=2;
		displayName="[24th] Athena Rucksack (JTAC / Urban)";
		hiddenSelectionsTextures[]=
		{
			"optre_unsc_units\army\data\soft_backpack_co.paa",
			"24th_AB_AUX\Equipment\Backpacks\Tex\24th_Athena_Rucksack_JTAC_Urban.paa",
		}; 
		descriptionShort="AN/PRC-521<br>UNSC Long Range Radio<br>30km Effective Range";
		tf_isolatedAmount=0.64999998;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="anarc210_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=120000;
		tf_dialogUpdate="[""%1""] call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		maximumLoad=350;
	};

	class 24th_Athena_Rucksack_JTAC_Desert: OPTRE_ANPRC_521_Green
	{
		dlc="24th Aux";
		author="Ithias";
		scope=2;
		scopeCurator=2;
		displayName="[24th] Athena Rucksack (JTAC / Desert)";
		hiddenSelectionsTextures[]=
		{
			"optre_unsc_units\army\data\soft_backpack_co.paa",
			"24th_AB_AUX\Equipment\Backpacks\Tex\24th_Athena_Rucksack_JTAC_Desert.paa",
		};
		descriptionShort="AN/PRC-521<br>UNSC Long Range Radio<br>30km Effective Range";
		tf_isolatedAmount=0.64999998;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="anarc210_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=120000;
		tf_dialogUpdate="[""%1""] call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		maximumLoad=350;
	};

	class 24th_Athena_Rucksack_JTAC_Woodland: OPTRE_ANPRC_521_Green
	{
		dlc="24th Aux";
		author="Ithias";
		scope=2;
		scopeCurator=2;
		displayName="[24th] Athena Rucksack (JTAC / Woodland)";
		hiddenSelectionsTextures[]=
		{
			"optre_unsc_units\army\data\soft_backpack_co.paa",
			"24th_AB_AUX\Equipment\Backpacks\Tex\24th_Athena_Rucksack_JTAC_Woodland.paa",
		};
		descriptionShort="AN/PRC-521<br>UNSC Long Range Radio<br>30km Effective Range";
		tf_isolatedAmount=0.64999998;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="anarc210_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=120000;
		tf_dialogUpdate="[""%1""] call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		maximumLoad=350;
	};
	
	class 24th_Athena_Rucksack_JTAC_Snow: OPTRE_ANPRC_521_Green
	{
		dlc="24th Aux";
		author="Ithias";
		scope=2;
		scopeCurator=2;
		displayName="[24th] Athena Rucksack (JTAC / Snow)";
		hiddenSelectionsTextures[]=
		{
			"optre_unsc_units\army\data\soft_backpack_co.paa",
			"24th_AB_AUX\Equipment\Backpacks\Tex\24th_Athena_Rucksack_JTAC_Snow.paa",
		};
		descriptionShort="AN/PRC-521<br>UNSC Long Range Radio<br>30km Effective Range";
		tf_isolatedAmount=0.64999998;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="anarc210_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=120000;
		tf_dialogUpdate="[""%1""] call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		maximumLoad=350;
	};
//Engineer
	class 24th_Athena_Rucksack_Engineer: OPTRE_UNSC_Backpack
	{
		dlc="24th Aux";
		author="Ithias";
		displayName="[24th] Athena Rucksack (Engineer)";
		model="\OPTRE_Weapons\Backpacks\Basic_rucksack.p3d";
		maximumLoad=450;
		mass=50;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\OPTRE_Vehicles\Scorpion\data\Texture\detail_2_lopo_co.paa"
		};
	};

};