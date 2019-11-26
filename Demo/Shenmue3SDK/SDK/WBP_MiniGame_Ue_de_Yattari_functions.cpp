
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

// Function WBP_MiniGame_Ue_de_Yattari.WBP_MiniGame_Ue_de_Yattari_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_MiniGame_Ue_de_Yattari_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGame_Ue_de_Yattari.WBP_MiniGame_Ue_de_Yattari_C.Construct");

	UWBP_MiniGame_Ue_de_Yattari_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniGame_Ue_de_Yattari.WBP_MiniGame_Ue_de_Yattari_C.ExecuteUbergraph_WBP_MiniGame_Ue_de_Yattari
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MiniGame_Ue_de_Yattari_C::ExecuteUbergraph_WBP_MiniGame_Ue_de_Yattari(int EntryPoint)
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
