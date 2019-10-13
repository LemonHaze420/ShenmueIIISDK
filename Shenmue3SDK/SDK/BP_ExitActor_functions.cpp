
#include "../SDK.h"

// Name: S3Demo, Version: 0.90.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BP_ExitActor.BP_ExitActor_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ExitActor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExitActor.BP_ExitActor_C.UserConstructionScript");

	ABP_ExitActor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExitActor.BP_ExitActor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ExitActor_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExitActor.BP_ExitActor_C.ReceiveBeginPlay");

	ABP_ExitActor_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExitActor.BP_ExitActor_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ExitActor_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExitActor.BP_ExitActor_C.ReceiveEndPlay");

	ABP_ExitActor_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExitActor.BP_ExitActor_C.SelectDecide
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ExitActor_C::SelectDecide(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExitActor.BP_ExitActor_C.SelectDecide");

	ABP_ExitActor_C_SelectDecide_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExitActor.BP_ExitActor_C.SelectCancel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ExitActor_C::SelectCancel(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExitActor.BP_ExitActor_C.SelectCancel");

	ABP_ExitActor_C_SelectCancel_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExitActor.BP_ExitActor_C.ExecuteUbergraph_BP_ExitActor
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ExitActor_C::ExecuteUbergraph_BP_ExitActor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExitActor.BP_ExitActor_C.ExecuteUbergraph_BP_ExitActor");

	ABP_ExitActor_C_ExecuteUbergraph_BP_ExitActor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
