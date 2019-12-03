
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
// (NetReliable, NetRequest, Native, NetResponse, Static, NetMulticast, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void UWBP_EventAttention_C::STATIC_PlayFadeArrowAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_EventAttention.WBP_EventAttention_C.PlayFadeArrowAnim");

	UWBP_EventAttention_C_PlayFadeArrowAnim_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_EventAttention.WBP_EventAttention_C.ForceEnabledDirectionArrow
// (NetReliable, Exec, Native, Event, MulticastDelegate, Private, Delegate, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)

void UWBP_EventAttention_C::ForceEnabledDirectionArrow()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_EventAttention.WBP_EventAttention_C.ForceEnabledDirectionArrow");

	UWBP_EventAttention_C_ForceEnabledDirectionArrow_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_EventAttention.WBP_EventAttention_C.ReverseArrow
// (NetRequest, Exec, Native, Event, MulticastDelegate, Public, Private, Protected, Delegate, BlueprintEvent, BlueprintPure)

void UWBP_EventAttention_C::ReverseArrow()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_EventAttention.WBP_EventAttention_C.ReverseArrow");

	UWBP_EventAttention_C_ReverseArrow_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_EventAttention.WBP_EventAttention_C.SetCenterCursorVisible
// (Net, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visibility                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_EventAttention_C::STATIC_SetCenterCursorVisible(bool Visibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_EventAttention.WBP_EventAttention_C.SetCenterCursorVisible");

	UWBP_EventAttention_C_SetCenterCursorVisible_Params params;
	params.Visibility = Visibility;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_EventAttention.WBP_EventAttention_C.SetArrowAlpha
// (NetRequest, Exec, Event, NetResponse, NetMulticast, Public, Private, Protected, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)
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
// (NetRequest, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent)
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
// (NetReliable, Exec, Native, NetMulticast, MulticastDelegate, Public, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_EventAttention_C::UpdateVisible(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_EventAttention.WBP_EventAttention_C.UpdateVisible");

	UWBP_EventAttention_C_UpdateVisible_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_EventAttention.WBP_EventAttention_C.UpdateDirectionArrow
// (Event, Static, NetMulticast, Public, Private, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<struct FName>           VisibleArrowName               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UWBP_EventAttention_C::STATIC_UpdateDirectionArrow(TArray<struct FName>* VisibleArrowName)
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
// (Exec, Native, NetResponse, Static, NetMulticast, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_EventAttention_C::STATIC_PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_EventAttention.WBP_EventAttention_C.PreConstruct");

	UWBP_EventAttention_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_EventAttention.WBP_EventAttention_C.Construct
// (NetReliable, NetRequest, Native, Event, NetResponse, Static, NetMulticast, NetServer)

void UWBP_EventAttention_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_EventAttention.WBP_EventAttention_C.Construct");

	UWBP_EventAttention_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_EventAttention.WBP_EventAttention_C.ExecuteUbergraph_WBP_EventAttention
// (NetRequest, Native, Event, Static, NetMulticast, Public, Private, Protected, NetServer, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_EventAttention_C::STATIC_ExecuteUbergraph_WBP_EventAttention(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_EventAttention.WBP_EventAttention_C.ExecuteUbergraph_WBP_EventAttention");

	UWBP_EventAttention_C_ExecuteUbergraph_WBP_EventAttention_Params params;
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
