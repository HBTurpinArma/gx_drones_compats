class CfgVehicles {
	class ua_drone_base_F;

	class B_UAFPV_PG7VL_AT: ua_drone_base_F {
		scope = 1;
		
		//Pickup and pack away options?
		class ACE_Actions {
			class ACE_MainActions {
				displayName = "Interactions";
				position = "[_target, ace_interact_menu_cameraPosASL] call ace_interaction_fnc_getVehiclePosComplex";
				selection = "";
				distance = 4;
				condition = "true";
				class GX_DronePickup {
					displayName = "Pickup";
					condition = "[_player, _target] call GX_fnc_drone_canPickup";
					statement = "[_player, _target] call GX_fnc_drone_pickup";
					icon = "a3\ui_f\data\igui\rscingameui\rscunitinfoairrtdfull\ico_insp_hand_ca.paa";
				};
				class GX_DroneRecharge {
					displayName = "Recharge";
					condition = "[_player, _target] call GX_fnc_drone_canRecharge";
					statement = "[_player, _target] call GX_fnc_drone_recharge";
					icon = "\gx_drones\core\data\ui\interact_recharge_ca.paa";
				};
			};
        };

		class UserActions {
			class GX_DronePickup {
				displayName = "Pickup FPV Kamikaze Drone (PG-7VL)";
				priority = 50;
				radius =  2; 
				position = "interact";
				showWindow = 0;
				hideOnUse = 1;
				onlyForPlayer = 0;
				shortcut = "";
                condition = "[player, this] call GX_fnc_drone_canPickup";
                statement = "[player, this] call GX_fnc_drone_pickup";
			};
			class GX_DroneRecharge {
				displayName = "Recharge FPV Kamikaze Drone (PG-7VL)";
				priority = 49;
				radius =  2; 
				position = "interact";
				showWindow = 0;
				hideOnUse = 1;
				onlyForPlayer = 0;
				shortcut = "";
                condition = "[player, this] call GX_fnc_drone_canRecharge";
                statement = "[player, this] call GX_fnc_drone_recharge";
			};
		};

	    class assembleInfo {
            dissasembleTo[] = {};
        };

		GX_DroneMagazine = "GX_DEPLOYABLE_MAGAZINE_UAFPV_PG7VL_AT";
		GX_DronePayload = "";
	};

	class B_UAFPV_IED_AP: ua_drone_base_F {
		scope = 1;
		
		//Pickup and pack away options?
		class ACE_Actions {
			class ACE_MainActions {
				displayName = "Interactions";
				position = "[_target, ace_interact_menu_cameraPosASL] call ace_interaction_fnc_getVehiclePosComplex";
				selection = "";
				distance = 4;
				condition = "true";
				class GX_DronePickup {
					displayName = "Pickup";
					condition = "[_player, _target] call GX_fnc_drone_canPickup";
					statement = "[_player, _target] call GX_fnc_drone_pickup";
					icon = "a3\ui_f\data\igui\rscingameui\rscunitinfoairrtdfull\ico_insp_hand_ca.paa";
				};
				class GX_DroneRecharge {
					displayName = "Recharge";
					condition = "[_player, _target] call GX_fnc_drone_canRecharge";
					statement = "[_player, _target] call GX_fnc_drone_recharge";
					icon = "\gx_drones\core\data\ui\interact_recharge_ca.paa";
				};
			};
        };

		class UserActions {
			class GX_DronePickup {
				displayName = "Pickup FPV Kamikaze Drone (IED)";
				priority = 50;
				radius =  2; 
				position = "interact";
				showWindow = 0;
				hideOnUse = 1;
				onlyForPlayer = 0;
				shortcut = "";
                condition = "[player, this] call GX_fnc_drone_canPickup";
                statement = "[player, this] call GX_fnc_drone_pickup";
			};
			class GX_DroneRecharge {
				displayName = "Recharge FPV Kamikaze Drone (IED)";
				priority = 49;
				radius =  2; 
				position = "interact";
				showWindow = 0;
				hideOnUse = 1;
				onlyForPlayer = 0;
				shortcut = "";
                condition = "[player, this] call GX_fnc_drone_canRecharge";
                statement = "[player, this] call GX_fnc_drone_recharge";
			};
		};

		class assembleInfo {
			dissasembleTo[] = {};
		};

		GX_DroneMagazine = "GX_DEPLOYABLE_MAGAZINE_UAFPV_IED_AP";
		GX_DronePayload = "";
	};

	class B_UAFPV_RKG_AP: ua_drone_base_F {
		scope = 1;
		
		//Pickup and pack away options?
		class ACE_Actions {
			class ACE_MainActions {
				displayName = "Interactions";
				position = "[_target, ace_interact_menu_cameraPosASL] call ace_interaction_fnc_getVehiclePosComplex";
				selection = "";
				distance = 4;
				condition = "true";
				class GX_DronePickup {
					displayName = "Pickup";
					condition = "[_player, _target] call GX_fnc_drone_canPickup";
					statement = "[_player, _target] call GX_fnc_drone_pickup";
					icon = "a3\ui_f\data\igui\rscingameui\rscunitinfoairrtdfull\ico_insp_hand_ca.paa";
				};
				class GX_DroneRecharge {
					displayName = "Recharge";
					condition = "[_player, _target] call GX_fnc_drone_canRecharge";
					statement = "[_player, _target] call GX_fnc_drone_recharge";
					icon = "\gx_drones\core\data\ui\interact_recharge_ca.paa";
				};
			};
		};

		class UserActions {
			class GX_DronePickup {
				displayName = "Pickup FPV Kamikaze Drone (RKG-3)";
				priority = 50;
				radius =  2; 
				position = "interact";
				showWindow = 0;
				hideOnUse = 1;
				onlyForPlayer = 0;
				shortcut = "";
				condition = "[player, this] call GX_fnc_drone_canPickup";
				statement = "[player, this] call GX_fnc_drone_pickup";
			};
			class GX_DroneRecharge {
				displayName = "Recharge FPV Kamikaze Drone (RKG-3)";
				priority = 49;
				radius =  2; 
				position = "interact";
				showWindow = 0;
				hideOnUse = 1;
				onlyForPlayer = 0;
				shortcut = "";
				condition = "[player, this] call GX_fnc_drone_canRecharge";
				statement = "[player, this] call GX_fnc_drone_recharge";
			};
		};

		class assembleInfo {
			dissasembleTo[] = {};
		};

		GX_DroneMagazine = "GX_DEPLOYABLE_MAGAZINE_UAFPV_RKG_AP";
		GX_DronePayload = "";
	};

	class B_UAFPV_OG7V_AP: ua_drone_base_F {
		scope = 1;
		
		//Pickup and pack away options?
		class ACE_Actions {
			class ACE_MainActions {
				displayName = "Interactions";
				position = "[_target, ace_interact_menu_cameraPosASL] call ace_interaction_fnc_getVehiclePosComplex";
				selection = "";
				distance = 4;
				condition = "true";
				class GX_DronePickup {
					displayName = "Pickup";
					condition = "[_player, _target] call GX_fnc_drone_canPickup";
					statement = "[_player, _target] call GX_fnc_drone_pickup";
					icon = "a3\ui_f\data\igui\rscingameui\rscunitinfoairrtdfull\ico_insp_hand_ca.paa";
				};
				class GX_DroneRecharge {
					displayName = "Recharge";
					condition = "[_player, _target] call GX_fnc_drone_canRecharge";
					statement = "[_player, _target] call GX_fnc_drone_recharge";
					icon = "\gx_drones\core\data\ui\interact_recharge_ca.paa";
				};
			};
		};

		class UserActions {
			class GX_DronePickup {
				displayName = "Pickup FPV Kamikaze Drone (OG-7V)";
				priority = 50;
				radius =  2; 
				position = "interact";
				showWindow = 0;
				hideOnUse = 1;
				onlyForPlayer = 0;
				shortcut = "";
				condition = "[player, this] call GX_fnc_drone_canPickup";
				statement = "[player, this] call GX_fnc_drone_pickup";
			};
			class GX_DroneRecharge {
				displayName = "Recharge FPV Kamikaze Drone (OG-7V)";
				priority = 49;
				radius =  2; 
				position = "interact";
				showWindow = 0;
				hideOnUse = 1;
				onlyForPlayer = 0;
				shortcut = "";
				condition = "[player, this] call GX_fnc_drone_canRecharge";
				statement = "[player, this] call GX_fnc_drone_recharge";
			};
		};

		class assembleInfo {
			dissasembleTo[] = {};
		};

		GX_DroneMagazine = "GX_DEPLOYABLE_MAGAZINE_UAFPV_OG7V_AP";
		GX_DronePayload = "";
	};


	/////////////////////////////////////////
	//////// Ground Item Interactions ///////
	/////////////////////////////////////////
	class WeaponHolder;
	class GroundWeaponHolder: WeaponHolder {
		class UserActions {
			//Vanilla Drones
			class ASSEMBLE_B_UAFPV_PG7VL_AT {
				displayName = "Assemble FPV Kamikaze Drone (PG-7VL)";
				priority = 50;
				radius =  2; 
				position = "interact";
				showWindow = 0;
				hideOnUse = 1;
				onlyForPlayer = 0;
				shortcut = "";
				condition = "[this, 'GX_DEPLOYABLE_MAGAZINE_UAFPV_PG7VL_AT'] call GX_fnc_drone_canPlace";
				statement = "[this, 'GX_DEPLOYABLE_MAGAZINE_UAFPV_PG7VL_AT', player, 'GROUND'] call GX_fnc_drone_place";
			};
			class ASSEMBLE_B_UAFPV_IED_AP {
				displayName = "Assemble FPV Kamikaze Drone (IED)";
				priority = 50;
				radius =  2; 
				position = "interact";
				showWindow = 0;
				hideOnUse = 1;
				onlyForPlayer = 0;
				shortcut = "";
				condition = "[this, 'GX_DEPLOYABLE_MAGAZINE_UAFPV_IED_AP'] call GX_fnc_drone_canPlace";
				statement = "[this, 'GX_DEPLOYABLE_MAGAZINE_UAFPV_IED_AP', player, 'GROUND'] call GX_fnc_drone_place";
			};
			class ASSEMBLE_B_UAFPV_RKG_AP {
				displayName = "Assemble FPV Kamikaze Drone (RKG-3)";
				priority = 50;
				radius =  2; 
				position = "interact";
				showWindow = 0;
				hideOnUse = 1;
				onlyForPlayer = 0;
				shortcut = "";
				condition = "[this, 'GX_DEPLOYABLE_MAGAZINE_UAFPV_RKG_AP'] call GX_fnc_drone_canPlace";
				statement = "[this, 'GX_DEPLOYABLE_MAGAZINE_UAFPV_RKG_AP', player, 'GROUND'] call GX_fnc_drone_place";
			};
			class ASSEMBLE_B_UAFPV_OG7V_AP {
				displayName = "Assemble FPV Kamikaze Drone (OG-7V)";
				priority = 50;
				radius =  2; 
				position = "interact";
				showWindow = 0;
				hideOnUse = 1;
				onlyForPlayer = 0;
				shortcut = "";
				condition = "[this, 'GX_DEPLOYABLE_MAGAZINE_UAFPV_OG7V_AP'] call GX_fnc_drone_canPlace";
				statement = "[this, 'GX_DEPLOYABLE_MAGAZINE_UAFPV_OG7V_AP', player, 'GROUND'] call GX_fnc_drone_place";
			};
		};
	};
};
