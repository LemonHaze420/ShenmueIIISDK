
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

// Function wgt_TrainingResultHint.wgt_TrainingResultHint_C.UpdateHintText
// (NetRequest, Exec, Native, Event, NetMulticast, MulticastDelegate, Public, Protected, Delegate, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_TrainingResultHint_C::UpdateHintText(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_TrainingResultHint.wgt_TrainingResultHint_C.UpdateHintText");

	Uwgt_TrainingResultHint_C_UpdateHintText_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_TrainingResultHint.wgt_TrainingResultHint_C.IsValidHint
// (NetReliable, NetRequest, Exec, Native, NetResponse, Public, Private, HasOutParms, NetClient, DLLImport)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Uwgt_TrainingResultHint_C::IsValidHint()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_TrainingResultHint.wgt_TrainingResultHint_C.IsValidHint");

	Uwgt_TrainingResultHint_C_IsValidHint_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function wgt_TrainingResultHint.wgt_TrainingResultHint_C.SetHintType
// (Net, NetRequest, Exec, Event, NetResponse, MulticastDelegate, Public, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Selection                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_TrainingResultHint_C::SetHintType(int Selection)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_TrainingResultHint.wgt_TrainingResultHint_C.SetHintType");

	Uwgt_TrainingResultHint_C_SetHintType_Params params;
	params.Selection = Selection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_TrainingResultHint.wgt_TrainingResultHint_C.PreConstruct
// (Net, NetRequest, Exec, Event, NetResponse, MulticastDelegate, Public, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_TrainingResultHint_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_TrainingResultHint.wgt_TrainingResultHint_C.PreConstruct");

	Uwgt_TrainingResultHint_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_TrainingResultHint.wgt_TrainingResultHint_C.ExecuteUbergraph_wgt_TrainingResultHint
// (NetRequest, Event, Static, NetMulticast, MulticastDelegate, Protected, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_TrainingResultHint_C::STATIC_ExecuteUbergraph_wgt_TrainingResultHint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_TrainingResultHint.wgt_TrainingResultHint_C.ExecuteUbergraph_wgt_TrainingResultHint");

	Uwgt_TrainingResultHint_C_ExecuteUbergraph_wgt_TrainingResultHint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
