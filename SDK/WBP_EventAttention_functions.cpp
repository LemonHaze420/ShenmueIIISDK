
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

// Function WBP_EventAttention.WBP_EventAttention_C.PlayFadeArrowAnim
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_EventAttention_C::PlayFadeArrowAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_EventAttention.WBP_EventAttention_C.PlayFadeArrowAnim");

	UWBP_EventAttention_C_PlayFadeArrowAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_EventAttention.WBP_EventAttention_C.ForceEnabledDirectionArrow
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_EventAttention_C::ForceEnabledDirectionArrow()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_EventAttention.WBP_EventAttention_C.ForceEnabledDirectionArrow");

	UWBP_EventAttention_C_ForceEnabledDirectionArrow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_EventAttention.WBP_EventAttention_C.ReverseArrow
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_EventAttention_C::ReverseArrow()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_EventAttention.WBP_EventAttention_C.ReverseArrow");

	UWBP_EventAttention_C_ReverseArrow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_EventAttention.WBP_EventAttention_C.SetCenterCursorVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visibility                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_EventAttention_C::SetCenterCursorVisible(bool Visibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_EventAttention.WBP_EventAttention_C.SetCenterCursorVisible");

	UWBP_EventAttention_C_SetCenterCursorVisible_Params params;
	params.Visibility = Visibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_EventAttention.WBP_EventAttention_C.SetArrowAlpha
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          BaseAlpha                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ZoomAlpha                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_EventAttention_C::SetArrowAlpha(float BaseAlpha, float ZoomAlpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_EventAttention.WBP_EventAttention_C.SetArrowAlpha");

	UWBP_EventAttention_C_SetArrowAlpha_Params params;
	params.BaseAlpha = BaseAlpha;
	params.ZoomAlpha = ZoomAlpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_EventAttention.WBP_EventAttention_C.SetArrowPosition
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          OffsetRate                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_EventAttention_C::SetArrowPosition(float OffsetRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_EventAttention.WBP_EventAttention_C.SetArrowPosition");

	UWBP_EventAttention_C_SetArrowPosition_Params params;
	params.OffsetRate = OffsetRate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_EventAttention.WBP_EventAttention_C.UpdateVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_EventAttention_C::UpdateVisible(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_EventAttention.WBP_EventAttention_C.UpdateVisible");

	UWBP_EventAttention_C_UpdateVisible_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_EventAttention.WBP_EventAttention_C.UpdateDirectionArrow
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FName>           VisibleArrowName               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UWBP_EventAttention_C::UpdateDirectionArrow(TArray<struct FName>* VisibleArrowName)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_EventAttention.WBP_EventAttention_C.UpdateDirectionArrow");

	UWBP_EventAttention_C_UpdateDirectionArrow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (VisibleArrowName != nullptr)
		*VisibleArrowName = params.VisibleArrowName;
}


// Function WBP_EventAttention.WBP_EventAttention_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_EventAttention_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_EventAttention.WBP_EventAttention_C.PreConstruct");

	UWBP_EventAttention_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_EventAttention.WBP_EventAttention_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_EventAttention_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_EventAttention.WBP_EventAttention_C.Construct");

	UWBP_EventAttention_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_EventAttention.WBP_EventAttention_C.ExecuteUbergraph_WBP_EventAttention
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_EventAttention_C::ExecuteUbergraph_WBP_EventAttention(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_EventAttention.WBP_EventAttention_C.ExecuteUbergraph_WBP_EventAttention");

	UWBP_EventAttention_C_ExecuteUbergraph_WBP_EventAttention_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
