
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
// (Private, BlueprintCallable, BlueprintEvent)

void UBW_SubFlagController_C::UpdateAllWidgetFlagIds()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_SubFlagController.BW_SubFlagController_C.UpdateAllWidgetFlagIds");

	UBW_SubFlagController_C_UpdateAllWidgetFlagIds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_SubFlagController.BW_SubFlagController_C.WidgetIdxToFlagIdx
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            WidgetIdx                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            FlagIdx                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBW_SubFlagController_C::WidgetIdxToFlagIdx(int WidgetIdx, int* FlagIdx)
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
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBW_IntegerProperty_C*   Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_SubFlagController_C::UpdateWidgetValue(class UBW_IntegerProperty_C* Widget, int Index)
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
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            flag                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_SubFlagController_C::SetTargetFlagValue(int Index, int flag)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_SubFlagController.BW_SubFlagController_C.SetTargetFlagValue");

	UBW_SubFlagController_C_SetTargetFlagValue_Params params;
	params.Index = Index;
	params.flag = flag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_SubFlagController.BW_SubFlagController_C.GetTargetFlagValue
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            FlagIdx                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBW_SubFlagController_C::GetTargetFlagValue(int FlagIdx)
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
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBW_IntegerProperty_C*   Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            WidgetIdx                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_SubFlagController_C::UpdateWidgetFlagId(class UBW_IntegerProperty_C* Widget, int WidgetIdx)
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
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_SubFlagController_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_SubFlagController.BW_SubFlagController_C.Tick");

	UBW_SubFlagController_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_SubFlagController.BW_SubFlagController_C.ChangePage
// (BlueprintCallable, BlueprintEvent)

void UBW_SubFlagController_C::ChangePage()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_SubFlagController.BW_SubFlagController_C.ChangePage");

	UBW_SubFlagController_C_ChangePage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_SubFlagController.BW_SubFlagController_C.OnFlagPropertyChanged
// (BlueprintCallable, BlueprintEvent)
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
// (Public, BlueprintCallable, BlueprintEvent)

void UBW_SubFlagController_C::SetInitialFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_SubFlagController.BW_SubFlagController_C.SetInitialFocus");

	UBW_SubFlagController_C_SetInitialFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_SubFlagController.BW_SubFlagController_C.BuildMenu
// (Public, BlueprintCallable, BlueprintEvent)

void UBW_SubFlagController_C::BuildMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_SubFlagController.BW_SubFlagController_C.BuildMenu");

	UBW_SubFlagController_C_BuildMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_SubFlagController.BW_SubFlagController_C.ExecuteUbergraph_BW_SubFlagController
// (HasDefaults)
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
