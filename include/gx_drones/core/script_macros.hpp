
#include "\x\cba\addons\main\script_macros_common.hpp"

// Vehicle Class
#define GX_DRONES_INHERIT_VEHICLE_CLASS(drone_class_name,drone_display_name,drone_magazine_class_name,drone_base_class_name)\
	class drone_class_name##:##drone_base_class_name## {\
		class UserActions;\
	};\
	class GX_##drone_class_name##:##drone_class_name## {\
		scope = 1;\
		class UserActions: UserActions {\
			GX_DRONES_ADD_USERACTIONS(drone_class_name,drone_display_name);\
		};\
		GX_DRONES_REPLACE_ACE_ACTIONS(drone_class_name,drone_display_name);\
	    GX_DRONES_REPLACE_ASSEMBLEINFO();\
		GX_DroneMagazine = QUOTE(drone_magazine_class_name);\
		GX_DronePayload = "";\
	}


#define GX_DRONES_CREATE_VEHICLE_CLASS(drone_class_name,drone_display_name,drone_magazine_class_name)\
	class GX_##drone_class_name##:##drone_class_name## {\
		scope = 1;\
		GX_DRONES_REPLACE_USERACTIONS(drone_class_name,drone_display_name);\
		GX_DRONES_REPLACE_ACE_ACTIONS(drone_class_name,drone_display_name);\
	    GX_DRONES_REPLACE_ASSEMBLEINFO();\
		GX_DroneMagazine = QUOTE(drone_magazine_class_name);\
		GX_DronePayload = "";\
	}

// Ace Interactions
#define GX_DRONES_REPLACE_ACE_ACTIONS(drone_class_name,drone_display_name)\
	class ACE_Actions {\
		class ACE_MainActions {\
			GX_DRONES_ADD_ACE_ACTIONS(drone_class_name,drone_display_name);\
		};\
	}

#define GX_DRONES_ADD_ACE_ACTIONS(drone_class_name,drone_display_name)\
	class GX_DRONES_Pickup {\
		displayName = QUOTE(Pickup);\
		condition = QUOTE([ARR_2(_player,_target)] call GX_fnc_drone_canPickup);\
		statement = QUOTE([ARR_2(_player,_target)] call GX_fnc_drone_pickup);\
		icon = QUOTE(a3\ui_f\data\igui\rscingameui\rscunitinfoairrtdfull\ico_insp_hand_ca.paa);\
	};\
	class GX_DRONES_Recharge {\
		displayName = QUOTE(Recharge);\
		condition = QUOTE([ARR_2(_player,_target)] call GX_fnc_drone_canRecharge);\
		statement = QUOTE([ARR_2(_player,_target)] call GX_fnc_drone_recharge);\
		icon = QUOTE(\gx_drones\core\data\ui\interact_recharge_ca.paa);\
	};\
	class GX_DRONES_Throw {\
		displayName = QUOTE(Throw);\
		condition = QUOTE([ARR_2(_player,_target)] call GX_fnc_drone_canThrow);\
		statement = QUOTE([ARR_2(_player,_target)] call GX_fnc_drone_throw);\
		icon = QUOTE(\gx_drones\core\data\ui\interact_throw_ca.paa);\
	}

// Vanilla User Actions
#define GX_DRONES_REPLACE_USERACTIONS(drone_class_name,drone_display_name)\
	class UserActions {\
		GX_DRONES_ADD_USERACTIONS(drone_class_name,drone_display_name);\
	}

#define GX_DRONES_ADD_USERACTIONS(drone_class_name,drone_display_name)\
	class GX_DRONES_Pickup {\
		displayName = QUOTE(Pickup ##drone_display_name##);\
		priority = 50;\
		radius =  2; \
		position = QUOTE(interact);\
		showWindow = 0;\
		hideOnUse = 1;\
		onlyForPlayer = 0;\
		shortcut = "";\
		condition = QUOTE([ARR_2(player,this)] call GX_fnc_drone_canPickup);\
		statement = QUOTE([ARR_2(player,this)] call GX_fnc_drone_pickup);\
	};\
	class GX_DRONES_Recharge {\
		displayName = QUOTE(Recharge ##drone_display_name##);\
		priority = 49;\
		radius =  2; \
		position = QUOTE(interact);\
		showWindow = 0;\
		hideOnUse = 1;\
		onlyForPlayer = 0;\
		shortcut = "";\
		condition = QUOTE([ARR_2(player,this)] call GX_fnc_drone_canRecharge);\
		statement = QUOTE([ARR_2(player,this)] call GX_fnc_drone_recharge);\
	};\
	class GX_DRONES_Throw {\
		displayName = QUOTE(Throw ##drone_display_name##);\
		priority = 48;\
		radius =  2; \
		position = QUOTE(interact);\
		showWindow = 0;\
		hideOnUse = 1;\
		onlyForPlayer = 0;\
		shortcut = "";\
		condition = QUOTE([ARR_2(player,this)] call GX_fnc_drone_canThrow);\
		statement = QUOTE([ARR_2(player,this)] call GX_fnc_drone_throw);\
	}

// Delete AssembleInfo
#define GX_DRONES_REPLACE_ASSEMBLEINFO()\
	class assembleInfo {\
		primary = 0;\
		base = "";\
		assembleTo = "";\
		dissasembleTo[] = {};\
		displayName = "";\
	}


// Ground Item Interactions
#define GX_DRONES_ADD_GROUND_USERACTIONS(drone_class_name,drone_display_name,drone_magazine_class_name)\
	class ASSEMBLE_##drone_class_name## {\
		displayName = QUOTE(Assemble ##drone_display_name##);\
		priority = 50;\
		radius =  2; \
		position = "interact";\
		showWindow = 0;\
		hideOnUse = 1;\
		onlyForPlayer = 0;\
		shortcut = "";\
		condition = QUOTE([ARR_2(this,'##drone_magazine_class_name##')] call GX_fnc_drone_canPlace);\
		statement = QUOTE([ARR_4(this,'##drone_magazine_class_name##',player,'GROUND')] call GX_fnc_drone_place);\
	}
