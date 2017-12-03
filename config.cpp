
class CfgPatches {

	class Gangsta_plates {
		requiredAddons[] = {"SonicT_Items"};
		units[] = {};
		author = "Berlioz";
		fileName = "Gangstaplates.pbo";
	};

};

class CfgMods{
	class Mod_Base;
	class Gangstaplates{
		
		author = "Sonic.T";
		picture = "\SCT\sonict.paa";
		logo = "\SCT\sonict.paa";
		logoOver = "\SCT\sonict.paa";
		logoSmall = "\SCT\sonict.paa";
		dlcColor[] = {0, 0, 0, 1};
		tooltip = "SCT Armor Plate";
		tooltipOwned = "Sonic.T";
		name = "Sonic.T and V. Berlioz's full-spectrum body armor overhaul";
		overview = "stuff hard armor plates in your vest, to ensure your safety";
		dir = "G";
	};
};	

class CfgWeapons {
	class SonicT_Item_Base; //extern
	class ItemCore;
	class InventoryItem_Base_F;

	class Gangsta_Base: SonicT_Item_Base {
		class ItemInfo: InventoryItem_Base_F {
			mass = 1;
		};
	};

	class Gangsta_ksapi: Gangsta_Base {
		scope = 2;
	displayName = "(Plate-Jabrone) Toilet Seat";
		picture = "";
		model = "\SCT\addons\SonicT_vest\data\objects\SCT_ceramic_esapi.p3d"
		descriptionShort = "Used By: Yo' Fresh-ass Momma<br />Rating: Five Dindus<br />Introduced: When da' hood was white<br />Will withstand my ass!";

		class ItemInfo: ItemInfo {
			mass = 70;
		};
		
		class SCT_ITEMINFO{
			plateinfo[] = {"DEEZ NUTS", 0};
			enableparts[] = {0,0,5,5,5,0,0,0,0};
			blunttraumaPad[] = {0,0,1.3,1.3,1.3,0,0,0,0};
			enablePlace[] = {"Vest", "Uniform", "Backpack"};
		};
	};
	
};
class CfgMagazines {
	class CA_Magazine;
	class AAPM_Item_Base_magtype; //extern


	class Gangsta_magtype: AAPM_Item_Base_magtype {
		scope = 1;
		access = 3;
		displayName = "-";
		detectRange = -1;
		simulation = "ItemMineDetector";
		useAsBinocular = 0;
		type = 4096;
		picture = "";
		descriptionShort = "";
		count = 6000;
		mass = 1;

	};

	class Gangsta_ksapi_magtype: Gangsta_magtype {
		scope = 1;
		displayName = "(Plate-Jabrone) Toilet Seat";
		picture = "";
		model = "\SCT\addons\SonicT_vest\data\objects\SCT_ceramic_esapi.p3d"
		descriptionShort = "Used By: Yo' Fresh-ass Momma<br />Rating: Five Dindus<br />Introduced: When da' hood was white<br />Will withstand my ass!";
		count = 30;
		mass = 70;
		
		class SCT_ITEMINFO{
			plateinfo[] = {"DEEZ NUTS", 0};
			enableparts[] = {0,0,5,5,5,0,0,0,0};
			blunttraumaPad[] = {0,0,3,3,3,0,0,0,0};
			enablePlace[] = {"Vest", "Uniform", "Backpack"};
		};
	};

};

