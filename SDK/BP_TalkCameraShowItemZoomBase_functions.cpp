
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

// Function BP_TalkCameraShowItemZoomBase.BP_TalkCameraShowItemZoomBase_C.GetLookTargetSocketLocation
// (Net, NetRequest, Exec, Native, Event, NetResponse, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   InSocketName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector ABP_TalkCameraShowItemZoomBase_C::GetLookTargetSocketLocation(const struct FName& InSocketName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkCameraShowItemZoomBase.BP_TalkCameraShowItemZoomBase_C.GetLookTargetSocketLocation");

	ABP_TalkCameraShowItemZoomBase_C_GetLookTargetSocketLocation_Params params;
	params.InSocketName = InSocketName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_TalkCameraShowItemZoomBase.BP_TalkCameraShowItemZoomBase_C.UserConstructionScript
// (Net, Event, NetResponse, Static, Public, Private, Protected, Delegate, NetServer, HasOutParms, BlueprintEvent, BlueprintPure)

void ABP_TalkCameraShowItemZoomBase_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkCameraShowItemZoomBase.BP_TalkCameraShowItemZoomBase_C.UserConstructionScript");

	ABP_TalkCameraShowItemZoomBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkCameraShowItemZoomBase.BP_TalkCameraShowItemZoomBase_C.ReceiveBeginPlay
// (Net, NetReliable, Exec, NetResponse, Static, Private, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_TalkCameraShowItemZoomBase_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkCameraShowItemZoomBase.BP_TalkCameraShowItemZoomBase_C.ReceiveBeginPlay");

	ABP_TalkCameraShowItemZoomBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkCameraShowItemZoomBase.BP_TalkCameraShowItemZoomBase_C.ReceiveTick
// (Net, NetRequest, Exec, Native, Event, NetResponse, NetMulticast, Public, Private, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkCameraShowItemZoomBase_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkCameraShowItemZoomBase.BP_TalkCameraShowItemZoomBase_C.ReceiveTick");

	ABP_TalkCameraShowItemZoomBase_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkCameraShowItemZoomBase.BP_TalkCameraShowItemZoomBase_C.ExecuteUbergraph_BP_TalkCameraShowItemZoomBase
// (Net, NetRequest, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Delegate, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkCameraShowItemZoomBase_C::STATIC_ExecuteUbergraph_BP_TalkCameraShowItemZoomBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkCameraShowItemZoomBase.BP_TalkCameraShowItemZoomBase_C.ExecuteUbergraph_BP_TalkCameraShowItemZoomBase");

	ABP_TalkCameraShowItemZoomBase_C_ExecuteUbergraph_BP_TalkCameraShowItemZoomBase_Params params;
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
