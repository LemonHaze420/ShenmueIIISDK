
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

// Function WBP_MemoPage_Map_Chobu_1.WBP_MemoPage_Map_Chobu_0_C.Construct
// (NetRequest, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, Const)

void UWBP_MemoPage_Map_Chobu_0_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MemoPage_Map_Chobu_1.WBP_MemoPage_Map_Chobu_0_C.Construct");

	UWBP_MemoPage_Map_Chobu_0_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MemoPage_Map_Chobu_1.WBP_MemoPage_Map_Chobu_0_C.ExecuteUbergraph_WBP_MemoPage_Map_Chobu_1
// (NetResponse, Static, NetMulticast, MulticastDelegate, Public, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MemoPage_Map_Chobu_0_C::STATIC_ExecuteUbergraph_WBP_MemoPage_Map_Chobu_1(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MemoPage_Map_Chobu_1.WBP_MemoPage_Map_Chobu_0_C.ExecuteUbergraph_WBP_MemoPage_Map_Chobu_1");

	UWBP_MemoPage_Map_Chobu_0_C_ExecuteUbergraph_WBP_MemoPage_Map_Chobu_1_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
