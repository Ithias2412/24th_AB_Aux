class XtdGearModels
{
	class CfgWeapons
	{
		class 24th_Athena_Vest
		{
			label = "Athena Vests";
			author = "Ithias";
			options[] = {"Vest_Camo","Type","Configuration"};
			
			class Vest_Camo
			{
				label = "Vest Camo";
				values[] = {"Desert","Snow","Urban","Woodland"};
				changeingame = 1;
                changedelay  = 0;
				class Desert
				{
					label = "Desert";
					image = "#(rgb,8,8,3)color(0.66,0.58,0.09,1)";
				};
				class Snow
				{
					label = "Snow";
					image = "#(rgb,8,8,3)color(0.8,0.8,0.8,1)";
				};
				class Urban
				{
					label = "Urban";
					image = "#(rgb,8,8,3)color(0.4,0.4,0.4,1)";
				};
				class Woodland
				{
					label = "Woodland";
					image = "#(rgb,8,8,3)color(0.295,0.325,0.126,1)";
				};
			};
			class Type
			{
				label = "Type";
				values[] = {"Default","Heavy"};
				class Default
				{
					label = "Default";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class Heavy
				{
					label = "Heavy";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
			};
			class Configuration
			{
				label = "Configuration";
				values[] = {"Recruit","Rifleman","TL","SL","Medic","JTAC"};
				class Recruit
				{
					label = "Recruit";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class Rifleman
				{
					label = "Rifleman";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class TL
				{
					label = "Team Lead";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class SL
				{
					label = "Squad Lead";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class Medic
				{
					label = "Medic";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class JTAC
				{
					label = "JTAC";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
			};
		};
    };
};
class XtdGearInfos
{
    class CfgWeapons 
    {
        //armors
//Recruit
		class 24th_Athena_Armor_Recruit_Desert
		{
		model = "24th_Athena_Vest";
		Vest_Camo = "Desert";
		Type = "Default";
		Configuration = "Recruit";
		};
		class 24th_Athena_Armor_Recruit_Snow:24th_Athena_Armor_Recruit_Desert
		{
		Vest_Camo = "Snow";
		};
		class 24th_Athena_Armor_Recruit_Urban:24th_Athena_Armor_Recruit_Desert
		{
		Vest_Camo = "Urban";
		};
		class 24th_Athena_Armor_Recruit_Woodland:24th_Athena_Armor_Recruit_Desert
		{
		Vest_Camo = "Woodland";
		};
//Rifleman
		class 24th_Athena_Armor_Rifleman_Desert
		{
		model = "24th_Athena_Vest";
		Vest_Camo = "Desert";
		Type = "Default";
		Configuration = "Rifleman";
		};
		class 24th_Athena_Armor_Rifleman_Snow:24th_Athena_Armor_Rifleman_Desert
		{
		Vest_Camo = "Snow";
		};
		class 24th_Athena_Armor_Rifleman_Urban:24th_Athena_Armor_Rifleman_Desert
		{
		Vest_Camo = "Urban";
		};
		class 24th_Athena_Armor_Rifleman_Woodland:24th_Athena_Armor_Rifleman_Desert
		{
		Vest_Camo = "Woodland";
		};
//TL
		class 24th_Athena_Armor_TL_Desert
		{
		model = "24th_Athena_Vest";
		Vest_Camo = "Desert";
		Type = "Default";
		Configuration = "TL";
		};
		class 24th_Athena_Armor_TL_Snow:24th_Athena_Armor_TL_Desert
		{
		Vest_Camo = "Snow";
		};
		class 24th_Athena_Armor_TL_Urban:24th_Athena_Armor_TL_Desert
		{
		Vest_Camo = "Urban";
		};
		class 24th_Athena_Armor_TL_Woodland:24th_Athena_Armor_TL_Desert
		{
		Vest_Camo = "Woodland";
		};
//SL
		class 24th_Athena_Armor_SL_Desert
		{
		model = "24th_Athena_Vest";
		Vest_Camo = "Desert";
		Type = "Default";
		Configuration = "SL";
		};
		class 24th_Athena_Armor_SL_Snow:24th_Athena_Armor_SL_Desert
		{
		Vest_Camo = "Snow";
		};
		class 24th_Athena_Armor_SL_Urban:24th_Athena_Armor_SL_Desert
		{
		Vest_Camo = "Urban";
		};
		class 24th_Athena_Armor_SL_Woodland:24th_Athena_Armor_SL_Desert
		{
		Vest_Camo = "Woodland";
		};
//Medic
		class 24th_Athena_Armor_Medic_Desert
		{
		model = "24th_Athena_Vest";
		Vest_Camo = "Desert";
		Type = "Default";
		Configuration = "Medic";
		};
		class 24th_Athena_Armor_Medic_Snow:24th_Athena_Armor_Medic_Desert
		{
		Vest_Camo = "Snow";
		};
		class 24th_Athena_Armor_Medic_Urban:24th_Athena_Armor_Medic_Desert
		{
		Vest_Camo = "Urban";
		};
		class 24th_Athena_Armor_Medic_Woodland:24th_Athena_Armor_Medic_Desert
		{
		Vest_Camo = "Woodland";
		};
//JTAC
		class 24th_Athena_Armor_JTAC_Desert
		{
		model = "24th_Athena_Vest";
		Vest_Camo = "Desert";
		Type = "Default";
		Configuration = "JTAC";
		};
		class 24th_Athena_Armor_JTAC_Snow:24th_Athena_Armor_JTAC_Desert
		{
		Vest_Camo = "Snow";
		};
		class 24th_Athena_Armor_JTAC_Urban:24th_Athena_Armor_JTAC_Desert
		{
		Vest_Camo = "Urban";
		};
		class 24th_Athena_Armor_JTAC_Woodland:24th_Athena_Armor_JTAC_Desert
		{
		Vest_Camo = "Woodland";
		};
//Heavy
		class 24th_Athena_Armor_Recruit_Heavy
		{
		model = "24th_Athena_Vest";
		Vest_Camo = "Urban";
		Type = "Heavy";
		Configuration = "Recruit";
		};
		class 24th_Athena_Armor_Rifleman_Heavy:24th_Athena_Armor_Recruit_Heavy
		{
		Configuration = "Rifleman";
		};
		class 24th_Athena_Armor_TL_Heavy:24th_Athena_Armor_Recruit_Heavy
		{
		Configuration = "TL";
		};
		class 24th_Athena_Armor_SL_Heavy:24th_Athena_Armor_Recruit_Heavy
		{
		Configuration = "SL";
		};
		class 24th_Athena_Armor_Medic_Heavy:24th_Athena_Armor_Recruit_Heavy
		{
		Configuration = "Medic";
		};
		class 24th_Athena_Armor_JTAC_Heavy:24th_Athena_Armor_Recruit_Heavy
		{
		Configuration = "JTAC";
		};
	};
};