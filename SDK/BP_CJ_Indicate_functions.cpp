
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

// Function BP_CJ_Indicate.BP_CJ_Indicate_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_CJ_Indicate_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CJ_Indicate.BP_CJ_Indicate_C.UserConstructionScript");

	ABP_CJ_Indicate_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CJ_Indicate.BP_CJ_Indicate_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CJ_Indicate_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CJ_Indicate.BP_CJ_Indicate_C.ReceiveTick");

	ABP_CJ_Indicate_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CJ_Indicate.BP_CJ_Indicate_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_CJ_Indicate_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CJ_Indicate.BP_CJ_Indicate_C.ReceiveBeginPlay");

	ABP_CJ_Indicate_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CJ_Indicate.BP_CJ_Indicate_C.ExecuteUbergraph_BP_CJ_Indicate
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CJ_Indicate_C::ExecuteUbergraph_BP_CJ_Indicate(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CJ_Indicate.BP_CJ_Indicate_C.ExecuteUbergraph_BP_CJ_Indicate");

	ABP_CJ_Indicate_C_ExecuteUbergraph_BP_CJ_Indicate_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CJ_Indicate.BP_CJ_Indicate_C.MoveEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_CJ_Indicate_C::MoveEnd__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CJ_Indicate.BP_CJ_Indicate_C.MoveEnd__DelegateSignature");

	ABP_CJ_Indicate_C_MoveEnd__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
