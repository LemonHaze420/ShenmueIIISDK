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

// BlueprintGeneratedClass BP_HUDEnergyStatusManager.BP_HUDEnergyStatusManager_C
// 0x0033 (0x035B - 0x0328)
class ABP_HUDEnergyStatusManager_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class Uwgt_HUDEnergyStatus_C*                      Widget;                                                   // 0x0338(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class URequestCounter_C*                           DisableRequestCounter;                                    // 0x0340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ABP_MiniMap2DManager_C*                      MinimapManager;                                           // 0x0348(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class URequestCounter_C*                           OverrideEnableRequestCounter;                             // 0x0350(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCachedPlayerInBuilding;                                  // 0x0358(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bShowHealth;                                              // 0x0359(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               LastVisible;                                              // 0x035A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_HUDEnergyStatusManager.BP_HUDEnergyStatusManager_C");
		return ptr;
	}


	void UpdateVisiblity_Impl(bool Instant);
	void GetOverrideEnableRequestCounter(class URequestCounter_C** DisableRequestCounter);
	bool ShouldBeVisible();
	void GetDisableRequestCounter(class URequestCounter_C** DisableRequestCounter);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void UpdateVisibility(bool Instant);
	void ReceiveTick(float DeltaSeconds);
	void OnMinimapValidityChange(bool bIsValid);
	void CheckPlayerInBuilding();
	void ExecuteUbergraph_BP_HUDEnergyStatusManager(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
