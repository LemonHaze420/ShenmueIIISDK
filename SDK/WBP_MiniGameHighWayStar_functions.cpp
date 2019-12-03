
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
// (Exec, Event, Static, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport)

void UWBP_MiniGameHighWayStar_C::STATIC_UpdateAddScoreDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGameHighWayStar.WBP_MiniGameHighWayStar_C.UpdateAddScoreDisplay");

	UWBP_MiniGameHighWayStar_C_UpdateAddScoreDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniGameHighWayStar.WBP_MiniGameHighWayStar_C.SetUpdateScore
// (Net, NetReliable, Exec, Native, Event, Static, NetMulticast, Public, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MiniGameHighWayStar_C::STATIC_SetUpdateScore(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGameHighWayStar.WBP_MiniGameHighWayStar_C.SetUpdateScore");

	UWBP_MiniGameHighWayStar_C_SetUpdateScore_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniGameHighWayStar.WBP_MiniGameHighWayStar_C.Get_CurrentScore_Text_1
// (NetRequest, Native, Event, NetResponse, MulticastDelegate, Public, Protected, NetServer, DLLImport, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWBP_MiniGameHighWayStar_C::Get_CurrentScore_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGameHighWayStar.WBP_MiniGameHighWayStar_C.Get_CurrentScore_Text_1");

	UWBP_MiniGameHighWayStar_C_Get_CurrentScore_Text_1_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_MiniGameHighWayStar.WBP_MiniGameHighWayStar_C.SetLastScore
// (NetReliable, NetRequest, Exec, NetResponse, Static, NetMulticast, MulticastDelegate, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            Num                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MiniGameHighWayStar_C::STATIC_SetLastScore(int Num)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGameHighWayStar.WBP_MiniGameHighWayStar_C.SetLastScore");

	UWBP_MiniGameHighWayStar_C_SetLastScore_Params params;
	params.Num = Num;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniGameHighWayStar.WBP_MiniGameHighWayStar_C.SetVisibleScore
// (NetRequest, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
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
// (NetReliable, Exec, Static, NetMulticast, Private, Delegate, NetServer, HasOutParms, NetClient)
// Parameters:
// int                            ScoreNum                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MiniGameHighWayStar_C::STATIC_SetCurrentScore(int ScoreNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGameHighWayStar.WBP_MiniGameHighWayStar_C.SetCurrentScore");

	UWBP_MiniGameHighWayStar_C_SetCurrentScore_Params params;
	params.ScoreNum = ScoreNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniGameHighWayStar.WBP_MiniGameHighWayStar_C.SetVisibleIcon
// (Net, NetRequest, Event, NetResponse, Static, Public, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MiniGameHighWayStar_C::STATIC_SetVisibleIcon(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGameHighWayStar.WBP_MiniGameHighWayStar_C.SetVisibleIcon");

	UWBP_MiniGameHighWayStar_C_SetVisibleIcon_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniGameHighWayStar.WBP_MiniGameHighWayStar_C.Construct
// (NetReliable, Exec, Native, Event, Static, NetMulticast, Public, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void UWBP_MiniGameHighWayStar_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGameHighWayStar.WBP_MiniGameHighWayStar_C.Construct");

	UWBP_MiniGameHighWayStar_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniGameHighWayStar.WBP_MiniGameHighWayStar_C.Tick
// (Net, NetReliable, NetRequest, Native, Event, NetMulticast, MulticastDelegate, Protected, HasOutParms, NetClient, DLLImport)
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
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniGameHighWayStar.WBP_MiniGameHighWayStar_C.ExecuteUbergraph_WBP_MiniGameHighWayStar
// (Net, Exec, Native, NetResponse, Private, Delegate, NetServer, HasOutParms, NetClient)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MiniGameHighWayStar_C::ExecuteUbergraph_WBP_MiniGameHighWayStar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGameHighWayStar.WBP_MiniGameHighWayStar_C.ExecuteUbergraph_WBP_MiniGameHighWayStar");

	UWBP_MiniGameHighWayStar_C_ExecuteUbergraph_WBP_MiniGameHighWayStar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniGameHighWayStar.WBP_MiniGameHighWayStar_C.OnChangeDisplayScore__DelegateSignature
// (Static, MulticastDelegate, Private, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void UWBP_MiniGameHighWayStar_C::STATIC_OnChangeDisplayScore__DelegateSignature()
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
