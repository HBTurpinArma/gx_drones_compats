class CfgVehicles {
	class vnd_KVN_Base;
	class B_KVN_AT: vnd_KVN_Base {
		scope = 1;
		GX_DRONES_REPLACE_ACE_ACTIONS(B_KVN_AT,KVN (AT));
		GX_DRONES_REPLACE_USERACTIONS(B_KVN_AT,KVN (AT));
 	    GX_DRONES_REPLACE_ASSEMBLEINFO();
		GX_DroneMagazine = "GX_DEPLOYABLE_MAGAZINE_KVN_AT";
		GX_DronePayload = "";
	};

	class B_KVN_AP: vnd_KVN_Base {
		scope = 1;
		GX_DRONES_REPLACE_ACE_ACTIONS(B_KVN_AP,KVN (AP));
		GX_DRONES_REPLACE_USERACTIONS(B_KVN_AP,KVN (AP));
 	    GX_DRONES_REPLACE_ASSEMBLEINFO();
		GX_DroneMagazine = "GX_DEPLOYABLE_MAGAZINE_KVN_AP";
		GX_DronePayload = "";
	};

	class WeaponHolder;
	class GroundWeaponHolder: WeaponHolder {
		class UserActions {
			//GX_DRONES_ADD_GROUND_USERACTIONS(drone_class_name, drone_display_name, drone_magazine_class_name)
			// Note: The drone_display_name parameter is only used for the display name of the user action, and does not have to match the actual display name of the drone.
			GX_DRONES_ADD_GROUND_USERACTIONS(KVN_AT,KVN (AT),GX_DEPLOYABLE_MAGAZINE_KVN_AT);
			GX_DRONES_ADD_GROUND_USERACTIONS(KVN_AP,KVN (AP),GX_DEPLOYABLE_MAGAZINE_KVN_AP);
		};
	};
};
