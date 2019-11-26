
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

// Function WBP_MenuFrame.WBP_MenuFrame_C.InitBGTint
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_MenuFrame_C::InitBGTint()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuFrame.WBP_MenuFrame_C.InitBGTint");

	UWBP_MenuFrame_C_InitBGTint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuFrame.WBP_MenuFrame_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MenuFrame_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuFrame.WBP_MenuFrame_C.PreConstruct");

	UWBP_MenuFrame_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuFrame.WBP_MenuFrame_C.ExecuteUbergraph_WBP_MenuFrame
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MenuFrame_C::ExecuteUbergraph_WBP_MenuFrame(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuFrame.WBP_MenuFrame_C.ExecuteUbergraph_WBP_MenuFrame");

	UWBP_MenuFrame_C_ExecuteUbergraph_WBP_MenuFrame_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
