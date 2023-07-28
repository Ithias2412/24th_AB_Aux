class XtdGearModels
{
	class CfgWeapons
	{
		class 24th_Athena_Helm
		{
			label = "Athena Helmets";
			author = "Ithias";
			options[] = {"Helm_Camo","Type"};
			
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
				values[] = {"Default","1st_Squad","2nd_Squad","3rd_Squad","JTAC","Medic"};
				class Default
				{
					label = "Default";
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
				class JTAC
				{
					label = "JTAC";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class Medic
				{
					label = "Medic";
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
//Default
		class 24th_Athena_Helmet_Desert
		{
		model = "24th_Athena_Helm";
		Helm_Camo = "Desert";
		Type = "Default";
		};
		class 24th_Athena_Helmet_Snow : 24th_Athena_Helmet_Desert
		{
		Helm_Camo = "Snow";
		};
		class 24th_Athena_Helmet_Urban : 24th_Athena_Helmet_Desert
		{
		Helm_Camo = "Urban";
		};
		class 24th_Athena_Helmet_Woodland : 24th_Athena_Helmet_Desert
		{
		Helm_Camo = "Woodland";
		};
//JTAC
		class 24th_Athena_Helmet_Desert_JTAC
		{
		model = "24th_Athena_Helm";
		Helm_Camo = "Desert";
		Type = "JTAC";
		};
		class 24th_Athena_Helmet_Snow_JTAC : 24th_Athena_Helmet_Desert_JTAC
		{
		Helm_Camo = "Snow";
		};
		class 24th_Athena_Helmet_Urban_JTAC : 24th_Athena_Helmet_Desert_JTAC
		{
		Helm_Camo = "Urban";
		};
		class 24th_Athena_Helmet_Woodland_JTAC : 24th_Athena_Helmet_Desert_JTAC
		{
		Helm_Camo = "Woodland";
		};
//Medic
		class 24th_Athena_Helmet_Desert_Medic
		{
		model = "24th_Athena_Helm";
		Helm_Camo = "Desert";
		Type = "Medic";
		};
		class 24th_Athena_Helmet_Snow_Medic : 24th_Athena_Helmet_Desert_Medic
		{
		Helm_Camo = "Snow";
		};
		class 24th_Athena_Helmet_Urban_Medic : 24th_Athena_Helmet_Desert_Medic
		{
		Helm_Camo = "Urban";
		};
		class 24th_Athena_Helmet_Woodland_Medic : 24th_Athena_Helmet_Desert_Medic
		{
		Helm_Camo = "Woodland";
		};
//1st Squad
		class 24th_Athena_Helmet_Desert_Javelin
		{
		model = "24th_Athena_Helm";
		Helm_Camo = "Desert";
		Type = "1st_Squad";
		};
		class 24th_Athena_Helmet_Snow_Javelin : 24th_Athena_Helmet_Desert_Javelin
		{
		Helm_Camo = "Snow";
		};
		class 24th_Athena_Helmet_Urban_Javelin : 24th_Athena_Helmet_Desert_Javelin
		{
		Helm_Camo = "Urban";
		};
		class 24th_Athena_Helmet_Woodland_Javelin : 24th_Athena_Helmet_Desert_Javelin
		{
		Helm_Camo = "Woodland";
		};
//2nd Squad
		class 24th_Athena_Helmet_Desert_Claymore
		{
		model = "24th_Athena_Helm";
		Helm_Camo = "Desert";
		Type = "2nd_Squad";
		};
		class 24th_Athena_Helmet_Snow_Claymore : 24th_Athena_Helmet_Desert_Claymore
		{
		Helm_Camo = "Snow";
		};
		class 24th_Athena_Helmet_Urban_Claymore : 24th_Athena_Helmet_Desert_Claymore
		{
		Helm_Camo = "Urban";
		};
		class 24th_Athena_Helmet_Woodland_Claymore : 24th_Athena_Helmet_Desert_Claymore
		{
		Helm_Camo = "Woodland";
		};
//3rd Squad
		class 24th_Athena_Helmet_Desert_Dagger
		{
		model = "24th_Athena_Helm";
		Helm_Camo = "Desert";
		Type = "3rd_Squad";
		};
		class 24th_Athena_Helmet_Snow_Dagger : 24th_Athena_Helmet_Desert_Dagger
		{
		Helm_Camo = "Snow";
		};
		class 24th_Athena_Helmet_Urban_Dagger : 24th_Athena_Helmet_Desert_Dagger
		{
		Helm_Camo = "Urban";
		};
		class 24th_Athena_Helmet_Woodland_Dagger : 24th_Athena_Helmet_Desert_Dagger
		{
		Helm_Camo = "Woodland";
		};
	};
};