class XtdGearModels
{
	class CfgWeapons
	{
		class 24th_Uniforms
		{
			label = "Uniforms";
			author = "Ithias";
			options[] = {"Uniform_Camo","Type"};

			class Uniform_Camo
			{
				label = "Uniform Camo";
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
				values[] = {"Full","Rolled","Short_Sleeve"};
				class Full
				{
					label = "Full";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class Rolled
				{
					label = "Rolled";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class Short_Sleeve
				{
					label = "Short Sleeve";
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
		//Urban
		class 24th_Athena_BDU_Slim
		{
		model = "24th_Uniforms";
		Uniform_Camo = "Urban";
		Type = "Full";
		};
		class 24th_Athena_BDU_R_Slim:24th_Athena_BDU_Slim
		{
		Type = "Rolled";
		};
        class 24th_Athena_BDU_SS_Slim:24th_Athena_BDU_Slim
		{
		Type = "Short_Sleeve";
		};

		//Desert
		class 24th_Athena_BDU_Slim_Desert
		{
		model = "24th_Uniforms";
		Uniform_Camo = "Desert";
		Type = "Full";
		};
		class 24th_Athena_BDU_R_Slim_Desert:24th_Athena_BDU_Slim_Desert
		{
		Type = "Rolled";
		};
        class 24th_Athena_BDU_SS_Slim_Desert:24th_Athena_BDU_Slim_Desert
		{
		Type = "Short_Sleeve";
		};
		
		//Snow
		class 24th_Athena_BDU_Slim_Snow
		{
		model = "24th_Uniforms";
		Uniform_Camo = "Snow";
		Type = "Full";
		};
		class 24th_Athena_BDU_R_Slim_Snow:24th_Athena_BDU_Slim_Snow
		{
		Type = "Rolled";
		};
        class 24th_Athena_BDU_SS_Slim_Snow:24th_Athena_BDU_Slim_Snow
		{
		Type = "Short_Sleeve";
		};
		
		//Woodland
		class 24th_Athena_BDU_Slim_Woodland
		{
		model = "24th_Uniforms";
		Uniform_Camo = "Woodland";
		Type = "Full";
		};
		class 24th_Athena_BDU_R_Slim_Woodland:24th_Athena_BDU_Slim_Woodland
		{
		Type = "Rolled";
		};
        class 24th_Athena_BDU_SS_Slim_Woodland:24th_Athena_BDU_Slim_Woodland
		{
		Type = "Short_Sleeve";
		};
	};
};