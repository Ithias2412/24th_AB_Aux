class XtdGearModels
{
	class CfgVehicles
	{
		class 24th_Athena_Backpacks
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
				values[] = {"Basic","Heavy","Medic","JTAC","Basic_LR"};
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
				class Basic_LR
				{
					label = "Basic LR";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
			};
		};
		class 24th_Athena_Satchels
		{
			label = "Athena Satchels";
			author = "Ithias";
			options[] = {"Type","Size"};
			
			class Type
			{
				label = "Type";
				values[] = {"Default","Medic","CreamOfSomeYoungGuy"};
				class Default
				{
					label = "Default";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class Medic
				{
					label = "Medic";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class CreamOfSomeYoungGuy
				{
					label = "CreamOfSomeYoungGuy";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
			};
			class Size
			{
				label = "Size";
				values[] = {"Default","Large"};
				class Default
				{
					label = "Default";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class Large
				{
					label = "Large";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
			};
		};
    };
};
class XtdGearInfos
{
    class CfgVehicles
    {
//Rucksacks
//Basic
		class 24th_Athena_Rucksack_Basic_Woodland
		{
		model = "24th_Athena_Backpacks";
		Ruck_Camo = "Woodland";
		Type = "Basic";
		};
		class 24th_Athena_Rucksack_Basic_Urban : 24th_Athena_Rucksack_Basic_Woodland
		{
		Ruck_Camo = "Urban";
		};
		class 24th_Athena_Rucksack_Basic_Desert : 24th_Athena_Rucksack_Basic_Woodland
		{
		Ruck_Camo = "Desert";
		};
		class 24th_Athena_Rucksack_Basic_Snow : 24th_Athena_Rucksack_Basic_Woodland
		{
		Ruck_Camo = "Snow";
		};
//Heavy
		class 24th_Athena_Rucksack_Heavy_Woodland
		{
		model = "24th_Athena_Backpacks";
		Ruck_Camo = "Woodland";
		Type = "Heavy";
		};
		class 24th_Athena_Rucksack_Heavy_Urban : 24th_Athena_Rucksack_Heavy_Woodland
		{
		Ruck_Camo = "Urban";
		};
		class 24th_Athena_Rucksack_Heavy_Desert : 24th_Athena_Rucksack_Heavy_Woodland
		{
		Ruck_Camo = "Desert";
		};
		class 24th_Athena_Rucksack_Heavy_Snow : 24th_Athena_Rucksack_Heavy_Woodland
		{
		Ruck_Camo = "Snow";
		};
//Medic
		class 24th_Athena_Rucksack_Medic_Woodland
		{
		model = "24th_Athena_Backpacks";
		Ruck_Camo = "Woodland";
		Type = "Medic";
		};
		class 24th_Athena_Rucksack_Medic_Urban : 24th_Athena_Rucksack_Medic_Woodland
		{
		Ruck_Camo = "Urban";
		};
		class 24th_Athena_Rucksack_Medic_Desert : 24th_Athena_Rucksack_Medic_Woodland
		{
		Ruck_Camo = "Desert";
		};
		class 24th_Athena_Rucksack_Medic_Snow : 24th_Athena_Rucksack_Medic_Woodland
		{
		Ruck_Camo = "Snow";
		};
//JTAC
		class 24th_Athena_Rucksack_JTAC_Woodland
		{
		model = "24th_Athena_Backpacks";
		Ruck_Camo = "Woodland";
		Type = "JTAC";
		};
		class 24th_Athena_Rucksack_JTAC_Urban : 24th_Athena_Rucksack_JTAC_Woodland
		{
		Ruck_Camo = "Urban";
		};
		class 24th_Athena_Rucksack_JTAC_Desert : 24th_Athena_Rucksack_JTAC_Woodland
		{
		Ruck_Camo = "Desert";
		};
		class 24th_Athena_Rucksack_JTAC_Snow : 24th_Athena_Rucksack_JTAC_Woodland
		{
		Ruck_Camo = "Snow";
		};

//Basic LR
		class 24th_Athena_Rucksack_Basic_Woodland_LR
		{
		model = "24th_Athena_Backpacks";
		Ruck_Camo = "Woodland";
		Type = "Basic_LR";
		};
		class 24th_Athena_Rucksack_Basic_Urban_LR : 24th_Athena_Rucksack_Basic_Woodland_LR
		{
		Ruck_Camo = "Urban";
		};
		class 24th_Athena_Rucksack_Basic_Desert_LR : 24th_Athena_Rucksack_Basic_Woodland_LR
		{
		Ruck_Camo = "Desert";
		};
		class 24th_Athena_Rucksack_Basic_Snow_LR : 24th_Athena_Rucksack_Basic_Woodland_LR
		{
		Ruck_Camo = "Snow";
		};
//Satchels
		class 24th_Athena_Satchel_Small
		{
		model = "24th_Athena_Satchels";
		Type = "Default";
		Size = "Default";
		};
		class 24th_Athena_Satchel_Large : 24th_Athena_Satchel_Small
		{
		Size = "Large";
		};
		class 24th_Athena_Satchel_Medic
		{
		model = "24th_Athena_Satchels";
		Type = "Medic";
		Size = "Default";
		};
		class 24th_Athena_Satchel_CreamOfSomeYoungGuy
		{
		model = "24th_Athena_Satchels";
		Type = "CreamOfSomeYoungGuy";
		Size = "Default";
		};

	};
};