
#include "../SDK.h"

// Name: Shenmue3SDK, Version: 1.4.1

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BPW_UI_Config_Volume.BPW_UI_Config_Volume_C.PlaySoundAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           isPlay                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_Config_Volume_C::PlaySoundAnimation(bool isPlay)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_Config_Volume.BPW_UI_Config_Volume_C.PlaySoundAnimation");

	UBPW_UI_Config_Volume_C_PlaySoundAnimation_Params params;
	params.isPlay = isPlay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_Config_Volume.BPW_UI_Config_Volume_C.SetAppearance
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsFocus                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_Config_Volume_C::SetAppearance(float Value, bool IsFocus)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_Config_Volume.BPW_UI_Config_Volume_C.SetAppearance");

	UBPW_UI_Config_Volume_C_SetAppearance_Params params;
	params.Value = Value;
	params.IsFocus = IsFocus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_Config_Volume.BPW_UI_Config_Volume_C.SetValue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_Config_Volume_C::SetValue(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_Config_Volume.BPW_UI_Config_Volume_C.SetValue");

	UBPW_UI_Config_Volume_C_SetValue_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
