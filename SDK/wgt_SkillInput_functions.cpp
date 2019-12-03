
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

// Function wgt_SkillInput.wgt_SkillInput_C.GetShoulderInputImage
// (NetReliable, NetRequest, Exec, Event, NetMulticast, MulticastDelegate, Private, Delegate, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<EGamepadShoulder>  Selection                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Image                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uwgt_SkillInput_C::GetShoulderInputImage(TEnumAsByte<EGamepadShoulder> Selection, class UTexture2D** Image)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_SkillInput.wgt_SkillInput_C.GetShoulderInputImage");

	Uwgt_SkillInput_C_GetShoulderInputImage_Params params;
	params.Selection = Selection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Image != nullptr)
		*Image = params.Image;
}


// Function wgt_SkillInput.wgt_SkillInput_C.SetInputByShoulderButton
// (Net, NetReliable, Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<EGamepadShoulder>  Modifier                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_SkillInput_C::STATIC_SetInputByShoulderButton(TEnumAsByte<EGamepadShoulder> Modifier)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_SkillInput.wgt_SkillInput_C.SetInputByShoulderButton");

	Uwgt_SkillInput_C_SetInputByShoulderButton_Params params;
	params.Modifier = Modifier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_SkillInput.wgt_SkillInput_C.GetShoulderStyle
// (Net, NetReliable, NetRequest, Native, Event, NetResponse, Static, NetMulticast, Public, Delegate, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// TEnumAsByte<EShoulderButtonStyle> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EShoulderButtonStyle> Uwgt_SkillInput_C::STATIC_GetShoulderStyle()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_SkillInput.wgt_SkillInput_C.GetShoulderStyle");

	Uwgt_SkillInput_C_GetShoulderStyle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function wgt_SkillInput.wgt_SkillInput_C.GetModifierInputImage
// (Native, NetResponse, Static, NetMulticast, MulticastDelegate, Private, Protected, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EBTL_HoldInputType             Selection                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Image                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uwgt_SkillInput_C::STATIC_GetModifierInputImage(EBTL_HoldInputType Selection, class UTexture2D** Image)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_SkillInput.wgt_SkillInput_C.GetModifierInputImage");

	Uwgt_SkillInput_C_GetModifierInputImage_Params params;
	params.Selection = Selection;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Image != nullptr)
		*Image = params.Image;
}


// Function wgt_SkillInput.wgt_SkillInput_C.SetStyle
// (NetReliable, NetRequest, Exec, Native, Static, NetMulticast, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<EFaceButtonImageStyle> Style                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_SkillInput_C::STATIC_SetStyle(TEnumAsByte<EFaceButtonImageStyle> Style)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_SkillInput.wgt_SkillInput_C.SetStyle");

	Uwgt_SkillInput_C_SetStyle_Params params;
	params.Style = Style;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_SkillInput.wgt_SkillInput_C.SetInputByModifierButton
// (Net, NetReliable, NetRequest, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// EBTL_HoldInputType             Modifier                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_SkillInput_C::STATIC_SetInputByModifierButton(EBTL_HoldInputType Modifier)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_SkillInput.wgt_SkillInput_C.SetInputByModifierButton");

	Uwgt_SkillInput_C_SetInputByModifierButton_Params params;
	params.Modifier = Modifier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_SkillInput.wgt_SkillInput_C.SetInputByActionName
// (NetReliable, NetRequest, Exec, NetResponse, Static, NetMulticast, MulticastDelegate, Private, Protected, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   Selection                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_SkillInput_C::STATIC_SetInputByActionName(const struct FName& Selection)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_SkillInput.wgt_SkillInput_C.SetInputByActionName");

	Uwgt_SkillInput_C_SetInputByActionName_Params params;
	params.Selection = Selection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_SkillInput.wgt_SkillInput_C.GetAttackInputImage
// (Net, NetReliable, NetRequest, Exec, NetResponse, Static, NetMulticast, Public, Delegate, NetServer, HasDefaults, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FName                   Selection                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Graphic                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uwgt_SkillInput_C::STATIC_GetAttackInputImage(const struct FName& Selection, class UTexture2D** Graphic)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_SkillInput.wgt_SkillInput_C.GetAttackInputImage");

	Uwgt_SkillInput_C_GetAttackInputImage_Params params;
	params.Selection = Selection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Graphic != nullptr)
		*Graphic = params.Graphic;
}


// Function wgt_SkillInput.wgt_SkillInput_C.Construct
// (NetReliable, NetRequest, Exec, Native, Static, NetMulticast, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void Uwgt_SkillInput_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_SkillInput.wgt_SkillInput_C.Construct");

	Uwgt_SkillInput_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_SkillInput.wgt_SkillInput_C.ExecuteUbergraph_wgt_SkillInput
// (Net, NetReliable, Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Protected, NetServer, HasDefaults, NetClient, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_SkillInput_C::STATIC_ExecuteUbergraph_wgt_SkillInput(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_SkillInput.wgt_SkillInput_C.ExecuteUbergraph_wgt_SkillInput");

	Uwgt_SkillInput_C_ExecuteUbergraph_wgt_SkillInput_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
