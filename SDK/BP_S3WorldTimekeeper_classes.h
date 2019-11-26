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

// BlueprintGeneratedClass BP_S3WorldTimekeeper.BP_S3WorldTimekeeper_C
// 0x000A (0x0412 - 0x0408)
class ABP_S3WorldTimekeeper_C : public AS3GameTimeManager
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0408(0x0008) (Transient, DuplicateTransient)
	bool                                               IsSpeedDeltaTime;                                         // 0x0410(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsStoppedDeltaTime;                                       // 0x0411(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_S3WorldTimekeeper.BP_S3WorldTimekeeper_C");
		return ptr;
	}


	bool InitDataTime();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void WaitPlay();
	void ExecuteUbergraph_BP_S3WorldTimekeeper(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
