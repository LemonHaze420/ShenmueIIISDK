
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

// Function BPW_UI_Clock.BPW_UI_Clock_C.SetDifficultyImage
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EBattleDifficulty> Difficulty                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_Clock_C::SetDifficultyImage(TEnumAsByte<EBattleDifficulty> Difficulty)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_Clock.BPW_UI_Clock_C.SetDifficultyImage");

	UBPW_UI_Clock_C_SetDifficultyImage_Params params;
	params.Difficulty = Difficulty;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_Clock.BPW_UI_Clock_C.SetMaterialTime
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDateTime               InDateTime                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UBPW_UI_Clock_C::SetMaterialTime(const struct FDateTime& InDateTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_Clock.BPW_UI_Clock_C.SetMaterialTime");

	UBPW_UI_Clock_C_SetMaterialTime_Params params;
	params.InDateTime = InDateTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_Clock.BPW_UI_Clock_C.GetForceVisibilityOperation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ForceVisibilityOperation       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_Clock_C::GetForceVisibilityOperation(bool* ForceVisibilityOperation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_Clock.BPW_UI_Clock_C.GetForceVisibilityOperation");

	UBPW_UI_Clock_C_GetForceVisibilityOperation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ForceVisibilityOperation != nullptr)
		*ForceVisibilityOperation = params.ForceVisibilityOperation;
}


// Function BPW_UI_Clock.BPW_UI_Clock_C.SetClockVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_Clock_C::SetClockVisibility(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_Clock.BPW_UI_Clock_C.SetClockVisibility");

	UBPW_UI_Clock_C_SetClockVisibility_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_Clock.BPW_UI_Clock_C.SetForceVisibilityOperation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ForceOperation                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_Clock_C::SetForceVisibilityOperation(bool ForceOperation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_Clock.BPW_UI_Clock_C.SetForceVisibilityOperation");

	UBPW_UI_Clock_C_SetForceVisibilityOperation_Params params;
	params.ForceOperation = ForceOperation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_Clock.BPW_UI_Clock_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPW_UI_Clock_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_Clock.BPW_UI_Clock_C.Construct");

	UBPW_UI_Clock_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_Clock.BPW_UI_Clock_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_Clock_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_Clock.BPW_UI_Clock_C.Tick");

	UBPW_UI_Clock_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_Clock.BPW_UI_Clock_C.ExecuteUbergraph_BPW_UI_Clock
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_Clock_C::ExecuteUbergraph_BPW_UI_Clock(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_Clock.BPW_UI_Clock_C.ExecuteUbergraph_BPW_UI_Clock");

	UBPW_UI_Clock_C_ExecuteUbergraph_BPW_UI_Clock_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
