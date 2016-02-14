class CfgPatches {
	class afi_improved_igla {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"rhs_c_weapons","rhs_c_heavyweapons","A3_Data_F_ParticleEffects","ace_frag","ace_missileguidance","ace_overpressure"};
	};
};

class CfgAmmo {
	class ACE_frag_large;
	class ACE_frag_aa_igla: ACE_frag_large {
		hit = 30;
		indirectHit = 15;
		indirectHitRange = 1;
		airFriction = "-0.01*0.5";
		caliber = 1;
		timeToLive = 0.2;
	};
	class M_Titan_AA;
	class rhs_ammo_9k32: M_Titan_AA {
        ace_frag_enabled = 1;
        ace_frag_metal = 10800;
        ace_frag_charge = 390;
        ace_frag_gurney_c = 2800;
        ace_frag_gurney_k = 1/2;
        ace_frag_classes[] = {"ACE_frag_aa_igla"};
        ace_frag_skip = 0;
        ace_frag_force = 1;
		model = "\rhsafrf\addons\rhs_heavyweapons\igla\igla_fly";
		proxyShape = "\rhsafrf\addons\rhs_heavyweapons\igla\igla_missile";
		airlock = 2;
		cmimmunity = 0.50;
		cost = 750;
		fusedistance = 100;
		hit = 15;
		indirecthit = 15;
		indirecthitrange = 4;
		inittime = 0.25;
		irlock = 1;
		maneuvrability = 6;
		maxspeed = 470;
		simulationstep = 0.002;
		sideairfriction = 0.025;
		thrust = 325;
		thrusttime = 2;
		timetolive = 15;
		tracklead = 0.8;
		trackoversteer = 1;
		weaponlocksystem = "16 + 2";
		whistledist = 16;
		CraterEffects = "AAMissileCrater";
		explosionEffects = "AAMissileExplosion";
		effectsMissile = "Missile6";
		class ace_missileguidance {
			enabled = 1; // Enable missile guidance (0-disabled, 1-enabled)
			minDeflection = 0;  // Minimum flap deflection for guidance
			maxDeflection = 0.0005;  // Maximum flap deflection for guidance
			incDeflection = 0.00005;  // The increment in which deflection adjusts
			canVanillaLock = 0;  // Enable vanilla lock, only applicable to non-cadet modes, 'recruit' always uses vanilla locking (0-disabled, 1-enabled)
			defaultSeekerType = "Thermal";  // Default seeker type
			seekerTypes[] = {"Thermal"};  // Seeker types available
			defaultSeekerLockMode = "LOBL";  // Default seeker lock mode
			seekerLockModes[] = {"LOAL", "LOBL"};  // Seeker lock modes available
			seekerAngle = 90;  // Angle in front of the missile which can be searched
			seekerAccuracy = 1;  // Seeker accuracy multiplier
			seekerMinRange = 1;  // Minimum range from the missile which the seeker can visually search
			seekerMaxRange = 4000;  // Maximum from the missile which the seeker can visually search
			defaultAttackProfile = "AIR";  // Default attack profile
			attackProfiles[] = {"AIR"};  // Attack profiles available
		};
	};
	class rhs_ammo_9k38: rhs_ammo_9k32 {
        ace_frag_enabled = 1;
        ace_frag_metal = 10800;
        ace_frag_charge = 390;
        ace_frag_gurney_c = 2800;
        ace_frag_gurney_k = 1/2;
        ace_frag_classes[] = {"ACE_frag_aa_igla"};
        ace_frag_skip = 0;
        ace_frag_force = 1;
		model = "\rhsafrf\addons\rhs_heavyweapons\igla\igla_fly";
		proxyShape = "\rhsafrf\addons\rhs_heavyweapons\igla\igla_missile";
		airlock = 2;
		cmimmunity = 0.75;
		cost = 750;
		fusedistance = 100;
		hit = 30;
		indirecthit = 15;
		indirecthitrange = 4;
		inittime = 0.25;
		irlock = 1;
		maneuvrability = 10;
		maxspeed = 800;
		simulationstep = 0.002;
		sideairfriction = 0.025;
		thrust = 400;
		thrusttime = 2;
		timetolive = 15;
		tracklead = 1;
		trackoversteer = 1;
		weaponlocksystem = "16 + 2";
		whistledist = 16;
		CraterEffects = "AAMissileCrater";
		explosionEffects = "AAMissileExplosion";
		effectsMissile = "Missile6";
		class ace_missileguidance {
			enabled = 1; // Enable missile guidance (0-disabled, 1-enabled)
			minDeflection = 0;  // Minimum flap deflection for guidance
			maxDeflection = 0.0005;  // Maximum flap deflection for guidance
			incDeflection = 0.00005;  // The increment in which deflection adjusts
			canVanillaLock = 0;  // Enable vanilla lock, only applicable to non-cadet modes, 'recruit' always uses vanilla locking (0-disabled, 1-enabled)
			defaultSeekerType = "Thermal";  // Default seeker type
			seekerTypes[] = {"Thermal"};  // Seeker types available
			defaultSeekerLockMode = "LOBL";  // Default seeker lock mode
			seekerLockModes[] = {"LOAL", "LOBL"};  // Seeker lock modes available
			seekerAngle = 90;  // Angle in front of the missile which can be searched
			seekerAccuracy = 1;  // Seeker accuracy multiplier
			seekerMinRange = 1;  // Minimum range from the missile which the seeker can visually search
			seekerMaxRange = 4000;  // Maximum from the missile which the seeker can visually search
			defaultAttackProfile = "AIR";  // Default attack profile
			attackProfiles[] = {"AIR"};  // Attack profiles available
		};
	};
};

class CfgWeapons {
	class rhs_weap_strela;
	class rhs_weap_igla: rhs_weap_strela {
		canLock = 2;
		lockAcquire = 0;
		weaponLockDelay = 2;
		weaponLockSystem = 2;
		ace_overpressure_angle = 30;  // Cone in which the damage is applied (in degrees from the back end of the launcher)
		ace_overpressure_range = 2;  // Range in meters in which the damage is applied
		ace_overpressure_damage = 0.5;  // Damage multiplier
	};
	class launch_Titan_base;
	class rhs_weap_Igla_twice: launch_Titan_base {
		reloadTime = 0.1;
		autoReload = 0;
		magazineReloadTime = 30;
		canLock = 2;
		lockAcquire = 0;
		weaponLockDelay = 2;
		weaponLockSystem = 2;
	};
};

class CfgVehicles {
	class LandVehicle;
	class StaticWeapon: LandVehicle {
		class Turrets;
		class MainTurret;
	};
	class StaticAAWeapon: StaticWeapon{};
	class rhs_Igla_AA_pod_Base: StaticAAWeapon {
		class Turrets: Turrets {
			class MainTurret: MainTurret {
				magazines[] = {
				"rhs_mag_2Rnd_Igla",
				"rhs_mag_2Rnd_Igla"
				};
			};
		};
	};
};



class CfgMods {
	author = "Johnson";
	authorUrl = "www.armafinland.fi";
};