
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

// Function WBP_MemoPage_Map_Chobu_2.WBP_MemoPage_Map_Chobu_1_C.Construct
// (NetRequest, Exec, Native, NetResponse, Static, NetServer, HasDefaults, NetClient, BlueprintPure)

void UWBP_MemoPage_Map_Chobu_1_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MemoPage_Map_Chobu_2.WBP_MemoPage_Map_Chobu_1_C.Construct");

	UWBP_MemoPage_Map_Chobu_1_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MemoPage_Map_Chobu_2.WBP_MemoPage_Map_Chobu_1_C.ExecuteUbergraph_WBP_MemoPage_Map_Chobu_2
// (Net, Event, NetResponse, NetMulticast, MulticastDelegate, Private, Protected, Delegate, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MemoPage_Map_Chobu_1_C::ExecuteUbergraph_WBP_MemoPage_Map_Chobu_2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MemoPage_Map_Chobu_2.WBP_MemoPage_Map_Chobu_1_C.ExecuteUbergraph_WBP_MemoPage_Map_Chobu_2");

	UWBP_MemoPage_Map_Chobu_1_C_ExecuteUbergraph_WBP_MemoPage_Map_Chobu_2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
