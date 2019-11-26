#pragma once

// Name: S3Demo, Version: 0.90.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BTL_LaunchParameters.BTL_LaunchParameters_C
// 0x0110 (0x0138 - 0x0028)
class UBTL_LaunchParameters_C : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	struct FTransform                                  PlayerLocation;                                           // 0x0030(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	struct FBTL_Setup_AIDirectorSettings               AIDirector;                                               // 0x0060(0x0004) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
	class ABP_BTL_Area_C*                              area;                                                     // 0x0068(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UBTL_PlayerCharacterDataAsset*               PlayerCharSettings;                                       // 0x0070(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UBTL_Launch_NPC_C*>                   NPCs;                                                     // 0x0078(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class ABP_Battle_TrackSpline_C*                    spline;                                                   // 0x0088(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class ACameraActor*                                Camera;                                                   // 0x0090(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class ABP_BTL_Audience_C*                          Audience;                                                 // 0x0098(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UBPC_BTL_SparringSetup_C*                    SparringSetup;                                            // 0x00A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBPC_BattleConditions_C*                     BattleConditions;                                         // 0x00A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBPC_BTL_AISetup_C*                          AISetup;                                                  // 0x00B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x28];                                      // 0x00B8(0x0028) UNKNOWN PROPERTY: SoftClassProperty BTL_LaunchParameters.BTL_LaunchParameters_C.FlowMgrClass
	class UClass*                                      FlowMgrClassHard;                                         // 0x00E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBTL_NPCDataAsset*                           DefaultNPCSettings;                                       // 0x00E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DoneLoading;                                              // 0x00F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x00F1(0x0003) MISSED OFFSET
	int                                                NPCLoadIndex;                                             // 0x00F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class US3BattleStatsManager*                       PlayerStats;                                              // 0x00F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 DamageCurve;                                              // 0x0100(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               EnableLevelSoftLock;                                      // 0x0108(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0109(0x0003) MISSED OFFSET
	struct FST_DojoVictoryStandard                     LevelStandard;                                            // 0x010C(0x0004) (Edit, BlueprintVisible)
	class UBPC_BattleSoftlockSettings_C*               SoftLockSettings;                                         // 0x0110(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBTL_RuntimeAttackDB*                        AttackDB;                                                 // 0x0118(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBTL_CommandLibrary_C*                       CommandLibrary;                                           // 0x0120(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              UseActors;                                                // 0x0128(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BTL_LaunchParameters.BTL_LaunchParameters_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
