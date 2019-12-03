
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

// Function WBP_MiniGameRotateIcon.WBP_MiniGameRotateIcon_C.PlayShakeStickAnim
// (NetReliable, Event, MulticastDelegate, Private, Protected, Delegate, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           isPlay                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MiniGameRotateIcon_C::PlayShakeStickAnim(bool isPlay)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGameRotateIcon.WBP_MiniGameRotateIcon_C.PlayShakeStickAnim");

	UWBP_MiniGameRotateIcon_C_PlayShakeStickAnim_Params params;
	params.isPlay = isPlay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniGameRotateIcon.WBP_MiniGameRotateIcon_C.SetVisibleIcon
// (NetRequest, Exec, Native, Static, NetMulticast, Private, Protected, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MiniGameRotateIcon_C::STATIC_SetVisibleIcon(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGameRotateIcon.WBP_MiniGameRotateIcon_C.SetVisibleIcon");

	UWBP_MiniGameRotateIcon_C_SetVisibleIcon_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniGameRotateIcon.WBP_MiniGameRotateIcon_C.PlayFadeAnim
// (Net, NetReliable, Exec, Event, NetResponse, Public, Protected, Delegate, NetServer, BlueprintEvent, BlueprintPure)
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
// (Native, NetResponse, MulticastDelegate, Private, Protected, NetServer, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
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
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniGameRotateIcon.WBP_MiniGameRotateIcon_C.Construct
// (Net, Exec, Native, Event, Static, MulticastDelegate, Protected, HasOutParms, HasDefaults, DLLImport)

void UWBP_MiniGameRotateIcon_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGameRotateIcon.WBP_MiniGameRotateIcon_C.Construct");

	UWBP_MiniGameRotateIcon_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniGameRotateIcon.WBP_MiniGameRotateIcon_C.Tick
// (NetRequest, Native, NetResponse, Static, Private, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MiniGameRotateIcon_C::STATIC_Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGameRotateIcon.WBP_MiniGameRotateIcon_C.Tick");

	UWBP_MiniGameRotateIcon_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniGameRotateIcon.WBP_MiniGameRotateIcon_C.ExecuteUbergraph_WBP_MiniGameRotateIcon
// (Net, NetReliable, Native, Static, NetMulticast, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MiniGameRotateIcon_C::STATIC_ExecuteUbergraph_WBP_MiniGameRotateIcon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGameRotateIcon.WBP_MiniGameRotateIcon_C.ExecuteUbergraph_WBP_MiniGameRotateIcon");

	UWBP_MiniGameRotateIcon_C_ExecuteUbergraph_WBP_MiniGameRotateIcon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
