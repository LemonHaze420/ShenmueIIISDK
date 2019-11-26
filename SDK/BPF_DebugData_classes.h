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

// BlueprintGeneratedClass BPF_DebugData.BPF_DebugData_C
// 0x0000 (0x0028 - 0x0028)
class UBPF_DebugData_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPF_DebugData.BPF_DebugData_C");
		return ptr;
	}


	void STATIC_GetSubmissionConfig(class UObject* __WorldContext, class US3SubmissionConfig** Config);
	void STATIC_IsDebugStepInRange(class UObject* __WorldContext, bool* InRange);
	void STATIC_IsDebugDisableCutscene(class UObject* __WorldContext, bool* Disable);
	void STATIC_IsDebugDisableMainFlow(class UObject* __WorldContext, bool* Disable);
	void STATIC_IsDebugDisableNPC(class UObject* __WorldContext, bool* Disable);
	void STATIC_GetDebugData(class UObject* __WorldContext, class US3DebugDataAsset** Debug_Data_Asset);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
