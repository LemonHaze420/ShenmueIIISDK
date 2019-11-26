
#include "../SDK.h"

// Name: S3Demo, Version: 0.90.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BPF_AdventurePlayerDialog.BPF_AdventurePlayerDialog_C.BPF_StopAdventurePlayerDialog
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPF_AdventurePlayerDialog_C::STATIC_BPF_StopAdventurePlayerDialog(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_AdventurePlayerDialog.BPF_AdventurePlayerDialog_C.BPF_StopAdventurePlayerDialog");

	UBPF_AdventurePlayerDialog_C_BPF_StopAdventurePlayerDialog_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPF_AdventurePlayerDialog.BPF_AdventurePlayerDialog_C.BPF_GetAdventurePlayerDialogComponent
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// class UBPC_CharacterDialogPlayer_C* Component                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

bool UBPF_AdventurePlayerDialog_C::STATIC_BPF_GetAdventurePlayerDialogComponent(class UObject* __WorldContext, class UBPC_CharacterDialogPlayer_C** Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_AdventurePlayerDialog.BPF_AdventurePlayerDialog_C.BPF_GetAdventurePlayerDialogComponent");

	UBPF_AdventurePlayerDialog_C_BPF_GetAdventurePlayerDialogComponent_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Component != nullptr)
		*Component = params.Component;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
