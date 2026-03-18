# GX - Drones Compatibility
This repository demonstrates how to make other mod's drones support our inventory framework for deployment. You may use this as a reference for your own mod's drones, or if you want to make a compatibility patch for an existing mod, you can fork this repository and make a pull request with your patch.

I've tried to make this process a bit easier for modders by providing a clear example of how to make your drones compatible with our framework, and by providing some macros and helper functions in the `include/` folder. There may be changes in the future which remove the need for setting up certain properties or user actions, but for now, this is the process to make your drones compatible.

## Current Mods Supported
- [FPV Drone Crocus](https://steamcommunity.com/sharedfiles/filedetails/?id=3045129955)
- [KVN Fiber-Optic FPV Drone](https://steamcommunity.com/sharedfiles/filedetails/?id=3533734689)
- [Ukraine FPV Drone](https://steamcommunity.com/sharedfiles/filedetails/?id=3475006113)

## How to Make Your Drones Compatible
1. Create a new magazine that extends the `GX_DEPLOYABLE_MAGAZINE` class for your drone item with the required drone properties set:
```cpp
  GX_Drone = "B_UAV_06_F"; // The vehicle classname to spawn (faction gets replaced on deployment)
  GX_DroneThrowable = 0; // Should the drone be throwable? (is it a plane?)
  GX_DronePlaceable = 1; // Should the drone be deployable/placeable on the ground?
  GX_DroneHandDeployable = 1; // Should the drone hand deployable in the air? (Is it a small handheld drone?)
  GX_DroneRechargeable = 1; // Should the drone be rechargeable using batteries
  GX_DroneDefaultDeployMethod = "GROUND"; // Possible options here are GROUND/THROW/AIR, depending on how you want the drone to be deployed by default with ace interactions.
```
2. Create a new vehicle class or modify your existing drone vehicle to include the required user actions for deployment and recharging. You can reference the drone vehicle classes in this repository for examples of how to do this.
There are various macros usable from the `include/` folder to make this easier. 

3. Extend the `CfgVehicles` - `GroundWeaponHolder` class to include the required user actions for assembling the drone when dropped to the floor.