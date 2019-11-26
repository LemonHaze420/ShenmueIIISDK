
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

// Function SL_Chobu_ENV_Street1.SL_Chobu_ENV_Street1_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ASL_Chobu_ENV_Street1_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Chobu_ENV_Street1.SL_Chobu_ENV_Street1_C.ReceiveBeginPlay");

	ASL_Chobu_ENV_Street1_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Chobu_ENV_Street1.SL_Chobu_ENV_Street1_C.ExecuteUbergraph_SL_Chobu_ENV_Street1
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASL_Chobu_ENV_Street1_C::ExecuteUbergraph_SL_Chobu_ENV_Street1(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Chobu_ENV_Street1.SL_Chobu_ENV_Street1_C.ExecuteUbergraph_SL_Chobu_ENV_Street1");

	ASL_Chobu_ENV_Street1_C_ExecuteUbergraph_SL_Chobu_ENV_Street1_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
