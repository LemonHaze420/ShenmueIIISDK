
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

// Function WBP_MiniGameHighWayStar.WBP_MiniGameHighWayStar_C.UpdateAddScoreDisplay
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_MiniGameHighWayStar_C::UpdateAddScoreDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGameHighWayStar.WBP_MiniGameHighWayStar_C.UpdateAddScoreDisplay");

	UWBP_MiniGameHighWayStar_C_UpdateAddScoreDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniGameHighWayStar.WBP_MiniGameHighWayStar_C.SetUpdateScore
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MiniGameHighWayStar_C::SetUpdateScore(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGameHighWayStar.WBP_MiniGameHighWayStar_C.SetUpdateScore");

	UWBP_MiniGameHighWayStar_C_SetUpdateScore_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniGameHighWayStar.WBP_MiniGameHighWayStar_C.Get_CurrentScore_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWBP_MiniGameHighWayStar_C::Get_CurrentScore_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGameHighWayStar.WBP_MiniGameHighWayStar_C.Get_CurrentScore_Text_1");

	UWBP_MiniGameHighWayStar_C_Get_CurrentScore_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_MiniGameHighWayStar.WBP_MiniGameHighWayStar_C.SetLastScore
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Num                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MiniGameHighWayStar_C::SetLastScore(int Num)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGameHighWayStar.WBP_MiniGameHighWayStar_C.SetLastScore");

	UWBP_MiniGameHighWayStar_C_SetLastScore_Params params;
	params.Num = Num;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniGameHighWayStar.WBP_MiniGameHighWayStar_C.SetVisibleScore
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MiniGameHighWayStar_C::SetVisibleScore(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGameHighWayStar.WBP_MiniGameHighWayStar_C.SetVisibleScore");

	UWBP_MiniGameHighWayStar_C_SetVisibleScore_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniGameHighWayStar.WBP_MiniGameHighWayStar_C.SetCurrentScore
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ScoreNum                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MiniGameHighWayStar_C::SetCurrentScore(int ScoreNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGameHighWayStar.WBP_MiniGameHighWayStar_C.SetCurrentScore");

	UWBP_MiniGameHighWayStar_C_SetCurrentScore_Params params;
	params.ScoreNum = ScoreNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniGameHighWayStar.WBP_MiniGameHighWayStar_C.SetVisibleIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MiniGameHighWayStar_C::SetVisibleIcon(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGameHighWayStar.WBP_MiniGameHighWayStar_C.SetVisibleIcon");

	UWBP_MiniGameHighWayStar_C_SetVisibleIcon_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniGameHighWayStar.WBP_MiniGameHighWayStar_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_MiniGameHighWayStar_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGameHighWayStar.WBP_MiniGameHighWayStar_C.Construct");

	UWBP_MiniGameHighWayStar_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniGameHighWayStar.WBP_MiniGameHighWayStar_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MiniGameHighWayStar_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGameHighWayStar.WBP_MiniGameHighWayStar_C.Tick");

	UWBP_MiniGameHighWayStar_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniGameHighWayStar.WBP_MiniGameHighWayStar_C.ExecuteUbergraph_WBP_MiniGameHighWayStar
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MiniGameHighWayStar_C::ExecuteUbergraph_WBP_MiniGameHighWayStar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGameHighWayStar.WBP_MiniGameHighWayStar_C.ExecuteUbergraph_WBP_MiniGameHighWayStar");

	UWBP_MiniGameHighWayStar_C_ExecuteUbergraph_WBP_MiniGameHighWayStar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniGameHighWayStar.WBP_MiniGameHighWayStar_C.OnChangeDisplayScore__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_MiniGameHighWayStar_C::OnChangeDisplayScore__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGameHighWayStar.WBP_MiniGameHighWayStar_C.OnChangeDisplayScore__DelegateSignature");

	UWBP_MiniGameHighWayStar_C_OnChangeDisplayScore__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
