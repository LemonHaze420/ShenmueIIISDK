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

// BlueprintGeneratedClass BPF_ABPCommon.BPF_ABPCommon_C
// 0x0000 (0x0028 - 0x0028)
class UBPF_ABPCommon_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPF_ABPCommon.BPF_ABPCommon_C");
		return ptr;
	}


	void STATIC_BPF_CancelACTurn(class UObject* __WorldContext, int* flag);
	bool STATIC_BPF_IsACTurnCanceled(class US3AnimInstance* AnimInstance, class UObject* __WorldContext);
	bool STATIC_BPF_ShouldCancelACTurn(int flag, class UObject* __WorldContext);
	bool STATIC_BPF_ShouldStartACTurn(int flag, class UObject* __WorldContext);
	void STATIC_BPF_MarkACTurnStarted(class UObject* __WorldContext, int* Step);
	void STATIC_BPF_TickACTurn(class US3AnimInstance* AnimInstance, class UObject* __WorldContext, int* StepFlag, float* BSAngle);
	void STATIC_BPF_MarkACTurnDone(class UObject* __WorldContext, int* Step);
	bool STATIC_BPF_HasACTurnAroundRequest(class US3AnimInstance* AnimInstance, class UObject* __WorldContext, float* Angle);
	void STATIC_BPF_UpdateFootIKAlpha(class US3AnimInstance* AnimInstance, float DeltaSeconds, class UObject* __WorldContext, float* AlphaVar);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
