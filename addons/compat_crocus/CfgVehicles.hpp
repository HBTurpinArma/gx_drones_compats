class CfgVehicles {
	class ARMAFPV_Crocus_AT_Base;
	class B_Crocus_AT: ARMAFPV_Crocus_AT_Base {
		scope = 1;
		GX_DRONES_REPLACE_ACE_ACTIONS(B_Crocus_AT,Crocus (AT));
		GX_DRONES_REPLACE_USERACTIONS(B_Crocus_AT,Crocus (AT));
	    GX_DRONES_REPLACE_ASSEMBLEINFO();
		GX_DroneMagazine = "GX_DEPLOYABLE_MAGAZINE_Crocus_AT";
		GX_DronePayload = "";
	};

	class ARMAFPV_Crocus_AP_Base;
	class B_Crocus_AP: ARMAFPV_Crocus_AP_Base {
		scope = 1;
		GX_DRONES_REPLACE_ACE_ACTIONS(B_Crocus_AP,Crocus (AP));
		GX_DRONES_REPLACE_USERACTIONS(B_Crocus_AP,Crocus (AP));
	    GX_DRONES_REPLACE_ASSEMBLEINFO();
		GX_DroneMagazine = "GX_DEPLOYABLE_MAGAZINE_Crocus_AP";
		GX_DronePayload = "";
	};

	class WeaponHolder;
	class GroundWeaponHolder: WeaponHolder {
		class UserActions {
			//GX_DRONES_ADD_GROUND_USERACTIONS(drone_class_name, drone_display_name, drone_magazine_class_name)
			// Note: The drone_display_name parameter is only used for the display name of the user action, and does not have to match the actual display name of the drone.
			GX_DRONES_ADD_GROUND_USERACTIONS(B_Crocus_AT,Crocus (AT),GX_DEPLOYABLE_MAGAZINE_Crocus_AT);
			GX_DRONES_ADD_GROUND_USERACTIONS(B_Crocus_AP,Crocus (AP),GX_DEPLOYABLE_MAGAZINE_Crocus_AP);
		};
	};
};
