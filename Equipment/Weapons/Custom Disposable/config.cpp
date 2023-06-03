#define LAUNCHER_MASS 80
#define LAUNCHER_MAGAZINE_MASS 40

class CBA_DisposableLaunchers 
{
    BWA3_PzF3[] = {"BWA3_PzF3_Loaded","BWA3_PzF3_Used"};
};

class CfgMagazines 
{
    class CA_LauncherMagazine;
    class BWA3_PzF3_Tandem: CA_LauncherMagazine 
	{
        author = "$STR_BWA3_Author";
        scope = 2;
        mass = LAUNCHER_MAGAZINE_MASS;
    };
};

class CfgWeapons  
{
    class Launcher;
    class Launcher_Base_F: Launcher 
	{
		class WeaponSlotsInfo;
    };

    class BWA3_PzF3: Launcher_Base_F 
	{
        author = "$STR_BWA3_Author";
        scope = 1;
        scopeArsenal = 1;
        baseWeapon = "BWA3_PzF3_Loaded";

        magazines[] = {"BWA3_PzF3_Tandem"};
        magazineReloadTime = 0.1;
        reloadMagazineSound[] = {"",1,1};

        class EventHandlers 
		{
            fired = "_this call CBA_fnc_firedDisposable"; // this weapon eventhandler is required!
        };

        class WeaponSlotsInfo: WeaponSlotsInfo 
		{
            mass = LAUNCHER_MASS;
        };
    };

    class BWA3_PzF3_Loaded: BWA3_PzF3 
	{
        author = "$STR_BWA3_Author";
        scope = 2;
        scopeArsenal = 2;
        baseWeapon = "BWA3_PzF3_Loaded";

        magazines[] = {"CBA_FakeLauncherMagazine"};

        class WeaponSlotsInfo: WeaponSlotsInfo 
		{
            mass = LAUNCHER_MASS + LAUNCHER_MAGAZINE_MASS;
        };
    };

    class BWA3_PzF3_Used: BWA3_PzF3 
	{
        author = "$STR_BWA3_Author";
        scope = 1;
        scopeArsenal = 1;
        baseWeapon = "BWA3_PzF3_Used";

        magazines[] = {"CBA_FakeLauncherMagazine"};

        class WeaponSlotsInfo: WeaponSlotsInfo 
		{
            mass = LAUNCHER_MASS;
        };
    };
};