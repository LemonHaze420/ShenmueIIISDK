
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

// Function BP_KF_BetMoney.BP_KF_BetMoney_C.UserConstructionScript
// (NetReliable, NetRequest, Native, NetResponse, Static, NetMulticast, Public, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)

void ABP_KF_BetMoney_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KF_BetMoney.BP_KF_BetMoney_C.UserConstructionScript");

	ABP_KF_BetMoney_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KF_BetMoney.BP_KF_BetMoney_C.ReceiveTick
// (NetRequest, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Delegate, NetServer, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_KF_BetMoney_C::STATIC_ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KF_BetMoney.BP_KF_BetMoney_C.ReceiveTick");

	ABP_KF_BetMoney_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KF_BetMoney.BP_KF_BetMoney_C.ExecuteUbergraph_BP_KF_BetMoney
// (NetReliable, NetRequest, Native, NetResponse, Static, NetMulticast, Public, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_KF_BetMoney_C::STATIC_ExecuteUbergraph_BP_KF_BetMoney(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KF_BetMoney.BP_KF_BetMoney_C.ExecuteUbergraph_BP_KF_BetMoney");

	ABP_KF_BetMoney_C_ExecuteUbergraph_BP_KF_BetMoney_Params params;
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
