#include "script_component.hpp"

class CfgPatches {
	class GX_DRONES_COMPAT_KVN {
		author = "GX";
		authors[]={"GanX", "HBTurpin"};
		name="GX - Drones - KVN Fiber-Optic Compat";
		units[]={};
		weapons[]={
		};
		magazines[]={
			"GX_DEPLOYABLE_MAGAZINE_KVN_AT", 
			"GX_DEPLOYABLE_MAGAZINE_KVN_AP",
		};
		requiredVersion=1.0;
		requiredAddons[]={
			"GX_DRONES_CORE",
			"vnd_Data"
		};
		skipWhenMissingDependencies = 1;
		url="https://steamcommunity.com/profiles/76561197961847052/myworkshopfiles/";
	};
};

#include "CfgVehicles.hpp"
#include "CfgMagazines.hpp"
#include "CfgWeapons.hpp"
