
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

// Function WBP_MiniGame_Ue_de_Yattari.WBP_MiniGame_Ue_de_Yattari_C.Construct
// (NetReliable, Event, Static, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void UWBP_MiniGame_Ue_de_Yattari_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGame_Ue_de_Yattari.WBP_MiniGame_Ue_de_Yattari_C.Construct");

	UWBP_MiniGame_Ue_de_Yattari_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniGame_Ue_de_Yattari.WBP_MiniGame_Ue_de_Yattari_C.ExecuteUbergraph_WBP_MiniGame_Ue_de_Yattari
// (Net, NetRequest, Exec, Static, NetMulticast, Public, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MiniGame_Ue_de_Yattari_C::STATIC_ExecuteUbergraph_WBP_MiniGame_Ue_de_Yattari(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGame_Ue_de_Yattari.WBP_MiniGame_Ue_de_Yattari_C.ExecuteUbergraph_WBP_MiniGame_Ue_de_Yattari");

	UWBP_MiniGame_Ue_de_Yattari_C_ExecuteUbergraph_WBP_MiniGame_Ue_de_Yattari_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
