#pragma once

// Name: Shenmue3SDK, Version: 1.4.1

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum Shenmue3.ES3DayTimeEvent
enum class ES3DayTimeEvent : uint8_t
{
	ES3DayTimeEvent__MidNight      = 0,
	ES3DayTimeEvent__Morning       = 1,
	ES3DayTimeEvent__WorkStart     = 2,
	ES3DayTimeEvent__MidDay        = 3,
	ES3DayTimeEvent__Evening       = 4,
	ES3DayTimeEvent__Night         = 5,
	ES3DayTimeEvent__Retiring      = 6,
	ES3DayTimeEvent__ES3DayTimeEvent_MAX = 7
};


// Enum Shenmue3.ES3ShopTimeEvent
enum class ES3ShopTimeEvent : uint8_t
{
	ES3ShopTimeEvent__Boot         = 0,
	ES3ShopTimeEvent__Open         = 1,
	ES3ShopTimeEvent__Close        = 2,
	ES3ShopTimeEvent__Down         = 3,
	ES3ShopTimeEvent__ES3ShopTimeEvent_MAX = 4
};


// Enum Shenmue3.ES3MiniGameCategory
enum class ES3MiniGameCategory : uint8_t
{
	ES3MiniGameCategory__None      = 0,
	ES3MiniGameCategory__SmartBall = 1,
	ES3MiniGameCategory__Gacha     = 2,
	ES3MiniGameCategory__ChopWood  = 3,
	ES3MiniGameCategory__StoneThrowing = 4,
	ES3MiniGameCategory__Quoits    = 5,
	ES3MiniGameCategory__Otoshidama = 6,
	ES3MiniGameCategory__Kachofugetsu = 7,
	ES3MiniGameCategory__MiniAnimalRace = 8,
	ES3MiniGameCategory__UE_de_Yattari = 9,
	ES3MiniGameCategory__QTETitle2 = 10,
	ES3MiniGameCategory__ExciteQTE3 = 11,
	ES3MiniGameCategory__WhackMole = 12,
	ES3MiniGameCategory__CupMagic  = 13,
	ES3MiniGameCategory__ChickenCatch = 14,
	ES3MiniGameCategory__Fishing   = 15,
	ES3MiniGameCategory__Forklift  = 16,
	ES3MiniGameCategory__ForkliftRC = 17,
	ES3MiniGameCategory__HighwayStar = 18,
	ES3MiniGameCategory__ShinkeiSuijaku = 19,
	ES3MiniGameCategory__Maho      = 20,
	ES3MiniGameCategory__Keiho     = 21,
	ES3MiniGameCategory__Sunken    = 22,
	ES3MiniGameCategory__Battle    = 23,
	ES3MiniGameCategory__UnattendedSales = 24,
	ES3MiniGameCategory__ChobuChanBattle = 25,
	ES3MiniGameCategory__BigWheel  = 26,
	ES3MiniGameCategory__ChawanJin = 27,
	ES3MiniGameCategory__MAX       = 28
};


// Enum Shenmue3.ES3PlayerBehavior
enum class ES3PlayerBehavior : uint8_t
{
	ES3PlayerBehavior__None        = 0,
	ES3PlayerBehavior__FreeRun     = 1,
	ES3PlayerBehavior__Battle      = 2,
	ES3PlayerBehavior__Event       = 3,
	ES3PlayerBehavior__MiniGame    = 4,
	ES3PlayerBehavior__Cutscene    = 5,
	ES3PlayerBehavior__Search      = 6,
	ES3PlayerBehavior__Talk        = 7,
	ES3PlayerBehavior__MenuWindow  = 8,
	ES3PlayerBehavior__Memo        = 9,
	ES3PlayerBehavior__Help        = 10,
	ES3PlayerBehavior__Door        = 11,
	ES3PlayerBehavior__Dialog      = 12,
	ES3PlayerBehavior__Jump        = 13,
	ES3PlayerBehavior__Bed         = 14,
	ES3PlayerBehavior__Eyecatch    = 15,
	ES3PlayerBehavior__MainFlow    = 16,
	ES3PlayerBehavior__ES3PlayerBehavior_MAX = 17
};


// Enum Shenmue3.ES3SoundVolume
enum class ES3SoundVolume : uint8_t
{
	ES3SoundVolume__BGM            = 0,
	ES3SoundVolume__SE             = 1,
	ES3SoundVolume__Voice          = 2,
	ES3SoundVolume__ES3SoundVolume_MAX = 3
};


// Enum Shenmue3.EJoinActorChangeEvent
enum class EJoinActorChangeEvent : uint8_t
{
	EJoinActorChangeEvent__Set     = 0,
	EJoinActorChangeEvent__Clear   = 1,
	EJoinActorChangeEvent__Add     = 2,
	EJoinActorChangeEvent__Remove  = 3,
	EJoinActorChangeEvent__EJoinActorChangeEvent_MAX = 4
};


// Enum Shenmue3.EComparisonKind
enum class EComparisonKind : uint8_t
{
	LessThan                       = 0,
	LessThanOrEqualTo              = 1,
	GreaterThan                    = 2,
	GreaterThanOrEqualTo           = 3,
	EqualTo                        = 4,
	NotEqualTo                     = 5,
	And                            = 6,
	Or                             = 7,
	EComparisonKind_MAX            = 8
};


// Enum Shenmue3.EHintTarget
enum class EHintTarget : uint8_t
{
	EHintTarget__Item              = 0,
	EHintTarget__Person            = 1,
	EHintTarget__Place             = 2,
	EHintTarget__None              = 3,
	EHintTarget__EHintTarget_MAX   = 4
};


// Enum Shenmue3.ES3AchievementCountType
enum class ES3AchievementCountType : uint8_t
{
	ES3AchievementCountType__Shopping = 0,
	ES3AchievementCountType__Fishing = 1,
	ES3AchievementCountType__WoodChop = 2,
	ES3AchievementCountType__MAX   = 3
};


// Enum Shenmue3.ES3AchievementType
enum class ES3AchievementType : uint8_t
{
	ES3AchievementType__crude_drug_hakkason = 0,
	ES3AchievementType__crude_drug_chobu = 1,
	ES3AchievementType__crude_drug_all = 2,
	ES3AchievementType__fishing_hakkason = 3,
	ES3AchievementType__fishing_chobu = 4,
	ES3AchievementType__fishing_all = 5,
	ES3AchievementType__catch_fishing = 6,
	ES3AchievementType__money1     = 7,
	ES3AchievementType__money2     = 8,
	ES3AchievementType__money3     = 9,
	ES3AchievementType__bet_money1 = 10,
	ES3AchievementType__bet_money2 = 11,
	ES3AchievementType__bet_money3 = 12,
	ES3AchievementType__shopping1  = 13,
	ES3AchievementType__shopping2  = 14,
	ES3AchievementType__shopping3  = 15,
	ES3AchievementType__gacha1     = 16,
	ES3AchievementType__gacha2     = 17,
	ES3AchievementType__gacha3     = 18,
	ES3AchievementType__clear_hakkason = 19,
	ES3AchievementType__clear_chobu = 20,
	ES3AchievementType__subquest   = 21,
	ES3AchievementType__hide_and_seek = 22,
	ES3AchievementType__bell_tower = 23,
	ES3AchievementType__butoku1    = 24,
	ES3AchievementType__butoku2    = 25,
	ES3AchievementType__butoku3    = 26,
	ES3AchievementType__butoku4    = 27,
	ES3AchievementType__kojo       = 28,
	ES3AchievementType__meet_ren   = 29,
	ES3AchievementType__hanabashi  = 30,
	ES3AchievementType__vip        = 31,
	ES3AchievementType__skill_complete = 32,
	ES3AchievementType__street_fight = 33,
	ES3AchievementType__minigame_highscore = 34,
	ES3AchievementType__woodchop   = 35,
	ES3AchievementType__complete   = 36,
	ES3AchievementType__DLCSQ_reunion_zhang = 37,
	ES3AchievementType__DLCSQ_disappear_zhang = 38,
	ES3AchievementType__DLCSQ_blue_spiders = 39,
	ES3AchievementType__DLCSQ_save_zhang = 40,
	ES3AchievementType__DLCSQ_chawan_all = 41,
	ES3AchievementType__DLCSQ_chawan_hours = 42,
	ES3AchievementType__DLCSQ_snake_power = 43,
	ES3AchievementType__DLCSQ_raw_oyster = 44,
	ES3AchievementType__DLCSQ_crab_shaomai = 45,
	ES3AchievementType__DLCSQ_peking_duck = 46,
	ES3AchievementType__DLCSQ_canned_corn = 47,
	ES3AchievementType__DLCSQ_monk_maniac = 48,
	ES3AchievementType__DLCCS_flower_bird = 49,
	ES3AchievementType__DLCCS_roll_it = 50,
	ES3AchievementType__DLCCS_lucky_hit = 51,
	ES3AchievementType__DLCCS_frog_race = 52,
	ES3AchievementType__DLCCS_turtle_race = 53,
	ES3AchievementType__DLCCS_lost_kids = 54,
	ES3AchievementType__DLCCS_star_girl = 55,
	ES3AchievementType__DLCCS_collect_cloth = 56,
	ES3AchievementType__DLCBR_short_course = 57,
	ES3AchievementType__DLCBR_middle_course = 58,
	ES3AchievementType__DLCBR_long_course = 59,
	ES3AchievementType__DLCBR_all_course = 60,
	ES3AchievementType__DLCBR_bailu_chan1 = 61,
	ES3AchievementType__DLCBR_bailu_chan2 = 62,
	ES3AchievementType__DLCBR_bailu_chan3 = 63,
	ES3AchievementType__MAX        = 64
};


// Enum Shenmue3.ETriggerAction
enum class ETriggerAction : uint8_t
{
	ETriggerAction__None           = 0,
	ETriggerAction__Cutscene       = 1,
	ETriggerAction__LogBridge      = 2,
	ETriggerAction__ETriggerAction_MAX = 3
};


// Enum Shenmue3.ES3Where
enum class ES3Where : uint8_t
{
	ES3Where__None                 = 0,
	ES3Where__Title                = 1,
	ES3Where__Hakkason             = 2,
	ES3Where__Chobu                = 3,
	ES3Where__Baisha               = 4,
	ES3Where__Cave                 = 5,
	ES3Where__River_Map            = 6,
	ES3Where__Tourinji             = 7,
	ES3Where__Chobu_Light          = 8,
	ES3Where__BattleRally          = 9,
	ES3Where__Credit               = 10,
	ES3Where__ES3Where_MAX         = 11
};


// Enum Shenmue3.ES3AssetChunkId
enum class ES3AssetChunkId : uint8_t
{
	ES3AssetChunkId__Title         = 0,
	ES3AssetChunkId__Loading       = 1,
	ES3AssetChunkId__Hakkason      = 2,
	ES3AssetChunkId__DigestMovie   = 3,
	ES3AssetChunkId__Chobu         = 4,
	ES3AssetChunkId__Tourinji      = 5,
	ES3AssetChunkId__ES3AssetChunkId_MAX = 6
};


// Enum Shenmue3.EAttentionLookScriptPlayCondition
enum class EAttentionLookScriptPlayCondition : uint8_t
{
	EAttentionLookScriptPlayCondition__None = 0,
	EAttentionLookScriptPlayCondition__Once = 1,
	EAttentionLookScriptPlayCondition__Repeat = 2,
	EAttentionLookScriptPlayCondition__EAttentionLookScriptPlayCondition_MAX = 3
};


// Enum Shenmue3.EAttentionLinkTargetDirection
enum class EAttentionLinkTargetDirection : uint8_t
{
	EAttentionLinkTargetDirection__Up = 0,
	EAttentionLinkTargetDirection__Down = 1,
	EAttentionLinkTargetDirection__Left = 2,
	EAttentionLinkTargetDirection__Right = 3,
	EAttentionLinkTargetDirection__EAttentionLinkTargetDirection_MAX = 4
};


// Enum Shenmue3.EAttentionCameraDirection
enum class EAttentionCameraDirection : uint8_t
{
	EAttentionCameraDirection__Parent = 0,
	EAttentionCameraDirection__BackObject = 1,
	EAttentionCameraDirection__PlayerDir = 2,
	EAttentionCameraDirection__Direct = 3,
	EAttentionCameraDirection__EAttentionCameraDirection_MAX = 4
};


// Enum Shenmue3.EAttentionCondition
enum class EAttentionCondition : uint8_t
{
	EAttentionCondition__None      = 0,
	EAttentionCondition__Force     = 1,
	EAttentionCondition__Backer    = 2,
	EAttentionCondition__Backer_IamShenmue = 3,
	EAttentionCondition__Backer_DreamsComeTrue = 4,
	EAttentionCondition__Backer_Senjafuda = 5,
	EAttentionCondition__Backer_Flower = 6,
	EAttentionCondition__EventStep = 7,
	EAttentionCondition__EAttentionCondition_MAX = 8
};


// Enum Shenmue3.EBgmPriority
enum class EBgmPriority : uint8_t
{
	EBgmPriority__Map              = 0,
	EBgmPriority__Area             = 1,
	EBgmPriority__Building         = 2,
	EBgmPriority__Room             = 3,
	EBgmPriority__Talk             = 4,
	EBgmPriority__MiniGame         = 5,
	EBgmPriority__Battle           = 6,
	EBgmPriority__Cutscene         = 7,
	EBgmPriority__UI               = 8,
	EBgmPriority__Force            = 9,
	EBgmPriority__EBgmPriority_MAX = 10
};


// Enum Shenmue3.ES3SEType
enum class ES3SEType : uint8_t
{
	ES3SEType__Loop                = 0,
	ES3SEType__OneShot             = 1,
	ES3SEType__Timer               = 2,
	ES3SEType__ES3SEType_MAX       = 3
};


// Enum Shenmue3.ES3NPCStreamingState
enum class ES3NPCStreamingState : uint8_t
{
	ES3NPCStreamingState__Near     = 0,
	ES3NPCStreamingState__Far      = 1,
	ES3NPCStreamingState__Loading  = 2,
	ES3NPCStreamingState__Unloaded = 3,
	ES3NPCStreamingState__ES3NPCStreamingState_MAX = 4
};


// Enum Shenmue3.ECharaSensorFlag
enum class ECharaSensorFlag : uint8_t
{
	ECharaSensorFlag__General      = 0,
	ECharaSensorFlag__Input        = 1,
	ECharaSensorFlag__Ground       = 2,
	ECharaSensorFlag__Obstacle     = 3,
	ECharaSensorFlag__Num          = 4,
	ECharaSensorFlag__ECharaSensorFlag_MAX = 5
};


// Enum Shenmue3.EInputActionType
enum class EInputActionType : uint8_t
{
	EInputActionType__Jump         = 0,
	EInputActionType__Crouch       = 1,
	EInputActionType__Run          = 2,
	EInputActionType__DebugRun     = 3,
	EInputActionType__Num          = 4,
	EInputActionType__EInputActionType_MAX = 5
};


// Enum Shenmue3.ES3CharaLightingMode
enum class ES3CharaLightingMode : uint8_t
{
	ES3CharaLightingMode__None     = 0,
	ES3CharaLightingMode__Edtor    = 1,
	ES3CharaLightingMode__Sequencer = 2,
	ES3CharaLightingMode__Track    = 3,
	ES3CharaLightingMode__ES3CharaLightingMode_MAX = 4
};


// Enum Shenmue3.ES3NPCMeshState
enum class ES3NPCMeshState : uint8_t
{
	ES3NPCMeshState__Near          = 0,
	ES3NPCMeshState__FarInterval   = 1,
	ES3NPCMeshState__FarDisable    = 2,
	ES3NPCMeshState__ES3NPCMeshState_MAX = 3
};


// Enum Shenmue3.ES3CharaLightRoom
enum class ES3CharaLightRoom : uint8_t
{
	ES3CharaLightRoom__Indoor      = 0,
	ES3CharaLightRoom__Outdoor     = 1,
	ES3CharaLightRoom__ES3CharaLightRoom_MAX = 2
};


// Enum Shenmue3.ES3CharaLightOrientation
enum class ES3CharaLightOrientation : uint8_t
{
	ES3CharaLightOrientation__Front = 0,
	ES3CharaLightOrientation__Rear = 1,
	ES3CharaLightOrientation__Right = 2,
	ES3CharaLightOrientation__Left = 3,
	ES3CharaLightOrientation__Top  = 4,
	ES3CharaLightOrientation__Bottom = 5,
	ES3CharaLightOrientation__ES3CharaLightOrientation_MAX = 6
};


// Enum Shenmue3.EClipperSourceType
enum class EClipperSourceType : uint8_t
{
	EClipperSourceType__Automation = 0,
	EClipperSourceType__Other      = 1,
	EClipperSourceType__EClipperSourceType_MAX = 2
};


// Enum Shenmue3.ES3CharaLightRequestType
enum class ES3CharaLightRequestType : uint8_t
{
	ES3CharaLightRequestType__None = 0,
	ES3CharaLightRequestType__OnlyOnce = 1,
	ES3CharaLightRequestType__ContinueToUse = 2,
	ES3CharaLightRequestType__ES3CharaLightRequestType_MAX = 3
};


// Enum Shenmue3.ES3CharaMainLightType
enum class ES3CharaMainLightType : uint8_t
{
	ES3CharaMainLightType__None    = 0,
	ES3CharaMainLightType__BacklightingRight = 1,
	ES3CharaMainLightType__BacklightingLeft = 2,
	ES3CharaMainLightType__ForwardlightingRight = 3,
	ES3CharaMainLightType__ForwardlightingLeft = 4,
	ES3CharaMainLightType__ES3CharaMainLightType_MAX = 5
};


// Enum Shenmue3.ES3ActionIconType
enum class ES3ActionIconType : uint8_t
{
	ES3ActionIconType__None        = 0,
	ES3ActionIconType__Action      = 1,
	ES3ActionIconType__Cancel      = 2,
	ES3ActionIconType__Door        = 3,
	ES3ActionIconType__Memo        = 4,
	ES3ActionIconType__Skip        = 5,
	ES3ActionIconType__Step        = 6,
	ES3ActionIconType__Talk        = 7,
	ES3ActionIconType__Event       = 8,
	ES3ActionIconType__Look        = 9,
	ES3ActionIconType__Catch       = 10,
	ES3ActionIconType__Get         = 11,
	ES3ActionIconType__Menu        = 12,
	ES3ActionIconType__MoveNewPage = 13,
	ES3ActionIconType__Appoint     = 14,
	ES3ActionIconType__Help        = 15,
	ES3ActionIconType__Book_FirstPage = 16,
	ES3ActionIconType__Book_EndPage = 17,
	ES3ActionIconType__Shop_Add    = 18,
	ES3ActionIconType__Shop_Sub    = 19,
	ES3ActionIconType__Shop_Payment = 20,
	ES3ActionIconType__Rotation_Left = 21,
	ES3ActionIconType__Rotation_Right = 22,
	ES3ActionIconType__SubEvent    = 23,
	ES3ActionIconType__Inventory_Decide = 24,
	ES3ActionIconType__UnattendedSales = 25,
	ES3ActionIconType__DLC_Event   = 26,
	ES3ActionIconType__Fork_Camera = 27,
	ES3ActionIconType__Fork_Map    = 28,
	ES3ActionIconType__Fork_UpDown = 29,
	ES3ActionIconType__KunFu       = 30,
	ES3ActionIconType__Leaderboard = 31,
	ES3ActionIconType__SkillBook   = 32,
	ES3ActionIconType__ES3ActionIconType_MAX = 33
};


// Enum Shenmue3.ES3Platform
enum class ES3Platform : uint8_t
{
	ES3Platform__Windows           = 0,
	ES3Platform__PS4               = 1,
	ES3Platform__ES3Platform_MAX   = 2
};


// Enum Shenmue3.ES3DojoRank
enum class ES3DojoRank : uint8_t
{
	ES3DojoRank__None              = 0,
	ES3DojoRank__Rank1             = 1,
	ES3DojoRank__Rank2             = 2,
	ES3DojoRank__Rank3             = 3,
	ES3DojoRank__Rank4             = 4,
	ES3DojoRank__Rank5             = 5,
	ES3DojoRank__Rank6             = 6,
	ES3DojoRank__Rank7             = 7,
	ES3DojoRank__Rank8             = 8,
	ES3DojoRank__Rank9             = 9,
	ES3DojoRank__Rank10            = 10,
	ES3DojoRank__ES3DojoRank_MAX   = 11
};


// Enum Shenmue3.ES3CutSceneTimeSchduleType
enum class ES3CutSceneTimeSchduleType : uint8_t
{
	ES3CutSceneTimeSchduleType__Resident = 0,
	ES3CutSceneTimeSchduleType__OnTime = 1,
	ES3CutSceneTimeSchduleType__ES3CutSceneTimeSchduleType_MAX = 2
};


// Enum Shenmue3.ES3DownloadableContentId
enum class ES3DownloadableContentId : uint8_t
{
	ES3DownloadableContentId__None = 0,
	ES3DownloadableContentId__Reward_CapsuleToyAll = 1,
	ES3DownloadableContentId__Reward_CapsuleToyOne = 2,
	ES3DownloadableContentId__Reward_DreamsComeTrue = 3,
	ES3DownloadableContentId__Reward_GachaTickets = 4,
	ES3DownloadableContentId__Reward_Hanamoji = 5,
	ES3DownloadableContentId__Reward_OtoshidamaTicket = 6,
	ES3DownloadableContentId__Reward_RodAndLure = 7,
	ES3DownloadableContentId__Reward_RyoJacket = 8,
	ES3DownloadableContentId__Reward_Senjafuda = 9,
	ES3DownloadableContentId__Reward_WorldTelecom = 10,
	ES3DownloadableContentId__Bonus_BurningSandstorm = 11,
	ES3DownloadableContentId__Bonus_FlightJacket = 12,
	ES3DownloadableContentId__Bonus_Kenpogi = 13,
	ES3DownloadableContentId__Bonus_BlazingKick = 14,
	ES3DownloadableContentId__Bonus_PekingPower = 15,
	ES3DownloadableContentId__Bonus_SnakeSpirit = 16,
	ES3DownloadableContentId__Bonus_PreOrder = 17,
	ES3DownloadableContentId__Bonus_DigitalDeluxe = 18,
	ES3DownloadableContentId__Bonus_DayOne = 19,
	ES3DownloadableContentId__DLC_SubQuest = 20,
	ES3DownloadableContentId__DLC_CasinoShip = 21,
	ES3DownloadableContentId__DLC_BattleRally = 22,
	ES3DownloadableContentId__MAX  = 23
};


// Enum Shenmue3.ECharacterEmotion
enum class ECharacterEmotion : uint8_t
{
	ECharacterEmotion__Neutral     = 0,
	ECharacterEmotion__Glad        = 1,
	ECharacterEmotion__Angry0      = 2,
	ECharacterEmotion__Sad         = 3,
	ECharacterEmotion__Happy       = 4,
	ECharacterEmotion__Angry1      = 5,
	ECharacterEmotion__Surprise    = 6,
	ECharacterEmotion__Think0      = 7,
	ECharacterEmotion__Think1      = 8,
	ECharacterEmotion__Painful     = 9,
	ECharacterEmotion__Special0    = 10,
	ECharacterEmotion__Special1    = 11,
	ECharacterEmotion__Special2    = 12,
	ECharacterEmotion__Special3    = 13,
	ECharacterEmotion__Special4    = 14,
	ECharacterEmotion__Special5    = 15,
	ECharacterEmotion__Special6    = 16,
	ECharacterEmotion__Fluctuation = 17,
	ECharacterEmotion__ECharacterEmotion_MAX = 18
};


// Enum Shenmue3.EPausePriority
enum class EPausePriority : uint8_t
{
	EPausePriority__None           = 0,
	EPausePriority__Help           = 1,
	EPausePriority__System         = 2,
	EPausePriority__EPausePriority_MAX = 3
};


// Enum Shenmue3.EMouseShape
enum class EMouseShape : uint8_t
{
	EMouseShape__None              = 0,
	EMouseShape__A                 = 1,
	EMouseShape__I                 = 2,
	EMouseShape__U                 = 3,
	EMouseShape__E                 = 4,
	EMouseShape__O                 = 5,
	EMouseShape__Silent            = 6,
	EMouseShape__EMouseShape_MAX   = 7
};


// Enum Shenmue3.ES3GameTimeMode
enum class ES3GameTimeMode : uint8_t
{
	ES3GameTimeMode__None          = 0,
	ES3GameTimeMode__DayTime       = 1,
	ES3GameTimeMode__ShopTime      = 2,
	ES3GameTimeMode__ES3GameTimeMode_MAX = 3
};


// Enum Shenmue3.ELeaveDirection
enum class ELeaveDirection : uint8_t
{
	ELeaveDirection__FRONT         = 0,
	ELeaveDirection__LFORWARD      = 1,
	ELeaveDirection__RFORWARD      = 2,
	ELeaveDirection__LEFT          = 3,
	ELeaveDirection__RIGHT         = 4,
	ELeaveDirection__LBACKWARD     = 5,
	ELeaveDirection__RBACKWARD     = 6,
	ELeaveDirection__REAR          = 7,
	ELeaveDirection__ELeaveDirection_MAX = 8
};


// Enum Shenmue3.EChairOccupied
enum class EChairOccupied : uint8_t
{
	EChairOccupied__None           = 0,
	EChairOccupied__Reserve        = 1,
	EChairOccupied__Occupied       = 2,
	EChairOccupied__Leave          = 3,
	EChairOccupied__Invalid        = 4,
	EChairOccupied__EChairOccupied_MAX = 5
};


// Enum Shenmue3.EChairForm
enum class EChairForm : uint8_t
{
	EChairForm__Stool              = 0,
	EChairForm__ArmlessChair       = 1,
	EChairForm__Armchair           = 2,
	EChairForm__Bench              = 3,
	EChairForm__FrontChair         = 4,
	EChairForm__EChairForm_MAX     = 5
};


// Enum Shenmue3.ES3GraphicPreset
enum class ES3GraphicPreset : uint8_t
{
	ES3GraphicPreset__Low          = 0,
	ES3GraphicPreset__Middle       = 1,
	ES3GraphicPreset__High         = 2,
	ES3GraphicPreset__VeryHigh     = 3,
	ES3GraphicPreset__Custom       = 4,
	ES3GraphicPreset__ES3GraphicPreset_MAX = 5
};


// Enum Shenmue3.EChairDirection
enum class EChairDirection : uint8_t
{
	EChairDirection__XPLUS         = 0,
	EChairDirection__YPLUS         = 1,
	EChairDirection__XMINUS        = 2,
	EChairDirection__YMINUS        = 3,
	EChairDirection__EChairDirection_MAX = 4
};


// Enum Shenmue3.ES3HelpPriority
enum class ES3HelpPriority : uint8_t
{
	ES3HelpPriority__VeryHigh      = 0,
	ES3HelpPriority__High          = 1,
	ES3HelpPriority__Middle        = 2,
	ES3HelpPriority__Low           = 3,
	ES3HelpPriority__VeryLow       = 4,
	ES3HelpPriority__ES3HelpPriority_MAX = 5
};


// Enum Shenmue3.ES3DialogType
enum class ES3DialogType : uint8_t
{
	ES3DialogType__YesNo           = 0,
	ES3DialogType__CloseOnly       = 1,
	ES3DialogType__Next            = 2,
	ES3DialogType__ES3DialogType_MAX = 3
};


// Enum Shenmue3.ES3BootState
enum class ES3BootState : uint8_t
{
	ES3BootState__Init             = 0,
	ES3BootState__Login            = 1,
	ES3BootState__Finish           = 2,
	ES3BootState__ES3BootState_MAX = 3
};


// Enum Shenmue3.ES3HelpRegisterTiming
enum class ES3HelpRegisterTiming : uint8_t
{
	ES3HelpRegisterTiming__None    = 0,
	ES3HelpRegisterTiming__AddDetect = 1,
	ES3HelpRegisterTiming__ES3HelpRegisterTiming_MAX = 2
};


// Enum Shenmue3.ES3InteractionFacing
enum class ES3InteractionFacing : uint8_t
{
	FACING_NONE                    = 0,
	FACING_CENTER                  = 1,
	FACING_TOWARD                  = 2,
	FACING_IN_CONE                 = 3,
	FACING_MAX                     = 4
};


// Enum Shenmue3.ES3InteractionShape
enum class ES3InteractionShape : uint8_t
{
	INTERACT_CAPSULE               = 0,
	INTERACT_BOX                   = 1,
	INTERACT_GLOBAL                = 2,
	INTERACT_MAX                   = 3
};


// Enum Shenmue3.ES3InputDeviceModel
enum class ES3InputDeviceModel : uint8_t
{
	ES3InputDeviceModel__None      = 0,
	ES3InputDeviceModel__Gamepad_DS4 = 1,
	ES3InputDeviceModel__Gamepad_XBox = 2,
	ES3InputDeviceModel__Keyboard_Generic = 3,
	ES3InputDeviceModel__ES3InputDeviceModel_MAX = 4
};


// Enum Shenmue3.ES3ItemDataRarity
enum class ES3ItemDataRarity : uint8_t
{
	ES3ItemDataRarity__Valuable    = 0,
	ES3ItemDataRarity__General     = 1,
	ES3ItemDataRarity__ES3ItemDataRarity_MAX = 2
};


// Enum Shenmue3.ES3ItemDataKind
enum class ES3ItemDataKind : uint8_t
{
	ES3ItemDataKind__Small         = 0,
	ES3ItemDataKind__Big           = 1,
	ES3ItemDataKind__Paper         = 2,
	ES3ItemDataKind__Book          = 3,
	ES3ItemDataKind__ES3ItemDataKind_MAX = 4
};


// Enum Shenmue3.ES3ItemListMenuType
enum class ES3ItemListMenuType : uint8_t
{
	ES3ItemListMenuType__Valuable  = 0,
	ES3ItemListMenuType__Gacha     = 1,
	ES3ItemListMenuType__Food      = 2,
	ES3ItemListMenuType__General   = 3,
	ES3ItemListMenuType__Shop      = 4,
	ES3ItemListMenuType__Save      = 5,
	ES3ItemListMenuType__SkillBookEditor = 6,
	ES3ItemListMenuType__Map       = 7,
	ES3ItemListMenuType__GachaSet  = 8,
	ES3ItemListMenuType__Option    = 9,
	ES3ItemListMenuType__SoundVolume = 10,
	ES3ItemListMenuType__ItemThumbnail = 11,
	ES3ItemListMenuType__SkillBook = 12,
	ES3ItemListMenuType__CrudeDrugSet = 13,
	ES3ItemListMenuType__SkillBookChangeItem = 14,
	ES3ItemListMenuType__ShopCard  = 15,
	ES3ItemListMenuType__ES3ItemListMenuType_MAX = 16
};


// Enum Shenmue3.ES3LightChannelType
enum class ES3LightChannelType : uint8_t
{
	ES3LightChannelType__Default   = 0,
	ES3LightChannelType__CharaOnly = 1,
	ES3LightChannelType__BackgroundOnly = 2,
	ES3LightChannelType__DefaultAndChara = 3,
	ES3LightChannelType__DefaultAndBackground = 4,
	ES3LightChannelType__CharaAndBackground = 5,
	ES3LightChannelType__All       = 6,
	ES3LightChannelType__Max       = 7
};


// Enum Shenmue3.ES3ItemDataGroup
enum class ES3ItemDataGroup : uint8_t
{
	ES3ItemDataGroup__General      = 0,
	ES3ItemDataGroup__Gacha        = 1,
	ES3ItemDataGroup__Food         = 2,
	ES3ItemDataGroup__SkillBook    = 3,
	ES3ItemDataGroup__Prize        = 4,
	ES3ItemDataGroup__GachaSet     = 5,
	ES3ItemDataGroup__FishingSet   = 6,
	ES3ItemDataGroup__CrudeDrugSet = 7,
	ES3ItemDataGroup__CrudeDrug    = 8,
	ES3ItemDataGroup__ChangeSet    = 9,
	ES3ItemDataGroup__ShopCard     = 10,
	ES3ItemDataGroup__CangeCloth   = 11,
	ES3ItemDataGroup__RewardGacha  = 12,
	ES3ItemDataGroup__Cloth        = 13,
	ES3ItemDataGroup__ES3ItemDataGroup_MAX = 14
};


// Enum Shenmue3.ES3LoadingType
enum class ES3LoadingType : uint8_t
{
	ES3LoadingType__Cave           = 0,
	ES3LoadingType__Hakkason1      = 1,
	ES3LoadingType__Hakkason2      = 2,
	ES3LoadingType__Chobu          = 3,
	ES3LoadingType__ChobuRyosya    = 4,
	ES3LoadingType__Bushindo       = 5,
	ES3LoadingType__En             = 6,
	ES3LoadingType__Common         = 7,
	ES3LoadingType__None           = 8,
	ES3LoadingType__ES3LoadingType_MAX = 9
};


// Enum Shenmue3.TabList
enum class ETabList : uint8_t
{
	HAKKASON                       = 0,
	CHOBU                          = 1,
	REQUEST                        = 2,
	Info                           = 3,
	Map                            = 4,
	TEL                            = 5,
	TabList_MAX                    = 6
};


// Enum Shenmue3.TabMaxPage
enum class ETabMaxPage : uint8_t
{
	HAKKASONMAX                    = 0,
	CHOBUMAX                       = 1,
	REQUESTMAX                     = 2,
	INFOMAX                        = 3,
	MAPMAX                         = 4,
	TELMAX                         = 5,
	TabMaxPage_MAX                 = 6
};


// Enum Shenmue3.ES3ItemEffectTarget
enum class ES3ItemEffectTarget : uint8_t
{
	ES3ItemEffectTarget__None      = 0,
	ES3ItemEffectTarget__Stamina   = 1,
	ES3ItemEffectTarget__HP        = 2,
	ES3ItemEffectTarget__ES3ItemEffectTarget_MAX = 3
};


// Enum Shenmue3.ES3StaticMeshMergeMode
enum class ES3StaticMeshMergeMode : uint8_t
{
	ES3StaticMeshMergeMode__Unknown = 0,
	ES3StaticMeshMergeMode__Opaque = 1,
	ES3StaticMeshMergeMode__OpaqueTwoSided = 2,
	ES3StaticMeshMergeMode__Masked = 3,
	ES3StaticMeshMergeMode__MaskedTwoSided = 4,
	ES3StaticMeshMergeMode__Translucent = 5,
	ES3StaticMeshMergeMode__TranslucentTwoSided = 6,
	ES3StaticMeshMergeMode__MAX    = 7
};


// Enum Shenmue3.Enum_QTETitleCommand
enum class Enum_QTETitleCommand : uint8_t
{
	Enum_QTETitleCommand__VE_Left  = 0,
	Enum_QTETitleCommand__VE_Middle = 1,
	Enum_QTETitleCommand__VE_Right = 2,
	Enum_QTETitleCommand__VE_LeftMiddle = 3,
	Enum_QTETitleCommand__VE_LeftRight = 4,
	Enum_QTETitleCommand__VE_MiddleRight = 5,
	Enum_QTETitleCommand__VE_LeftMiddleRight = 6,
	Enum_QTETitleCommand__VE_LeftRightMiddle = 7,
	Enum_QTETitleCommand__VE_RightMiddle = 8,
	Enum_QTETitleCommand__VE_MiddleLeft = 9,
	Enum_QTETitleCommand__VE_RightLeft = 10,
	Enum_QTETitleCommand__VE_RightMiddleLeft = 11,
	Enum_QTETitleCommand__VE_RightLeftMiddle = 12,
	Enum_QTETitleCommand__VE_MiddleRightLeft = 13,
	Enum_QTETitleCommand__VE_MiddleLeftRight = 14,
	Enum_QTETitleCommand__VE_LeftAndMiddle = 15,
	Enum_QTETitleCommand__VE_LeftAndRight = 16,
	Enum_QTETitleCommand__VE_MiddleAndRight = 17,
	Enum_QTETitleCommand__VE_LeftAndMiddleAndRight = 18,
	Enum_QTETitleCommand__VE_MAX   = 19
};


// Enum Shenmue3.EStairDirection
enum class EStairDirection : uint8_t
{
	STAIRS_UP                      = 0,
	STAIRS_DOWN                    = 1,
	STAIRS_MAX                     = 2
};


// Enum Shenmue3.Enum_QTETitlePlayList
enum class Enum_QTETitlePlayList : uint8_t
{
	Enum_QTETitlePlayList__VE_None = 0,
	Enum_QTETitlePlayList__VE_Left = 1,
	Enum_QTETitlePlayList__VE_Middle = 2,
	Enum_QTETitlePlayList__VE_Right = 3,
	Enum_QTETitlePlayList__VE_MAX  = 4
};


// Enum Shenmue3.ENpcDebugAction
enum class ENpcDebugAction : uint8_t
{
	ENpcDebugAction__None          = 0,
	ENpcDebugAction__FadeTeleport  = 1,
	ENpcDebugAction__ENpcDebugAction_MAX = 2
};


// Enum Shenmue3.EStuckError
enum class EStuckError : uint8_t
{
	EStuckError__None              = 0,
	EStuckError__MoonWalke         = 1,
	EStuckError__Velocity          = 2,
	EStuckError__MoveTimeOver      = 3,
	EStuckError__PathMoveFailure   = 4,
	EStuckError__Stairs            = 5,
	EStuckError__DebugCommand      = 6,
	EStuckError__EStuckError_MAX   = 7
};


// Enum Shenmue3.EScriptState
enum class EScriptState : uint8_t
{
	EScriptState__None             = 0,
	EScriptState__Shop             = 1,
	EScriptState__MiniGame         = 2,
	EScriptState__Eat              = 3,
	EScriptState__Practice         = 4,
	EScriptState__Work             = 5,
	EScriptState__SitGround        = 6,
	EScriptState__CanNotTalk       = 7,
	EScriptState__EScriptState_MAX = 8
};


// Enum Shenmue3.ES3CharaMeshType
enum class ES3CharaMeshType : uint8_t
{
	ES3CharaMeshType__Adventure    = 0,
	ES3CharaMeshType__Indoor       = 1,
	ES3CharaMeshType__Search       = 2,
	ES3CharaMeshType__Battle       = 3,
	ES3CharaMeshType__NoSwayBone   = 4,
	ES3CharaMeshType__None         = 5,
	ES3CharaMeshType__ES3CharaMeshType_MAX = 6
};


// Enum Shenmue3.EChangeBool
enum class EChangeBool : uint8_t
{
	EChangeBool__Change_None       = 0,
	EChangeBool__Change_False      = 1,
	EChangeBool__Change_True       = 2,
	EChangeBool__Change_MAX        = 3
};


// Enum Shenmue3.ECorrectionType
enum class ECorrectionType : uint8_t
{
	ECorrectionType__Correction_Auto = 0,
	ECorrectionType__Correction_Any = 1,
	ECorrectionType__Correction_Back = 2,
	ECorrectionType__Correction_Off = 3,
	ECorrectionType__Correction_MAX = 4
};


// Enum Shenmue3.EFurimukiOnTalk
enum class EFurimukiOnTalk : uint8_t
{
	EFurimukiOnTalk__None          = 0,
	EFurimukiOnTalk__Furimuki_False = 1,
	EFurimukiOnTalk__Furimuki_True = 2,
	EFurimukiOnTalk__EFurimukiOnTalk_MAX = 3
};


// Enum Shenmue3.ENpcDebug
enum class ENpcDebug : uint8_t
{
	ENpcDebug__None                = 0,
	ENpcDebug__ShowName            = 1,
	ENpcDebug__ShowText            = 2,
	ENpcDebug__ShowLog             = 3,
	ENpcDebug__ShowErrorCheck      = 4,
	ENpcDebug__ShowTalk            = 5,
	ENpcDebug__ShowLine            = 6,
	ENpcDebug__ShowStairs          = 7,
	ENpcDebug__ShowFar             = 8,
	ENpcDebug__ShowPosCorrection   = 9,
	ENpcDebug__ShowPOI             = 10,
	ENpcDebug__ShowFadeTeleport    = 11,
	ENpcDebug__ShowTurn            = 12,
	ENpcDebug__ShowFurimuki        = 13,
	ENpcDebug__ShowLoad            = 14,
	ENpcDebug__ShowRoot            = 15,
	ENpcDebug__ShowAnimation       = 16,
	ENpcDebug__ShowDoor            = 17,
	ENpcDebug__ShowFriendship      = 18,
	ENpcDebug__ShowPreload         = 19,
	ENpcDebug__ShowCoupleBench     = 20,
	ENpcDebug__ENpcDebug_MAX       = 21
};


// Enum Shenmue3.EReactionOnTalk
enum class EReactionOnTalk : uint8_t
{
	EReactionOnTalk__None          = 0,
	EReactionOnTalk__AnimationChange = 1,
	EReactionOnTalk__AnimationPause = 2,
	EReactionOnTalk__EReactionOnTalk_MAX = 3
};


// Enum Shenmue3.EPendingStop
enum class EPendingStop : uint8_t
{
	EPendingStop__None             = 0,
	EPendingStop__NextRight        = 1,
	EPendingStop__NextLeft         = 2,
	EPendingStop__WalkingInterruptionNextRight = 3,
	EPendingStop__WalkingInterruptionNextLeft = 4,
	EPendingStop__SitNextRight     = 5,
	EPendingStop__SitNextLeft      = 6,
	EPendingStop__EPendingStop_MAX = 7
};


// Enum Shenmue3.EDoorReaction
enum class EDoorReaction : uint8_t
{
	EDoorReaction__None            = 0,
	EDoorReaction__Open            = 1,
	EDoorReaction__EDoorReaction_MAX = 2
};


// Enum Shenmue3.ELocomotionState
enum class ELocomotionState : uint8_t
{
	ELocomotionState__Idle         = 0,
	ELocomotionState__IdleToWalking = 1,
	ELocomotionState__Walking      = 2,
	ELocomotionState__WalkingToIdle = 3,
	ELocomotionState__WalkingToSit = 4,
	ELocomotionState__WalkingInterruption = 5,
	ELocomotionState__WalkingTurn  = 6,
	ELocomotionState__TurningInPlace = 7,
	ELocomotionState__Running      = 8,
	ELocomotionState__Sitting      = 9,
	ELocomotionState__SittingToIdle = 10,
	ELocomotionState__SittingToWalk = 11,
	ELocomotionState__Talking      = 12,
	ELocomotionState__Animating    = 13,
	ELocomotionState__OpenDoor     = 14,
	ELocomotionState__WalkingToIdleOnTheWay = 15,
	ELocomotionState__UsingStairs  = 16,
	ELocomotionState__SittingAnimating = 17,
	ELocomotionState__AdjustingPosition = 18,
	ELocomotionState__SittingTurn  = 19,
	ELocomotionState__CoupleBench  = 20,
	ELocomotionState__Num          = 21,
	ELocomotionState__ELocomotionState_MAX = 22
};


enum class EBattleAttackInput : uint8_t
{
	EBattleAttackInput__NewEnumerator6 = 0,
	EBattleAttackInput__NewEnumerator0 = 1,
	EBattleAttackInput__NewEnumerator1 = 2,
	EBattleAttackInput__NewEnumerator7 = 3,
	EBattleAttackInput__NewEnumerator8 = 4,
	EBattleAttackInput__EBattleAttackInput_MAX = 5
};

// Enum Shenmue3.EPositionCorrectionMode
enum class EPositionCorrectionMode : uint8_t
{
	EPositionCorrectionMode__Mode_None = 0,
	EPositionCorrectionMode__Mode_Location = 1,
	EPositionCorrectionMode__Mode_Yaw = 2,
	EPositionCorrectionMode__Mode_LocationAndYaw = 3,
	EPositionCorrectionMode__Mode_MAX = 4
};


// Enum Shenmue3.ENPCAttachSettingType
enum class ENPCAttachSettingType : uint8_t
{
	ENPCAttachSettingType__On_Spawn = 0,
	ENPCAttachSettingType__On_Search = 1,
	ENPCAttachSettingType__Off_Destroy = 2,
	ENPCAttachSettingType__Off_TransformBefore = 3,
	ENPCAttachSettingType__Off_TransformAfter = 4,
	ENPCAttachSettingType__ENPCAttachSettingType_MAX = 5
};


// Enum Shenmue3.EHaveItemCharType
enum class EHaveItemCharType : uint8_t
{
	EHaveItemCharType__Type_All    = 0,
	EHaveItemCharType__Type_InGame = 1,
	EHaveItemCharType__Type_AC     = 2,
	EHaveItemCharType__Type_MAX    = 3
};


// Enum Shenmue3.EHaveItem
enum class EHaveItem : uint8_t
{
	EHaveItem__NoControl           = 0,
	EHaveItem__DownHand            = 1,
	EHaveItem__Shoulder            = 2,
	EHaveItem__Rod                 = 3,
	EHaveItem__Club                = 4,
	EHaveItem__Broom               = 5,
	EHaveItem__EHaveItem_MAX       = 6
};


// Enum Shenmue3.EChangeBody
enum class EChangeBody : uint8_t
{
	EChangeBody__Change_None       = 0,
	EChangeBody__Change_False      = 1,
	EChangeBody__Change_True       = 2,
	EChangeBody__Change_MAX        = 3
};


// Enum Shenmue3.ENpcCheckState
enum class ENpcCheckState : uint8_t
{
	ENpcCheckState__None           = 0,
	ENpcCheckState__InTheIrori     = 1,
	ENpcCheckState__ENpcCheckState_MAX = 2
};


// Enum Shenmue3.EPendingIdle
enum class EPendingIdle : uint8_t
{
	EPendingIdle__Standing         = 0,
	EPendingIdle__Sit              = 1,
	EPendingIdle__ForceSitForward  = 2,
	EPendingIdle__ForceSitLeft     = 3,
	EPendingIdle__ForceSitRight    = 4,
	EPendingIdle__EPendingIdle_MAX = 5
};


// Enum Shenmue3.ENpcManagerEventMessage
enum class ENpcManagerEventMessage : uint8_t
{
	ENpcManagerEventMessage__None  = 0,
	ENpcManagerEventMessage__ShenfaDestroy = 1,
	ENpcManagerEventMessage__BenchFootIKOn = 2,
	ENpcManagerEventMessage__BenchFootIKOff = 3,
	ENpcManagerEventMessage__AllStop = 4,
	ENpcManagerEventMessage__AllRestart = 5,
	ENpcManagerEventMessage__ENpcManagerEventMessage_MAX = 6
};


// Enum Shenmue3.EFingerPointingType
enum class EFingerPointingType : uint8_t
{
	EFingerPointingType__Common    = 0,
	EFingerPointingType__Woman     = 1,
	EFingerPointingType__EFingerPointingType_MAX = 2
};


// Enum Shenmue3.ENPCAttachFrom
enum class ENPCAttachFrom : uint8_t
{
	ENPCAttachFrom__FromAnimation  = 0,
	ENPCAttachFrom__FromDefinition = 1,
	ENPCAttachFrom__ENPCAttachFrom_MAX = 2
};


// Enum Shenmue3.ENPCPOIAnimationCategory
enum class ENPCPOIAnimationCategory : uint8_t
{
	ENPCPOIAnimationCategory__Category_Idle = 0,
	ENPCPOIAnimationCategory__Category_Talk = 1,
	ENPCPOIAnimationCategory__Category_LookAround = 2,
	ENPCPOIAnimationCategory__Category_Unique = 3,
	ENPCPOIAnimationCategory__Category_MAX = 4
};


// Enum Shenmue3.EConditionChangeType
enum class EConditionChangeType : uint8_t
{
	EConditionChangeType__None     = 0,
	EConditionChangeType__Hide     = 1,
	EConditionChangeType__Show     = 2,
	EConditionChangeType__Remove   = 3,
	EConditionChangeType__FadeIn   = 4,
	EConditionChangeType__FadeOut  = 5,
	EConditionChangeType__ChangeMesh = 6,
	EConditionChangeType__EConditionChangeType_MAX = 7
};


// Enum Shenmue3.ENPCPOICommandType
enum class ENPCPOICommandType : uint8_t
{
	ENPCPOICommandType__Type_Animation = 0,
	ENPCPOICommandType__Type_Move  = 1,
	ENPCPOICommandType__Type_MAX   = 2
};


// Enum Shenmue3.FNPCTaskFinishCommandType
enum class EFNPCTaskFinishCommandType : uint8_t
{
	FNPCTaskFinishCommandType__Type_None = 0,
	FNPCTaskFinishCommandType__Type_FlagChange = 1,
	FNPCTaskFinishCommandType__Type_SynchroMotion = 2,
	FNPCTaskFinishCommandType__Type_ForceIdle = 3,
	FNPCTaskFinishCommandType__Type_TalkMotionRequested = 4,
	FNPCTaskFinishCommandType__Type_CoupleBench = 5,
	FNPCTaskFinishCommandType__Type_HighPriorityShow = 6,
	FNPCTaskFinishCommandType__Type_ChangeMesh = 7,
	FNPCTaskFinishCommandType__Type_FootIK = 8,
	FNPCTaskFinishCommandType__Type_AvoidanceWeight = 9,
	FNPCTaskFinishCommandType__Type_OpenDoorCorrectionTime = 10,
	FNPCTaskFinishCommandType__Type_MAX = 11
};


// Enum Shenmue3.ENPCCommand
enum class ENPCCommand : uint8_t
{
	NPC_Null                       = 0,
	NPC_Appear                     = 1,
	NPC_Move                       = 2,
	NPC_Animate                    = 3,
	NPC_Disappear                  = 4,
	NPC_MAX                        = 5
};


// Enum Shenmue3.ECameraState
enum class ECameraState : uint8_t
{
	ECameraState__Free             = 0,
	ECameraState__Zoom             = 1,
	ECameraState__Door             = 2,
	ECameraState__Search           = 3,
	ECameraState__ECameraState_MAX = 4
};


// Enum Shenmue3.ES3PadButtonIndex
enum class ES3PadButtonIndex : uint8_t
{
	ES3PadButtonIndex__Bottom      = 0,
	ES3PadButtonIndex__Right       = 1,
	ES3PadButtonIndex__Left        = 2,
	ES3PadButtonIndex__Top         = 3,
	ES3PadButtonIndex__ES3PadButtonIndex_MAX = 4
};


// Enum Shenmue3.ES3WatchPropertyTypes
enum class ES3WatchPropertyTypes : uint8_t
{
	ES3_NULLPROPERTY               = 0,
	ES3_BOOLPROPERTY               = 1,
	ES3_FLOATPROPERTY              = 2,
	ES3_ENUMPROPERTY               = 3,
	ES3_INTPROPERTY                = 4,
	ES3_MAX                        = 5
};


// Enum Shenmue3.FNPCTaskInstruction
enum class EFNPCTaskInstruction : uint8_t
{
	FNPCTaskInstruction__Inst_None = 0,
	FNPCTaskInstruction__Inst_Appear_DisableUpdatePosition = 1,
	FNPCTaskInstruction__Inst_Animation_ABBlendTimeZero = 2,
	FNPCTaskInstruction__Inst_Animation_NotSingleLoop = 3,
	FNPCTaskInstruction__Inst_MAX  = 4
};


// Enum Shenmue3.ES3ConfirmCancelType
enum class ES3ConfirmCancelType : uint8_t
{
	ES3ConfirmCancelType__None     = 0,
	ES3ConfirmCancelType__Confirm  = 1,
	ES3ConfirmCancelType__Cancel   = 2,
	ES3ConfirmCancelType__ES3ConfirmCancelType_MAX = 3
};


// Enum Shenmue3.ES3CustomMovement
enum class ES3CustomMovement : uint8_t
{
	S3MOVE_LEASH                   = 0,
	S3MOVE_SPLINE                  = 1,
	S3MOVE_MAX                     = 2
};


// Enum Shenmue3.ENPCAnimRotateMode
enum class ENPCAnimRotateMode : uint8_t
{
	ENPCAnimRotateMode__NotApplicable = 0,
	ENPCAnimRotateMode__RootMotion = 1,
	ENPCAnimRotateMode__Path       = 2,
	ENPCAnimRotateMode__None       = 3,
	ENPCAnimRotateMode__ENPCAnimRotateMode_MAX = 4
};


// Enum Shenmue3.ENPCAnimMoveMode
enum class ENPCAnimMoveMode : uint8_t
{
	ENPCAnimMoveMode__NotApplicable = 0,
	ENPCAnimMoveMode__RootMotion   = 1,
	ENPCAnimMoveMode__Path         = 2,
	ENPCAnimMoveMode__PathProjectedToRoot = 3,
	ENPCAnimMoveMode__None         = 4,
	ENPCAnimMoveMode__ENPCAnimMoveMode_MAX = 5
};


// Enum Shenmue3.EEarringParttern
enum class EEarringParttern : uint8_t
{
	EEarringParttern__Cone         = 0,
	EEarringParttern__Angular      = 1,
	EEarringParttern__EEarringParttern_MAX = 2
};


// Enum Shenmue3.ES3RewardType
enum class ES3RewardType : uint8_t
{
	ES3RewardType__None            = 0,
	ES3RewardType__WorldTelecom    = 1,
	ES3RewardType__EndCredits      = 2,
	ES3RewardType__EndCreditsSpecial = 3,
	ES3RewardType__RyoJacket       = 4,
	ES3RewardType__GachaTickets    = 5,
	ES3RewardType__CapsuleToyOne   = 6,
	ES3RewardType__CapsuleToyAll   = 7,
	ES3RewardType__ScrollAdvanced  = 8,
	ES3RewardType__ScrollSpecialP  = 9,
	ES3RewardType__ScrollSpecialH  = 10,
	ES3RewardType__ScrollArcane    = 11,
	ES3RewardType__DreamsComeTrue  = 12,
	ES3RewardType__RodAndLure      = 13,
	ES3RewardType__IamShenmue      = 14,
	ES3RewardType__OtoshidamaTicket = 15,
	ES3RewardType__Hanamoji        = 16,
	ES3RewardType__Senjafuda       = 17,
	ES3RewardType__DiceMan         = 18,
	ES3RewardType__ChibiChara      = 19,
	ES3RewardType__ChibiChara2     = 20,
	ES3RewardType__HandBook        = 21,
	ES3RewardType__GuestBook       = 22,
	ES3RewardType__FreeBook        = 23,
	ES3RewardType__TravellerNPC    = 24,
	ES3RewardType__BattleNPC       = 25,
	ES3RewardType__YataiName       = 26,
	ES3RewardType__OtoshidamaFace  = 27,
	ES3RewardType__BurningSandstorm = 28,
	ES3RewardType__FlightJacket    = 29,
	ES3RewardType__Kenpogi         = 30,
	ES3RewardType__BlazingKick     = 31,
	ES3RewardType__PekingPower     = 32,
	ES3RewardType__SnakeSpirit     = 33,
	ES3RewardType__ES3RewardType_MAX = 34
};


// Enum Shenmue3.ES3RewardCategory
enum class ES3RewardCategory : uint8_t
{
	ES3RewardCategory__None        = 0,
	ES3RewardCategory__KS_01       = 1,
	ES3RewardCategory__KS_02       = 2,
	ES3RewardCategory__KS_03       = 3,
	ES3RewardCategory__KS_04       = 4,
	ES3RewardCategory__KS_05       = 5,
	ES3RewardCategory__KS_06       = 6,
	ES3RewardCategory__KS_07       = 7,
	ES3RewardCategory__KS_08       = 8,
	ES3RewardCategory__KS_09       = 9,
	ES3RewardCategory__KS          = 10,
	ES3RewardCategory__KS01        = 11,
	ES3RewardCategory__KS02        = 12,
	ES3RewardCategory__KS03        = 13,
	ES3RewardCategory__KS04        = 14,
	ES3RewardCategory__KS05        = 15,
	ES3RewardCategory__KS06        = 16,
	ES3RewardCategory__KS07        = 17,
	ES3RewardCategory__KS08        = 18,
	ES3RewardCategory__KS09        = 19,
	ES3RewardCategory__KS10        = 20,
	ES3RewardCategory__KS11        = 21,
	ES3RewardCategory__SB_01       = 22,
	ES3RewardCategory__SB_02       = 23,
	ES3RewardCategory__SB_03       = 24,
	ES3RewardCategory__SB_04       = 25,
	ES3RewardCategory__SB_05       = 26,
	ES3RewardCategory__SB_06       = 27,
	ES3RewardCategory__SB_07       = 28,
	ES3RewardCategory__ES3RewardCategory_MAX = 29
};


// Enum Shenmue3.EDetailModeStep
enum class EDetailModeStep : uint8_t
{
	EDetailModeStep__None          = 0,
	EDetailModeStep__Start         = 1,
	EDetailModeStep__Exec          = 2,
	EDetailModeStep__Back          = 3,
	EDetailModeStep__RestoreCamera = 4,
	EDetailModeStep__Close         = 5,
	EDetailModeStep__EDetailModeStep_MAX = 6
};


// Enum Shenmue3.EAnimBaseChara
enum class EAnimBaseChara : uint8_t
{
	EAnimBaseChara__RYO            = 0,
	EAnimBaseChara__CMB            = 1,
	EAnimBaseChara__MFB            = 2,
	EAnimBaseChara__EAnimBaseChara_MAX = 3
};


// Enum Shenmue3.ESearchMode
enum class ESearchMode : uint8_t
{
	Search                         = 0,
	Look                           = 1,
	Grab                           = 2,
	Max                            = 3
};


// Enum Shenmue3.ESearchTemplate
enum class ESearchTemplate : uint8_t
{
	ESearchTemplate__None          = 0,
	ESearchTemplate__Push1         = 1,
	ESearchTemplate__Push2         = 2,
	ESearchTemplate__Push3         = 3,
	ESearchTemplate__PickUp1       = 4,
	ESearchTemplate__PickUp1b      = 5,
	ESearchTemplate__PickUp2       = 6,
	ESearchTemplate__Drawer1       = 7,
	ESearchTemplate__Drawer1b      = 8,
	ESearchTemplate__Drawer2       = 9,
	ESearchTemplate__Drawer3       = 10,
	ESearchTemplate__SlidingDoorL  = 11,
	ESearchTemplate__SlidingDoorL2 = 12,
	ESearchTemplate__SlidingDoorR  = 13,
	ESearchTemplate__SlidingDoorR2 = 14,
	ESearchTemplate__DoubleDoors1  = 15,
	ESearchTemplate__DoubleDoors2L = 16,
	ESearchTemplate__DoubleDoors2R = 17,
	ESearchTemplate__DoubleDoors3  = 18,
	ESearchTemplate__ESearchTemplate_MAX = 19
};


// Enum Shenmue3.ESearchGrabMotionSoundType
enum class ESearchGrabMotionSoundType : uint8_t
{
	ESearchGrabMotionSoundType__None = 0,
	ESearchGrabMotionSoundType__Gacha = 1,
	ESearchGrabMotionSoundType__Paper = 2,
	ESearchGrabMotionSoundType__Skillbook = 3,
	ESearchGrabMotionSoundType__Stone = 4,
	ESearchGrabMotionSoundType__WoodenTag = 5,
	ESearchGrabMotionSoundType__Apple = 6,
	ESearchGrabMotionSoundType__Camera = 7,
	ESearchGrabMotionSoundType__Dish = 8,
	ESearchGrabMotionSoundType__Magazine = 9,
	ESearchGrabMotionSoundType__Ring = 10,
	ESearchGrabMotionSoundType__WoodCabinet = 11,
	ESearchGrabMotionSoundType__PlasticBox = 12,
	ESearchGrabMotionSoundType__StoneStatue = 13,
	ESearchGrabMotionSoundType__Lanthanum = 14,
	ESearchGrabMotionSoundType__ESearchGrabMotionSoundType_MAX = 15
};


// Enum Shenmue3.ESearchActionIcon
enum class ESearchActionIcon : uint8_t
{
	ESearchActionIcon__None        = 0,
	ESearchActionIcon__Look        = 1,
	ESearchActionIcon__Grab        = 2,
	ESearchActionIcon__Get         = 3,
	ESearchActionIcon__General     = 4,
	ESearchActionIcon__ESearchActionIcon_MAX = 5
};


// Enum Shenmue3.ECommonSEType
enum class ECommonSEType : uint8_t
{
	ECommonSEType__Decide          = 0,
	ECommonSEType__Cancel          = 1,
	ECommonSEType__Select          = 2,
	ECommonSEType__Notify          = 3,
	ECommonSEType__Get             = 4,
	ECommonSEType__Payment         = 5,
	ECommonSEType__BookOpen        = 6,
	ECommonSEType__TurnPage        = 7,
	ECommonSEType__ECommonSEType_MAX = 8
};


// Enum Shenmue3.EClothPartsType
enum class EClothPartsType : uint8_t
{
	EClothPartsType__Mesh          = 0,
	EClothPartsType__MeshType      = 1,
	EClothPartsType__Face          = 2,
	EClothPartsType__Eye           = 3,
	EClothPartsType__Tshirts       = 4,
	EClothPartsType__Jacket        = 5,
	EClothPartsType__Jeans         = 6,
	EClothPartsType__Sneaker       = 7,
	EClothPartsType__FlightJacket  = 8,
	EClothPartsType__DogiTops      = 9,
	EClothPartsType__DogiShirts    = 10,
	EClothPartsType__DogiBottoms   = 11,
	EClothPartsType__DogiShoes     = 12,
	EClothPartsType__SheHat        = 13,
	EClothPartsType__SheTops       = 14,
	EClothPartsType__SheBottoms    = 15,
	EClothPartsType__SheShoes      = 16,
	EClothPartsType__SheHatWaka    = 17,
	EClothPartsType__SheTopsWaka   = 18,
	EClothPartsType__SheBottomsWaka = 19,
	EClothPartsType__SheShoesWaka  = 20,
	EClothPartsType__EClothPartsType_MAX = 21
};


// Enum Shenmue3.ES3DemoType
enum class ES3DemoType : uint8_t
{
	ES3DemoType__None              = 0,
	ES3DemoType__Gamescom          = 1,
	ES3DemoType__Trial             = 2,
	ES3DemoType__TGS               = 3,
	ES3DemoType__Business          = 4,
	ES3DemoType__Roadshow          = 5,
	ES3DemoType__ES3DemoType_MAX   = 6
};


// Enum Shenmue3.ES3KeyConfigType
enum class ES3KeyConfigType : uint8_t
{
	ES3KeyConfigType__DecideButton = 0,
	ES3KeyConfigType__CameraVertical = 1,
	ES3KeyConfigType__CameraHorizontal = 2,
	ES3KeyConfigType__ControllerTrigger = 3,
	ES3KeyConfigType__MAX          = 4
};


// Enum Shenmue3.ES3WindowType
enum class ES3WindowType : uint8_t
{
	ES3WindowType__FullScreen      = 0,
	ES3WindowType__Borderless      = 1,
	ES3WindowType__Window          = 2,
	ES3WindowType__ES3WindowType_MAX = 3
};


// Enum Shenmue3.ES3VoiceLanguage
enum class ES3VoiceLanguage : uint8_t
{
	ES3VoiceLanguage__Japanese     = 0,
	ES3VoiceLanguage__English      = 1,
	ES3VoiceLanguage__Chinese      = 2,
	ES3VoiceLanguage__MAX          = 3
};


// Enum Shenmue3.ES3Locale
enum class ES3Locale : uint8_t
{
	ES3Locale__Japanese            = 0,
	ES3Locale__US_English          = 1,
	ES3Locale__French              = 2,
	ES3Locale__Italian             = 3,
	ES3Locale__German              = 4,
	ES3Locale__Spanish             = 5,
	ES3Locale__Portuguese          = 6,
	ES3Locale__CN_Chinese          = 7,
	ES3Locale__TW_Chinese          = 8,
	ES3Locale__MAX                 = 9
};


// Enum Shenmue3.ES3HandednessType
enum class ES3HandednessType : uint8_t
{
	Handedness_Right               = 0,
	Handedness_Left                = 1,
	Handedness_MAX                 = 2
};


// Enum Shenmue3.ES3CharacterGender
enum class ES3CharacterGender : uint8_t
{
	Gender_Female                  = 0,
	Gender_Male                    = 1,
	Gender_Unspecified             = 2,
	Gender_MAX                     = 3
};


// Enum Shenmue3.ESearchTiming
enum class ESearchTiming : uint8_t
{
	ESearchTiming__None            = 0,
	ESearchTiming__Search          = 1,
	ESearchTiming__Grabbed         = 2,
	ESearchTiming__Get             = 3,
	ESearchTiming__Complete        = 4,
	ESearchTiming__ESearchTiming_MAX = 5
};


// Enum Shenmue3.ES3FingerPointingMode
enum class ES3FingerPointingMode : uint8_t
{
	ES3FingerPointingMode__BothHands = 0,
	ES3FingerPointingMode__LeftHandOnly = 1,
	ES3FingerPointingMode__RightHandOnly = 2,
	ES3FingerPointingMode__ES3FingerPointingMode_MAX = 3
};


// Enum Shenmue3.ES3SubQuestCondition
enum class ES3SubQuestCondition : uint8_t
{
	ES3SubQuestCondition__None     = 0,
	ES3SubQuestCondition__Enable   = 1,
	ES3SubQuestCondition__Disable  = 2,
	ES3SubQuestCondition__ES3SubQuestCondition_MAX = 3
};


// Enum Shenmue3.ES3TalkType
enum class ES3TalkType : uint8_t
{
	ES3TalkType__Normal            = 0,
	ES3TalkType__BS                = 1,
	ES3TalkType__MiniGame          = 2,
	ES3TalkType__Shop              = 3,
	ES3TalkType__Door              = 4,
	ES3TalkType__ES3TalkType_MAX   = 5
};


// Enum Shenmue3.ENPCTalkState
enum class ENPCTalkState : uint8_t
{
	ENPCTalkState__None            = 0,
	ENPCTalkState__Any             = 1,
	ENPCTalkState__First           = 2,
	ENPCTalkState__Walk            = 3,
	ENPCTalkState__MiniGame        = 4,
	ENPCTalkState__Shop            = 5,
	ENPCTalkState__Eat             = 6,
	ENPCTalkState__Practice        = 7,
	ENPCTalkState__Work            = 8,
	ENPCTalkState__Hint            = 9,
	ENPCTalkState__Error           = 10,
	ENPCTalkState__ENPCTalkState_MAX = 11
};


// Enum Shenmue3.EAutoCameraType
enum class EAutoCameraType : uint8_t
{
	EAutoCameraType__Talk          = 0,
	EAutoCameraType__Hello         = 1,
	EAutoCameraType__Bye           = 2,
	EAutoCameraType__EAutoCameraType_MAX = 3
};


// Enum Shenmue3.ES3TextDataType
enum class ES3TextDataType : uint8_t
{
	ES3TextDataType__TextData_None = 0,
	ES3TextDataType__TextData_Talk = 1,
	ES3TextDataType__TextData_Item = 2,
	ES3TextDataType__TextData_MAX  = 3
};


// Enum Shenmue3.ES3CharacterType
enum class ES3CharacterType : uint8_t
{
	ES3CharacterType__None         = 0,
	ES3CharacterType__Player       = 1,
	ES3CharacterType__NPC          = 2,
	ES3CharacterType__NPC_Lead     = 3,
	ES3CharacterType__AC           = 4,
	ES3CharacterType__ES3CharacterType_MAX = 5
};


// Enum Shenmue3.ES3TextPathType
enum class ES3TextPathType : uint8_t
{
	ES3TextPathType__Talk          = 0,
	ES3TextPathType__Authoring     = 1,
	ES3TextPathType__Sub           = 2,
	ES3TextPathType__Search        = 3,
	ES3TextPathType__Other         = 4,
	ES3TextPathType__Item          = 5,
	ES3TextPathType__UI            = 6,
	ES3TextPathType__Memo          = 7,
	ES3TextPathType__Exclamation   = 8,
	ES3TextPathType__DLCSubQuest   = 9,
	ES3TextPathType__DLCCasinoShip = 10,
	ES3TextPathType__DLCBattleRally = 11,
	ES3TextPathType__DLCAuthoring  = 12,
	ES3TextPathType__DLC_UI        = 13,
	ES3TextPathType__DLCSearch     = 14,
	ES3TextPathType__ES3TextPathType_MAX = 15
};


// Enum Shenmue3.ETriggerPosition
enum class ETriggerPosition : uint8_t
{
	ETriggerPosition__Center       = 0,
	ETriggerPosition__BothEnds     = 1,
	ETriggerPosition__ETriggerPosition_MAX = 2
};


// Enum Shenmue3.EWeatherPrestType
enum class EWeatherPrestType : uint8_t
{
	EWeatherPrestType__AllWeather  = 0,
	EWeatherPrestType__SunnyOnly   = 1,
	EWeatherPrestType__CloudyOnly  = 2,
	EWeatherPrestType__RainyOnly   = 3,
	EWeatherPrestType__NoRainy     = 4,
	EWeatherPrestType__Debug       = 5,
	EWeatherPrestType__EWeatherPrestType_MAX = 6
};


// Enum Shenmue3.EWeatherType
enum class EWeatherType : uint8_t
{
	EWeatherType__Sunny            = 0,
	EWeatherType__Cloudy           = 1,
	EWeatherType__LightRainy       = 2,
	EWeatherType__Rainy            = 3,
	EWeatherType__HeavyRainy       = 4,
	EWeatherType__Snowy            = 5,
	EWeatherType__None             = 6,
	EWeatherType__EWeatherType_MAX = 7
};


// Enum Shenmue3.EImageFormatType
enum class EImageFormatType : uint8_t
{
	png                            = 0,
	jpg                            = 1,
	bmp                            = 2,
	EImageFormatType_MAX           = 3
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Shenmue3.EventJumpLabel
// 0x0018
struct FEventJumpLabel
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct Shenmue3.S3GachaItem
// 0x0030 (0x0038 - 0x0008)
struct FS3GachaItem : public FTableRowBase
{
	struct FName                                       GachaId;                                                  // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	struct FName                                       ItemId;                                                   // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              Ratio;                                                    // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              Scale;                                                    // 0x001C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	struct FVector                                     OffsetPos;                                                // 0x0020(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData)
	struct FRotator                                    OffsetRot;                                                // 0x002C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData)
};

// ScriptStruct Shenmue3.ST_S3HintTalkData
// 0x0018
struct FST_S3HintTalkData
{
	EHintTarget                                        Target;                                                   // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FName                                       TargetID;                                                 // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Difficulty;                                               // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Shenmue3.KsJumpLabel
// 0x0018
struct FKsJumpLabel
{
	struct FString                                     labelName;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	bool                                               added;                                                    // 0x0010(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct Shenmue3.MG_CC_MoveData
// 0x000C
struct FMG_CC_MoveData
{
	float                                              Speed;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MoveValue;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxMoveCount;                                             // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Shenmue3.MG_CC_AnimalData
// 0x00A8
struct FMG_CC_AnimalData
{
	class UClass*                                      AnimalClass;                                              // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0008(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Shenmue3.MG_CC_AnimalData.StartSequence
	unsigned char                                      UnknownData01[0x28];                                      // 0x0030(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Shenmue3.MG_CC_AnimalData.SuccessSequence
	unsigned char                                      UnknownData02[0x28];                                      // 0x0058(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Shenmue3.MG_CC_AnimalData.FailedSequence
	struct FMG_CC_MoveData                             m_WalkMoveData;                                           // 0x0080(0x000C) (Edit, BlueprintVisible)
	struct FMG_CC_MoveData                             m_RunMoveData;                                            // 0x008C(0x000C) (Edit, BlueprintVisible)
	float                                              m_MoveDistanceFromCenter;                                 // 0x0098(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              m_WaitTime;                                               // 0x009C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              m_MaxNotCatchTime;                                        // 0x00A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x00A4(0x0004) MISSED OFFSET
};

// ScriptStruct Shenmue3.MG_RCForkData
// 0x0060
struct FMG_RCForkData
{
	float                                              m_suspension_height;                                      // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              m_suspension_stiffness;                                   // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              m_suspension_damping;                                     // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              m_wheel_radius;                                           // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              m_max_speed;                                              // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              m_acceleration;                                           // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                m_min_ground_wheels_to_move;                              // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              m_min_speed_to_steer;                                     // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              m_gravity;                                                // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              m_steering_torque;                                        // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              m_max_steer_angle;                                        // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              m_speed_boost_acceleration_multiplier;                    // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              m_max_boost_speed;                                        // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              m_anti_slide;                                             // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              m_linear_damping;                                         // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              m_angular_damping;                                        // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              m_mass_in_kg;                                             // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     m_center_of_mass_offset_when_moving;                      // 0x0044(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     m_center_of_mass_offset_when_falling;                     // 0x0050(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               m_trace_complex;                                          // 0x005C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               m_is_front_handle;                                        // 0x005D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x005E(0x0002) MISSED OFFSET
};

// ScriptStruct Shenmue3.MG_RCForkDebugData
// 0x004C
struct FMG_RCForkDebugData
{
	bool                                               m_show_meshes_when_debugging;                             // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FLinearColor                                m_collision_box_color;                                    // 0x0004(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              m_collision_box_thikness;                                 // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                m_trace_color;                                            // 0x0018(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                m_trace_hit_color;                                        // 0x0028(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              m_contact_point_sphere_radius;                            // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                m_contact_point_sphere_color;                             // 0x003C(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
};

// ScriptStruct Shenmue3.MG_WMDataStruct
// 0x0008
struct FMG_WMDataStruct
{
	bool                                               bBigMole;                                                 // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              AppearTime;                                               // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Shenmue3.MG_WMRoundDataStruct
// 0x0010
struct FMG_WMRoundDataStruct
{
	TArray<struct FMG_WMDataStruct>                    MoleList;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Shenmue3.MGForkliftRCCowTableRowBase
// 0x0038 (0x0040 - 0x0008)
struct FMGForkliftRCCowTableRowBase : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  spawn_transform;                                          // 0x0010(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
};

// ScriptStruct Shenmue3.RandomLabel
// 0x0020
struct FRandomLabel
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	int                                                Index;                                                    // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              Percent;                                                  // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                Probability;                                              // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct Shenmue3.S3BRallyAwardFlag
// 0x0030 (0x0038 - 0x0008)
struct FS3BRallyAwardFlag : public FTableRowBase
{
	int                                                FlagIdx;                                                  // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Value;                                                    // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ItemIdx;                                                  // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FName                                       LocLabel;                                                 // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       AnnounceLocLabel;                                         // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     Comment;                                                  // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Shenmue3.S3BRallyAwardStatus
// 0x0048
struct FS3BRallyAwardStatus
{
	struct FName                                       AwardId;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FS3BRallyAwardFlag                          DataTableRow;                                             // 0x0008(0x0038) (Edit, BlueprintVisible)
	int                                                Count;                                                    // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
};

// ScriptStruct Shenmue3.S3BRallyAwardAnnouncement
// 0x0010
struct FS3BRallyAwardAnnouncement
{
	struct FName                                       AwardId;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                AnnounceCount;                                            // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct Shenmue3.S3_ExclamationCueList
// 0x0010
struct FS3_ExclamationCueList
{
	TArray<class USoundAtomCue*>                       Cues;                                                     // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Shenmue3.S3RetryRecoveryInfo
// 0x0060
struct FS3RetryRecoveryInfo
{
	TMap<int, int>                                     EventFlagMap;                                             // 0x0000(0x0050) (ZeroConstructor)
	TArray<struct FName>                               PlayCutsceneIds;                                          // 0x0050(0x0010) (ZeroConstructor)
};

// ScriptStruct Shenmue3.S3BattleRallySaveData
// 0x0010
struct FS3BattleRallySaveData
{
	TArray<struct FBTL_CourseSaveData>                 CourseRecords;                                            // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Shenmue3.TalkScriptData
// 0x0018
struct FTalkScriptData
{
	struct FString                                     Key;                                                      // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                progressIndex;                                            // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Step;                                                     // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Shenmue3.MemoData
// 0x0010
struct FMemoData
{
	int                                                page;                                                     // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                flag;                                                     // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                identifer;                                                // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsUnderline;                                              // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct Shenmue3.S3AchievementCrudeDrugInfo
// 0x0018
struct FS3AchievementCrudeDrugInfo
{
	struct FName                                       UniqueName;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x0008(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Shenmue3.S3AchievementGachaSet
// 0x0010
struct FS3AchievementGachaSet
{
	TArray<int>                                        Items;                                                    // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Shenmue3.S3AchievementMiniGameInfo
// 0x0020
struct FS3AchievementMiniGameInfo
{
	ES3MiniGameCategory                                Category;                                                 // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FName                                       Key;                                                      // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Value;                                                    // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x0014(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
};

// ScriptStruct Shenmue3.S3AchievementSubQuestInfo
// 0x0018
struct FS3AchievementSubQuestInfo
{
	int                                                EventFlag;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     QuestName;                                                // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Shenmue3.S3AchievementUnlockInfo
// 0x000C
struct FS3AchievementUnlockInfo
{
	ES3AchievementCountType                            Type;                                                     // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                UnlockCount;                                              // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ES3AchievementType                                 UnlockAchievement;                                        // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
};

// ScriptStruct Shenmue3.S3AngleRange
// 0x0008
struct FS3AngleRange
{
	float                                              Center;                                                   // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PlusMinus;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Shenmue3.AreaSpotLightList
// 0x0010
struct FAreaSpotLightList
{
	TArray<class AS3SpotLight*>                        List;                                                     // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Shenmue3.AreaPointLightList
// 0x0010
struct FAreaPointLightList
{
	TArray<class AS3PointLight*>                       List;                                                     // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Shenmue3.S3LevelStreamInfo
// 0x0020
struct FS3LevelStreamInfo
{
	struct FName                                       ID;                                                       // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
};

// ScriptStruct Shenmue3.S3AttentionEventChangeFlagInfo
// 0x0008
struct FS3AttentionEventChangeFlagInfo
{
	int                                                TargetFlagID;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ChangeFlagValue;                                          // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Shenmue3.S3AttentionLinkTargetData
// 0x0010
struct FS3AttentionLinkTargetData
{
	EAttentionLinkTargetDirection                      TargetDirection;                                          // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class AActor*                                      TargetActor;                                              // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Shenmue3.S3BLSubFlag
// 0x0018
struct FS3BLSubFlag
{
	int                                                Index;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Value;                                                    // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     Memo;                                                     // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Shenmue3.S3SkillSet
// 0x0010
struct FS3SkillSet
{
	TArray<struct FName>                               Skills;                                                   // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Shenmue3.S3BgmAreaSourceInfo
// 0x0018
struct FS3BgmAreaSourceInfo
{
	class UObject*                                     Sound;                                                    // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID;                                                       // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EBgmPriority                                       Priority;                                                 // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Fade;                                                     // 0x0011(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               FromStart;                                                // 0x0012(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0013(0x0005) MISSED OFFSET
};

// ScriptStruct Shenmue3.S3LevelDebugData
// 0x0028
struct FS3LevelDebugData
{
	struct FString                                     ReadableLevelName;                                        // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	float                                              LoadStartTime;                                            // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LoadTime;                                                 // 0x0014(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              VisibleStartTime;                                         // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              VisibleTime;                                              // 0x001C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bAlwaysLoaded;                                            // 0x0020(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct Shenmue3.S3BRallyTrophyUnlockData
// 0x0020
struct FS3BRallyTrophyUnlockData
{
	ES3AchievementType                                 Achievement;                                              // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData01[0x10];                                      // 0x0001(0x0010) UNKNOWN PROPERTY: ArrayProperty Shenmue3.S3BRallyTrophyUnlockData.Courses
	bool                                               bRequireAll;                                              // 0x0018(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
};

// ScriptStruct Shenmue3.TalkScriptContainer
// 0x0058
struct FTalkScriptContainer
{
	class UTalkScript*                                 TalkScript;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0008(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Shenmue3.TalkScriptContainer.TalkScriptAsset
	int                                                MinStep;                                                  // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxStep;                                                  // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MinTime;                                                  // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxTime;                                                  // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ENPCTalkState                                      TalkState;                                                // 0x0040(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
	struct FString                                     TalkStateString;                                          // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Shenmue3.S3SubQuestControl
// 0x0038
struct FS3SubQuestControl
{
	int                                                GlobalFlag;                                               // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                FlagMin;                                                  // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                FlagMax;                                                  // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MinTime;                                                  // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxTime;                                                  // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ES3SubQuestCondition                               PCLCondition;                                             // 0x0014(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ES3SubQuestCondition                               BSLCondition;                                             // 0x0015(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ES3SubQuestCondition                               MNLCondition;                                             // 0x0016(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ES3SubQuestCondition                               SHLCondition;                                             // 0x0017(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               TargetNPC;                                                // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Comment;                                                  // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Shenmue3.TalkScriptState
// 0x0010
struct FTalkScriptState
{
	class UTalkScript*                                 TalkScript;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ENPCTalkState                                      TalkState;                                                // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct Shenmue3.BSSetEnableScheduleData
// 0x0014
struct FBSSetEnableScheduleData
{
	int                                                StepMin;                                                  // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                StepMax;                                                  // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                StartTime;                                                // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                EndTime;                                                  // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               Enable;                                                   // 0x0010(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
};

// ScriptStruct Shenmue3.BSSetCountScheduleData
// 0x0014
struct FBSSetCountScheduleData
{
	int                                                StepMin;                                                  // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                StepMax;                                                  // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                StartTime;                                                // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                EndTime;                                                  // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Shenmue3.TalkData
// 0x0050
struct FTalkData
{
	int                                                StepMin;                                                  // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                StepMax;                                                  // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                TimeMin;                                                  // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                TimeMax;                                                  // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	ENPCTalkState                                      TalkState;                                                // 0x0010(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	struct FString                                     TalkStateString;                                          // 0x0018(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData01[0x28];                                      // 0x0028(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Shenmue3.TalkData.TalkScript
};

// ScriptStruct Shenmue3.SetEnableScheduleData
// 0x0014
struct FSetEnableScheduleData
{
	int                                                StepMin;                                                  // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                StepMax;                                                  // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                StartTime;                                                // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                EndTime;                                                  // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               Enable;                                                   // 0x0010(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
};

// ScriptStruct Shenmue3.CharaAttachParam
// 0x0040
struct FCharaAttachParam
{
	class UStaticMesh*                                 Mesh;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       CharaSocketName;                                          // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       PropSocketName;                                           // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OffsetPos;                                                // 0x0018(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    PropRotate;                                               // 0x0024(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     PropScale;                                                // 0x0030(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct Shenmue3.SimpleRequesterList
// 0x0010
struct FSimpleRequesterList
{
	TArray<class UObject*>                             Requesters;                                               // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Shenmue3.S3CharaLightCameraCut
// 0x0080
struct FS3CharaLightCameraCut
{
	struct FName                                       TargetObjectName;                                         // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  TargetTransform;                                          // 0x0010(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     TargetForwardVector;                                      // 0x0040(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     TargetUpVector;                                           // 0x004C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     TargetRightVector;                                        // 0x0058(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     CameraLocation;                                           // 0x0064(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    CameraRotation;                                           // 0x0070(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x007C(0x0004) MISSED OFFSET
};

// ScriptStruct Shenmue3.S3CharaLightingParamater
// 0x0030
struct FS3CharaLightingParamater
{
	float                                              Yaw;                                                      // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Pitch;                                                    // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Distance;                                                 // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CLIntensity;                                              // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CLInnerConeAngle;                                         // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CLOuterConeAngle;                                         // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CLAttenuationRadius;                                      // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FColor                                      CLLightColor;                                             // 0x001C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              TargetOffsetLocationX;                                    // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TargetOffsetLocationY;                                    // 0x0024(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TargetOffsetLocationZ;                                    // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               UseLight;                                                 // 0x002C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
};

// ScriptStruct Shenmue3.S3CharaLightingRange
// 0x0008
struct FS3CharaLightingRange
{
	float                                              Start;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              End;                                                      // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Shenmue3.S3CharaLightingConditions
// 0x0068
struct FS3CharaLightingConditions
{
	unsigned char                                      bCondGameTime : 1;                                        // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bCondGender : 1;                                          // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bCondAge : 1;                                             // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bCondArea : 1;                                            // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bCondRoom : 1;                                            // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bCondOrientation : 1;                                     // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bCondMainLightType : 1;                                   // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FS3CharaLightingRange>               GameTimeRanges;                                           // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TEnumAsByte<ES3CharacterGender>                    Gender;                                                   // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
	TArray<struct FS3CharaLightingRange>               AgeRanges;                                                // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<int>                                        AreaIds;                                                  // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	ES3CharaLightRoom                                  Room;                                                     // 0x0040(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
	TArray<ES3CharaLightOrientation>                   CharaOrientations;                                        // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<ES3CharaMainLightType>                      MainLightDirections;                                      // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Shenmue3.S3CharaLightingContainer
// 0x0118
struct FS3CharaLightingContainer
{
	struct FS3CharaLightingParamater                   KeyParamater;                                             // 0x0000(0x0030) (Edit, BlueprintVisible)
	struct FS3CharaLightingParamater                   FillParamater;                                            // 0x0030(0x0030) (Edit, BlueprintVisible)
	struct FS3CharaLightingParamater                   BackParamater;                                            // 0x0060(0x0030) (Edit, BlueprintVisible)
	struct FS3CharaLightingConditions                  Conditions;                                               // 0x0090(0x0068) (Edit, BlueprintVisible)
	struct FString                                     Description;                                              // 0x00F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                Priority;                                                 // 0x0108(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x010C(0x0004) MISSED OFFSET
	struct FName                                       UniqueName;                                               // 0x0110(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Shenmue3.S3CharaLightingEnvironmentParamater
// 0x0050
struct FS3CharaLightingEnvironmentParamater
{
	struct FTransform                                  WorldTransform;                                           // 0x0000(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              Intensity;                                                // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // 0x0034(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               bUse;                                                     // 0x0044(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xB];                                       // 0x0045(0x000B) MISSED OFFSET
};

// ScriptStruct Shenmue3.S3CharaLightsInBuildingInfo
// 0x0020
struct FS3CharaLightsInBuildingInfo
{
	TArray<class AS3PointLight*>                       PointLights;                                              // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class AS3SpotLight*>                        SpotLights;                                               // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Shenmue3.S3CharaLightingCurveColorParamater
// 0x0018
struct FS3CharaLightingCurveColorParamater
{
	class UCurveLinearColor*                           KeyCurveColor;                                            // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UCurveLinearColor*                           FillCurveColor;                                           // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UCurveLinearColor*                           BackCurveColor;                                           // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Shenmue3.CharaSkeletalAttachParam
// 0x0040
struct FCharaSkeletalAttachParam
{
	class USkeletalMesh*                               Mesh;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       CharaSocketName;                                          // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       PropSocketName;                                           // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OffsetPos;                                                // 0x0018(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    PropRotate;                                               // 0x0024(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     PropScale;                                                // 0x0030(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct Shenmue3.S3ClipperSample
// 0x000C
struct FS3ClipperSample
{
	EMouseShape                                        Shape;                                                    // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                Volume;                                                   // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VolumeNormalized;                                         // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Shenmue3.S3ClipperOnlyInfo
// 0x0018
struct FS3ClipperOnlyInfo
{
	struct FName                                       ClipperLabel;                                             // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     ClipperData;                                              // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Shenmue3.S3ClothesCacheInfo
// 0x0018
struct FS3ClothesCacheInfo
{
	struct FName                                       ID;                                                       // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EClothPartsType                                    PartsType;                                                // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	class UObject*                                     Object;                                                   // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Shenmue3.S3ClothesChangeInfo
// 0x0030
struct FS3ClothesChangeInfo
{
	struct FName                                       CharaName;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               Mesh;                                                     // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UMaterialInstance*>                   Materials;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<EClothPartsType>                            Types;                                                    // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Shenmue3.ComboTestInfo
// 0x0028
struct FComboTestInfo
{
	class UAnimMontage*                                Anim;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       StartSection;                                             // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NextAnimTime;                                             // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Movement;                                                 // 0x0014(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              BlendInTime;                                              // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BlendOutTime;                                             // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Shenmue3.S3ClothPartsInfo
// 0x0010
struct FS3ClothPartsInfo
{
	struct FName                                       ID;                                                       // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class US3ClothPartsDataAsset*                      DataAsset;                                                // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Shenmue3.S3ClothPartsArray
// 0x0010
struct FS3ClothPartsArray
{
	TArray<struct FS3ClothPartsInfo>                   Array;                                                    // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct Shenmue3.S3ClothPartsBind
// 0x0018
struct FS3ClothPartsBind
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FName>                               Exclude;                                                  // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct Shenmue3.S3CutsceneSubtitleLabelList
// 0x0010
struct FS3CutsceneSubtitleLabelList
{
	TArray<struct FName>                               LabelList;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Shenmue3.S3CutsceneTimeSchedule
// 0x0010
struct FS3CutsceneTimeSchedule
{
	struct FName                                       CutsceneName;                                             // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Hour;                                                     // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Enable;                                                   // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ES3CutSceneTimeSchduleType                         Type;                                                     // 0x000D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               StartExec;                                                // 0x000E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Stock;                                                    // 0x000F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Shenmue3.S3DetectActionParam
// 0x0018
struct FS3DetectActionParam
{
	ES3ActionIconType                                  Type;                                                     // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                ButtonIndex;                                              // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IconAnim;                                                 // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Blink;                                                    // 0x0009(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               PlaySE;                                                   // 0x000A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Enable;                                                   // 0x000B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Waiting;                                                  // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	class AActor*                                      Actor;                                                    // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Shenmue3.S3DetectActionActorList
// 0x0010
struct FS3DetectActionActorList
{
	TArray<class AActor*>                              Array;                                                    // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Shenmue3.S3DojoNamePlateData
// 0x0020
struct FS3DojoNamePlateData
{
	struct FVector                                     Position;                                                 // 0x0000(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FString                                     Label;                                                    // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Shenmue3.S3DownloadableContentInfo
// 0x0020
struct FS3DownloadableContentInfo
{
	ES3DownloadableContentId                           ContentId;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     ContentPath;                                              // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	int                                                ChunkId;                                                  // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bEnabledInEditor;                                         // 0x001C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
};

// ScriptStruct Shenmue3.S3LookAtParamater
// 0x0008
struct FS3LookAtParamater
{
	float                                              Yaw;                                                      // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Pitch;                                                    // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Shenmue3.S3CharacterLookAtWholeBodyParamater
// 0x0030
struct FS3CharacterLookAtWholeBodyParamater
{
	struct FS3LookAtParamater                          Eyes;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible)
	struct FS3LookAtParamater                          head;                                                     // 0x0008(0x0008) (Edit, BlueprintVisible)
	struct FS3LookAtParamater                          Neck;                                                     // 0x0010(0x0008) (Edit, BlueprintVisible)
	struct FS3LookAtParamater                          BodyBreast;                                               // 0x0018(0x0008) (Edit, BlueprintVisible)
	struct FS3LookAtParamater                          BodyWaist;                                                // 0x0020(0x0008) (Edit, BlueprintVisible)
	struct FS3LookAtParamater                          BodyLumbus;                                               // 0x0028(0x0008) (Edit, BlueprintVisible)
};

// ScriptStruct Shenmue3.FaceBlendInfo
// 0x0010
struct FFaceBlendInfo
{
	struct FName                                       ID;                                                       // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Blend;                                                    // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Max;                                                      // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Shenmue3.ClipperControlParam
// 0x0010
struct FClipperControlParam
{
	float                                              OpenBlendScale;                                           // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ChangeBlendScale;                                         // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CloseBlendScale;                                          // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              VolumeInterpSpeed;                                        // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Shenmue3.S3CharacterLookAtLocation
// 0x0060
struct FS3CharacterLookAtLocation
{
	struct FVector                                     EyeC;                                                     // 0x0000(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     EyeL;                                                     // 0x000C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     EyeR;                                                     // 0x0018(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     head;                                                     // 0x0024(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     Neck;                                                     // 0x0030(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     BodyLumbus;                                               // 0x003C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     BodyWaist;                                                // 0x0048(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     BodyBreast;                                               // 0x0054(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
};

// ScriptStruct Shenmue3.S3CharacterLookAtBlendedWeight
// 0x000C
struct FS3CharacterLookAtBlendedWeight
{
	float                                              WeightEyes;                                               // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WeightNeck;                                               // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WeightBody;                                               // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Shenmue3.S3CharacterLookAtIKCorrectionWeight
// 0x0004
struct FS3CharacterLookAtIKCorrectionWeight
{
	float                                              WeightHands;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Shenmue3.S3FadeMaterialSwapData
// 0x0040
struct FS3FadeMaterialSwapData
{
	class UMaterialInterface*                          FadeMaterial;                                             // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               VectorParams;                                             // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FName>                               ScalarParams;                                             // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FName>                               TextureParams;                                            // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               AutoFindParams;                                           // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
};

// ScriptStruct Shenmue3.S3GameTimeEventList
// 0x0020
struct FS3GameTimeEventList
{
	struct FString                                     Memo;                                                     // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<float>                                      Time;                                                     // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Shenmue3.S3CustomTimeEventList
// 0x0020
struct FS3CustomTimeEventList
{
	TArray<float>                                      TimeList;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<int>                                        TimeRankList;                                             // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Shenmue3.S3ChairPointStruct
// 0x0048
struct FS3ChairPointStruct
{
	struct FVector                                     Point;                                                    // 0x0000(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FName                                       CharaName;                                                // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EChairOccupied                                     State;                                                    // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
	TArray<struct FTransform>                          StartPoint;                                               // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<int>                                        StartPointDir;                                            // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class AS3Character*                                TargetChara;                                              // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Shenmue3.S3ChairResultStruct
// 0x0070
struct FS3ChairResultStruct
{
	struct FTransform                                  Start;                                                    // 0x0000(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	struct FTransform                                  End;                                                      // 0x0030(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	int                                                Value;                                                    // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Option;                                                   // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0068(0x0008) MISSED OFFSET
};

// ScriptStruct Shenmue3.S3GimmickLightCastShadowInfo
// 0x0018
struct FS3GimmickLightCastShadowInfo
{
	TScriptInterface<class US3GimmickLightInterface>   Light;                                                    // 0x0000(0x0030) (ZeroConstructor, IsPlainOldData)
	bool                                               bEnable;                                                  // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bCastShadow;                                              // 0x0011(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0012(0x0002) MISSED OFFSET
	float                                              Distance;                                                 // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Shenmue3.S3Player180ReturnRandomText
// 0x0010
struct FS3Player180ReturnRandomText
{
	int                                                Probability;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FName                                       TextLabel;                                                // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Shenmue3.S3Player180ReturnRandomTextData
// 0x0010
struct FS3Player180ReturnRandomTextData
{
	TArray<struct FS3Player180ReturnRandomText>        TextData;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Shenmue3.S3HakkachanAwardPreviewData
// 0x0018
struct FS3HakkachanAwardPreviewData
{
	int                                                Count;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FName                                       AwardId;                                                  // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bOwned;                                                   // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHideName;                                                // 0x0011(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bShowCount;                                               // 0x0012(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x0013(0x0005) MISSED OFFSET
};

// ScriptStruct Shenmue3.BufferedInputData
// 0x0010
struct FBufferedInputData
{
	struct FName                                       ActionIdentifier;                                         // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct Shenmue3.S3ItemDataTable
// 0x0070 (0x0078 - 0x0008)
struct FS3ItemDataTable : public FTableRowBase
{
	struct FString                                     Name;                                                     // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Description;                                              // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	ES3ItemDataKind                                    Kind;                                                     // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ES3ItemDataGroup                                   Group;                                                    // 0x0029(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ES3ItemDataRarity                                  Rarity;                                                   // 0x002A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x002B(0x0001) MISSED OFFSET
	int                                                LimitCount;                                               // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Value;                                                    // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ES3ItemEffectTarget                                ValueTarget;                                              // 0x0034(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
	int                                                BuyPrice;                                                 // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                InitialNum;                                               // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x28];                                      // 0x0040(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Shenmue3.S3ItemDataTable.StaticMesh
	float                                              EffectOffsetFront;                                        // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EffectOffsetHeight;                                       // 0x006C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUsedInTalk;                                              // 0x0070(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUsedInHakkason;                                          // 0x0071(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUsedInChobu;                                             // 0x0072(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x0073(0x0001) MISSED OFFSET
	int                                                DLCFlag;                                                  // 0x0074(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Shenmue3.S3CharaLoadingBackInfo
// 0x0030
struct FS3CharaLoadingBackInfo
{
	class UTexture2D*                                  Image;                                                    // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0008(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Shenmue3.S3CharaLoadingBackInfo.ImageSoft
};

// ScriptStruct Shenmue3.S3CharaLoadingCharaInfo
// 0x0050
struct FS3CharaLoadingCharaInfo
{
	class UTexture2D*                                  Image;                                                    // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0008(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Shenmue3.S3CharaLoadingCharaInfo.ImageSoft
	struct FString                                     Name;                                                     // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Description;                                              // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Shenmue3.QTECommandCheckStruct
// 0x0008
struct FQTECommandCheckStruct
{
	int                                                Input;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	Enum_QTETitlePlayList                              CommandContext;                                           // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
};

// ScriptStruct Shenmue3.QTETitleCommandTableRowBase
// 0x0018 (0x0020 - 0x0008)
struct FQTETitleCommandTableRowBase : public FTableRowBase
{
	struct FName                                       QTETitleCommands;                                         // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHideLeft;                                                // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHideMiddle;                                              // 0x0011(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHideRight;                                               // 0x0012(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0013(0x0005) MISSED OFFSET
	struct FName                                       Speed;                                                    // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Shenmue3.ODGiftDataTableRowBase
// 0x0010 (0x0018 - 0x0008)
struct FODGiftDataTableRowBase : public FTableRowBase
{
	struct FName                                       gift_id;                                                  // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstance*                           pocket_mat;                                               // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Shenmue3.S3MiniGameNameData
// 0x0010
struct FS3MiniGameNameData
{
	TArray<struct FString>                             LinkMiniGameObjectNames;                                  // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Shenmue3.S3MiniGameNPCLinkData
// 0x0058 (0x0060 - 0x0008)
struct FS3MiniGameNPCLinkData : public FTableRowBase
{
	struct FGameplayTag                                CharacterID;                                              // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly)
	TMap<struct FName, struct FS3MiniGameNameData>     NPCLinkMiniGames;                                         // 0x0010(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Shenmue3.CupMagicDataTableRowBase
// 0x0018 (0x0020 - 0x0008)
struct FCupMagicDataTableRowBase : public FTableRowBase
{
	int                                                shuffle_count;                                            // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ball_count;                                               // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                answer_num;                                               // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              max_speed;                                                // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              min_speed;                                                // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct Shenmue3.AnimalRaceSpeedTableRowBase
// 0x0008 (0x0010 - 0x0008)
struct FAnimalRaceSpeedTableRowBase : public FTableRowBase
{
	float                                              Speed;                                                    // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct Shenmue3.S3FishingInfo
// 0x0028
struct FS3FishingInfo
{
	struct FString                                     StoreId;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     RodId;                                                    // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FDateTime                                   RentalDate;                                               // 0x0020(0x0008) (Edit, BlueprintVisible)
};

// ScriptStruct Shenmue3.S3MiniGameProgressSaveInt
// 0x0018
struct FS3MiniGameProgressSaveInt
{
	struct FName                                       Key;                                                      // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        Values;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Shenmue3.S3MiniGameProgressSaveFloat
// 0x0018
struct FS3MiniGameProgressSaveFloat
{
	struct FName                                       Key;                                                      // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<float>                                      Values;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Shenmue3.S3MiniGameProgressSaveString
// 0x0018
struct FS3MiniGameProgressSaveString
{
	struct FName                                       Key;                                                      // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             Values;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Shenmue3.S3MiniGameProgressSaveData
// 0x0030
struct FS3MiniGameProgressSaveData
{
	TArray<struct FS3MiniGameProgressSaveInt>          IntValues;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FS3MiniGameProgressSaveFloat>        FloatValues;                                              // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FS3MiniGameProgressSaveString>       StringValues;                                             // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Shenmue3.S3FaceMontageData
// 0x0040
struct FS3FaceMontageData
{
	TArray<struct FName>                               CharacterNames;                                           // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UAnimMontage*                                NeutralFaceMontage;                                       // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UAnimMontage*>                        EmotionMontages;                                          // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UAnimMontage*>                        ClipperMontages;                                          // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UAnimMontage*                                EyelidMontage;                                            // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Shenmue3.NPCAttachInfo
// 0x0060
struct FNPCAttachInfo
{
	class UStaticMeshComponent*                        StatcMeshComp;                                            // 0x0000(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMeshComp;                                         // 0x0008(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class AS3NPCAttachmentActor*                       Actor;                                                    // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       Socket;                                                   // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  BeforeTransform;                                          // 0x0020(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsSkeletalMesh;                                          // 0x0050(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsSpawn;                                                 // 0x0051(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0xE];                                       // 0x0052(0x000E) MISSED OFFSET
};

// ScriptStruct Shenmue3.HaveItemAttachSetting
// 0x0038
struct FHaveItemAttachSetting
{
	struct FName                                       Socket;                                                   // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UStaticMesh*                                 StatcMesh;                                                // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsSkeletalMesh;                                          // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	class USkeletalMesh*                               SkeletalMesh;                                             // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      AnimInstance;                                             // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      ActorClass;                                               // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EHaveItemCharType                                  CharType;                                                 // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCollision;                                               // 0x0031(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0032(0x0006) MISSED OFFSET
};

// ScriptStruct Shenmue3.S3AnimSelectorRandomAnim
// 0x0010
struct FS3AnimSelectorRandomAnim
{
	float                                              Weight;                                                   // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class US3NPCAnimSelector*                          AnimSelector;                                             // 0x0008(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct Shenmue3.NPCHighPriorityShowSetting
// 0x0030
struct FNPCHighPriorityShowSetting
{
	int                                                MinStep;                                                  // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MaxStep;                                                  // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                FlagIndex;                                                // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                FlagValueMin;                                             // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                FlagValueMax;                                             // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	TArray<struct FGameplayTag>                        NPCIDs;                                                   // 0x0018(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               bEnabled;                                                 // 0x0028(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
};

// ScriptStruct Shenmue3.NPCFriendshipCondition
// 0x0030
struct FNPCFriendshipCondition
{
	TArray<struct FGameplayTag>                        NPCIDs;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TEnumAsByte<ES3CharacterGender>                    Gender;                                                   // 0x0010(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	int                                                AgeMin;                                                   // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                AgeMax;                                                   // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                StepMin;                                                  // 0x001C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                StepMax;                                                  // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                FlagIndex;                                                // 0x0024(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                FlagValueMin;                                             // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                FlagValueMax;                                             // 0x002C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Shenmue3.AttachObjectOffset
// 0x0020
struct FAttachObjectOffset
{
	struct FName                                       MeshName;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x0008(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FRotator                                    Rotator;                                                  // 0x0014(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
};

// ScriptStruct Shenmue3.OverwriteAnims
// 0x0040
struct FOverwriteAnims
{
	class UAnimSequence*                               IdleSequence;                                             // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               SitLoopSequence;                                          // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               StandTalkSequence;                                        // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<class UAnimSequence*>                       RandomStandTalkSequences;                                 // 0x0018(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class UAnimSequence*                               SitTalkSequence;                                          // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<class UAnimSequence*>                       RandomSitTalkSequences;                                   // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Shenmue3.POIUniqueAnims
// 0x0010
struct FPOIUniqueAnims
{
	TArray<class UAnimSequence*>                       RandomAnimations;                                         // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Shenmue3.NPCCharacterTag
// 0x0018
struct FNPCCharacterTag
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     Description;                                              // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct Shenmue3.NPCTalkEventInfo
// 0x0008
struct FNPCTalkEventInfo
{
	bool                                               bTalkingSit;                                              // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              CauseSitHeightDifference;                                 // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Shenmue3.PendingTask
// 0x0018
struct FPendingTask
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class US3NPCScheduleTask*                          Task;                                                     // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bMarkedForDeletion;                                       // 0x0010(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct Shenmue3.FlagConditionChange
// 0x0028
struct FFlagConditionChange
{
	int                                                FlagIndex;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                FlagValue;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EConditionChangeType                               ChangeType;                                               // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	int                                                SetValue;                                                 // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsPermanent;                                              // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	TArray<struct FGameplayTag>                        NPCIDs;                                                   // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Shenmue3.FlagStepChange
// 0x000C
struct FFlagStepChange
{
	int                                                FlagIndex;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                FlagValue;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                NewStep;                                                  // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Shenmue3.TurnAnims
// 0x0048
struct FTurnAnims
{
	class UAnimSequence*                               F;                                                        // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               R45;                                                      // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               R90;                                                      // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               R135;                                                     // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               R180;                                                     // 0x0020(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               L180;                                                     // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               L135;                                                     // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               L90;                                                      // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               L45;                                                      // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Shenmue3.TurnAnims3
// 0x0018
struct FTurnAnims3
{
	class UAnimSequence*                               F;                                                        // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               R90;                                                      // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               L90;                                                      // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Shenmue3.LeftRightAnims
// 0x0010
struct FLeftRightAnims
{
	class UAnimSequence*                               Left;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               Right;                                                    // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Shenmue3.DoorAnims
// 0x0020
struct FDoorAnims
{
	class UAnimSequence*                               Front_L;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               Back_L;                                                   // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               Front_R;                                                  // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               Back_R;                                                   // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Shenmue3.DoubleDoorAnims
// 0x0010
struct FDoubleDoorAnims
{
	class UAnimSequence*                               Front;                                                    // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               Back;                                                     // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Shenmue3.BlendSpaceTurnAroundAnims
// 0x0010
struct FBlendSpaceTurnAroundAnims
{
	class UBlendSpace1D*                               TwoStep;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBlendSpace1D*                               ThreeStep;                                                // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Shenmue3.StairAnims
// 0x0010
struct FStairAnims
{
	class UAnimSequence*                               UpLoop;                                                   // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               DownLoop;                                                 // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Shenmue3.FriendshipAnims
// 0x0008
struct FFriendshipAnims
{
	class UAnimMontage*                                GreetingMontage;                                          // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Shenmue3.SteppingAnims
// 0x0010
struct FSteppingAnims
{
	class UAnimMontage*                                Stepping_L;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Stepping_R;                                               // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Shenmue3.POIAnims
// 0x0030
struct FPOIAnims
{
	TArray<class UAnimSequence*>                       IdleLoops;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<class UAnimSequence*>                       TalkLoops;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<class UAnimSequence*>                       LookAroundLoops;                                          // 0x0020(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Shenmue3.AdjustBlendSpaces
// 0x0010
struct FAdjustBlendSpaces
{
	class UBlendSpace*                                 LeftAdjust;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBlendSpace*                                 RightAdjust;                                              // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Shenmue3.NPCPOICommand
// 0x0040
struct FNPCPOICommand
{
	ENPCPOICommandType                                 Type;                                                     // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	ENPCPOIAnimationCategory                           AnimationCategory;                                        // 0x0001(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	float                                              AnimationTimeMinute;                                      // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                AnimationUniqueIndex;                                     // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x34];                                      // 0x000C(0x0034) MISSED OFFSET
};

// ScriptStruct Shenmue3.NPCPOICondition
// 0x0028
struct FNPCPOICondition
{
	int                                                RandomRatio;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<struct FGameplayTag>                        NPCIDs;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TEnumAsByte<ES3CharacterGender>                    Gender;                                                   // 0x0018(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	int                                                AgeMin;                                                   // 0x001C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                AgeMax;                                                   // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct Shenmue3.S3NPCScheduleStepRange
// 0x0008
struct FS3NPCScheduleStepRange
{
	int                                                MinStep;                                                  // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxStep;                                                  // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Shenmue3.NPCTaskDetails
// 0x0008
struct FNPCTaskDetails
{
	bool                                               bSchedule_ForceExecute;                                   // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bAppear_FastFadein;                                       // 0x0001(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bAppear_Indoor;                                           // 0x0002(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bMove_DisablePOI;                                         // 0x0003(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bMove_POIUniqueOnly;                                      // 0x0004(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bMove_DisableTeleportAtAbort;                             // 0x0005(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bMove_NextTaskAtFinish;                                   // 0x0006(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EFNPCTaskInstruction                               Instruction;                                              // 0x0007(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Shenmue3.NPCTaskFinishCommand
// 0x0010
struct FNPCTaskFinishCommand
{
	EFNPCTaskFinishCommandType                         Type;                                                     // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                Value1;                                                   // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Value2;                                                   // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bStart;                                                   // 0x000C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct Shenmue3.PlayerCameraGetNearRotResult
// 0x0010
struct FPlayerCameraGetNearRotResult
{
	bool                                               flag;                                                     // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              Rot1;                                                     // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Rot2;                                                     // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               SignFlag;                                                 // 0x000C(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct Shenmue3.PlayerCameraCalcCenterResult
// 0x001C
struct FPlayerCameraCalcCenterResult
{
	struct FVector                                     CameraC;                                                  // 0x0000(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FVector                                     CameraV;                                                  // 0x000C(0x000C) (BlueprintVisible, IsPlainOldData)
	float                                              RotY;                                                     // 0x0018(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Shenmue3.TalkableCacheData
// 0x0010
struct FTalkableCacheData
{
	class US3TalkComponentBase*                        TalkComponent;                                            // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              TimeToExpire;                                             // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bResult;                                                  // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct Shenmue3.MapRangeStruct
// 0x0010
struct FMapRangeStruct
{
	struct FVector2D                                   InRange;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   OutRange;                                                 // 0x0008(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
};

// ScriptStruct Shenmue3.S3PlayerExpCollectionSaveData
// 0x0050
struct FS3PlayerExpCollectionSaveData
{
	TMap<struct FName, float>                          AttributePoints;                                          // 0x0000(0x0050) (ZeroConstructor)
};

// ScriptStruct Shenmue3.S3BattleStatsSaveData
// 0x00C0
struct FS3BattleStatsSaveData
{
	float                                              Health;                                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FS3PlayerExpCollectionSaveData              SkillExp;                                                 // 0x0008(0x0050)
	struct FS3PlayerExpCollectionSaveData              KunFuExp;                                                 // 0x0058(0x0050)
	TArray<struct FS3SkillSet>                         SkillSets;                                                // 0x00A8(0x0010) (ZeroConstructor)
	int                                                SelectedSkillSetIndex;                                    // 0x00B8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DifficultySetting;                                        // 0x00BC(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Shenmue3.NPCTalkData
// 0x0001
struct FNPCTalkData
{
	bool                                               bFirstContact;                                            // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Shenmue3.TalkScheduleData
// 0x000C
struct FTalkScheduleData
{
	bool                                               Enable;                                                   // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               EnableSet;                                                // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	int                                                Count;                                                    // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               CountSet;                                                 // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
};

// ScriptStruct Shenmue3.S3BattleRallyInfo
// 0x0020
struct FS3BattleRallyInfo
{
	float                                              BestCourseTime;                                           // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<float>                                      BestMissionTimes;                                         // 0x0008(0x0010) (ZeroConstructor)
	bool                                               bClearFlag;                                               // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
};

// ScriptStruct Shenmue3.S3IntMinMax
// 0x0008
struct FS3IntMinMax
{
	int                                                Min;                                                      // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Max;                                                      // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Shenmue3.S3FlagRange
// 0x0004 (0x000C - 0x0008)
struct FS3FlagRange : public FS3IntMinMax
{
	int                                                FlagIndex;                                                // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Shenmue3.S3SaveInitialParam
// 0x0020
struct FS3SaveInitialParam
{
	int                                                Step;                                                     // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x0004(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              Time;                                                     // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FDateTime                                   Date;                                                     // 0x0018(0x0008) (Edit, BlueprintVisible)
};

// ScriptStruct Shenmue3.S3SaveOverrideParam
// 0x0050
struct FS3SaveOverrideParam
{
	struct FTransform                                  PlayerTransform;                                          // 0x0000(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    CameraRot;                                                // 0x0030(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              CameraDistance;                                           // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GameTime;                                                 // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0044(0x000C) MISSED OFFSET
};

// ScriptStruct Shenmue3.S3SearchStep
// 0x0048
struct FS3SearchStep
{
	bool                                               bCameraLock;                                              // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FVector                                     CameraLocation;                                           // 0x0004(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    CameraRotation;                                           // 0x0010(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              CameraFOVOffset;                                          // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       MontageSegment;                                           // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       CancelSegment;                                            // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bStopPoint;                                               // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEndSegment;                                              // 0x0031(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0032(0x0002) MISSED OFFSET
	float                                              InterpTime;                                               // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       ScriptLabel;                                              // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SearchTextDisplayTimeOverride;                            // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ESearchActionIcon                                  ActionIconType;                                           // 0x0044(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0045(0x0003) MISSED OFFSET
};

// ScriptStruct Shenmue3.S3SearchActionTiming
// 0x0068
struct FS3SearchActionTiming
{
	ESearchTiming                                      Timing;                                                   // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     ItemId;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     MemoId;                                                   // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FName                                       CutsceneId;                                               // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTalkScript*                                 ACEventScript;                                            // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     EventFlag;                                                // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     SearchFlag;                                               // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bComplete;                                                // 0x0058(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bChangeSwitch;                                            // 0x0059(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnabledSearchCount;                                      // 0x005A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x005B(0x0001) MISSED OFFSET
	float                                              EventDelayTime;                                           // 0x005C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0060(0x0008) MISSED OFFSET
};

// ScriptStruct Shenmue3.S3CharacterProfile
// 0x00C0 (0x00C8 - 0x0008)
struct FS3CharacterProfile : public FTableRowBase
{
	int                                                CharaNumber;                                              // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FString                                     CharaName;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     Furigana;                                                 // 0x0020(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     DisplayName;                                              // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     DisplayRubi;                                              // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     DisplayNameAlphabet;                                      // 0x0050(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     DisplayNameHans;                                          // 0x0060(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     DisplayNameHant;                                          // 0x0070(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      DefaultDisplayFlag;                                       // 0x0080(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0081(0x0007) MISSED OFFSET
	struct FString                                     area;                                                     // 0x0088(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     CharaRank;                                                // 0x0098(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TEnumAsByte<ES3CharacterGender>                    Gender;                                                   // 0x00A8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00A9(0x0003) MISSED OFFSET
	int                                                Age;                                                      // 0x00AC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Height;                                                   // 0x00B0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Weight;                                                   // 0x00B4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ES3HandednessType>                     Handedness;                                               // 0x00B8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x00B9(0x0007) MISSED OFFSET
	struct FName                                       Blood;                                                    // 0x00C0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Shenmue3.S3TextData
// 0x0068
struct FS3TextData
{
	struct FName                                       Label;                                                    // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	struct FString                                     TalkText;                                                 // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     TalkClipper_JP;                                           // 0x0018(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     TalkClipper_EN;                                           // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     TalkClipper_ZH;                                           // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     ItemName;                                                 // 0x0048(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     ItemDescription;                                          // 0x0058(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Shenmue3.S3TextDataPreloadAssetInfo
// 0x0010
struct FS3TextDataPreloadAssetInfo
{
	ES3TextPathType                                    Type;                                                     // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FName                                       Label;                                                    // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Shenmue3.S3WaveElement
// 0x0020
struct FS3WaveElement
{
	float                                              Wavelength;                                               // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Amplitude;                                                // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Speed;                                                    // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Steepness;                                                // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Direction;                                                // 0x0010(0x000C) (Edit, IsPlainOldData)
	float                                              Weight;                                                   // 0x001C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct Shenmue3.S3BuoyantActor
// 0x0028
struct FS3BuoyantActor
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct Shenmue3.S3RainParam
// 0x0014
struct FS3RainParam
{
	float                                              Strength1;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Strength2;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Strength3;                                                // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Speed;                                                    // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OpacityMultiplier;                                        // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Shenmue3.ParentMaterial
// 0x0010
struct FParentMaterial
{
	int                                                Index;                                                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FName                                       TextureParameterName;                                     // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Shenmue3.VehicleEngineDatum
// 0x0014
struct FVehicleEngineDatum
{
	float                                              FadeInRPMStart;                                           // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FadeInRPMEnd;                                             // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FadeOutRPMStart;                                          // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FadeOutRPMEnd;                                            // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxPitchMultiplier;                                       // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Shenmue3.AnimNode_S3DistanceDriver
// 0x0098 (0x00F0 - 0x0058)
struct FAnimNode_S3DistanceDriver : public FAnimNode_AssetPlayerBase
{
	class UAnimSequenceBase*                           Sequence;                                                 // 0x0058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Distance;                                                 // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
	bool                                               bShouldLoop;                                              // 0x0068(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bTeleportToExplicitTime;                                  // 0x0069(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x006A(0x0002) MISSED OFFSET
	float                                              StartPosition;                                            // 0x006C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESequenceEvalReinit>                   ReinitializationBehavior;                                 // 0x0070(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0071(0x0007) MISSED OFFSET
	struct FName                                       RotationIKBone;                                           // 0x0078(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bReinitialized;                                           // 0x0080(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bUseRotationCurve;                                        // 0x0081(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bForceStrictlyDescending;                                 // 0x0082(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x0083(0x0001) MISSED OFFSET
	float                                              TargetYaw;                                                // 0x0084(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0xC];                                       // 0x0088(0x000C) MISSED OFFSET
	float                                              ExtractedYaw;                                             // 0x0094(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x8];                                       // 0x0098(0x0008) MISSED OFFSET
	struct FTransform                                  ComponentTransform;                                       // 0x00A0(0x0030) (BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x20];                                      // 0x00D0(0x0020) MISSED OFFSET
};

// ScriptStruct Shenmue3.AnimNode_S3FullBodyIK
// 0x0060 (0x0178 - 0x0118)
struct FAnimNode_S3FullBodyIK : public FAnimNode_SkeletalControlBase
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x0118(0x0060) MISSED OFFSET
};

// ScriptStruct Shenmue3.AnimNode_S3LegIK
// 0x0018 (0x0160 - 0x0148)
struct FAnimNode_S3LegIK : public FAnimNode_LegIK
{
	TArray<struct FTransform>                          IKTargetOverrides;                                        // 0x0148(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TEnumAsByte<ERelativeTransformSpace>               InputSpace;                                               // 0x0158(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0159(0x0007) MISSED OFFSET
};

// ScriptStruct Shenmue3.AnimNode_S3LookAt
// 0x0068 (0x0180 - 0x0118)
struct FAnimNode_S3LookAt : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              BoneToModify;                                             // 0x0118(0x0018) (Edit)
	struct FVector                                     LookAtLocation;                                           // 0x0130(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FAxis                                       LookAt_Axis;                                              // 0x013C(0x0010) (Edit)
	struct FAxis                                       LookUp_Axis;                                              // 0x014C(0x0010) (Edit)
	float                                              PreClampAlpha;                                            // 0x015C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              YawAlpha;                                                 // 0x0160(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PitchAlpha;                                               // 0x0164(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LookAtClampYaw;                                           // 0x0168(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PitchToReturnYaw;                                         // 0x016C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LookAtClampPitch;                                         // 0x0170(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TooFarYawRatio;                                           // 0x0174(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TooFarPitchRatio;                                         // 0x0178(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x017C(0x0004) MISSED OFFSET
};

// ScriptStruct Shenmue3.AnimNode_S3ScaleRootMotion
// 0x0020 (0x0050 - 0x0030)
struct FAnimNode_S3ScaleRootMotion : public FAnimNode_Base
{
	struct FPoseLink                                   SourcePose;                                               // 0x0030(0x0018) (Edit, BlueprintVisible)
	float                                              SpeedScaling;                                             // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
};

// ScriptStruct Shenmue3.AnimNode_S3SpeedWarping
// 0x0038 (0x0180 - 0x0148)
struct FAnimNode_S3SpeedWarping : public FAnimNode_LegIK
{
	struct FBoneReference                              FKHipBone;                                                // 0x0148(0x0018) (Edit)
	float                                              MinSpeed;                                                 // 0x0160(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxSpeed;                                                 // 0x0164(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     MovementDirection;                                        // 0x0168(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              SpeedScaling;                                             // 0x0174(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableDebugDrawing;                                      // 0x0178(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0179(0x0007) MISSED OFFSET
};

// ScriptStruct Shenmue3.AnimNode_S3TwoBoneIK
// 0x0098 (0x01B0 - 0x0118)
struct FAnimNode_S3TwoBoneIK : public FAnimNode_SkeletalControlBase
{
	float                                              MeshInterpSpeed;                                          // 0x0118(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FootIKBlendLandingSpeed;                                  // 0x011C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FootIKBlendCollideSpeed;                                  // 0x0120(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FootIKBlendLiftSpeed;                                     // 0x0124(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxFootIKOffset;                                          // 0x0128(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LandingBounceDistance;                                    // 0x012C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxLandingDistance;                                       // 0x0130(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MeshInterpClampDistance;                                  // 0x0134(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FootLandingIgnoreMinThreshold;                            // 0x0138(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FootLandingIgnoreFullThreshold;                           // 0x013C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StartStretchRatio;                                        // 0x0140(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxStretchScale;                                          // 0x0144(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TraceRadius;                                              // 0x0148(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x014C(0x0004) MISSED OFFSET
	struct FName                                       TraceProfileName;                                         // 0x0150(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LeftLegLandingWeight;                                     // 0x0158(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RightLegLandingWeight;                                    // 0x015C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Reset;                                                    // 0x0160(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0161(0x0007) MISSED OFFSET
	TArray<class AActor*>                              ignoreActors;                                             // 0x0168(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData02[0x38];                                      // 0x0178(0x0038) MISSED OFFSET
};

// ScriptStruct Shenmue3.S3GachaSetTable
// 0x0028 (0x0030 - 0x0008)
struct FS3GachaSetTable : public FTableRowBase
{
	int                                                Index;                                                    // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FString                                     ItemId;                                                   // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     SetId;                                                    // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Shenmue3.S3GameGift
// 0x0010
struct FS3GameGift
{
	struct FName                                       ItemId;                                                   // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Quantity;                                                 // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct Shenmue3.S3GiftDataTable
// 0x0010 (0x0018 - 0x0008)
struct FS3GiftDataTable : public FTableRowBase
{
	TArray<struct FS3GameGift>                         GiftList;                                                 // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Shenmue3.MG_ODDataTableHandle
// 0x0008
struct FMG_ODDataTableHandle
{
	class UDataTable*                                  DataTable;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Shenmue3.ForkliftSettingTableRowBase
// 0x0008 (0x0010 - 0x0008)
struct FForkliftSettingTableRowBase : public FTableRowBase
{
	float                                              throttle_rate;                                            // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              steering_rate;                                            // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Shenmue3.S3BgmChangeInfo
// 0x0010
struct FS3BgmChangeInfo
{
	class USoundAtomCue*                               Sound;                                                    // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ES3DayTimeEvent                                    StartTime;                                                // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ES3DayTimeEvent                                    EndTime;                                                  // 0x0009(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x000A(0x0006) MISSED OFFSET
};

// ScriptStruct Shenmue3.S3BgmTable
// 0x0058 (0x0060 - 0x0008)
struct FS3BgmTable : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0008(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Shenmue3.S3BgmTable.CueSheet
	struct FString                                     CueName;                                                  // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Category;                                                 // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Comment;                                                  // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Shenmue3.S3BuildingSEParam
// 0x0030
struct FS3BuildingSEParam
{
	class USoundAtomCue*                               Sound;                                                    // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ES3SEType                                          Type;                                                     // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	class USoundAttenuation*                           Attenuation;                                              // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x0018(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	int                                                StartTime;                                                // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EndTime;                                                  // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Interval;                                                 // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Shenmue3.S3CharaLightingParamaterRow
// 0x0120 (0x0128 - 0x0008)
struct FS3CharaLightingParamaterRow : public FTableRowBase
{
	struct FName                                       GroupId;                                                  // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FS3CharaLightingContainer                   CharaLightingContainer;                                   // 0x0010(0x0118) (Edit, BlueprintVisible)
};

// ScriptStruct Shenmue3.S3MemoryUsageInfo
// 0x0028
struct FS3MemoryUsageInfo
{
	int                                                RenderTarget;                                             // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Texture;                                                  // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                UniformBuffer;                                            // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                IndexBuffer;                                              // 0x000C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                VertexBuffer;                                             // 0x0010(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                PS4Onion;                                                 // 0x0014(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                PS4Garlic;                                                // 0x0018(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                TotalGPU;                                                 // 0x001C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                CriWare;                                                  // 0x0020(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                TotalCPU;                                                 // 0x0024(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Shenmue3.S3VoiceLanguageInfo
// 0x0030 (0x0038 - 0x0008)
struct FS3VoiceLanguageInfo : public FTableRowBase
{
	struct FString                                     Language;                                                 // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Country;                                                  // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Memo;                                                     // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Shenmue3.S3LocaleInfo
// 0x0030 (0x0038 - 0x0008)
struct FS3LocaleInfo : public FTableRowBase
{
	struct FString                                     Language;                                                 // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Country;                                                  // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Memo;                                                     // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Shenmue3.S3HakkachanAwardDataEntry
// 0x0028 (0x0030 - 0x0008)
struct FS3HakkachanAwardDataEntry : public FTableRowBase
{
	int                                                Count;                                                    // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FName                                       HakkaCourse;                                              // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       BattleCourse;                                             // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       BattleParam;                                              // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       Other;                                                    // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Shenmue3.S3ItemLocalizeTextDataTable
// 0x0028 (0x0030 - 0x0008)
struct FS3ItemLocalizeTextDataTable : public FTableRowBase
{
	struct FName                                       ItemName;                                                 // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     Label_name;                                               // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Label_des;                                                // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Shenmue3.S3StaticMeshMergeKey
// 0x0040
struct FS3StaticMeshMergeKey
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Shenmue3.S3StaticMeshMergeKey.StaticMesh
	bool                                               bNegativeScale;                                           // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bHasAttentionComponents;                                  // 0x0029(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bHasInstanceVertexColors;                                 // 0x002A(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x002B(0x0005) MISSED OFFSET
	unsigned char                                      UnknownData02[0x10];                                      // 0x002B(0x0010) UNKNOWN PROPERTY: ArrayProperty Shenmue3.S3StaticMeshMergeKey.OverrideMaterials
};

// ScriptStruct Shenmue3.S3MiniGameProgressInfo
// 0x00F0
struct FS3MiniGameProgressInfo
{
	unsigned char                                      UnknownData00[0xF0];                                      // 0x0000(0x00F0) MISSED OFFSET
};

// ScriptStruct Shenmue3.NPCMiniGameManagerIds
// 0x0018 (0x0020 - 0x0008)
struct FNPCMiniGameManagerIds : public FTableRowBase
{
	TArray<struct FName>                               ManageMiniGameIds;                                        // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	ES3MiniGameCategory                                Category;                                                 // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
};

// ScriptStruct Shenmue3.QTECommandStruct
// 0x0008
struct FQTECommandStruct
{
	Enum_QTETitleCommand                               QTECommand;                                               // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHideLeft;                                                // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHideMiddle;                                              // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHideRight;                                               // 0x0003(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Speed;                                                    // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Shenmue3.NPCAttachSetting
// 0x0048
struct FNPCAttachSetting
{
	struct FGameplayTag                                AttachmentTag;                                            // 0x0000(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	ENPCAttachSettingType                              SettingType;                                              // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	ENPCAttachFrom                                     From;                                                     // 0x0009(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x000A(0x0006) MISSED OFFSET
	struct FName                                       Socket;                                                   // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UStaticMesh*                                 StatcMesh;                                                // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsSkeletalMesh;                                          // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
	class USkeletalMesh*                               SkeletalMesh;                                             // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      AnimInstance;                                             // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      ActorClass;                                               // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                InitializeType;                                           // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCollision;                                               // 0x0044(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0045(0x0003) MISSED OFFSET
};

// ScriptStruct Shenmue3.NPCTalkScript
// 0x0030
struct FNPCTalkScript
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Shenmue3.NPCTalkScript.TalkScript
	int                                                MinStep;                                                  // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxStep;                                                  // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Shenmue3.S3NPCScriptState
// 0x0018 (0x0020 - 0x0008)
struct FS3NPCScriptState : public FTableRowBase
{
	int                                                ID;                                                       // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FString                                     Name;                                                     // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Shenmue3.S3NPCScheduleDataRow
// 0x00E0 (0x00E8 - 0x0008)
struct FS3NPCScheduleDataRow : public FTableRowBase
{
	struct FGameplayTag                                NPCID;                                                    // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	bool                                               bIsRelativeTime;                                          // 0x0010(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              Time;                                                     // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ENPCCommand>                           Command;                                                  // 0x0018(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
	TArray<struct FString>                             LocationTags;                                             // 0x0020(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FTransform>                          Transforms;                                               // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FSoftObjectPath>                     Animations;                                               // 0x0040(0x0010) (ZeroConstructor, Deprecated)
	TArray<class UAnimSequence*>                       AnimSequences;                                            // 0x0050(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	bool                                               bEnableStep;                                              // 0x0060(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0061(0x0003) MISSED OFFSET
	int                                                MinStep;                                                  // 0x0064(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	int                                                MaxStep;                                                  // 0x0068(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	TArray<struct FS3NPCScheduleStepRange>             StepRanges;                                               // 0x0070(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	bool                                               bEnableFlag;                                              // 0x0080(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0081(0x0003) MISSED OFFSET
	int                                                FlagIndex;                                                // 0x0084(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                FlagValue;                                                // 0x0088(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                FlagValue2;                                               // 0x008C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                FlagPriority;                                             // 0x0090(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FNPCTaskDetails                             TaskDetails;                                              // 0x0094(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
	TArray<struct FNPCTaskFinishCommand>               TaskFinishCommands;                                       // 0x00A0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      TaskGroupNo;                                              // 0x00B0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bImmediateNext;                                           // 0x00B1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bManualTrigger;                                           // 0x00B2(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x1];                                       // 0x00B3(0x0001) MISSED OFFSET
	float                                              StartDelay;                                               // 0x00B4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CachedDuration;                                           // 0x00B8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      SpecialByte;                                              // 0x00BC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x00BD(0x0003) MISSED OFFSET
	TArray<float>                                      Weights;                                                  // 0x00C0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      SpecialInt;                                               // 0x00D0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x00D1(0x0003) MISSED OFFSET
	int                                                ScriptState;                                              // 0x00D4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     AnimScript;                                               // 0x00D8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct Shenmue3.S3ReverseAxisBinding
// 0x0018
struct FS3ReverseAxisBinding
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct Shenmue3.S3SwapAxisBinding
// 0x0030
struct FS3SwapAxisBinding
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct Shenmue3.S3SwapActionBinding
// 0x0030
struct FS3SwapActionBinding
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct Shenmue3.S3UserSwappableAction
// 0x0040
struct FS3UserSwappableAction
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0000(0x0040) MISSED OFFSET
};

// ScriptStruct Shenmue3.S3AuxAvoidanceData
// 0x0020
struct FS3AuxAvoidanceData
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct Shenmue3.S3StepNumberInfo
// 0x0010 (0x0018 - 0x0008)
struct FS3StepNumberInfo : public FTableRowBase
{
	struct FString                                     NumberString;                                             // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Shenmue3.S3SaveIconInfo
// 0x0050 (0x0058 - 0x0008)
struct FS3SaveIconInfo : public FTableRowBase
{
	struct FString                                     AreaId;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     EnglishName;                                              // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     JapaneseName;                                             // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     HansName;                                                 // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     IconNamePS4;                                              // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Shenmue3.S3SoundTimerParam
// 0x0030
struct FS3SoundTimerParam
{
	class USoundAtomCue*                               Sound;                                                    // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                StartTime;                                                // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EndTime;                                                  // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Interval;                                                 // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	class USoundAttenuation*                           Attenuation;                                              // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x0020(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct Shenmue3.SubQuestData
// 0x0068 (0x0070 - 0x0008)
struct FSubQuestData : public FTableRowBase
{
	int                                                pclMin;                                                   // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                pclMax;                                                   // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             pclCharaId;                                               // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                bslMin;                                                   // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                bslMax;                                                   // 0x0024(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             bslCharaId;                                               // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                mnlMin;                                                   // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                mnlMax;                                                   // 0x003C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             mnlCharaId;                                               // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                shlMin;                                                   // 0x0050(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                shlMax;                                                   // 0x0054(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             shlCharaId;                                               // 0x0058(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                MinStep;                                                  // 0x0068(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MaxStep;                                                  // 0x006C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Shenmue3.TalkEnableScheduleData
// 0x0010
struct FTalkEnableScheduleData
{
	int                                                StepMin;                                                  // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                StepMax;                                                  // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                TimeMin;                                                  // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                TimeMax;                                                  // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Shenmue3.CallStackLogData
// 0x0038
struct FCallStackLogData
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FString                                     script_name;                                              // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	int                                                Index;                                                    // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FString                                     Note;                                                     // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
};

// ScriptStruct Shenmue3.S3WeatherPreset
// 0x0018 (0x0020 - 0x0008)
struct FS3WeatherPreset : public FTableRowBase
{
	int                                                SunnyRate;                                                // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                RainyRate;                                                // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     Comment;                                                  // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Shenmue3.S3TalkEventProcessInfo
// 0x0008 (0x0010 - 0x0008)
struct FS3TalkEventProcessInfo : public FTableRowBase
{
	class UClass*                                      TalkEventProcessClass;                                    // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct Shenmue3.S3TalkEventMetaInfo
// 0x0008 (0x0010 - 0x0008)
struct FS3TalkEventMetaInfo : public FTableRowBase
{
	bool                                               bStopForceSkip;                                           // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
