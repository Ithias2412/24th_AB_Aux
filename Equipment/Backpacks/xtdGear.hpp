class XtdGearModels
{
	class CfgWeapons
	{
		class AthenaRucks
		{
			label = "Athena Rucksacks";
			author = "Ithias";
			options[] = {"Ruck_Camo","Type"};
			
			class Ruck_Camo
			{
				label = "Rucksack Camo";
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
				values[] = {"Basic","Heavy","Medic","JTAC","Medic_Satchel","Basic_LR"};
				class Basic
				{
					label = "Basic";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class Heavy
				{
					label = "Heavy";
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
				class Medic_Satchel
				{
					label = "Medic Satchel";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class Basic_LR
				{
					label = "Basic LR";
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
//Rucksacks
//Woodland
		class 24th_Athena_Rucksack_Basic_Woodland
		{
		model = "AthenaRucks";
		Ruck_Camo = "Woodland";
		Type = "Basic";
		};
		class 24th_Athena_Rucksack_Heavy_Woodland:24th_Athena_Rucksack_Basic_Woodland
		{
		Type = "Heavy";
		};
		class 24th_Athena_Rucksack_Medic_Woodland:24th_Athena_Rucksack_Basic_Woodland
		{
		Type = "Medic";
		};
		class 24th_Athena_Rucksack_JTAC_Woodland:24th_Athena_Rucksack_Basic_Woodland
		{
		Type = "JTAC";
		};
		class 24th_Athena_Rucksack_Basic_Woodland_LR:24th_Athena_Rucksack_Basic_Woodland
		{
		Type = "Basic_LR";
		};
//Urban
		class 24th_Athena_Rucksack_Basic_Urban
		{
		model = "AthenaRucks";
		Ruck_Camo = "Urban";
		Type = "Basic";
		};
		class 24th_Athena_Rucksack_Heavy_Urban:24th_Athena_Rucksack_Basic_Urban
		{
		Type = "Heavy";
		};
		class 24th_Athena_Rucksack_Medic_Urban:24th_Athena_Rucksack_Basic_Urban
		{
		Type = "Medic";
		};
		class 24th_Athena_Rucksack_JTAC_Urban:24th_Athena_Rucksack_Basic_Urban
		{
		Type = "JTAC";
		};
		class 24th_Athena_Satchel_Medic:24th_Athena_Rucksack_Basic_Urban
		{
		Type = "Medic_Satchel";
		};
		class 24th_Athena_Rucksack_Basic_Urban_LR:24th_Athena_Rucksack_Basic_Urban
		{
		Type = "Basic_LR";
		};
//Desert
		class 24th_Athena_Rucksack_Basic_Desert
		{
		model = "AthenaRucks";
		Ruck_Camo = "Desert";
		Type = "Basic";
		};
		class 24th_Athena_Rucksack_Heavy_Desert:24th_Athena_Rucksack_Basic_Desert
		{
		Type = "Heavy";
		};
		class 24th_Athena_Rucksack_Medic_Desert:24th_Athena_Rucksack_Basic_Desert
		{
		Type = "Medic";
		};
		class 24th_Athena_Rucksack_JTAC_Desert:24th_Athena_Rucksack_Basic_Desert
		{
		Type = "JTAC";
		};
		class 24th_Athena_Rucksack_Basic_Desert_LR:24th_Athena_Rucksack_Basic_Desert
		{
		Type = "Basic_LR";
		};
//Snow
		class 24th_Athena_Rucksack_Basic_Snow
		{
		model = "AthenaRucks";
		Ruck_Camo = "Snow";
		Type = "Basic";
		};
		class 24th_Athena_Rucksack_Heavy_Snow:24th_Athena_Rucksack_Basic_Snow
		{
		Type = "Heavy";
		};
		class 24th_Athena_Rucksack_Medic_Snow:24th_Athena_Rucksack_Basic_Snow
		{
		Type = "Medic";
		};
		class 24th_Athena_Rucksack_JTAC_Snow:24th_Athena_Rucksack_Basic_Snow
		{
		Type = "JTAC";
		};
		class 24th_Athena_Rucksack_Basic_Snow_LR:24th_Athena_Rucksack_Basic_Snow
		{
		Type = "Basic_LR";
		};
	};
};