
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

// Function WBP_MiniGameBigWheel.WBP_MiniGameBigWheel_C.SetButtonPower
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Power                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MiniGameBigWheel_C::SetButtonPower(float Power)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGameBigWheel.WBP_MiniGameBigWheel_C.SetButtonPower");

	UWBP_MiniGameBigWheel_C_SetButtonPower_Params params;
	params.Power = Power;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniGameBigWheel.WBP_MiniGameBigWheel_C.SetTexture
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              Texture                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MiniGameBigWheel_C::SetTexture(class UTexture2D* Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGameBigWheel.WBP_MiniGameBigWheel_C.SetTexture");

	UWBP_MiniGameBigWheel_C_SetTexture_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniGameBigWheel.WBP_MiniGameBigWheel_C.SetVisibleTicket
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            VisibleNum                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MiniGameBigWheel_C::SetVisibleTicket(int VisibleNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGameBigWheel.WBP_MiniGameBigWheel_C.SetVisibleTicket");

	UWBP_MiniGameBigWheel_C_SetVisibleTicket_Params params;
	params.VisibleNum = VisibleNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniGameBigWheel.WBP_MiniGameBigWheel_C.SetTicketPos
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_MiniGameBigWheel_C::SetTicketPos()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGameBigWheel.WBP_MiniGameBigWheel_C.SetTicketPos");

	UWBP_MiniGameBigWheel_C_SetTicketPos_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniGameBigWheel.WBP_MiniGameBigWheel_C.SetVisibleButtonIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MiniGameBigWheel_C::SetVisibleButtonIcon(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGameBigWheel.WBP_MiniGameBigWheel_C.SetVisibleButtonIcon");

	UWBP_MiniGameBigWheel_C_SetVisibleButtonIcon_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniGameBigWheel.WBP_MiniGameBigWheel_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MiniGameBigWheel_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGameBigWheel.WBP_MiniGameBigWheel_C.PreConstruct");

	UWBP_MiniGameBigWheel_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniGameBigWheel.WBP_MiniGameBigWheel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_MiniGameBigWheel_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGameBigWheel.WBP_MiniGameBigWheel_C.Construct");

	UWBP_MiniGameBigWheel_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniGameBigWheel.WBP_MiniGameBigWheel_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MiniGameBigWheel_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGameBigWheel.WBP_MiniGameBigWheel_C.Tick");

	UWBP_MiniGameBigWheel_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniGameBigWheel.WBP_MiniGameBigWheel_C.ExecuteUbergraph_WBP_MiniGameBigWheel
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MiniGameBigWheel_C::ExecuteUbergraph_WBP_MiniGameBigWheel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGameBigWheel.WBP_MiniGameBigWheel_C.ExecuteUbergraph_WBP_MiniGameBigWheel");

	UWBP_MiniGameBigWheel_C_ExecuteUbergraph_WBP_MiniGameBigWheel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
