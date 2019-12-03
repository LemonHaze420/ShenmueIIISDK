
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

// Function BW_SubFlagController.BW_SubFlagController_C.UpdateAllWidgetFlagIds
// (NetRequest, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable)

void UBW_SubFlagController_C::STATIC_UpdateAllWidgetFlagIds()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_SubFlagController.BW_SubFlagController_C.UpdateAllWidgetFlagIds");

	UBW_SubFlagController_C_UpdateAllWidgetFlagIds_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_SubFlagController.BW_SubFlagController_C.WidgetIdxToFlagIdx
// (NetRequest, Static, NetMulticast, Private, Protected, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            WidgetIdx                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            FlagIdx                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBW_SubFlagController_C::STATIC_WidgetIdxToFlagIdx(int WidgetIdx, int* FlagIdx)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_SubFlagController.BW_SubFlagController_C.WidgetIdxToFlagIdx");

	UBW_SubFlagController_C_WidgetIdxToFlagIdx_Params params;
	params.WidgetIdx = WidgetIdx;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FlagIdx != nullptr)
		*FlagIdx = params.FlagIdx;
}


// Function BW_SubFlagController.BW_SubFlagController_C.UpdateWidgetValue
// (Net, NetReliable, NetRequest, Exec, Event, NetResponse, Static, MulticastDelegate, Public, Private, NetServer, BlueprintEvent, BlueprintPure)
// Parameters:
// class UBW_IntegerProperty_C*   Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_SubFlagController_C::STATIC_UpdateWidgetValue(class UBW_IntegerProperty_C* Widget, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_SubFlagController.BW_SubFlagController_C.UpdateWidgetValue");

	UBW_SubFlagController_C_UpdateWidgetValue_Params params;
	params.Widget = Widget;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_SubFlagController.BW_SubFlagController_C.SetTargetFlagValue
// (Net, NetReliable, Exec, Native, Event, Static, NetMulticast, MulticastDelegate, Protected, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            flag                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_SubFlagController_C::STATIC_SetTargetFlagValue(int Index, int flag)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_SubFlagController.BW_SubFlagController_C.SetTargetFlagValue");

	UBW_SubFlagController_C_SetTargetFlagValue_Params params;
	params.Index = Index;
	params.flag = flag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_SubFlagController.BW_SubFlagController_C.GetTargetFlagValue
// (Net, NetRequest, Exec, Event, Static, NetMulticast, Public, Private, Protected, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            FlagIdx                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBW_SubFlagController_C::STATIC_GetTargetFlagValue(int FlagIdx)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_SubFlagController.BW_SubFlagController_C.GetTargetFlagValue");

	UBW_SubFlagController_C_GetTargetFlagValue_Params params;
	params.FlagIdx = FlagIdx;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BW_SubFlagController.BW_SubFlagController_C.UpdateWidgetFlagId
// (NetReliable, NetRequest, Event, Static, NetMulticast, Public, Private, Delegate, BlueprintEvent, BlueprintPure)
// Parameters:
// class UBW_IntegerProperty_C*   Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            WidgetIdx                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_SubFlagController_C::STATIC_UpdateWidgetFlagId(class UBW_IntegerProperty_C* Widget, int WidgetIdx)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_SubFlagController.BW_SubFlagController_C.UpdateWidgetFlagId");

	UBW_SubFlagController_C_UpdateWidgetFlagId_Params params;
	params.Widget = Widget;
	params.WidgetIdx = WidgetIdx;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_SubFlagController.BW_SubFlagController_C.Tick
// (Native, Static, NetMulticast, Public, Protected, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_SubFlagController_C::STATIC_Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_SubFlagController.BW_SubFlagController_C.Tick");

	UBW_SubFlagController_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_SubFlagController.BW_SubFlagController_C.ChangePage
// (Net, NetRequest, Event, NetResponse, Public, Protected, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void UBW_SubFlagController_C::ChangePage()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_SubFlagController.BW_SubFlagController_C.ChangePage");

	UBW_SubFlagController_C_ChangePage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_SubFlagController.BW_SubFlagController_C.OnFlagPropertyChanged
// (Net, NetRequest, Event, NetMulticast, Public, Protected, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBW_IntegerProperty_C*   Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBW_SubFlagController_C::OnFlagPropertyChanged(int Value, class UBW_IntegerProperty_C* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_SubFlagController.BW_SubFlagController_C.OnFlagPropertyChanged");

	UBW_SubFlagController_C_OnFlagPropertyChanged_Params params;
	params.Value = Value;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_SubFlagController.BW_SubFlagController_C.SetInitialFocus
// (NetRequest, Event, NetResponse, Public, Protected, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void UBW_SubFlagController_C::SetInitialFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_SubFlagController.BW_SubFlagController_C.SetInitialFocus");

	UBW_SubFlagController_C_SetInitialFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_SubFlagController.BW_SubFlagController_C.BuildMenu
// (NetRequest, Event, NetResponse, Public, Protected, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void UBW_SubFlagController_C::BuildMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_SubFlagController.BW_SubFlagController_C.BuildMenu");

	UBW_SubFlagController_C_BuildMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_SubFlagController.BW_SubFlagController_C.ExecuteUbergraph_BW_SubFlagController
// (NetReliable, NetMulticast, Protected, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_SubFlagController_C::ExecuteUbergraph_BW_SubFlagController(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_SubFlagController.BW_SubFlagController_C.ExecuteUbergraph_BW_SubFlagController");

	UBW_SubFlagController_C_ExecuteUbergraph_BW_SubFlagController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
