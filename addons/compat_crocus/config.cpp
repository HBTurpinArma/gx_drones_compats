class CfgPatches {
	class GX_DRONES_COMPAT_CROCUS {
		author = "GX";
		authors[]={"GanX", "HBTurpin"};
		name="GX - Drones - Crocus FPV Compat";
		units[]={};
		weapons[]={
		};
		magazines[]={
			"GX_DEPLOYABLE_MAGAZINE_Crocus_AT", 
			"GX_DEPLOYABLE_MAGAZINE_Crocus_AP",
		};
		requiredVersion=1.0;
		requiredAddons[]={
			"GX_DRONES_CORE",
			"ArmaFPV_Data"
		};
		skipWhenMissingDependencies = 1;
		url="https://steamcommunity.com/profiles/76561197961847052/myworkshopfiles/";
	};
};

#include "CfgVehicles.hpp"
#include "CfgMagazines.hpp"
#include "CfgWeapons.hpp"
