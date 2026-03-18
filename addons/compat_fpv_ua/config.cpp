class CfgPatches {
	class GX_DRONES_COMPAT_FPV_UA {
		author = "GX";
		authors[]={"GanX", "HBTurpin"};
		name="GX - Drones - Ukraine FPV Compat";
		units[]={};
		weapons[]={
		};
		magazines[]={
			"GX_DEPLOYABLE_MAGAZINE_UAFPV_PG7VL_AT", 
			"GX_DEPLOYABLE_MAGAZINE_UAFPV_IED_AP",
			"GX_DEPLOYABLE_MAGAZINE_UAFPV_RKG_AP",
			"GX_DEPLOYABLE_MAGAZINE_UAFPV_OG7V_AP"
		};
		requiredVersion=1.0;
		requiredAddons[]={
			"GX_DRONES_CORE",
			"FPV_UA"
		};
		skipWhenMissingDependencies = 1;
		url="https://steamcommunity.com/profiles/76561197961847052/myworkshopfiles/";
	};
};

#include "CfgVehicles.hpp"
#include "CfgMagazines.hpp"
#include "CfgWeapons.hpp"
