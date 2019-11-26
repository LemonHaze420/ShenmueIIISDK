
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
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CW_WoodChop_C::SetVisibleIconButton(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CW_WoodChop.WBP_CW_WoodChop_C.SetVisibleIconButton");

	UWBP_CW_WoodChop_C_SetVisibleIconButton_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CW_WoodChop.WBP_CW_WoodChop_C.UnBindDispahcer
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_CW_WoodChop_C::UnBindDispahcer()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CW_WoodChop.WBP_CW_WoodChop_C.UnBindDispahcer");

	UWBP_CW_WoodChop_C_UnBindDispahcer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CW_WoodChop.WBP_CW_WoodChop_C.SetLocalizeText
// (Public, BlueprintCallable, BlueprintEvent)
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

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CW_WoodChop.WBP_CW_WoodChop_C.SetProgressCircleVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESlateVisibility               InVisibility                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CW_WoodChop_C::SetProgressCircleVisible(ESlateVisibility InVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CW_WoodChop.WBP_CW_WoodChop_C.SetProgressCircleVisible");

	UWBP_CW_WoodChop_C_SetProgressCircleVisible_Params params;
	params.InVisibility = InVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CW_WoodChop.WBP_CW_WoodChop_C.SetCircleProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CW_WoodChop_C::SetCircleProgress(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CW_WoodChop.WBP_CW_WoodChop_C.SetCircleProgress");

	UWBP_CW_WoodChop_C_SetCircleProgress_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CW_WoodChop.WBP_CW_WoodChop_C.SetDebugVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CW_WoodChop_C::SetDebugVisible(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CW_WoodChop.WBP_CW_WoodChop_C.SetDebugVisible");

	UWBP_CW_WoodChop_C_SetDebugVisible_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CW_WoodChop.WBP_CW_WoodChop_C.SetVolumeDebugText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
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
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            WoodNum                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CW_WoodChop_C::SetSuccessedWoodNum(int WoodNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CW_WoodChop.WBP_CW_WoodChop_C.SetSuccessedWoodNum");

	UWBP_CW_WoodChop_C_SetSuccessedWoodNum_Params params;
	params.WoodNum = WoodNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CW_WoodChop.WBP_CW_WoodChop_C.SetTimeProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          MaxTime                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CW_WoodChop_C::SetTimeProgress(float Time, float MaxTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CW_WoodChop.WBP_CW_WoodChop_C.SetTimeProgress");

	UWBP_CW_WoodChop_C_SetTimeProgress_Params params;
	params.Time = Time;
	params.MaxTime = MaxTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CW_WoodChop.WBP_CW_WoodChop_C.DrawResult
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SuccessNum                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ResultNum                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CW_WoodChop_C::DrawResult(int SuccessNum, int ResultNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CW_WoodChop.WBP_CW_WoodChop_C.DrawResult");

	UWBP_CW_WoodChop_C_DrawResult_Params params;
	params.SuccessNum = SuccessNum;
	params.ResultNum = ResultNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CW_WoodChop.WBP_CW_WoodChop_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_CW_WoodChop_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CW_WoodChop.WBP_CW_WoodChop_C.Construct");

	UWBP_CW_WoodChop_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CW_WoodChop.WBP_CW_WoodChop_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CW_WoodChop_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
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
// (BlueprintCallable, BlueprintEvent)

void UWBP_CW_WoodChop_C::AppearExcellent()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CW_WoodChop.WBP_CW_WoodChop_C.AppearExcellent");

	UWBP_CW_WoodChop_C_AppearExcellent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CW_WoodChop.WBP_CW_WoodChop_C.AppearUnbelievable
// (BlueprintCallable, BlueprintEvent)

void UWBP_CW_WoodChop_C::AppearUnbelievable()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CW_WoodChop.WBP_CW_WoodChop_C.AppearUnbelievable");

	UWBP_CW_WoodChop_C_AppearUnbelievable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CW_WoodChop.WBP_CW_WoodChop_C.ExecuteUbergraph_WBP_CW_WoodChop
// (HasDefaults)
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
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_CW_WoodChop_C::OnEndGameDispacher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CW_WoodChop.WBP_CW_WoodChop_C.OnEndGameDispacher__DelegateSignature");

	UWBP_CW_WoodChop_C_OnEndGameDispacher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CW_WoodChop.WBP_CW_WoodChop_C.OnPlaySEResultMoneyDispacher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_CW_WoodChop_C::OnPlaySEResultMoneyDispacher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CW_WoodChop.WBP_CW_WoodChop_C.OnPlaySEResultMoneyDispacher__DelegateSignature");

	UWBP_CW_WoodChop_C_OnPlaySEResultMoneyDispacher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CW_WoodChop.WBP_CW_WoodChop_C.OnPlaySEResultWoodDispacher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

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
