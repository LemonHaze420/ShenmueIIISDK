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

// BlueprintGeneratedClass BP_ScheduleNPCAI.BP_ScheduleNPCAI_C
// 0x0008 (0x0488 - 0x0480)
class ABP_ScheduleNPCAI_C : public AS3NPCController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0480(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ScheduleNPCAI.BP_ScheduleNPCAI_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_ScheduleNPCAI(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
