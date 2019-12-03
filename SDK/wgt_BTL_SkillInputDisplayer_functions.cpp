
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

// Function wgt_BTL_SkillInputDisplayer.wgt_BTL_SkillInputDisplayer_C.SetInputWithShoulder
// (Net, NetReliable, NetRequest, Exec, NetResponse, MulticastDelegate, Public, Delegate, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<struct FName>           InputActions                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TEnumAsByte<EGamepadShoulder>  Shoulder                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_BTL_SkillInputDisplayer_C::SetInputWithShoulder(TEnumAsByte<EGamepadShoulder> Shoulder, TArray<struct FName>* InputActions)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_BTL_SkillInputDisplayer.wgt_BTL_SkillInputDisplayer_C.SetInputWithShoulder");

	Uwgt_BTL_SkillInputDisplayer_C_SetInputWithShoulder_Params params;
	params.Shoulder = Shoulder;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InputActions != nullptr)
		*InputActions = params.InputActions;
}


// Function wgt_BTL_SkillInputDisplayer.wgt_BTL_SkillInputDisplayer_C.SetInputByActions
// (Net, NetReliable, NetRequest, Exec, Event, NetResponse, Static, Private, Protected, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FName>           InputActions                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            StartIdx                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_BTL_SkillInputDisplayer_C::STATIC_SetInputByActions(int StartIdx, TArray<struct FName>* InputActions)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_BTL_SkillInputDisplayer.wgt_BTL_SkillInputDisplayer_C.SetInputByActions");

	Uwgt_BTL_SkillInputDisplayer_C_SetInputByActions_Params params;
	params.StartIdx = StartIdx;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InputActions != nullptr)
		*InputActions = params.InputActions;
}


// Function wgt_BTL_SkillInputDisplayer.wgt_BTL_SkillInputDisplayer_C.CopyBoxSlotData
// (Exec, Native, Event, NetResponse, MulticastDelegate, Public, NetServer, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// class UHorizontalBoxSlot*      CopyFrom                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UHorizontalBoxSlot*      CopyTo                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void Uwgt_BTL_SkillInputDisplayer_C::CopyBoxSlotData(class UHorizontalBoxSlot* CopyFrom, class UHorizontalBoxSlot* CopyTo)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_BTL_SkillInputDisplayer.wgt_BTL_SkillInputDisplayer_C.CopyBoxSlotData");

	Uwgt_BTL_SkillInputDisplayer_C_CopyBoxSlotData_Params params;
	params.CopyFrom = CopyFrom;
	params.CopyTo = CopyTo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_BTL_SkillInputDisplayer.wgt_BTL_SkillInputDisplayer_C.HideInput
// (NetReliable, NetRequest, Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Protected, NetServer, HasDefaults, NetClient, BlueprintPure)

void Uwgt_BTL_SkillInputDisplayer_C::STATIC_HideInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_BTL_SkillInputDisplayer.wgt_BTL_SkillInputDisplayer_C.HideInput");

	Uwgt_BTL_SkillInputDisplayer_C_HideInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_BTL_SkillInputDisplayer.wgt_BTL_SkillInputDisplayer_C.SetInput
// (NetReliable, NetRequest, Native, Event, NetResponse, Static, MulticastDelegate, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FName>           InputActions                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// EBTL_HoldInputType             Option                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_BTL_SkillInputDisplayer_C::STATIC_SetInput(EBTL_HoldInputType Option, TArray<struct FName>* InputActions)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_BTL_SkillInputDisplayer.wgt_BTL_SkillInputDisplayer_C.SetInput");

	Uwgt_BTL_SkillInputDisplayer_C_SetInput_Params params;
	params.Option = Option;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InputActions != nullptr)
		*InputActions = params.InputActions;
}


// Function wgt_BTL_SkillInputDisplayer.wgt_BTL_SkillInputDisplayer_C.SetSkill(AttackLabel)
// (Net, NetRequest, Native, Event, Static, NetMulticast, Public, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   Attack                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_BTL_SkillInputDisplayer_C::STATIC_SetSkill_AttackLabel_(const struct FName& Attack)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_BTL_SkillInputDisplayer.wgt_BTL_SkillInputDisplayer_C.SetSkill(AttackLabel)");

	Uwgt_BTL_SkillInputDisplayer_C_SetSkill_AttackLabel__Params params;
	params.Attack = Attack;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_BTL_SkillInputDisplayer.wgt_BTL_SkillInputDisplayer_C.SetSkill(ItemLabel)
// (Net, NetReliable, NetRequest, Native, Event, Static, MulticastDelegate, Protected, Delegate, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FName                   ItemName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_BTL_SkillInputDisplayer_C::STATIC_SetSkill_ItemLabel_(const struct FName& ItemName)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_BTL_SkillInputDisplayer.wgt_BTL_SkillInputDisplayer_C.SetSkill(ItemLabel)");

	Uwgt_BTL_SkillInputDisplayer_C_SetSkill_ItemLabel__Params params;
	params.ItemName = ItemName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_BTL_SkillInputDisplayer.wgt_BTL_SkillInputDisplayer_C.SetSkillLibrary
// (Exec, Event, NetResponse, MulticastDelegate, Public, NetServer, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// class UBTL_CommandLibrary_C*   Library                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_BTL_SkillInputDisplayer_C::SetSkillLibrary(class UBTL_CommandLibrary_C* Library)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_BTL_SkillInputDisplayer.wgt_BTL_SkillInputDisplayer_C.SetSkillLibrary");

	Uwgt_BTL_SkillInputDisplayer_C_SetSkillLibrary_Params params;
	params.Library = Library;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_BTL_SkillInputDisplayer.wgt_BTL_SkillInputDisplayer_C.PreConstruct
// (NetReliable, NetRequest, Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Protected, NetServer, HasDefaults, NetClient, BlueprintPure)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_BTL_SkillInputDisplayer_C::STATIC_PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_BTL_SkillInputDisplayer.wgt_BTL_SkillInputDisplayer_C.PreConstruct");

	Uwgt_BTL_SkillInputDisplayer_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_BTL_SkillInputDisplayer.wgt_BTL_SkillInputDisplayer_C.Construct
// (NetReliable, Event, Static, NetMulticast, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void Uwgt_BTL_SkillInputDisplayer_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_BTL_SkillInputDisplayer.wgt_BTL_SkillInputDisplayer_C.Construct");

	Uwgt_BTL_SkillInputDisplayer_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_BTL_SkillInputDisplayer.wgt_BTL_SkillInputDisplayer_C.ExecuteUbergraph_wgt_BTL_SkillInputDisplayer
// (Net, Exec, Event, NetResponse, MulticastDelegate, Public, Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_BTL_SkillInputDisplayer_C::ExecuteUbergraph_wgt_BTL_SkillInputDisplayer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_BTL_SkillInputDisplayer.wgt_BTL_SkillInputDisplayer_C.ExecuteUbergraph_wgt_BTL_SkillInputDisplayer");

	Uwgt_BTL_SkillInputDisplayer_C_ExecuteUbergraph_wgt_BTL_SkillInputDisplayer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
