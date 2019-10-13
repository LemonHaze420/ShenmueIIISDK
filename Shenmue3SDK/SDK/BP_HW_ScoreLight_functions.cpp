
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

// Function BP_HW_ScoreLight.BP_HW_ScoreLight_C.DispEnemyScoreLight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ArgDisp                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ArgBlinkIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HW_ScoreLight_C::DispEnemyScoreLight(bool ArgDisp, int ArgBlinkIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HW_ScoreLight.BP_HW_ScoreLight_C.DispEnemyScoreLight");

	ABP_HW_ScoreLight_C_DispEnemyScoreLight_Params params;
	params.ArgDisp = ArgDisp;
	params.ArgBlinkIndex = ArgBlinkIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HW_ScoreLight.BP_HW_ScoreLight_C.RegisterScoreLightArray
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_HW_ScoreLight_C::RegisterScoreLightArray()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HW_ScoreLight.BP_HW_ScoreLight_C.RegisterScoreLightArray");

	ABP_HW_ScoreLight_C_RegisterScoreLightArray_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HW_ScoreLight.BP_HW_ScoreLight_C.DispMyScoreLight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ArgDisp                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ArgBlinkIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HW_ScoreLight_C::DispMyScoreLight(bool ArgDisp, int ArgBlinkIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HW_ScoreLight.BP_HW_ScoreLight_C.DispMyScoreLight");

	ABP_HW_ScoreLight_C_DispMyScoreLight_Params params;
	params.ArgDisp = ArgDisp;
	params.ArgBlinkIndex = ArgBlinkIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HW_ScoreLight.BP_HW_ScoreLight_C.ScoreLightAllOff
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_HW_ScoreLight_C::ScoreLightAllOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HW_ScoreLight.BP_HW_ScoreLight_C.ScoreLightAllOff");

	ABP_HW_ScoreLight_C_ScoreLightAllOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HW_ScoreLight.BP_HW_ScoreLight_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_HW_ScoreLight_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HW_ScoreLight.BP_HW_ScoreLight_C.UserConstructionScript");

	ABP_HW_ScoreLight_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HW_ScoreLight.BP_HW_ScoreLight_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_HW_ScoreLight_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HW_ScoreLight.BP_HW_ScoreLight_C.ReceiveBeginPlay");

	ABP_HW_ScoreLight_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HW_ScoreLight.BP_HW_ScoreLight_C.ExecuteUbergraph_BP_HW_ScoreLight
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HW_ScoreLight_C::ExecuteUbergraph_BP_HW_ScoreLight(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HW_ScoreLight.BP_HW_ScoreLight_C.ExecuteUbergraph_BP_HW_ScoreLight");

	ABP_HW_ScoreLight_C_ExecuteUbergraph_BP_HW_ScoreLight_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HW_ScoreLight.BP_HW_ScoreLight_C.OnChangeLightDispacher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_HW_ScoreLight_C::OnChangeLightDispacher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HW_ScoreLight.BP_HW_ScoreLight_C.OnChangeLightDispacher__DelegateSignature");

	ABP_HW_ScoreLight_C_OnChangeLightDispacher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
