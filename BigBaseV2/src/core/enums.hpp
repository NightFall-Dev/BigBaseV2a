#pragma once

namespace big
{
	enum class eBoostBehaviors
	{
		DEFAULT,
		INSTANT_REFIL,
		INFINITE_BOOST
	};

	enum class CustomWeapon
	{
		NONE,
		CAGE_GUN,
		DELETE_GUN,
		GRAVITY_GUN,
		STEAL_VEHICLE_GUN,
		REPAIR_GUN,
		VEHICLE_GUN
	};

	enum class ContextEntityType : uint8_t
	{
		NONE = 0,
		PED = 1 << 0,
		PLAYER = 1 << 1,
		VEHICLE = 1 << 2,
		OBJECT = 1 << 3,
		SHARED = 1 << 4
	};

	enum class eEntityType
	{
		UNK_0,
		UNK_1,
		UNK_2,
		UNK_3,
		UNK_4,
		VEHICLE,
		PED,
	};

	enum class eTransitionState
	{
		TRANSITION_STATE_EMPTY,
		TRANSITION_STATE_SP_SWOOP_UP,
		TRANSITION_STATE_MP_SWOOP_UP,
		TRANSITION_STATE_CREATOR_SWOOP_UP,
		TRANSITION_STATE_PRE_HUD_CHECKS,
		TRANSITION_STATE_WAIT_HUD_EXIT,
		TRANSITION_STATE_WAIT_FOR_SUMMON,
		TRANSITION_STATE_SP_SWOOP_DOWN,
		TRANSITION_STATE_MP_SWOOP_DOWN,
		TRANSITION_STATE_CANCEL_JOINING,
		TRANSITION_STATE_RETRY_LOADING,
		TRANSITION_STATE_RETRY_LOADING_SLOT_1,
		TRANSITION_STATE_RETRY_LOADING_SLOT_2,
		TRANSITION_STATE_RETRY_LOADING_SLOT_3,
		TRANSITION_STATE_RETRY_LOADING_SLOT_4,
		TRANSITION_STATE_WAIT_ON_INVITE,
		TRANSITION_STATE_PREJOINING_FM_SESSION_CHECKS,
		TRANSITION_STATE_LOOK_FOR_FRESH_JOIN_FM,
		TRANSITION_STATE_LOOK_TO_JOIN_ANOTHER_SESSION_FM,
		TRANSITION_STATE_CONFIRM_FM_SESSION_JOINING,
		TRANSITION_STATE_WAIT_JOIN_FM_SESSION,
		TRANSITION_STATE_CREATION_ENTER_SESSION,
		TRANSITION_STATE_PRE_FM_LAUNCH_SCRIPT,
		TRANSITION_STATE_FM_TEAMFULL_CHECK,
		TRANSITION_STATE_START_FM_LAUNCH_SCRIPT,
		TRANSITION_STATE_FM_TRANSITION_CREATE_PLAYER,
		TRANSITION_STATE_IS_FM_AND_TRANSITION_READY,
		TRANSITION_STATE_FM_SWOOP_DOWN,
		TRANSITION_STATE_POST_BINK_VIDEO_WARP,
		TRANSITION_STATE_FM_FINAL_SETUP_PLAYER,
		TRANSITION_STATE_MOVE_FM_TO_RUNNING_STATE,
		TRANSITION_STATE_FM_HOW_TO_TERMINATE,
		TRANSITION_STATE_START_CREATOR_PRE_LAUNCH_SCRIPT_CHECK,
		TRANSITION_STATE_START_CREATOR_LAUNCH_SCRIPT,
		TRANSITION_STATE_CREATOR_TRANSITION_CREATE_PLAYER,
		TRANSITION_STATE_IS_CREATOR_AND_TRANSITION_READY,
		TRANSITION_STATE_CREATOR_SWOOP_DOWN,
		TRANSITION_STATE_CREATOR_FINAL_SETUP_PLAYER,
		TRANSITION_STATE_MOVE_CREATOR_TO_RUNNING_STATE,
		TRANSITION_STATE_PREJOINING_TESTBED_SESSION_CHECKS,
		TRANSITION_STATE_LOOK_FOR_FRESH_JOIN_TESTBED,
		TRANSITION_STATE_LOOK_FOR_FRESH_HOST_TESTBED,
		TRANSITION_STATE_LOOK_TO_JOIN_ANOTHER_SESSION_TESTBED,
		TRANSITION_STATE_LOOK_TO_HOST_SESSION_TESTBED,
		TRANSITION_STATE_CONFIRM_TESTBED_SESSION_JOINING,
		TRANSITION_STATE_WAIT_JOIN_TESTBED_SESSION,
		TRANSITION_STATE_START_TESTBED_LAUNCH_SCRIPT,
		TRANSITION_STATE_TESTBED_TRANSITION_CREATE_PLAYER,
		TRANSITION_STATE_IS_TESTBED_AND_TRANSITION_READY,
		TRANSITION_STATE_TESTBED_SWOOP_DOWN,
		TRANSITION_STATE_TESTBED_FINAL_SETUP_PLAYER,
		TRANSITION_STATE_MOVE_TESTBED_TO_RUNNING_STATE,
		TRANSITION_STATE_TESTBED_HOW_TO_TERMINATE,
		TRANSITION_STATE_QUIT_CURRENT_SESSION_PROMPT,
		TRANSITION_STATE_WAIT_FOR_TRANSITION_SESSION_TO_SETUP,
		TRANSITION_STATE_TERMINATE_SP,
		TRANSITION_STATE_WAIT_TERMINATE_SP,
		TRANSITION_STATE_KICK_TERMINATE_SESSION,
		TRANSITION_STATE_TERMINATE_SESSION,
		TRANSITION_STATE_WAIT_TERMINATE_SESSION,
		TRANSITION_STATE_TERMINATE_SESSION_AND_HOLD,
		TRANSITION_STATE_TERMINATE_SESSION_AND_MOVE_INTO_HOLDING_STATE,
		TRANSITION_STATE_TEAM_SWAPPING_CHECKS,
		TRANSITION_STATE_RETURN_TO_SINGLEPLAYER,
		TRANSITION_STATE_WAIT_FOR_SINGLEPLAYER_TO_START,
		TRANSITION_STATE_WAITING_FOR_EXTERNAL_TERMINATION_CALL,
		TRANSITION_STATE_TERMINATE_MAINTRANSITION,
		TRANSITION_STATE_WAIT_FOR_DIRTY_LOAD_CONFIRM,
		TRANSITION_STATE_DLC_INTRO_BINK
	};

	enum eVehicleFlags
	{
		TRIGGER_SPAWN_TOGGLE = 1 << 0,
		DESTROYED = 1 << 1,
		HAS_INSURANCE = 1 << 2,
		UNK0 = 1 << 3,
		IMPOUNDED = 1 << 6,
		UNK1 = 1 << 10,
		SPAWN_AT_MORS_MUTUAL = 1 << 11,
		UNK2 = 1 << 16
	};

    enum class ePedTask
    {
        TASK_NONE,
        TASK_FOOT = 1 << 4,
        TASK_UNK = 1 << 5,
        TASK_DRIVING = 1 << 6
    };
	
	enum class eRemoteEvent
	{
		Bounty = 1294995624, // (137, "FM_TXT_BNTY0", iVar1, PLAYER::GET_PLAYER_NAME(Var2.f_1), "", 5000, Var2.f_6);
		CeoBan = 1240068495, // mpply_vipgameplaydisabledtimer
		CeoKick = -1425016400, // BGDISMISSED
		CeoMoney = 547083265, // Goon_Paid_Large
		ClearWantedLevel = 1449852136,
		FakeDeposit = -1529596656, // TICK_ATTVAN
		ForceMission = -283041276, // ), Var0.f_2, 1))
		ForceMission2 = -1908874529,
		GtaBanner = 145637109, // NETWORK::NETWORK_IS_SCRIPT_ACTIVE("BUSINESS_BATTLES", -1, true, 0) second one
		NetworkBail = 1674887089, // NETWORK::NETWORK_BAIL(16, 0, 0); xref func
		PersonalVehicleDestroyed = -1838276770, // PLYVEH_INS_DES1
		RemoteOffradar = -1973627888, // NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Var0.f_2)
		RotateCam = -1388926377, // CnCTG_IN_BF
		SendToCutscene = 2131601101, // (bVar3, bVar4, 125f, 1)
		SendToCayoPerico = 1361475530, // CELL_HI_INV
		SendToLocation = 1214823473, // &Var222, 11);
		SHKick = 1037001637,
		SoundSpam = 1111927333, // CELL_APTINVYACHT
		Spectate = -2131157870, // SPEC_TCK1
		Teleport = -1390976345, // Mission_Pass_Notify
		TransactionError = -768108950, // NETWORK_RECEIVE_PLAYER_JOBSHARE_CASH
		VehicleKick = -714268990, // PIM_RFMOC
		Kick = 1674887089,
		GiveCollectible = -1178972880, // DLC_SUM20_HIDDEN_COLLECTIBLES xref
		ChangeMCRole = 656530441, // _PLAYSTATS_CHANGE_MC_ROLE
		DisableRecording = 867047895, // GET_FINAL_RENDERED_CAM_COORD
		MCTeleport = -555356783, // NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(PLAYER::PLAYER_ID()) == (first one)

		Crash = -1386010354, // SET_NO_LOADING_SCREEN, xref it
		Crash2 = 1348481963,
	};

	enum class eSessionType
	{
		JOIN_PUBLIC,
		NEW_PUBLIC,
		CLOSED_CREW,
		CREW,
		CLOSED_FRIENDS = 6,
		FIND_FRIEND = 9,
		SOLO,
		INVITE_ONLY,
		JOIN_CREW,
		SC_TV,
		LEAVE_ONLINE = -1
	};

	enum class SpeedUnit
	{
		KMPH,
		MIPH,
		MPS
	};

	enum class RainbowPaintType
	{
		Off,
		Fade,
		Spasm
	};

	enum class AutoDriveDestination
	{
		STOPPED,
		OBJECTITVE,
		WAYPOINT,
		WANDER,
		EMERGENCY_STOP
	};

	enum class AutoDriveStyle
	{
		LAW_ABIDING,
		THE_ROAD_IS_YOURS
	};

	enum class eEntityProofs : uint32_t
	{
		BULLET     = 1 << 4,
		FIRE       = 1 << 5,
		COLLISION  = 1 << 6,
		MELEE      = 1 << 7,
		GOD        = 1 << 8,
		EXPLOSION  = 1 << 11,
		STEAM      = 1 << 15,
		DROWN      = 1 << 16,
		WATER      = 1 << 24,
	};
	enum ePedType : uint32_t
	{
		PED_TYPE_PLAYER_0,
		PED_TYPE_PLAYER_1,
		PED_TYPE_NETWORK_PLAYER,
		PED_TYPE_PLAYER_2,
		PED_TYPE_CIVMALE,
		PED_TYPE_CIVFEMALE,
		PED_TYPE_COP,
		PED_TYPE_GANG_ALBANIAN,
		PED_TYPE_GANG_BIKER_1,
		PED_TYPE_GANG_BIKER_2,
		PED_TYPE_GANG_ITALIAN,
		PED_TYPE_GANG_RUSSIAN,
		PED_TYPE_GANG_RUSSIAN_2,
		PED_TYPE_GANG_IRISH,
		PED_TYPE_GANG_JAMAICAN,
		PED_TYPE_GANG_AFRICAN_AMERICAN,
		PED_TYPE_GANG_KOREAN,
		PED_TYPE_GANG_CHINESE_JAPANESE,
		PED_TYPE_GANG_PUERTO_RICAN,
		PED_TYPE_DEALER,
		PED_TYPE_MEDIC,
		PED_TYPE_FIREMAN,
		PED_TYPE_CRIMINAL,
		PED_TYPE_BUM,
		PED_TYPE_PROSTITUTE,
		PED_TYPE_SPECIAL,
		PED_TYPE_MISSION,
		PED_TYPE_SWAT,
		PED_TYPE_ANIMAL,
		PED_TYPE_ARMY
	};
}
