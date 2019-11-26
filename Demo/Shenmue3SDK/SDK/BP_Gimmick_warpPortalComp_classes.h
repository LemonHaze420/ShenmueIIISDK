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

// BlueprintGeneratedClass BP_Gimmick_warpPortalComp.BP_Gimmick_warpPortalComp_C
// 0x00A1 (0x02E1 - 0x0240)
class UBP_Gimmick_warpPortalComp_C : public USceneComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0240(0x0008) (Transient, DuplicateTransient)
	struct FScriptMulticastDelegate                    Teleport;                                                 // 0x0248(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FText                                       portalArea;                                               // 0x0258(0x0018) (Edit, BlueprintVisible)
	struct FText                                       portalName;                                               // 0x0270(0x0018) (Edit, BlueprintVisible)
	struct FText                                       portalDescription;                                        // 0x0288(0x0018) (Edit, BlueprintVisible)
	bool                                               IsSetGameTime;                                            // 0x02A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02A1(0x0003) MISSED OFFSET
	float                                              GameTime;                                                 // 0x02A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsHidePlayer;                                             // 0x02A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x02A9(0x0007) MISSED OFFSET
	struct FTransform                                  PortalTransform;                                          // 0x02B0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               ModifiedPlayer;                                           // 0x02E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Gimmick_warpPortalComp.BP_Gimmick_warpPortalComp_C");
		return ptr;
	}


	void ModPlayerForTeleport(bool ToTeleport);
	void FadePlayer(bool Fade);
	void SetPortalTransform(const struct FTransform& Transform);
	void GetPortalTransform(struct FTransform* Transform);
	void isAvailable_player_(class AActor* OtherActor, bool* Result);
	void ReceiveBeginPlay();
	void ReturnPlayerState();
	void onTeleport(class AActor* OtherActor);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void ExecuteUbergraph_BP_Gimmick_warpPortalComp(int EntryPoint);
	void teleport__DelegateSignature(class AActor* OtherActor);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
