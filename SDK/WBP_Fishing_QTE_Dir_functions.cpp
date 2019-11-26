
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

// Function WBP_Fishing_QTE_Dir.WBP_Fishing_QTE_Dir_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Fishing_QTE_Dir_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Fishing_QTE_Dir.WBP_Fishing_QTE_Dir_C.Construct");

	UWBP_Fishing_QTE_Dir_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Fishing_QTE_Dir.WBP_Fishing_QTE_Dir_C.ExecuteUbergraph_WBP_Fishing_QTE_Dir
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Fishing_QTE_Dir_C::ExecuteUbergraph_WBP_Fishing_QTE_Dir(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Fishing_QTE_Dir.WBP_Fishing_QTE_Dir_C.ExecuteUbergraph_WBP_Fishing_QTE_Dir");

	UWBP_Fishing_QTE_Dir_C_ExecuteUbergraph_WBP_Fishing_QTE_Dir_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
