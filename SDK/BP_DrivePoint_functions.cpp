
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

// Function BP_DrivePoint.BP_DrivePoint_C.UserConstructionScript
// (Net, NetRequest, Native, Static, MulticastDelegate, Private, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void ABP_DrivePoint_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DrivePoint.BP_DrivePoint_C.UserConstructionScript");

	ABP_DrivePoint_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DrivePoint.BP_DrivePoint_C.ReceiveTick
// (Net, NetRequest, Exec, Event, NetResponse, Static, Public, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DrivePoint_C::STATIC_ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DrivePoint.BP_DrivePoint_C.ReceiveTick");

	ABP_DrivePoint_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DrivePoint.BP_DrivePoint_C.ExecuteUbergraph_BP_DrivePoint
// (Net, NetRequest, Static, NetMulticast, MulticastDelegate, Public, NetServer, BlueprintCallable)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DrivePoint_C::STATIC_ExecuteUbergraph_BP_DrivePoint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DrivePoint.BP_DrivePoint_C.ExecuteUbergraph_BP_DrivePoint");

	ABP_DrivePoint_C_ExecuteUbergraph_BP_DrivePoint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
