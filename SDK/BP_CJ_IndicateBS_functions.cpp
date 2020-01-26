
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

// Function BP_CJ_IndicateBS.BP_CJ_IndicateBS_C.Culc_SinCurve90to270
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Blend_                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_CJ_IndicateBS_C::Culc_SinCurve90to270(float* Blend_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CJ_IndicateBS.BP_CJ_IndicateBS_C.Culc_SinCurve90to270");

	ABP_CJ_IndicateBS_C_Culc_SinCurve90to270_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Blend_ != nullptr)
		*Blend_ = params.Blend_;
}


// Function BP_CJ_IndicateBS.BP_CJ_IndicateBS_C.Culc_CupPos
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_CJ_IndicateBS_C::Culc_CupPos()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CJ_IndicateBS.BP_CJ_IndicateBS_C.Culc_CupPos");

	ABP_CJ_IndicateBS_C_Culc_CupPos_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CJ_IndicateBS.BP_CJ_IndicateBS_C.Set_LastPos
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          MoveValue                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_CJ_IndicateBS_C::Set_LastPos(float* MoveValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CJ_IndicateBS.BP_CJ_IndicateBS_C.Set_LastPos");

	ABP_CJ_IndicateBS_C_Set_LastPos_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MoveValue != nullptr)
		*MoveValue = params.MoveValue;
}


// Function BP_CJ_IndicateBS.BP_CJ_IndicateBS_C.Get_MoveChange
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          MoveValue                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_CJ_IndicateBS_C::Get_MoveChange(float* MoveValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CJ_IndicateBS.BP_CJ_IndicateBS_C.Get_MoveChange");

	ABP_CJ_IndicateBS_C_Get_MoveChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MoveValue != nullptr)
		*MoveValue = params.MoveValue;
}


// Function BP_CJ_IndicateBS.BP_CJ_IndicateBS_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_CJ_IndicateBS_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CJ_IndicateBS.BP_CJ_IndicateBS_C.UserConstructionScript");

	ABP_CJ_IndicateBS_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CJ_IndicateBS.BP_CJ_IndicateBS_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_CJ_IndicateBS_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CJ_IndicateBS.BP_CJ_IndicateBS_C.ReceiveBeginPlay");

	ABP_CJ_IndicateBS_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CJ_IndicateBS.BP_CJ_IndicateBS_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CJ_IndicateBS_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CJ_IndicateBS.BP_CJ_IndicateBS_C.ReceiveTick");

	ABP_CJ_IndicateBS_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CJ_IndicateBS.BP_CJ_IndicateBS_C.ExecuteUbergraph_BP_CJ_IndicateBS
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CJ_IndicateBS_C::ExecuteUbergraph_BP_CJ_IndicateBS(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CJ_IndicateBS.BP_CJ_IndicateBS_C.ExecuteUbergraph_BP_CJ_IndicateBS");

	ABP_CJ_IndicateBS_C_ExecuteUbergraph_BP_CJ_IndicateBS_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CJ_IndicateBS.BP_CJ_IndicateBS_C.MoveEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_CJ_IndicateBS_C::MoveEnd__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CJ_IndicateBS.BP_CJ_IndicateBS_C.MoveEnd__DelegateSignature");

	ABP_CJ_IndicateBS_C_MoveEnd__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
