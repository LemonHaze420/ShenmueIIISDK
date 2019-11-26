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

// BlueprintGeneratedClass BP_S3GameMode_Chobu.BP_S3GameMode_Chobu_C
// 0x0030 (0x07C0 - 0x0790)
class ABP_S3GameMode_Chobu_C : public ABP_S3GameMode_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0790(0x0008) (Transient, DuplicateTransient)
	TArray<class AActor*>                              ShipCollisions;                                           // 0x0798(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class ABP_JumpProcessActor_C*                      JumpProcess;                                              // 0x07A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<class ALevelStreamingVolume*>               ShipLSVs;                                                 // 0x07B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_S3GameMode_Chobu.BP_S3GameMode_Chobu_C");
		return ptr;
	}


	void CheckSunLightCastShadow(ES3PlayerBehavior ID);
	void CheckCasinoShip();
	void UserConstructionScript();
	void InitializeShip();
	void FinalizeShip();
	void ChangeFlag(int ArrayIndex, int SetFlags);
	void JumpShip(const struct FTransform& JumpTransform, const struct FName& EyecatchLabel);
	void FinishJump(class AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ChangeStep(int SetSteps);
	void ChangePlayerBehavior(ES3PlayerBehavior NewId, ES3PlayerBehavior OldId);
	void StartChobu();
	void ExecuteUbergraph_BP_S3GameMode_Chobu(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
