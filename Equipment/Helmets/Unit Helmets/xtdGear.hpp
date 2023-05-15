class XtdGearModels
{
	class CfgWeapons
	{
		class AthenaHelm
		{
			label = "Athena Helmets";
			author = "Ithias";
			options[] = {"Helm_Camo","Type","Visor"};
			
			class Helm_Camo
			{
				label = "Helm Camo";
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
				values[] = {"Default","1st_Squad","2nd_Squad","3rd_Squad"};
				class Default
				{
					label = "Default Helmet";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class 1st_Squad
				{
					label = "1st Squad";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class 2nd_Squad
				{
					label = "2nd Squad";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class 3rd_Squad
				{
					label = "3rd Squad";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
			};
			class Visor
			{
				label = "Visor";
				values[] = {"Silver","Gold"};
				changeingame = 1;
                changedelay  = 0;
				class Silver
				{
					label = "Silver";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class Gold
				{
					label = "Gold";
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
        //helmets
		class 24th_Athena_Helmet_Silver_Desert
		{
		model = "AthenaHelm";
		Helm_Camo = "Desert";
		Type = "Default";
        Visor="Silver";
		};
		class 24th_Athena_Helmet_Silver_Snow:24th_Athena_Helmet_Silver_Desert
		{
		Helm_Camo = "Snow";
		};
		class 24th_Athena_Helmet_Silver_Urban:24th_Athena_Helmet_Silver_Desert
		{
		Helm_Camo = "Urban";
		};
		class 24th_Athena_Helmet_Silver_Woodland:24th_Athena_Helmet_Silver_Desert
		{
		Helm_Camo = "Woodland";
		};

		class 24th_Athena_Helmet_Gold_Desert
		{
		model = "AthenaHelm";
		Helm_Camo = "Desert";
		Type = "Default";
        Visor="Gold";
		};
		class 24th_Athena_Helmet_Gold_Snow:24th_Athena_Helmet_Gold_Desert
		{
		Helm_Camo = "Snow";
		};
		class 24th_Athena_Helmet_Gold_Urban:24th_Athena_Helmet_Gold_Desert
		{
		Helm_Camo = "Urban";
		};
		class 24th_Athena_Helmet_Gold_Woodland:24th_Athena_Helmet_Gold_Desert
		{
		Helm_Camo = "Woodland";
		};
	};
};