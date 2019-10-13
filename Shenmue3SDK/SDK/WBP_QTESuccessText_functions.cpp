
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

// Function WBP_QTESuccessText.WBP_QTESuccessText_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_QTESuccessText_C::SetText(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESuccessText.WBP_QTESuccessText_C.SetText");

	UWBP_QTESuccessText_C_SetText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESuccessText.WBP_QTESuccessText_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_QTESuccessText_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESuccessText.WBP_QTESuccessText_C.PreConstruct");

	UWBP_QTESuccessText_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESuccessText.WBP_QTESuccessText_C.ExecuteUbergraph_WBP_QTESuccessText
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_QTESuccessText_C::ExecuteUbergraph_WBP_QTESuccessText(int EntryPoint)
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
