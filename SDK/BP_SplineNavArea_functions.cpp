
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

// Function BP_SplineNavArea.BP_SplineNavArea_C.UserConstructionScript
// (Net, Exec, NetResponse, Static, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_SplineNavArea_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SplineNavArea.BP_SplineNavArea_C.UserConstructionScript");

	ABP_SplineNavArea_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SplineNavArea.BP_SplineNavArea_C.ReceiveBeginPlay
// (NetReliable, Native, Event, NetResponse, NetMulticast, Public, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, NetValidate)

void ABP_SplineNavArea_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SplineNavArea.BP_SplineNavArea_C.ReceiveBeginPlay");

	ABP_SplineNavArea_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SplineNavArea.BP_SplineNavArea_C.ExecuteUbergraph_BP_SplineNavArea
// (Event, NetResponse, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, NetValidate)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SplineNavArea_C::ExecuteUbergraph_BP_SplineNavArea(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SplineNavArea.BP_SplineNavArea_C.ExecuteUbergraph_BP_SplineNavArea");

	ABP_SplineNavArea_C_ExecuteUbergraph_BP_SplineNavArea_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
