class CfgPatches {
	class afi_improved_rhs_aa_missiles {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"rhs_c_weapons","rhs_c_heavyweapons", "rhsusf_c_airweapons","RHS_US_A2Port_Armor","rhsusf_c_weapons","rhsusf_c_statics","A3_Data_F_ParticleEffects","A3_Weapons_F","ace_overpressure"};
	};
};

class Turrets;
class MainTurret;

class cfgVehicles {
	class StaticAAWeapon;	
	class rhs_Igla_AA_pod_Base: StaticAAWeapon {
		class Turrets : Turrets {
			class MainTurret : MainTurret {
				class ViewOptics {
					initfov = 0.75;
					maxfov = 1.25;
					minfov = 0.25;
				};
			};
		};
	};
};

class CfgWeapons {
	class rhs_weap_strela;
	class rhs_weap_igla: rhs_weap_strela {
		ace_overpressure_angle = 30;  // Cone in which the damage is applied (in degrees from the back end of the launcher)
		ace_overpressure_range = 2;  // Range in meters in which the damage is applied
		ace_overpressure_damage = 0.5;  // Damage multiplier
		lockedTargetSound[] = {"\x\afi\addons\improved_rhs_aa_missiles\sound\igla_lock.ogg", 1, 1};
		lockingTargetSound[] = {"\x\afi\addons\improved_rhs_aa_missiles\sound\igla_seek.ogg", 1, 1};
		cursor = "";
		weaponLockDelay = 3.9;
		weaponInfoType = "RscWeaponEmpty";
	};
	
	class missiles_titan_static;
	class rhs_weap_Igla_twice: missiles_titan_static {
		lockedTargetSound[] = {"\x\afi\addons\improved_rhs_aa_missiles\sound\igla_lock.ogg", 1, 1};
		lockingTargetSound[] = {"\x\afi\addons\improved_rhs_aa_missiles\sound\igla_seek.ogg", 1, 1};
		cursor = "";
		weaponLockDelay = 3.9;
		weaponInfoType = "RscWeaponEmpty";
	};
	
	class launch_O_Titan_F;
	class rhs_weap_fim92: launch_O_Titan_F{
		ace_overpressure_angle = 30;  // Cone in which the damage is applied (in degrees from the back end of the launcher)
		ace_overpressure_range = 2;  // Range in meters in which the damage is applied
		ace_overpressure_damage = 0.5;  // Damage multiplier
		lockedTargetSound[] = {"\x\afi\addons\improved_rhs_aa_missiles\sound\stinger_lock.ogg", 1, 1};
		lockingTargetSound[] = {"\x\afi\addons\improved_rhs_aa_missiles\sound\stinger_seek.ogg", 1, 1};
		cursor = "";
		weaponLockDelay = 4;
		weaponInfoType = "RscWeaponEmpty";
	};
	
	class rhs_weap_TOW_Launcher;
	class rhs_weap_stinger_Launcher : Rhs_weap_TOW_Launcher {
		lockedTargetSound[] = {"\x\afi\addons\improved_rhs_aa_missiles\sound\stinger_lock.ogg", 1, 1};
		lockingTargetSound[] = {"\x\afi\addons\improved_rhs_aa_missiles\sound\stinger_seek.ogg", 1, 1};
		cursor = "";
		weaponLockDelay = 4;
		weaponInfoType = "RscWeaponEmpty";
	};
	
	class Rhs_weap_stinger_Launcher_static : rhs_weap_stinger_Launcher {
	};
};

class CfgAmmo {
	class M_Titan_AA;	
	class afi_ammo_fim92_missile: M_Titan_AA {
		hit = 40;
		indirectHit = 60;
		indirectHitRange = 8;
		cmImmunity = 0.80;
		model = "\rhsusf\addons\rhsusf_weapons\FIM92\Stinger_Rocket";
		tracklead = 1;
		trackoversteer = 1;
		thrust = 325;
		thrustTime = 4.9;
		timeToLive = 15;
		maxSpeed = 750;
		effectsMissile = "afi_stinger_effect";
		effectsMissileInit = "RocketBackEffectsRPG";
	};
	
	class afi_ammo_9k32_missile: afi_ammo_fim92_missile {
	};
};

class CfgMagazines {
	class Titan_AA;
	class rhs_fim92_mag: Titan_AA {
		ammo = "afi_ammo_fim92_missile";
	};
	
	class VehicleMagazine;
	class rhs_mag_4Rnd_stinger: VehicleMagazine {
		ammo = "afi_ammo_fim92_missile";
	};
	
	class rhs_mag_2Rnd_stinger: rhs_mag_4Rnd_stinger {
		// ammo = "afi_ammo_fim92_missile";
	};
	
	class rhs_mag_9k32_rocket;
	class rhs_mag_9k38_rocket: rhs_mag_9k32_rocket {
		ammo = "afi_ammo_9k32_missile";
	};
	
	class rhs_mag_2Rnd_Igla: Titan_AA {
		ammo = "afi_ammo_9k32_missile";
	};
};

class CfgCloudlets {
	class Default;
	class afi_stinger_effect: Default {
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

class afi_stinger_effect {
	class Light1 {
		simulation = "light";
		type = "RocketLight";
		position[] = {0,0,0};
		intensity = 0.1;
		interval = 1;
		lifeTime = 1;
	};
	
	class afi_stinger_effect {
		simulation = "particles";
		type = "afi_stinger_effect";
	};
};

class CfgInGameUI
{
	class Cursor
	{
		class Targeting
		{
			// class MarkedTarget
			// {
				// scale = 0;
				// texture = "\A3\ui_f\data\igui\cfg\targeting\Empty_ca.paa";
			// };
			// class MarkedTargetNoLos: MarkedTarget {
				// scale = 0;
				// texture = "\A3\ui_f\data\igui\cfg\targeting\Empty_ca.paa";
			// };
			
			// class MarkedTargetNoLosRemote: MarkedTarget {
				// scale = 0;
				// texture = "\A3\ui_f\data\igui\cfg\targeting\Empty_ca.paa";
			// };
			
			class Seeker {
				scale = 0;
				texture = "\A3\ui_f\data\igui\cfg\targeting\Empty_ca.paa";
			};
			
			class SeekerLocked: Seeker {
				scale = 0;
				texture = "\A3\ui_f\data\igui\cfg\targeting\Empty_ca.paa";
			};
			
			class SeekerNoLos: Seeker {
				scale = 0;
				texture = "\A3\ui_f\data\igui\cfg\targeting\Empty_ca.paa";
			};
		};
	};
};