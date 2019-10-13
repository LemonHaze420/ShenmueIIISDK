
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

// Function wgt_SkillInput.wgt_SkillInput_C.GetShoulderInputImage
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
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
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGamepadShoulder>  Modifier                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_SkillInput_C::SetInputByShoulderButton(TEnumAsByte<EGamepadShoulder> Modifier)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_SkillInput.wgt_SkillInput_C.SetInputByShoulderButton");

	Uwgt_SkillInput_C_SetInputByShoulderButton_Params params;
	params.Modifier = Modifier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_SkillInput.wgt_SkillInput_C.GetShoulderStyle
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TEnumAsByte<EShoulderButtonStyle> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EShoulderButtonStyle> Uwgt_SkillInput_C::GetShoulderStyle()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_SkillInput.wgt_SkillInput_C.GetShoulderStyle");

	Uwgt_SkillInput_C_GetShoulderStyle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function wgt_SkillInput.wgt_SkillInput_C.GetModifierInputImage
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// EBTL_HoldInputType             Selection                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Image                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uwgt_SkillInput_C::GetModifierInputImage(EBTL_HoldInputType Selection, class UTexture2D** Image)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_SkillInput.wgt_SkillInput_C.GetModifierInputImage");

	Uwgt_SkillInput_C_GetModifierInputImage_Params params;
	params.Selection = Selection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Image != nullptr)
		*Image = params.Image;
}


// Function wgt_SkillInput.wgt_SkillInput_C.SetStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EFaceButtonImageStyle> Style                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_SkillInput_C::SetStyle(TEnumAsByte<EFaceButtonImageStyle> Style)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_SkillInput.wgt_SkillInput_C.SetStyle");

	Uwgt_SkillInput_C_SetStyle_Params params;
	params.Style = Style;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_SkillInput.wgt_SkillInput_C.SetInputByModifierButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EBTL_HoldInputType             Modifier                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_SkillInput_C::SetInputByModifierButton(EBTL_HoldInputType Modifier)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_SkillInput.wgt_SkillInput_C.SetInputByModifierButton");

	Uwgt_SkillInput_C_SetInputByModifierButton_Params params;
	params.Modifier = Modifier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_SkillInput.wgt_SkillInput_C.SetInputByActionName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Selection                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_SkillInput_C::SetInputByActionName(const struct FName& Selection)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_SkillInput.wgt_SkillInput_C.SetInputByActionName");

	Uwgt_SkillInput_C_SetInputByActionName_Params params;
	params.Selection = Selection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_SkillInput.wgt_SkillInput_C.GetAttackInputImage
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FName                   Selection                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Graphic                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uwgt_SkillInput_C::GetAttackInputImage(const struct FName& Selection, class UTexture2D** Graphic)
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
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uwgt_SkillInput_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_SkillInput.wgt_SkillInput_C.Construct");

	Uwgt_SkillInput_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_SkillInput.wgt_SkillInput_C.ExecuteUbergraph_wgt_SkillInput
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_SkillInput_C::ExecuteUbergraph_wgt_SkillInput(int EntryPoint)
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
