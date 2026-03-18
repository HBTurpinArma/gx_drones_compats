class CfgVehicles {
	class ua_drone_base_F;

	class B_UAFPV_PG7VL_AT: ua_drone_base_F {
		scope = 1;
		GX_DRONES_REPLACE_ACE_ACTIONS(B_UAFPV_PG7VL_AT,FPV Kamikaze Drone (PG-7VL));
		GX_DRONES_REPLACE_USERACTIONS(B_UAFPV_PG7VL_AT,FPV Kamikaze Drone (PG-7VL));
	    GX_DRONES_REPLACE_ASSEMBLEINFO();
		GX_DroneMagazine = "GX_DEPLOYABLE_MAGAZINE_UAFPV_PG7VL_AT";
		GX_DronePayload = "";
	};

	class B_UAFPV_IED_AP: ua_drone_base_F {
		scope = 1;
		GX_DRONES_REPLACE_ACE_ACTIONS(B_UAFPV_IED_AP,FPV Kamikaze Drone (IED));
		GX_DRONES_REPLACE_USERACTIONS(B_UAFPV_IED_AP,FPV Kamikaze Drone (IED));
	    GX_DRONES_REPLACE_ASSEMBLEINFO();
		GX_DroneMagazine = "GX_DEPLOYABLE_MAGAZINE_UAFPV_IED_AP";
		GX_DronePayload = "";
	};

	class B_UAFPV_RKG_AP: ua_drone_base_F {
		scope = 1;
		GX_DRONES_REPLACE_ACE_ACTIONS(B_UAFPV_RKG_AP,FPV Kamikaze Drone (RKG-3));
		GX_DRONES_REPLACE_USERACTIONS(B_UAFPV_RKG_AP,FPV Kamikaze Drone (RKG-3));
	    GX_DRONES_REPLACE_ASSEMBLEINFO();
		GX_DroneMagazine = "GX_DEPLOYABLE_MAGAZINE_UAFPV_RKG_AP";
		GX_DronePayload = "";
	};

	class B_UAFPV_OG7V_AP: ua_drone_base_F {
		scope = 1;
		GX_DRONES_REPLACE_ACE_ACTIONS(B_UAFPV_OG7V_AP,FPV Kamikaze Drone (OG-7V));
		GX_DRONES_REPLACE_USERACTIONS(B_UAFPV_OG7V_AP,FPV Kamikaze Drone (OG-7V));
	    GX_DRONES_REPLACE_ASSEMBLEINFO();
		GX_DroneMagazine = "GX_DEPLOYABLE_MAGAZINE_UAFPV_OG7V_AP";
		GX_DronePayload = "";
	};

	class WeaponHolder;
	class GroundWeaponHolder: WeaponHolder {
		class UserActions {
			//GX_DRONES_ADD_GROUND_USERACTIONS(drone_class_name, drone_display_name, drone_magazine_class_name)
			// Note: The drone_display_name parameter is only used for the display name of the user action, and does not have to match the actual display name of the drone.
			GX_DRONES_ADD_GROUND_USERACTIONS(B_UAFPV_PG7VL_AT,FPV Kamikaze Drone (PG-7VL),GX_DEPLOYABLE_MAGAZINE_UAFPV_PG7VL_AT);
			GX_DRONES_ADD_GROUND_USERACTIONS(B_UAFPV_IED_AP,FPV Kamikaze Drone (IED),GX_DEPLOYABLE_MAGAZINE_UAFPV_IED_AP);
			GX_DRONES_ADD_GROUND_USERACTIONS(B_UAFPV_RKG_AP,FPV Kamikaze Drone (RKG-3),GX_DEPLOYABLE_MAGAZINE_UAFPV_RKG_AP);
			GX_DRONES_ADD_GROUND_USERACTIONS(B_UAFPV_OG7V_AP,FPV Kamikaze Drone (OG-7V),GX_DEPLOYABLE_MAGAZINE_UAFPV_OG7V_AP);
		};
	};
};
