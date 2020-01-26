
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

// Function SL_Chobu_ENV_Docklands_001.SL_Chobu_ENV_Docklands_001_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASL_Chobu_ENV_Docklands_001_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Chobu_ENV_Docklands_001.SL_Chobu_ENV_Docklands_001_C.ReceiveTick");

	ASL_Chobu_ENV_Docklands_001_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Chobu_ENV_Docklands_001.SL_Chobu_ENV_Docklands_001_C.ExecuteUbergraph_SL_Chobu_ENV_Docklands_001
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASL_Chobu_ENV_Docklands_001_C::ExecuteUbergraph_SL_Chobu_ENV_Docklands_001(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Chobu_ENV_Docklands_001.SL_Chobu_ENV_Docklands_001_C.ExecuteUbergraph_SL_Chobu_ENV_Docklands_001");

	ASL_Chobu_ENV_Docklands_001_C_ExecuteUbergraph_SL_Chobu_ENV_Docklands_001_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
