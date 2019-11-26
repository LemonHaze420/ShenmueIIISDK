
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

// Function WBP_MiniGameRotateIcon.WBP_MiniGameRotateIcon_C.SetRotateIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          StartTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsRightRotate                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bStopRotation                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MiniGameRotateIcon_C::SetRotateIcon(float StartTime, bool IsRightRotate, bool bStopRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGameRotateIcon.WBP_MiniGameRotateIcon_C.SetRotateIcon");

	UWBP_MiniGameRotateIcon_C_SetRotateIcon_Params params;
	params.StartTime = StartTime;
	params.IsRightRotate = IsRightRotate;
	params.bStopRotation = bStopRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniGameRotateIcon.WBP_MiniGameRotateIcon_C.SetVisibleIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MiniGameRotateIcon_C::SetVisibleIcon(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGameRotateIcon.WBP_MiniGameRotateIcon_C.SetVisibleIcon");

	UWBP_MiniGameRotateIcon_C_SetVisibleIcon_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniGameRotateIcon.WBP_MiniGameRotateIcon_C.PlayFadeAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsAppear                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MiniGameRotateIcon_C::PlayFadeAnim(bool IsAppear)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGameRotateIcon.WBP_MiniGameRotateIcon_C.PlayFadeAnim");

	UWBP_MiniGameRotateIcon_C_PlayFadeAnim_Params params;
	params.IsAppear = IsAppear;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniGameRotateIcon.WBP_MiniGameRotateIcon_C.PlayRotationAnim
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsRightRotate                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          PlaybackSpeed                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ShakeRotateIcon                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MiniGameRotateIcon_C::PlayRotationAnim(bool IsRightRotate, float PlaybackSpeed, bool ShakeRotateIcon)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGameRotateIcon.WBP_MiniGameRotateIcon_C.PlayRotationAnim");

	UWBP_MiniGameRotateIcon_C_PlayRotationAnim_Params params;
	params.IsRightRotate = IsRightRotate;
	params.PlaybackSpeed = PlaybackSpeed;
	params.ShakeRotateIcon = ShakeRotateIcon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniGameRotateIcon.WBP_MiniGameRotateIcon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_MiniGameRotateIcon_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGameRotateIcon.WBP_MiniGameRotateIcon_C.Construct");

	UWBP_MiniGameRotateIcon_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniGameRotateIcon.WBP_MiniGameRotateIcon_C.ExecuteUbergraph_WBP_MiniGameRotateIcon
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MiniGameRotateIcon_C::ExecuteUbergraph_WBP_MiniGameRotateIcon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGameRotateIcon.WBP_MiniGameRotateIcon_C.ExecuteUbergraph_WBP_MiniGameRotateIcon");

	UWBP_MiniGameRotateIcon_C_ExecuteUbergraph_WBP_MiniGameRotateIcon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
