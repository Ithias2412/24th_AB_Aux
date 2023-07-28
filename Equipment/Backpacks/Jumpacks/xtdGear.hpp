class XtdGearModels
{
	class CfgVehicles
	{
		class 24th_Athena_Jump_packs
		{
			label = "Athena Jump Packs";
			author = "Ithias";
			options[] = {"Type","Radio"};
			
			class Type
			{
				label = "Type";
				values[] = {"Regenerate","Limited","X"};
				class Regenerate
				{
					label = "Regenerate";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class Limited
				{
					label = "Limited";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class X
				{
					label = "X";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
			};
			class Radio
			{
				label = "Radio";
				values[] = {"Default","LR"};
				class Default
				{
					label = "Default";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class LR
				{
					label = "LR";
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
//RGN
		class 24th_Athena_Jumpack_RGN_Basic
		{
		model = "24th_Athena_Jump_packs";
		Type = "Regenerate";
		Radio = "Default";
		};
		class 24th_Athena_Jumpack_RGN_LR : 24th_Athena_Jumpack_RGN_Basic
		{
		Radio = "LR";
		};
//LTU
		class 24th_Athena_Jumpack_LTU_Basic
		{
		model = "24th_Athena_Jump_packs";
		Type = "Limited";
		Radio = "Default";
		};
		class 24th_Athena_Jumpack_LTU_LR : 24th_Athena_Jumpack_LTU_Basic
		{
		Radio = "LR";
		};
//~X~
		class 24th_Athena_Jumpack_X_Basic
		{
		model = "24th_Athena_Jump_packs";
		Type = "X";
		Radio = "Default";
		};
		class 24th_Athena_Jumpack_X_LR : 24th_Athena_Jumpack_X_Basic
		{
		Radio = "LR";
		};
	};
};