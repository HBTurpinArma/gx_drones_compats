class CfgMagazines {
	class GX_DEPLOYABLE_MAGAZINE;
    class GX_DEPLOYABLE_MAGAZINE_Crocus_AT: GX_DEPLOYABLE_MAGAZINE {
        displayName = "Crocus (AT)";
        displayNameShort = "Crocus AT";
        descriptionShort = "Crocus AT";
        descriptionUse = "";
        scope = 2;
        scopeArsenal = 2; 

        picture = "\gx_drones_compats\compat_crocus\Data\UI\inventory_crocus_at_ca.paa";
        model = "\A3\Structures_F_Heli\Items\Luggage\PlasticCase_01_small_F.p3d";
        hiddenSelectionsMaterials[] = {};
        hiddenselectionsTextures[] = {"a3\structures_f_heli\items\luggage\data\plasticcase_01_co.paa"};
        mass = 150;

        //Extra GX Drone Properties
        GX_Drone = "B_Crocus_AT";
        GX_DroneThrowable = 0;
        GX_DronePlaceable = 1;
        GX_DroneHandDeployable = 1;
        GX_DroneRechargeable = 1;
        GX_DroneDefaultDeployMethod = "GROUND";
    };

    class GX_DEPLOYABLE_MAGAZINE_Crocus_AP: GX_DEPLOYABLE_MAGAZINE {
        displayName = "Crocus (AP)";
        displayNameShort = "Crocus AP";
        descriptionShort = "Crocus AP";
        descriptionUse = "";
        scope = 2;
        scopeArsenal = 2; 

        picture = "\gx_drones_compats\compat_crocus\Data\UI\inventory_crocus_ap_ca.paa";
        model = "\A3\Structures_F_Heli\Items\Luggage\PlasticCase_01_small_F.p3d";
        hiddenSelectionsMaterials[] = {};
        hiddenselectionsTextures[] = {"a3\structures_f_heli\items\luggage\data\plasticcase_01_co.paa"};
        mass = 150;

        //Extra GX Drone Properties
        GX_Drone = "B_Crocus_AP";
        GX_DroneThrowable = 0;
        GX_DronePlaceable = 1;
        GX_DroneHandDeployable = 1;
        GX_DroneRechargeable = 1;
        GX_DroneDefaultDeployMethod = "GROUND";
    };
};
