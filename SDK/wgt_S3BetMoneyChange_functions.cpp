
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

// Function wgt_S3BetMoneyChange.wgt_S3BetMoneyChange_C.InitData
// (Exec, Static, NetMulticast, MulticastDelegate, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent)

void Uwgt_S3BetMoneyChange_C::STATIC_InitData()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3BetMoneyChange.wgt_S3BetMoneyChange_C.InitData");

	Uwgt_S3BetMoneyChange_C_InitData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3BetMoneyChange.wgt_S3BetMoneyChange_C.SetNextData
// (NetReliable, NetRequest, Native, Event, NetMulticast, MulticastDelegate, Public, Private, Protected, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            addFuda                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_S3BetMoneyChange_C::SetNextData(int addFuda)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3BetMoneyChange.wgt_S3BetMoneyChange_C.SetNextData");

	Uwgt_S3BetMoneyChange_C_SetNextData_Params params;
	params.addFuda = addFuda;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3BetMoneyChange.wgt_S3BetMoneyChange_C.Construct
// (Exec, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, Const)

void Uwgt_S3BetMoneyChange_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3BetMoneyChange.wgt_S3BetMoneyChange_C.Construct");

	Uwgt_S3BetMoneyChange_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3BetMoneyChange.wgt_S3BetMoneyChange_C.Tick
// (Net, NetRequest, Exec, Event, NetResponse, MulticastDelegate, Private, Protected, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_S3BetMoneyChange_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3BetMoneyChange.wgt_S3BetMoneyChange_C.Tick");

	Uwgt_S3BetMoneyChange_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3BetMoneyChange.wgt_S3BetMoneyChange_C.BndEvt__PushAnim_Left_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (NetReliable, Native, Event, NetResponse, Static, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, Const)

void Uwgt_S3BetMoneyChange_C::STATIC_BndEvt__PushAnim_Left_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3BetMoneyChange.wgt_S3BetMoneyChange_C.BndEvt__PushAnim_Left_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	Uwgt_S3BetMoneyChange_C_BndEvt__PushAnim_Left_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3BetMoneyChange.wgt_S3BetMoneyChange_C.BndEvt__PushAnim_Top_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (Net, Native, Event, NetResponse, Static, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, Const)

void Uwgt_S3BetMoneyChange_C::STATIC_BndEvt__PushAnim_Top_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3BetMoneyChange.wgt_S3BetMoneyChange_C.BndEvt__PushAnim_Top_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	Uwgt_S3BetMoneyChange_C_BndEvt__PushAnim_Top_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3BetMoneyChange.wgt_S3BetMoneyChange_C.BndEvt__PushAnim_Right_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (Net, Native, Event, NetResponse, Static, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, Const)

void Uwgt_S3BetMoneyChange_C::STATIC_BndEvt__PushAnim_Right_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3BetMoneyChange.wgt_S3BetMoneyChange_C.BndEvt__PushAnim_Right_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	Uwgt_S3BetMoneyChange_C_BndEvt__PushAnim_Right_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3BetMoneyChange.wgt_S3BetMoneyChange_C.BndEvt__PushAnim_Down_K2Node_ComponentBoundEvent_3_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (Native, Event, NetResponse, Static, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, Const)

void Uwgt_S3BetMoneyChange_C::STATIC_BndEvt__PushAnim_Down_K2Node_ComponentBoundEvent_3_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3BetMoneyChange.wgt_S3BetMoneyChange_C.BndEvt__PushAnim_Down_K2Node_ComponentBoundEvent_3_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	Uwgt_S3BetMoneyChange_C_BndEvt__PushAnim_Down_K2Node_ComponentBoundEvent_3_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3BetMoneyChange.wgt_S3BetMoneyChange_C.ExecuteUbergraph_wgt_S3BetMoneyChange
// (NetReliable, Native, Static, NetMulticast, MulticastDelegate, Private, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_S3BetMoneyChange_C::STATIC_ExecuteUbergraph_wgt_S3BetMoneyChange(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3BetMoneyChange.wgt_S3BetMoneyChange_C.ExecuteUbergraph_wgt_S3BetMoneyChange");

	Uwgt_S3BetMoneyChange_C_ExecuteUbergraph_wgt_S3BetMoneyChange_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3BetMoneyChange.wgt_S3BetMoneyChange_C.ED_AnimFinish__DelegateSignature
// (NetReliable, Exec, Event, NetMulticast, Private, Protected, NetServer, HasOutParms, HasDefaults, NetClient, Const)

void Uwgt_S3BetMoneyChange_C::ED_AnimFinish__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3BetMoneyChange.wgt_S3BetMoneyChange_C.ED_AnimFinish__DelegateSignature");

	Uwgt_S3BetMoneyChange_C_ED_AnimFinish__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
