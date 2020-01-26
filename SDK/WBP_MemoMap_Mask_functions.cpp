
#include "../SDK.h"

// Name: Shenmue3SDK, Version: 1.4.1

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function WBP_MemoMap_Mask.WBP_MemoMap_Mask_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MemoMap_Mask_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MemoMap_Mask.WBP_MemoMap_Mask_C.PreConstruct");

	UWBP_MemoMap_Mask_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MemoMap_Mask.WBP_MemoMap_Mask_C.ExecuteUbergraph_WBP_MemoMap_Mask
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MemoMap_Mask_C::ExecuteUbergraph_WBP_MemoMap_Mask(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MemoMap_Mask.WBP_MemoMap_Mask_C.ExecuteUbergraph_WBP_MemoMap_Mask");

	UWBP_MemoMap_Mask_C_ExecuteUbergraph_WBP_MemoMap_Mask_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
