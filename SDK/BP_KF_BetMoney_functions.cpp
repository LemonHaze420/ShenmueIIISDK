
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

// Function BP_KF_BetMoney.BP_KF_BetMoney_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_KF_BetMoney_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KF_BetMoney.BP_KF_BetMoney_C.UserConstructionScript");

	ABP_KF_BetMoney_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KF_BetMoney.BP_KF_BetMoney_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_KF_BetMoney_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KF_BetMoney.BP_KF_BetMoney_C.ReceiveTick");

	ABP_KF_BetMoney_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KF_BetMoney.BP_KF_BetMoney_C.ExecuteUbergraph_BP_KF_BetMoney
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_KF_BetMoney_C::ExecuteUbergraph_BP_KF_BetMoney(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KF_BetMoney.BP_KF_BetMoney_C.ExecuteUbergraph_BP_KF_BetMoney");

	ABP_KF_BetMoney_C_ExecuteUbergraph_BP_KF_BetMoney_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
