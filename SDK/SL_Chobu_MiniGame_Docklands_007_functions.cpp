
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

// Function SL_Chobu_MiniGame_Docklands_007.SL_Chobu_MiniGame_Docklands_007_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ASL_Chobu_MiniGame_Docklands_007_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Chobu_MiniGame_Docklands_007.SL_Chobu_MiniGame_Docklands_007_C.ReceiveBeginPlay");

	ASL_Chobu_MiniGame_Docklands_007_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Chobu_MiniGame_Docklands_007.SL_Chobu_MiniGame_Docklands_007_C.ExecuteUbergraph_SL_Chobu_MiniGame_Docklands_007
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASL_Chobu_MiniGame_Docklands_007_C::ExecuteUbergraph_SL_Chobu_MiniGame_Docklands_007(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Chobu_MiniGame_Docklands_007.SL_Chobu_MiniGame_Docklands_007_C.ExecuteUbergraph_SL_Chobu_MiniGame_Docklands_007");

	ASL_Chobu_MiniGame_Docklands_007_C_ExecuteUbergraph_SL_Chobu_MiniGame_Docklands_007_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
