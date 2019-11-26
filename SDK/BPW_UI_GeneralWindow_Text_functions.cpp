
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
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            FontSize                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ETextJustify>      Justification                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_GeneralWindow_Text_C::SetData(const struct FText& Text, int FontSize, TEnumAsByte<ETextJustify> Justification)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_GeneralWindow_Text.BPW_UI_GeneralWindow_Text_C.SetData");

	UBPW_UI_GeneralWindow_Text_C_SetData_Params params;
	params.Text = Text;
	params.FontSize = FontSize;
	params.Justification = Justification;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_GeneralWindow_Text.BPW_UI_GeneralWindow_Text_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPW_UI_GeneralWindow_Text_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_GeneralWindow_Text.BPW_UI_GeneralWindow_Text_C.Construct");

	UBPW_UI_GeneralWindow_Text_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_GeneralWindow_Text.BPW_UI_GeneralWindow_Text_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_GeneralWindow_Text_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_GeneralWindow_Text.BPW_UI_GeneralWindow_Text_C.Tick");

	UBPW_UI_GeneralWindow_Text_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_GeneralWindow_Text.BPW_UI_GeneralWindow_Text_C.ExecuteUbergraph_BPW_UI_GeneralWindow_Text
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_GeneralWindow_Text_C::ExecuteUbergraph_BPW_UI_GeneralWindow_Text(int EntryPoint)
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
