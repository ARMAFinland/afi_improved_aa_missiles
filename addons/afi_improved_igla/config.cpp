class CfgPatches {
	class afi_improved_igla {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"rhs_c_weapons","ace_frag"};
	};
};

class CfgAmmo {
	class ACE_frag_large;
	class ACE_frag_aa_igla: ACE_frag_large {
		hit = 50;
		indirectHit = 50;
		indirectHitRange = 1;
		airFriction = "-0.01*0.5";
		caliber = 3;
		timeToLive = 0.2;
	};
	class ACE_frag_spall_small: ACE_frag_aa_igla {
		timeToLive = 0.1;
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
		hit = 30;
		indirecthit = 15;
		indirecthitrange = 2;
		inittime = 0.25;
		irlock = 1;
		maneuvrability = 6;
		maxspeed = 1100;
		simulationstep = 0.002;
		thrust = 650;
		thrusttime = 2;
		timetolive = 15;
		tracklead = 0.8;
		trackoversteer = 1;
		weaponlocksystem = "16 + 2";
		whistledist = 16;
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
		indirecthitrange = 2;
		inittime = 0.25;
		irlock = 1;
		maneuvrability = 12;
		maxspeed = 1800;
		simulationstep = 0.002;
		thrust = 650;
		thrusttime = 2;
		timetolive = 15;
		tracklead = 1;
		trackoversteer = 1;
		weaponlocksystem = "16 + 2";
		whistledist = 16;
	};
};

class CfgWeapons {
	class rhs_weap_strela;
	class rhs_weap_igla: rhs_weap_strela {
		reloadTime = 1;
		magazineReloadTime = 15;
		canLock = 2;
		lockAcquire = 0;
		weaponLockDelay = 1;
		weaponLockSystem = 8;
	};
};

class CfgMods {
	author = "Johnson";
	authorUrl = "www.armafinland.fi";
};