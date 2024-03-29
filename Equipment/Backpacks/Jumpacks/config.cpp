class CfgPatches    
{
    class my_cool_jumppack_patch    
    {   
        author="UR NAME HERE";  
        requiredAddons[]=   
        {   
            "NSM_patch_end"
        };  
        requiredVersion=0.1;    
        units[]={   
        };  
        weapons[]={};   
        vehicles[]={    
            "24th_Athena_Jumpack"
        };  
    };  
};
#include "xtdGear.hpp"
class CfgVehicles   
{
    class NSM_neutral_XD_1_backpack;

//RGN

    class 24th_Athena_Jumpack_RGN_Basic: NSM_neutral_XD_1_backpack
    {
		dlc="24th Aux";
        scope = 2;
        scopeCurator=2;
        author = "Namenai / Ithias";
        displayname = "[24th] Athena Jumpack (RGN / Basic)";
        NSM_jumppack_is_jumppack = 1;
        NSM_jumppack_spam_delay = 1;
        NSM_jumppack_energy_capacity = 100; 
        NSM_jumppack_recharge = 2;
        NSM_jumppack_jump_types[] = {
            {
                "Forward Jump",// Name of jump
                {
                    20,     //forward velo(0)
                    10,     //verticle velo(1)
                    10,     //cost(2)
                    0,      //angle(3)
                    1,      //directional(4)(no=0,yes=1)?
                    0       //can prone jump(5)(no=0,yes=1)?
                }
            },
        };
        NSM_jumppack_jump_effect_script = "NSM_jumppack_effect_fnc_jt_21";
        NSM_jumppack_effect_points[] = {{"spine3",{0,-0.3,-0.1}}}; 
        NSM_jumppack_sound_ignite[] = {"NSM_Main\sounds\cdv21Start.ogg"};
        NSM_jumppack_sound_land[] = {"NSM_Main\sounds\cdv21End.ogg"};
        NSM_jumppack_sound_idle[] = {"NSM_Main\sounds\cdv21Idle.ogg"};
		model="\OPTRE_weapons\backpacks\jetpack_on.p3d";
        maximumload = 350;
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"24th_AB_AUX\Equipment\Backpacks\Jumpacks\Tex\24th_Jetpack.paa"
		};
		picture="\OPTRE_weapons\backpacks\icons\icon_jetpack_ca.paa";
    };

    class 24th_Athena_Jumpack_RGN_LR: 24th_Athena_Jumpack_RGN_Basic
    {
		displayname = "[24th] Athena Jumpack (RGN / LR)";
		tf_isolatedAmount=0.64999998;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="anarc210_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=120000;
		tf_dialogUpdate="[""%1""] call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"24th_AB_AUX\Equipment\Backpacks\Jumpacks\Tex\24th_Jetpack.paa"
		};
	};

//LTU

    class 24th_Athena_Jumpack_LTU_Basic: NSM_neutral_XD_1_backpack
    {
		dlc="24th Aux";
        scope = 2;
        scopeCurator=2;
        author = "Namenai / Ithias";
        displayname = "[24th] Athena Jumpack (LTU / Basic)";
        NSM_jumppack_is_jumppack = 1;
        NSM_jumppack_spam_delay = 1;
        NSM_jumppack_energy_capacity = 100; 
        NSM_jumppack_recharge = 0;
        NSM_jumppack_jump_types[] = {
            {
                "Forward Jump",// Name of jump
                {
                    20,     //forward velo(0)
                    10,     //verticle velo(1)
                    10,     //cost(2)
                    0,      //angle(3)
                    1,      //directional(4)(no=0,yes=1)?
                    0       //can prone jump(5)(no=0,yes=1)?
                }
            },
        };
        NSM_jumppack_jump_effect_script = "NSM_jumppack_effect_fnc_jt_21";
        NSM_jumppack_effect_points[] = {{"spine3",{0,-0.3,-0.1}}}; 
        NSM_jumppack_sound_ignite[] = {"NSM_Main\sounds\cdv21Start.ogg"};
        NSM_jumppack_sound_land[] = {"NSM_Main\sounds\cdv21End.ogg"};
        NSM_jumppack_sound_idle[] = {"NSM_Main\sounds\cdv21Idle.ogg"};
		model="\OPTRE_weapons\backpacks\jetpack.p3d";
        maximumload = 350;
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"24th_AB_AUX\Equipment\Backpacks\Jumpacks\Tex\24th_Jetpack.paa"
		};
		picture="\OPTRE_weapons\backpacks\icons\icon_jetpack_ca.paa";
    };

    class 24th_Athena_Jumpack_LTU_LR: 24th_Athena_Jumpack_LTU_Basic
    {
		displayname = "[24th] Athena Jumpack (LTU / LR)";
		tf_isolatedAmount=0.64999998;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="anarc210_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=120000;
		tf_dialogUpdate="[""%1""] call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"24th_AB_AUX\Equipment\Backpacks\Jumpacks\Tex\24th_Jetpack.paa"
		};
	};

//~X~

    class 24th_Athena_Jumpack_X_Basic: NSM_neutral_XD_1_backpack
    {
		dlc="24th Aux";
        scope = 2;
        scopeCurator=2;
        author = "Namenai / Ithias";
        displayname = "[24th] Athena Jumpack (~X~ / Basic)";
        NSM_jumppack_is_jumppack = 1;
        NSM_jumppack_spam_delay = 1;
        NSM_jumppack_energy_capacity = 1000; 
        NSM_jumppack_recharge = 10;
        NSM_jumppack_jump_types[] = {
            {
                "Forward Jump",// Name of jump
                {
                    20,     //forward velo(0)
                    10,     //verticle velo(1)
                    10,     //cost(2)
                    0,      //angle(3)
                    1,      //directional(4)(no=0,yes=1)?
                    0       //can prone jump(5)(no=0,yes=1)?
                }
            },
        };
        NSM_jumppack_jump_effect_script = "NSM_jumppack_effect_fnc_jt_21";
        NSM_jumppack_effect_points[] = {{"spine3",{0,-0.3,-0.1}}}; 
        NSM_jumppack_sound_ignite[] = {"NSM_Main\sounds\cdv21Start.ogg"};
        NSM_jumppack_sound_land[] = {"NSM_Main\sounds\cdv21End.ogg"};
        NSM_jumppack_sound_idle[] = {"NSM_Main\sounds\cdv21Idle.ogg"};
		model="\OPTRE_weapons\backpacks\jetpack_on.p3d";
        maximumload = 350;
		hiddenSelections[]=
		{
			"camo",
			//"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"24th_AB_AUX\Equipment\Backpacks\Jumpacks\Tex\24th_Jetpack.paa"
		};
		picture="\OPTRE_weapons\backpacks\icons\icon_jetpack_ca.paa";
    };

    class 24th_Athena_Jumpack_X_LR: 24th_Athena_Jumpack_X_Basic
    {
		displayname = "[24th] Athena Jumpack (~X~ / LR)";
		tf_isolatedAmount=0.64999998;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="anarc210_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=120000;
		tf_dialogUpdate="[""%1""] call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		hiddenSelections[]=
		{
			"camo",
			//"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"24th_AB_AUX\Equipment\Backpacks\Jumpacks\Tex\24th_Jetpack.paa"
		};
	};

};