class CfgVehicles {
	class vnd_KVN_Base;
	class B_KVN_AT: vnd_KVN_Base {
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
				displayName = "Pickup KVN (AT)";
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
				displayName = "Recharge KVN (AT)";
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

		GX_DroneMagazine = "GX_DEPLOYABLE_MAGAZINE_KVN_AT";
		GX_DronePayload = "";
	};

	class B_KVN_AP: vnd_KVN_Base {
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
				displayName = "Pickup KVN (AP)";
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
				displayName = "Recharge KVN (AP)";
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

		GX_DroneMagazine = "GX_DEPLOYABLE_MAGAZINE_KVN_AP";
		GX_DronePayload = "";
	};


	/////////////////////////////////////////
	//////// Ground Item Interactions ///////
	/////////////////////////////////////////
	class WeaponHolder;
	class GroundWeaponHolder: WeaponHolder {
		class UserActions {
			//Vanilla Drones
			class ASSEMBLE_B_KVN_AT {
				displayName = "Assemble KVN (AT)";
				priority = 50;
				radius =  2; 
				position = "interact";
				showWindow = 0;
				hideOnUse = 1;
				onlyForPlayer = 0;
				shortcut = "";
				condition = "[this, 'GX_DEPLOYABLE_MAGAZINE_KVN_AT'] call GX_fnc_drone_canPlace";
				statement = "[this, 'GX_DEPLOYABLE_MAGAZINE_KVN_AT', player, 'GROUND'] call GX_fnc_drone_place";
			};
			class ASSEMBLE_B_KVN_AP {
				displayName = "Assemble KVN (AP)";
				priority = 49;
				radius =  2; 
				position = "interact";
				showWindow = 0;
				hideOnUse = 1;
				onlyForPlayer = 0;
				shortcut = "";
				condition = "[this, 'GX_DEPLOYABLE_MAGAZINE_KVN_AP'] call GX_fnc_drone_canPlace";
				statement = "[this, 'GX_DEPLOYABLE_MAGAZINE_KVN_AP', player, 'GROUND'] call GX_fnc_drone_place";
			};
			
		};
	};
};
