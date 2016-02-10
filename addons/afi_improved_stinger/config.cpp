class CfgPatches {
	class afi_improved_stinger {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"rhsusf_c_airweapons","RHS_US_A2Port_Armor","rhsusf_c_weapons","ace_frag"};
	};
};

class CfgAmmo {
	class ACE_frag_large;
	class ACE_frag_aa_stinger: ACE_frag_large {
		hit = 50;
		indirectHit = 50;
		indirectHitRange = 1;
		airFriction = "-0.01*0.5";
		caliber = 3;
		timeToLive = 0.2;
	};
	class ACE_frag_spall_small: ACE_frag_aa_stinger {
		timeToLive = 0.1;
	};
	class M_Titan_AA;
	class rhs_ammo_Stinger_AA: M_Titan_AA {
        ace_frag_enabled = 1;
        ace_frag_metal = 10100;
        ace_frag_charge = 250;
        ace_frag_gurney_c = 2800;
        ace_frag_gurney_k = 3/5;
        ace_frag_classes[] = {"ACE_frag_aa_stinger"};
        ace_frag_skip = 0;
        ace_frag_force = 1;
		model = "\rhsusf\addons\rhsusf_weapons\FIM92\Stinger_Rocket";
		airlock = 2;
		cmimmunity = 0.75;
		fuseDistance = 200;
		hit = 30;
		indirecthit = 30;
		indirecthitrange = 2;
		inittime = 0.5;
		irlock = 1;
		maneuvrability = 10;
		maxspeed = 1700;
		sideairfriction = 0.025;
		simulationstep = 0.002;
		thrust = 700;
		thrusttime = 4;
		timetolive = 15;
		tracklead = 1;
		trackoversteer = 1;
		weaponlocksystem = "16 + 2";
	};
	class rhsammo_fim92_missile: M_Titan_AA {
        ace_frag_enabled = 1;
        ace_frag_metal = 10100;
        ace_frag_charge = 250;
        ace_frag_gurney_c = 2800;
        ace_frag_gurney_k = 3/5;
        ace_frag_classes[] = {"ACE_frag_aa_stinger"};
        ace_frag_skip = 0;
        ace_frag_force = 1;
		model = "\rhsusf\addons\rhsusf_weapons\FIM92\Stinger_Rocket";
		hit = 30;
		indirectHit = 30;
		indirectHitRange = 2;
		maneuvrability = 10;
		simulationStep = 0.002;
		trackOversteer = 1;
		trackLead = 1;
		airLock = 2;
		irLock = 1;
		cost = 1000;
		timeToLive = 15;
		sideAirFriction = 0.25;
		maxSpeed = 1700;
		initTime = 0.5;
		thrustTime = 4;
		thrust = 700;
		fuseDistance = 100;
		CraterEffects = "AAMissileCrater";
		explosionEffects = "AAMissileExplosion";
		effectsMissile = "missile3";
		whistleDist = 16;
	};
};

class CfgWeapons {
	class Rhs_weap_TOW_Launcher;
	class Rhs_weap_stinger_Launcher: Rhs_weap_TOW_Launcher {
		reloadTime = 1;
		magazineReloadTime = 15;
		canLock = 2;
		lockAcquire = 0;
		weaponLockDelay = 1;
		weaponLockSystem = 8;
	};
	class launch_O_Titan_F;
	class rhs_weap_fim92: launch_O_Titan_F {
		reloadTime = 1;
		magazineReloadTime = 15;
		canLock = 2;
		lockAcquire = 0;
		weaponLockDelay = 1;
		weaponLockSystem = 8;
	};
};

class CfgVehicles {
	class LandVehicle;
	class Tank: LandVehicle {
		class NewTurret;
	};
	class Tank_F: Tank {
		class Turrets {
			class MainTurret: NewTurret {
				class Turrets;
			};
		};
	};
	class APC_Tracked_03_base_F: Tank_F {};
	class RHS_M2A2_Base: APC_Tracked_03_base_F {};
	class RHS_M6: RHS_M2A2_Base {
		class Turrets: Turrets {
			class MainTurret: MainTurret {
				weapons[] = {"RHS_weap_M242BC","rhs_weap_m240veh","Rhs_weap_stinger_Launcher"};
				magazines[] = {
				"rhs_mag_1100Rnd_762x51_M240",
				"rhs_mag_1100Rnd_762x51_M240",
				"Rhs_mag_4Rnd_stinger",
				"rhs_mag_70Rnd_25mm_M242_APFSDS",
				"rhs_mag_230Rnd_25mm_M242_HEI",
				"rhs_mag_70Rnd_25mm_M242_APFSDS",
				"rhs_mag_230Rnd_25mm_M242_HEI"};
			};
		};
	};
};

class CfgMods {
	author = "Johnson";
	authorUrl = "www.armafinland.fi";
};