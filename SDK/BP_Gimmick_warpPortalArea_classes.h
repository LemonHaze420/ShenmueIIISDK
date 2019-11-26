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

// BlueprintGeneratedClass BP_Gimmick_warpPortalArea.BP_Gimmick_warpPortalArea_C
// 0x0029 (0x0351 - 0x0328)
class ABP_Gimmick_warpPortalArea_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class UCameraComponent*                            Camera;                                                   // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_Gimmick_warpPortalComp_C*                BP_Gimmick_warpPortalComp;                                // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FScriptMulticastDelegate                    Teleport;                                                 // 0x0340(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               bActive;                                                  // 0x0350(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Gimmick_warpPortalArea.BP_Gimmick_warpPortalArea_C");
		return ptr;
	}


	void GetPortalComponent(class UBP_Gimmick_warpPortalComp_C** PortalComponent);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void onTeleport(class AActor* OtherActor);
	void ExecuteUbergraph_BP_Gimmick_warpPortalArea(int EntryPoint);
	void teleport__DelegateSignature(class AActor* OtherActor);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
