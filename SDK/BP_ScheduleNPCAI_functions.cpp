
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

// Function BP_ScheduleNPCAI.BP_ScheduleNPCAI_C.UserConstructionScript
// (Net, NetReliable, Exec, Native, Event, Static, NetMulticast, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ABP_ScheduleNPCAI_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScheduleNPCAI.BP_ScheduleNPCAI_C.UserConstructionScript");

	ABP_ScheduleNPCAI_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScheduleNPCAI.BP_ScheduleNPCAI_C.ReceiveBeginPlay
// (Native, NetResponse, Static, NetServer)

void ABP_ScheduleNPCAI_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScheduleNPCAI.BP_ScheduleNPCAI_C.ReceiveBeginPlay");

	ABP_ScheduleNPCAI_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScheduleNPCAI.BP_ScheduleNPCAI_C.ExecuteUbergraph_BP_ScheduleNPCAI
// (NetRequest, Exec, Native, Event, Static, NetMulticast, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ScheduleNPCAI_C::STATIC_ExecuteUbergraph_BP_ScheduleNPCAI(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScheduleNPCAI.BP_ScheduleNPCAI_C.ExecuteUbergraph_BP_ScheduleNPCAI");

	ABP_ScheduleNPCAI_C_ExecuteUbergraph_BP_ScheduleNPCAI_Params params;
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
