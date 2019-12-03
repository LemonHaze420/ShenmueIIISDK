
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

// Function WBP_CW_WoodChop.WBP_CW_WoodChop_C.SetVisibleIconButton
// (NetRequest, Exec, Native, Public, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CW_WoodChop_C::SetVisibleIconButton(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CW_WoodChop.WBP_CW_WoodChop_C.SetVisibleIconButton");

	UWBP_CW_WoodChop_C_SetVisibleIconButton_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CW_WoodChop.WBP_CW_WoodChop_C.UnBindDispahcer
// (Net, NetReliable, Exec, Native, Public, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)

void UWBP_CW_WoodChop_C::UnBindDispahcer()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CW_WoodChop.WBP_CW_WoodChop_C.UnBindDispahcer");

	UWBP_CW_WoodChop_C_UnBindDispahcer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CW_WoodChop.WBP_CW_WoodChop_C.SetLocalizeText
// (Native, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ExcellentText                  (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   UnbelievableText               (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   FirewoodText                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   EarningsText                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_CW_WoodChop_C::SetLocalizeText(const struct FText& ExcellentText, const struct FText& UnbelievableText, const struct FText& FirewoodText, const struct FText& EarningsText)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CW_WoodChop.WBP_CW_WoodChop_C.SetLocalizeText");

	UWBP_CW_WoodChop_C_SetLocalizeText_Params params;
	params.ExcellentText = ExcellentText;
	params.UnbelievableText = UnbelievableText;
	params.FirewoodText = FirewoodText;
	params.EarningsText = EarningsText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CW_WoodChop.WBP_CW_WoodChop_C.SetProgressCircleVisible
// (NetRequest, Exec, Native, Public, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// ESlateVisibility               InVisibility                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CW_WoodChop_C::SetProgressCircleVisible(ESlateVisibility InVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CW_WoodChop.WBP_CW_WoodChop_C.SetProgressCircleVisible");

	UWBP_CW_WoodChop_C_SetProgressCircleVisible_Params params;
	params.InVisibility = InVisibility;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CW_WoodChop.WBP_CW_WoodChop_C.SetCircleProgress
// (Net, NetRequest, Exec, Native, Public, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CW_WoodChop_C::SetCircleProgress(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CW_WoodChop.WBP_CW_WoodChop_C.SetCircleProgress");

	UWBP_CW_WoodChop_C_SetCircleProgress_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CW_WoodChop.WBP_CW_WoodChop_C.SetDebugVisible
// (Net, NetReliable, Event, Static, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CW_WoodChop_C::STATIC_SetDebugVisible(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CW_WoodChop.WBP_CW_WoodChop_C.SetDebugVisible");

	UWBP_CW_WoodChop_C_SetDebugVisible_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CW_WoodChop.WBP_CW_WoodChop_C.SetVolumeDebugText
// (Net, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport)
// Parameters:
// int                            Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Volume                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CW_WoodChop_C::SetVolumeDebugText(int Type, float Volume)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CW_WoodChop.WBP_CW_WoodChop_C.SetVolumeDebugText");

	UWBP_CW_WoodChop_C_SetVolumeDebugText_Params params;
	params.Type = Type;
	params.Volume = Volume;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CW_WoodChop.WBP_CW_WoodChop_C.SetSuccessedWoodNum
// (Net, NetReliable, Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            WoodNum                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CW_WoodChop_C::STATIC_SetSuccessedWoodNum(int WoodNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CW_WoodChop.WBP_CW_WoodChop_C.SetSuccessedWoodNum");

	UWBP_CW_WoodChop_C_SetSuccessedWoodNum_Params params;
	params.WoodNum = WoodNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CW_WoodChop.WBP_CW_WoodChop_C.SetTimeProgress
// (Exec, Native, Event, Static, NetMulticast, MulticastDelegate, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          MaxTime                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CW_WoodChop_C::STATIC_SetTimeProgress(float Time, float MaxTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CW_WoodChop.WBP_CW_WoodChop_C.SetTimeProgress");

	UWBP_CW_WoodChop_C_SetTimeProgress_Params params;
	params.Time = Time;
	params.MaxTime = MaxTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CW_WoodChop.WBP_CW_WoodChop_C.DrawResult
// (Exec, Native, Event, NetResponse, Static, MulticastDelegate, Public, Private, Protected, Delegate, NetClient, BlueprintEvent)
// Parameters:
// int                            SuccessNum                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ResultNum                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CW_WoodChop_C::STATIC_DrawResult(int SuccessNum, int ResultNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CW_WoodChop.WBP_CW_WoodChop_C.DrawResult");

	UWBP_CW_WoodChop_C_DrawResult_Params params;
	params.SuccessNum = SuccessNum;
	params.ResultNum = ResultNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CW_WoodChop.WBP_CW_WoodChop_C.Construct
// (NetReliable, NetRequest, Exec, NetResponse, NetMulticast, Public, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void UWBP_CW_WoodChop_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CW_WoodChop.WBP_CW_WoodChop_C.Construct");

	UWBP_CW_WoodChop_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CW_WoodChop.WBP_CW_WoodChop_C.Tick
// (NetReliable, NetRequest, Exec, Event, NetResponse, Static, Public, Private, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CW_WoodChop_C::STATIC_Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CW_WoodChop.WBP_CW_WoodChop_C.Tick");

	UWBP_CW_WoodChop_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CW_WoodChop.WBP_CW_WoodChop_C.AppearExcellent
// (Net, NetRequest, Exec, NetResponse, NetMulticast, Public, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void UWBP_CW_WoodChop_C::AppearExcellent()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CW_WoodChop.WBP_CW_WoodChop_C.AppearExcellent");

	UWBP_CW_WoodChop_C_AppearExcellent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CW_WoodChop.WBP_CW_WoodChop_C.AppearUnbelievable
// (NetRequest, Exec, NetResponse, NetMulticast, Public, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void UWBP_CW_WoodChop_C::AppearUnbelievable()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CW_WoodChop.WBP_CW_WoodChop_C.AppearUnbelievable");

	UWBP_CW_WoodChop_C_AppearUnbelievable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CW_WoodChop.WBP_CW_WoodChop_C.ExecuteUbergraph_WBP_CW_WoodChop
// (Net, NetReliable, NetRequest, Exec, Event, NetResponse, Public, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CW_WoodChop_C::ExecuteUbergraph_WBP_CW_WoodChop(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CW_WoodChop.WBP_CW_WoodChop_C.ExecuteUbergraph_WBP_CW_WoodChop");

	UWBP_CW_WoodChop_C_ExecuteUbergraph_WBP_CW_WoodChop_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CW_WoodChop.WBP_CW_WoodChop_C.OnEndGameDispacher__DelegateSignature
// (Net, Event, NetResponse, MulticastDelegate, Private, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void UWBP_CW_WoodChop_C::OnEndGameDispacher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CW_WoodChop.WBP_CW_WoodChop_C.OnEndGameDispacher__DelegateSignature");

	UWBP_CW_WoodChop_C_OnEndGameDispacher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CW_WoodChop.WBP_CW_WoodChop_C.OnPlaySEResultMoneyDispacher__DelegateSignature
// (Net, Event, NetResponse, MulticastDelegate, Private, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void UWBP_CW_WoodChop_C::OnPlaySEResultMoneyDispacher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CW_WoodChop.WBP_CW_WoodChop_C.OnPlaySEResultMoneyDispacher__DelegateSignature");

	UWBP_CW_WoodChop_C_OnPlaySEResultMoneyDispacher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CW_WoodChop.WBP_CW_WoodChop_C.OnPlaySEResultWoodDispacher__DelegateSignature
// (Net, Event, NetResponse, MulticastDelegate, Private, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void UWBP_CW_WoodChop_C::OnPlaySEResultWoodDispacher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CW_WoodChop.WBP_CW_WoodChop_C.OnPlaySEResultWoodDispacher__DelegateSignature");

	UWBP_CW_WoodChop_C_OnPlaySEResultWoodDispacher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
