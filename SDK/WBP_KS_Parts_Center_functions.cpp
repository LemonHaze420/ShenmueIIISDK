
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

// Function WBP_KS_Parts_Center.WBP_KS_Parts_Center_C.StopArrowAnim
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_KS_Parts_Center_C::StopArrowAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KS_Parts_Center.WBP_KS_Parts_Center_C.StopArrowAnim");

	UWBP_KS_Parts_Center_C_StopArrowAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KS_Parts_Center.WBP_KS_Parts_Center_C.VisibilityParts
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESlateVisibility               InVisibility                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_KS_Parts_Center_C::VisibilityParts(ESlateVisibility InVisibility, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KS_Parts_Center.WBP_KS_Parts_Center_C.VisibilityParts");

	UWBP_KS_Parts_Center_C_VisibilityParts_Params params;
	params.InVisibility = InVisibility;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KS_Parts_Center.WBP_KS_Parts_Center_C.StartArrowAnim
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_KS_Parts_Center_C::StartArrowAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KS_Parts_Center.WBP_KS_Parts_Center_C.StartArrowAnim");

	UWBP_KS_Parts_Center_C_StartArrowAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KS_Parts_Center.WBP_KS_Parts_Center_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_KS_Parts_Center_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KS_Parts_Center.WBP_KS_Parts_Center_C.Construct");

	UWBP_KS_Parts_Center_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KS_Parts_Center.WBP_KS_Parts_Center_C.ExecuteUbergraph_WBP_KS_Parts_Center
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_KS_Parts_Center_C::ExecuteUbergraph_WBP_KS_Parts_Center(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KS_Parts_Center.WBP_KS_Parts_Center_C.ExecuteUbergraph_WBP_KS_Parts_Center");

	UWBP_KS_Parts_Center_C_ExecuteUbergraph_WBP_KS_Parts_Center_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
