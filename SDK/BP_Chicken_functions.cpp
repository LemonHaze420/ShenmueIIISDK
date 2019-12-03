
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

// Function BP_Chicken.BP_Chicken_C.UserConstructionScript
// (Net, NetReliable, Native, MulticastDelegate, Public, Protected, Delegate, BlueprintEvent, NetValidate)

void ABP_Chicken_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chicken.BP_Chicken_C.UserConstructionScript");

	ABP_Chicken_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Chicken.BP_Chicken_C.ReceiveBeginPlay
// (NetRequest, Native, NetResponse, Static, NetMulticast, Protected, Delegate, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, NetValidate)

void ABP_Chicken_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chicken.BP_Chicken_C.ReceiveBeginPlay");

	ABP_Chicken_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Chicken.BP_Chicken_C.ExecuteUbergraph_BP_Chicken
// (NetReliable, Exec, Event, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, NetValidate)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Chicken_C::ExecuteUbergraph_BP_Chicken(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chicken.BP_Chicken_C.ExecuteUbergraph_BP_Chicken");

	ABP_Chicken_C_ExecuteUbergraph_BP_Chicken_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
