
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

// Function WBP_DebugChangeClothes.WBP_DebugChangeClothes_C.CreateFittingInfo
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FST_ClothesFittingInfo  OverrideInfo                   (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           RYO                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FST_ClothesFittingInfo> Array                          (Parm, OutParm, ZeroConstructor)

void UWBP_DebugChangeClothes_C::CreateFittingInfo(const struct FST_ClothesFittingInfo& OverrideInfo, bool RYO, TArray<struct FST_ClothesFittingInfo>* Array)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DebugChangeClothes.WBP_DebugChangeClothes_C.CreateFittingInfo");

	UWBP_DebugChangeClothes_C_CreateFittingInfo_Params params;
	params.OverrideInfo = OverrideInfo;
	params.RYO = RYO;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
}


// Function WBP_DebugChangeClothes.WBP_DebugChangeClothes_C.SetFocus
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_DebugChangeClothes_C::SetFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DebugChangeClothes.WBP_DebugChangeClothes_C.SetFocus");

	UWBP_DebugChangeClothes_C_SetFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_DebugChangeClothes.WBP_DebugChangeClothes_C.GetCurrentStatus
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWBP_DebugChangeClothes_C::GetCurrentStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DebugChangeClothes.WBP_DebugChangeClothes_C.GetCurrentStatus");

	UWBP_DebugChangeClothes_C_GetCurrentStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_DebugChangeClothes.WBP_DebugChangeClothes_C.IncrementLoop
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            Max                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_DebugChangeClothes_C::IncrementLoop(int Max, int* Index, int* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DebugChangeClothes.WBP_DebugChangeClothes_C.IncrementLoop");

	UWBP_DebugChangeClothes_C_IncrementLoop_Params params;
	params.Max = Max;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;
	if (Value != nullptr)
		*Value = params.Value;
}


// Function WBP_DebugChangeClothes.WBP_DebugChangeClothes_C.ChangePlayerModel
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_DebugChangeClothes_C::ChangePlayerModel()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DebugChangeClothes.WBP_DebugChangeClothes_C.ChangePlayerModel");

	UWBP_DebugChangeClothes_C_ChangePlayerModel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_DebugChangeClothes.WBP_DebugChangeClothes_C.ChangeCloth
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 InTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UWBP_DebugChangeClothes_C::ChangeCloth(const struct FString& InTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DebugChangeClothes.WBP_DebugChangeClothes_C.ChangeCloth");

	UWBP_DebugChangeClothes_C_ChangeCloth_Params params;
	params.InTarget = InTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_DebugChangeClothes.WBP_DebugChangeClothes_C.ChangeTarget
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_DebugChangeClothes_C::ChangeTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DebugChangeClothes.WBP_DebugChangeClothes_C.ChangeTarget");

	UWBP_DebugChangeClothes_C_ChangeTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_DebugChangeClothes.WBP_DebugChangeClothes_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent               InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_DebugChangeClothes_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DebugChangeClothes.WBP_DebugChangeClothes_C.OnKeyDown");

	UWBP_DebugChangeClothes_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_DebugChangeClothes.WBP_DebugChangeClothes_C.OnPreviewKeyDown
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent               InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_DebugChangeClothes_C::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DebugChangeClothes.WBP_DebugChangeClothes_C.OnPreviewKeyDown");

	UWBP_DebugChangeClothes_C_OnPreviewKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_DebugChangeClothes.WBP_DebugChangeClothes_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_DebugChangeClothes_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DebugChangeClothes.WBP_DebugChangeClothes_C.Construct");

	UWBP_DebugChangeClothes_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_DebugChangeClothes.WBP_DebugChangeClothes_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_DebugChangeClothes_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DebugChangeClothes.WBP_DebugChangeClothes_C.Destruct");

	UWBP_DebugChangeClothes_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_DebugChangeClothes.WBP_DebugChangeClothes_C.ExecuteUbergraph_WBP_DebugChangeClothes
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_DebugChangeClothes_C::ExecuteUbergraph_WBP_DebugChangeClothes(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DebugChangeClothes.WBP_DebugChangeClothes_C.ExecuteUbergraph_WBP_DebugChangeClothes");

	UWBP_DebugChangeClothes_C_ExecuteUbergraph_WBP_DebugChangeClothes_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
