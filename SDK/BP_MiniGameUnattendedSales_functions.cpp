
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

// Function BP_MiniGameUnattendedSales.BP_MiniGameUnattendedSales_C.GetHelpName
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
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
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector ABP_MiniGameUnattendedSales_C::GetSightCheckLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameUnattendedSales.BP_MiniGameUnattendedSales_C.GetSightCheckLocation");

	ABP_MiniGameUnattendedSales_C_GetSightCheckLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MiniGameUnattendedSales.BP_MiniGameUnattendedSales_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGameUnattendedSales_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameUnattendedSales.BP_MiniGameUnattendedSales_C.UserConstructionScript");

	ABP_MiniGameUnattendedSales_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameUnattendedSales.BP_MiniGameUnattendedSales_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MiniGameUnattendedSales_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameUnattendedSales.BP_MiniGameUnattendedSales_C.ReceiveBeginPlay");

	ABP_MiniGameUnattendedSales_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameUnattendedSales.BP_MiniGameUnattendedSales_C.ExecuteUbergraph_BP_MiniGameUnattendedSales
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameUnattendedSales_C::ExecuteUbergraph_BP_MiniGameUnattendedSales(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameUnattendedSales.BP_MiniGameUnattendedSales_C.ExecuteUbergraph_BP_MiniGameUnattendedSales");

	ABP_MiniGameUnattendedSales_C_ExecuteUbergraph_BP_MiniGameUnattendedSales_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
