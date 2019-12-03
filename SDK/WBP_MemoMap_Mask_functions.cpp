
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

// Function WBP_MemoMap_Mask.WBP_MemoMap_Mask_C.PreConstruct
// (Net, NetRequest, Static, NetMulticast, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MemoMap_Mask_C::STATIC_PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MemoMap_Mask.WBP_MemoMap_Mask_C.PreConstruct");

	UWBP_MemoMap_Mask_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MemoMap_Mask.WBP_MemoMap_Mask_C.ExecuteUbergraph_WBP_MemoMap_Mask
// (NetReliable, Exec, Native, NetMulticast, Private, Protected, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MemoMap_Mask_C::ExecuteUbergraph_WBP_MemoMap_Mask(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MemoMap_Mask.WBP_MemoMap_Mask_C.ExecuteUbergraph_WBP_MemoMap_Mask");

	UWBP_MemoMap_Mask_C_ExecuteUbergraph_WBP_MemoMap_Mask_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
