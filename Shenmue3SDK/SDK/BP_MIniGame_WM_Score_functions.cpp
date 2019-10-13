
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

// Function BP_MIniGame_WM_Score.BP_MIniGame_WM_Score_C.ResetValue
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MIniGame_WM_Score_C::ResetValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MIniGame_WM_Score.BP_MIniGame_WM_Score_C.ResetValue");

	ABP_MIniGame_WM_Score_C_ResetValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MIniGame_WM_Score.BP_MIniGame_WM_Score_C.SetVisiblity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MIniGame_WM_Score_C::SetVisiblity(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MIniGame_WM_Score.BP_MIniGame_WM_Score_C.SetVisiblity");

	ABP_MIniGame_WM_Score_C_SetVisiblity_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MIniGame_WM_Score.BP_MIniGame_WM_Score_C.UpdateNumber
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MIniGame_WM_Score_C::UpdateNumber()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MIniGame_WM_Score.BP_MIniGame_WM_Score_C.UpdateNumber");

	ABP_MIniGame_WM_Score_C_UpdateNumber_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MIniGame_WM_Score.BP_MIniGame_WM_Score_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            DigitsNumber                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MIniGame_WM_Score_C::Initialize(int DigitsNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MIniGame_WM_Score.BP_MIniGame_WM_Score_C.Initialize");

	ABP_MIniGame_WM_Score_C_Initialize_Params params;
	params.DigitsNumber = DigitsNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MIniGame_WM_Score.BP_MIniGame_WM_Score_C.SetNumber
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Number                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsStage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MIniGame_WM_Score_C::SetNumber(int Number, bool IsStage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MIniGame_WM_Score.BP_MIniGame_WM_Score_C.SetNumber");

	ABP_MIniGame_WM_Score_C_SetNumber_Params params;
	params.Number = Number;
	params.IsStage = IsStage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MIniGame_WM_Score.BP_MIniGame_WM_Score_C.GetUVs
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Num                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector2D>       Array                          (Parm, OutParm, ZeroConstructor)

void ABP_MIniGame_WM_Score_C::GetUVs(int Num, TArray<struct FVector2D>* Array)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MIniGame_WM_Score.BP_MIniGame_WM_Score_C.GetUVs");

	ABP_MIniGame_WM_Score_C_GetUVs_Params params;
	params.Num = Num;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
}


// Function BP_MIniGame_WM_Score.BP_MIniGame_WM_Score_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MIniGame_WM_Score_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MIniGame_WM_Score.BP_MIniGame_WM_Score_C.UserConstructionScript");

	ABP_MIniGame_WM_Score_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MIniGame_WM_Score.BP_MIniGame_WM_Score_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MIniGame_WM_Score_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MIniGame_WM_Score.BP_MIniGame_WM_Score_C.ReceiveBeginPlay");

	ABP_MIniGame_WM_Score_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MIniGame_WM_Score.BP_MIniGame_WM_Score_C.ExecuteUbergraph_BP_MIniGame_WM_Score
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MIniGame_WM_Score_C::ExecuteUbergraph_BP_MIniGame_WM_Score(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MIniGame_WM_Score.BP_MIniGame_WM_Score_C.ExecuteUbergraph_BP_MIniGame_WM_Score");

	ABP_MIniGame_WM_Score_C_ExecuteUbergraph_BP_MIniGame_WM_Score_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
