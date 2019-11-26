
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

// Function SL_Chobu_NPC05.SL_Chobu_NPC05_C.ShenfaActionSofa
// (BlueprintCallable, BlueprintEvent)

void ASL_Chobu_NPC05_C::ShenfaActionSofa()
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Chobu_NPC05.SL_Chobu_NPC05_C.ShenfaActionSofa");

	ASL_Chobu_NPC05_C_ShenfaActionSofa_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Chobu_NPC05.SL_Chobu_NPC05_C.ExecuteUbergraph_SL_Chobu_NPC05
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASL_Chobu_NPC05_C::ExecuteUbergraph_SL_Chobu_NPC05(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Chobu_NPC05.SL_Chobu_NPC05_C.ExecuteUbergraph_SL_Chobu_NPC05");

	ASL_Chobu_NPC05_C_ExecuteUbergraph_SL_Chobu_NPC05_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
