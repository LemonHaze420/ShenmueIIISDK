
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

// Function BP_MiniGameUnattendedSales.BP_MiniGameUnattendedSales_C.GetHelpName
// (Net, NetReliable, Exec, MulticastDelegate, Protected, NetServer, HasDefaults, NetClient, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName ABP_MiniGameUnattendedSales_C::GetHelpName()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameUnattendedSales.BP_MiniGameUnattendedSales_C.GetHelpName");

	ABP_MiniGameUnattendedSales_C_GetHelpName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MiniGameUnattendedSales.BP_MiniGameUnattendedSales_C.GetSightCheckLocation
// (Net, NetReliable, NetRequest, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector ABP_MiniGameUnattendedSales_C::STATIC_GetSightCheckLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameUnattendedSales.BP_MiniGameUnattendedSales_C.GetSightCheckLocation");

	ABP_MiniGameUnattendedSales_C_GetSightCheckLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MiniGameUnattendedSales.BP_MiniGameUnattendedSales_C.UserConstructionScript
// (Net, NetRequest, Exec, Event, Static, Public, Private, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGameUnattendedSales_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameUnattendedSales.BP_MiniGameUnattendedSales_C.UserConstructionScript");

	ABP_MiniGameUnattendedSales_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameUnattendedSales.BP_MiniGameUnattendedSales_C.ReceiveBeginPlay
// (NetRequest, Exec, NetResponse, NetMulticast, Public, Private, Protected, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintPure, Const)

void ABP_MiniGameUnattendedSales_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameUnattendedSales.BP_MiniGameUnattendedSales_C.ReceiveBeginPlay");

	ABP_MiniGameUnattendedSales_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameUnattendedSales.BP_MiniGameUnattendedSales_C.ExecuteUbergraph_BP_MiniGameUnattendedSales
// (Net, NetReliable, Exec, Native, Event, NetResponse, Static, MulticastDelegate, Private, Delegate, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameUnattendedSales_C::STATIC_ExecuteUbergraph_BP_MiniGameUnattendedSales(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameUnattendedSales.BP_MiniGameUnattendedSales_C.ExecuteUbergraph_BP_MiniGameUnattendedSales");

	ABP_MiniGameUnattendedSales_C_ExecuteUbergraph_BP_MiniGameUnattendedSales_Params params;
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
