
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

// Function WBP_QTESuccessText.WBP_QTESuccessText_C.SetText
// (NetRequest, Exec, Native, Event, Static, Private, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_QTESuccessText_C::STATIC_SetText(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESuccessText.WBP_QTESuccessText_C.SetText");

	UWBP_QTESuccessText_C_SetText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESuccessText.WBP_QTESuccessText_C.PreConstruct
// (Net, NetRequest, Native, Event, Static, Private, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_QTESuccessText_C::STATIC_PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESuccessText.WBP_QTESuccessText_C.PreConstruct");

	UWBP_QTESuccessText_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESuccessText.WBP_QTESuccessText_C.ExecuteUbergraph_WBP_QTESuccessText
// (NetRequest, Exec, Event, Static, NetMulticast, MulticastDelegate, Public, Protected, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_QTESuccessText_C::STATIC_ExecuteUbergraph_WBP_QTESuccessText(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESuccessText.WBP_QTESuccessText_C.ExecuteUbergraph_WBP_QTESuccessText");

	UWBP_QTESuccessText_C_ExecuteUbergraph_WBP_QTESuccessText_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
