#pragma once

// Name: Shenmue3, Version: 1.0.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Fishing_FishShadow.BP_Fishing_FishShadow_C
// 0x0060 (0x0388 - 0x0328)
class ABP_Fishing_FishShadow_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class USkeletalMeshComponent*                      SkeletalMesh;                                             // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     BaseLocation;                                             // 0x0340(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              InfAngle;                                                 // 0x034C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MoveType;                                                 // 0x0350(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MoveScale;                                                // 0x0354(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                FishNum;                                                  // 0x0358(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x035C(0x0004) MISSED OFFSET
	TArray<class ABP_Fishing_FreeFish_C*>              FreeFishArray;                                            // 0x0360(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               IsBite;                                                   // 0x0370(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0371(0x0003) MISSED OFFSET
	int                                                BiteIndex;                                                // 0x0374(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class ABP_Fishing_FreeMoveFish_C*>          FreeMoveFishList;                                         // 0x0378(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Fishing_FishShadow.BP_Fishing_FishShadow_C");
		return ptr;
	}


	void STATIC_UpdateFishBaseLocation(const struct FVector& BaseLocation);
	void STATIC_CheckBite(bool* ArgBite);
	void MoveEnd();
	void STATIC_MoveStart(int ArgType, int ArgFishNum, const struct FVector& ArgCenterPos, float BiteWait);
	void Init();
	void STATIC_StartInfinitySymbolMove(const struct FVector& ArgBasePos);
	void STATIC_Move_InfinitySymbol();
	void UserConstructionScript();
	void STATIC_ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_Fishing_FishShadow(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
