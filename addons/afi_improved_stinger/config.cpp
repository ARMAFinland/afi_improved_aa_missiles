class CfgPatches {
	class afi_improved_stinger {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"rhsusf_c_airweapons","RHS_US_A2Port_Armor","rhsusf_c_weapons","rhsusf_c_statics","A3_Data_F_ParticleEffects","A3_Weapons_F","ace_overpressure"};
	};
};

class CfgAmmo {
	class M_Titan_AA;
	class rhs_ammo_Stinger_AA: M_Titan_AA {
		model = "\rhsusf\addons\rhsusf_weapons\FIM92\Stinger_Rocket";
		airlock = 2;
		lockType = 0;
		cmimmunity = 0.75;
		fuseDistance = 200;
		// hit = 1;
		// indirecthit = 20;
		// indirecthitrange = 5;
		inittime = 0.25;
		irlock = 1;
		maneuvrability = 6;
		maxspeed = 750;
		sideairfriction = 0.025;
		simulationstep = 0.002;
		thrust = 375;
		thrusttime = 4;
		timetolive = 15;
		tracklead = 1;
		trackoversteer = 1;
		weaponlocksystem = "2";
		CraterEffects = "AAMissileCrater";
		explosionEffects = "AAMissileExplosion";
		effectsMissile = "Missile6";
		whistleDist = 16;
		manualControl = 0;
	};
	class rhsammo_fim92_missile: M_Titan_AA {
		model = "\rhsusf\addons\rhsusf_weapons\FIM92\Stinger_Rocket";
		airlock = 2;
		lockType = 0;
		cmimmunity = 0.75;
		fuseDistance = 200;
		// hit = 1;
		// indirecthit = 20;
		// indirecthitrange = 5;
		inittime = 0.25;
		irlock = 1;
		maneuvrability = 6;
		maxspeed = 750;
		sideairfriction = 0.025;
		simulationstep = 0.002;
		thrust = 375;
		thrusttime = 4;
		timetolive = 15;
		tracklead = 1;
		trackoversteer = 1;
		weaponlocksystem = "2";
		CraterEffects = "AAMissileCrater";
		explosionEffects = "AAMissileExplosion";
		effectsMissile = "Missile6";
		whistleDist = 16;
		manualControl = 0;
	};
};

class CfgMagazines {
	class Titan_AA;
	class rhs_fim92_mag: Titan_AA {
		displayName = "FIM-92F";
		descriptionshort = "Type: Surface-to-air<br />Caliber: 70 mm<br />Used in: FIM-92";
		ammo = "rhsammo_fim92_missile";
		type = "6 * 256";
		picture = "\rhsusf\addons\rhsusf_weapons\icons\m_stinger_ca.paa";
		model = "\rhsusf\addons\rhsusf_weapons\FIM92\Stinger_proxy";
		initSpeed = 10;
		maxLeadSpeed = 320;
	};
};
	class VehicleMagazine;
	class Rhs_mag_4Rnd_stinger: VehicleMagazine {
		scope = 2;
		ammo = "rhs_ammo_Stinger_AA";
		displayname = "FIM-92F Stinger";
		displaynameshort = "FIM-92F";
		initspeed = 10;
		maxLeadSpeed = 850;
		nameSound = "missiles";
		count = 4;
	};

class CfgWeapons {
	class Rhs_weap_TOW_Launcher;
	class Rhs_weap_stinger_Launcher: Rhs_weap_TOW_Launcher {
		reloadTime = 0.1;
		magazineReloadTime = 30;
		autoReload = 0;
		canLock = 2;
		weaponLockDelay = 1;
		weaponLockSystem = 0 + 2;
	};
	class Rhs_weap_stinger_Launcher_static: Rhs_weap_stinger_Launcher {
		autoReload = 0;
	};
	class launch_O_Titan_F;
	class rhs_weap_fim92: launch_O_Titan_F {
		canLock = 2;
		weaponLockDelay = 1;
		weaponLockSystem = 0 + 2;
		ace_overpressure_angle = 30;  // Cone in which the damage is applied (in degrees from the back end of the launcher)
		ace_overpressure_range = 2;  // Range in meters in which the damage is applied
		ace_overpressure_damage = 0.5;  // Damage multiplier
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
				weapons[] = {
				"RHS_weap_M242BC",
				"rhs_weap_m240veh",
				"Rhs_weap_stinger_Launcher"
				};
				magazines[] = {
				"rhs_mag_1100Rnd_762x51_M240",
				"rhs_mag_1100Rnd_762x51_M240",
				"Rhs_mag_4Rnd_stinger",
				"rhs_mag_70Rnd_25mm_M242_APFSDS",
				"rhs_mag_230Rnd_25mm_M242_HEI",
				"rhs_mag_70Rnd_25mm_M242_APFSDS",
				"rhs_mag_230Rnd_25mm_M242_HEI"
				};
			};
		};
	};
	class StaticWeapon: LandVehicle {
		class Turrets;
		class MainTurret;
	};
	class StaticAAWeapon: StaticWeapon{};
	class RHS_Stinger_AA_pod_Base: StaticAAWeapon {
		class Turrets: Turrets {
			class MainTurret: MainTurret {
				magazines[] = {
				"Rhs_mag_2Rnd_stinger",
				"Rhs_mag_2Rnd_stinger"
				};
			};
		};
	};
};

class CfgCloudlets {
	class Default;
	class Missile6: Default {
		interval = "0.00025";
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		angleVar = 1;
		particleFSLoop = 0;
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 12;
		particleFSFrameCount = 8;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 15;
		moveVelocity[] = {0,0,0};
		rotationVelocity = 1;
		weight = 2.225;
		volume = 1.75;
		rubbing = 0.05;
		size[] = {1,3};
		color[] = {{ 0.5,0.5,0.5,0.75},{ 0.75,0.75,0.75,0.5 },{ 1,1,1,0 }};
		animationSpeed[] = {1};
		randomDirectionPeriod = 0.005;
		randomDirectionIntensity = 0.005;
		onTimerScript = "";
		beforeDestroyScript = "";
		blockAIVisibility = 0;
		lifeTimeVar = 5;
		positionVar[] = {0.25,0.25,0.25};
		MoveVelocityVar[] = {0.005,0.005,0.005};
		MoveVelocityVarConst[] = {0.05,0.05,0.05};
		rotationVelocityVar = 5;
		sizeVar = 1;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
		destroyOnWaterSurface = 1;
		destroyOnWaterSurfaceOffset = -0.1;
		onSurface = 1;
		surfaceOffset = 0.1;
		bounceOnSurface = 0.1;
		bounceOnSurfaceVar = 0.1;
	};
};

class Missile6 {
	class Light1 {
		simulation = "light";
		type = "RocketLight";
		position[] = {0,0,0};
		intensity = 0.1;
		interval = 1;
		lifeTime = 1;
	};
	class Missile6 {
		simulation = "particles";
		type = "Missile6";
	};
};

class CfgMods {
	author = "Johnson";
	authorUrl = "www.armafinland.fi";
};