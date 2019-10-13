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

// BlueprintGeneratedClass BP_DojoNamePlate.BP_DojoNamePlate_C
// 0x0035 (0x03DD - 0x03A8)
class ABP_DojoNamePlate_C : public AS3DojoNamePlate
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03A8(0x0008) (Transient, DuplicateTransient)
	class US3AttentionComponent*                       S3Attention;                                              // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                HAKKASON_INDEX;                                           // 0x03B8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               EnableDebug;                                              // 0x03BC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	ES3DojoRank                                        DebugPosition;                                            // 0x03BD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x03BE(0x0002) MISSED OFFSET
	int                                                CHOBU_INDEX;                                              // 0x03C0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    BeforeRotator;                                            // 0x03C4(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    AfterRotator;                                             // 0x03D0(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	ES3DojoRank                                        RotationBorderRank;                                       // 0x03DC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_DojoNamePlate.BP_DojoNamePlate_C");
		return ptr;
	}


	void GetCurrentDojo(TEnumAsByte<EDojoPlace>* Place, int* FlagIndex);
	void ChangePosition(ES3DojoRank Rank);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ChangeFlag(int ArrayIndex, int SetFlags);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void ExecuteUbergraph_BP_DojoNamePlate(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
