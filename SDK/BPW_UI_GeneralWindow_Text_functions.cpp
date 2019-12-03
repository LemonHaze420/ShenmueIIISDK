
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

// Function BPW_UI_GeneralWindow_Text.BPW_UI_GeneralWindow_Text_C.SetData
// (Exec, Native, Event, Static, Private, HasOutParms, NetClient, BlueprintPure)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            FontSize                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ETextJustify>      Justification                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_GeneralWindow_Text_C::STATIC_SetData(const struct FText& Text, int FontSize, TEnumAsByte<ETextJustify> Justification)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_GeneralWindow_Text.BPW_UI_GeneralWindow_Text_C.SetData");

	UBPW_UI_GeneralWindow_Text_C_SetData_Params params;
	params.Text = Text;
	params.FontSize = FontSize;
	params.Justification = Justification;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_GeneralWindow_Text.BPW_UI_GeneralWindow_Text_C.Construct
// (NetRequest, Event, MulticastDelegate, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintPure)

void UBPW_UI_GeneralWindow_Text_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_GeneralWindow_Text.BPW_UI_GeneralWindow_Text_C.Construct");

	UBPW_UI_GeneralWindow_Text_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_GeneralWindow_Text.BPW_UI_GeneralWindow_Text_C.Tick
// (NetReliable, Native, Static, NetMulticast, MulticastDelegate, Protected, HasDefaults, NetClient, BlueprintPure)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_GeneralWindow_Text_C::STATIC_Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_GeneralWindow_Text.BPW_UI_GeneralWindow_Text_C.Tick");

	UBPW_UI_GeneralWindow_Text_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_GeneralWindow_Text.BPW_UI_GeneralWindow_Text_C.ExecuteUbergraph_BPW_UI_GeneralWindow_Text
// (NetReliable, Event, NetResponse, Static, Protected, Delegate, NetServer, HasDefaults, NetClient, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_GeneralWindow_Text_C::STATIC_ExecuteUbergraph_BPW_UI_GeneralWindow_Text(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_GeneralWindow_Text.BPW_UI_GeneralWindow_Text_C.ExecuteUbergraph_BPW_UI_GeneralWindow_Text");

	UBPW_UI_GeneralWindow_Text_C_ExecuteUbergraph_BPW_UI_GeneralWindow_Text_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
