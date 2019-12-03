
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

// Function BP_ShowItemCameraBase.BP_ShowItemCameraBase_C.UserConstructionScript
// (NetReliable, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Private, Delegate, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ABP_ShowItemCameraBase_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShowItemCameraBase.BP_ShowItemCameraBase_C.UserConstructionScript");

	ABP_ShowItemCameraBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShowItemCameraBase.BP_ShowItemCameraBase_C.ReceiveBeginPlay
// (NetReliable, NetRequest, Exec, Native, Event, Static, Private, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_ShowItemCameraBase_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShowItemCameraBase.BP_ShowItemCameraBase_C.ReceiveBeginPlay");

	ABP_ShowItemCameraBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShowItemCameraBase.BP_ShowItemCameraBase_C.ExecuteUbergraph_BP_ShowItemCameraBase
// (Net, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ShowItemCameraBase_C::ExecuteUbergraph_BP_ShowItemCameraBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShowItemCameraBase.BP_ShowItemCameraBase_C.ExecuteUbergraph_BP_ShowItemCameraBase");

	ABP_ShowItemCameraBase_C_ExecuteUbergraph_BP_ShowItemCameraBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
