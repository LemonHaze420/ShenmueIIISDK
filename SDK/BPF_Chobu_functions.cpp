
#include "../SDK.h"

// Name: Shenmue3, Version: 1.0.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BPF_Chobu.BPF_Chobu_C.SetEnableRyosyaSofaCollision
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPF_Chobu_C::STATIC_SetEnableRyosyaSofaCollision(bool Enable, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Chobu.BPF_Chobu_C.SetEnableRyosyaSofaCollision");

	UBPF_Chobu_C_SetEnableRyosyaSofaCollision_Params params;
	params.Enable = Enable;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPF_Chobu.BPF_Chobu_C.GetChobuNightCutsceneId
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ID                             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_Chobu_C::STATIC_GetChobuNightCutsceneId(class UObject* __WorldContext, struct FName* ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Chobu.BPF_Chobu_C.GetChobuNightCutsceneId");

	UBPF_Chobu_C_GetChobuNightCutsceneId_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ID != nullptr)
		*ID = params.ID;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
