//Apollo Armour 133_ApolloCap,133_AI_Vest
class V_PlateCarrierSpec_blk;
    
    class 133_AI_Vest: V_PlateCarrierSpec_blk
    {
        scope=2;
        hiddenSelections[] = {"camo"};
        hiddenSelectionsMaterials[] = {"133rdSidemod\data\Other\VR_Armor.rvmat"};
        hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0.75,0.75,0.75,1,ca)"};
        dlc = "";
        author = "Capt. Whiskey";
        displayName = "Apollo Armour";
        model= "\A3\Characters_F\BLUFOR\equip_b_carrier_spec_rig.p3d";
        class ItemInfo: VestItem
        {
            containerClass = "Supply80";
            mass = 80;
            uniformModel = "\A3\Characters_F\BLUFOR\equip_b_carrier_spec_rig.p3d";
            hiddenSelections[] = {"camo"};
            hiddenSelectionsMaterials[] = {"133rdSidemod\data\Other\VR_Armor.rvmat"};
            hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0.75,0.75,0.75,1,ca)"};
            modelSides[] = {6};
            class HitpointsProtectionInfo
            {
              class Neck
              {
                hitpointName = "HitNeck";
                armor = 100;
                passThrough = 0.1;
              };
              class Legs
              {
                hitpointName = "HitLegs";
                armor = 100;
                passThrough = 0.1;
              };
              class Arms
              {
                hitpointName = "HitArms";
                armor = 100;
                passThrough = 0.1;
              };
              class Hands
              {
                hitpointName = "HitHands";
                armor = 100;
                passThrough = 0.1;
              };
              class Chest
              {
                hitpointName = "HitChest";
                armor = 100;
                passThrough = 0.1;
              };
              class Diaphragm
              {
                hitpointName = "HitDiaphragm";
                armor = 100;
                passThrough = 0.1;
              };
              class Abdomen
              {
                hitpointName = "HitAbdomen";
                armor = 100;
                passThrough = 0.1;
              };
              class Body
              {
                hitpointName = "HitBody";
                armor = 100;
                passThrough = 0.1;
              };
            };
        };
    };

class OPTRE_UNSC_PatrolCap_Army;
    
    class 133_ApolloCap: OPTRE_UNSC_PatrolCap_Army
      {
        scope=2;
        displayName="Apollo Hat";
        picture = "\A3\characters_f_EPB\BLUFOR\Data\UI\icon_H_beret02_ca";
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsMaterials[] = {"133rdSidemod\data\Other\VR_Patrol.rvmat"};
        hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0.75,0.75,0.75,1,ca)"};
        model = "\OPTRE_UNSC_Units\Army\patrolcap.p3d";
        class itemInfo: HeadgearItem
        {
		uniformModel = "\OPTRE_UNSC_Units\Army\patrolcap.p3d";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsMaterials[] = {"133rdSidemod\data\Other\VR_Patrol.rvmat"};
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0.75,0.75,0.75,1,ca)"};
		ace_hearing_protection = 1.5;
		ace_hearing_lowerVolume = 0.1;
		class HitpointsProtectionInfo
		{
        class Head
			{
			hitpointName = "HitHead";
			armor = 100;
			passThrough = 0;
			};
		};
	};
};