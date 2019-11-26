
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

// Function BP_Fishing_FreeFish.BP_Fishing_FreeFish_C.IsBiteMove
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ArgBite                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Fishing_FreeFish_C::IsBiteMove(bool* ArgBite)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fishing_FreeFish.BP_Fishing_FreeFish_C.IsBiteMove");

	ABP_Fishing_FreeFish_C_IsBiteMove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ArgBite != nullptr)
		*ArgBite = params.ArgBite;
}


// Function BP_Fishing_FreeFish.BP_Fishing_FreeFish_C.Start_Bite
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Fishing_FreeFish_C::Start_Bite()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fishing_FreeFish.BP_Fishing_FreeFish_C.Start_Bite");

	ABP_Fishing_FreeFish_C_Start_Bite_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Fishing_FreeFish.BP_Fishing_FreeFish_C.DebugDispArea
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Fishing_FreeFish_C::DebugDispArea()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fishing_FreeFish.BP_Fishing_FreeFish_C.DebugDispArea");

	ABP_Fishing_FreeFish_C_DebugDispArea_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Fishing_FreeFish.BP_Fishing_FreeFish_C.Move_Bite
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Fishing_FreeFish_C::Move_Bite()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fishing_FreeFish.BP_Fishing_FreeFish_C.Move_Bite");

	ABP_Fishing_FreeFish_C_Move_Bite_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Fishing_FreeFish.BP_Fishing_FreeFish_C.CheckBiteStart
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Fishing_FreeFish_C::CheckBiteStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fishing_FreeFish.BP_Fishing_FreeFish_C.CheckBiteStart");

	ABP_Fishing_FreeFish_C_CheckBiteStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Fishing_FreeFish.BP_Fishing_FreeFish_C.CheckCenterPos
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 ArgPos                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 RetPos                         (Parm, OutParm, IsPlainOldData)

void ABP_Fishing_FreeFish_C::CheckCenterPos(const struct FVector& ArgPos, struct FVector* RetPos)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fishing_FreeFish.BP_Fishing_FreeFish_C.CheckCenterPos");

	ABP_Fishing_FreeFish_C_CheckCenterPos_Params params;
	params.ArgPos = ArgPos;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RetPos != nullptr)
		*RetPos = params.RetPos;
}


// Function BP_Fishing_FreeFish.BP_Fishing_FreeFish_C.SetNextMoveVector
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Fishing_FreeFish_C::SetNextMoveVector()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fishing_FreeFish.BP_Fishing_FreeFish_C.SetNextMoveVector");

	ABP_Fishing_FreeFish_C_SetNextMoveVector_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Fishing_FreeFish.BP_Fishing_FreeFish_C.GetRandomCirclePos
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 ArgCenterPos                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          ArgRadius                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 RetPos                         (Parm, OutParm, IsPlainOldData)

void ABP_Fishing_FreeFish_C::GetRandomCirclePos(const struct FVector& ArgCenterPos, float ArgRadius, struct FVector* RetPos)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fishing_FreeFish.BP_Fishing_FreeFish_C.GetRandomCirclePos");

	ABP_Fishing_FreeFish_C_GetRandomCirclePos_Params params;
	params.ArgCenterPos = ArgCenterPos;
	params.ArgRadius = ArgRadius;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RetPos != nullptr)
		*RetPos = params.RetPos;
}


// Function BP_Fishing_FreeFish.BP_Fishing_FreeFish_C.Start_ReflectionMove
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Fishing_FreeFish_C::Start_ReflectionMove()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fishing_FreeFish.BP_Fishing_FreeFish_C.Start_ReflectionMove");

	ABP_Fishing_FreeFish_C_Start_ReflectionMove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Fishing_FreeFish.BP_Fishing_FreeFish_C.Move_ReflectionMove
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Fishing_FreeFish_C::Move_ReflectionMove()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fishing_FreeFish.BP_Fishing_FreeFish_C.Move_ReflectionMove");

	ABP_Fishing_FreeFish_C_Move_ReflectionMove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Fishing_FreeFish.BP_Fishing_FreeFish_C.Init
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Fishing_FreeFish_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fishing_FreeFish.BP_Fishing_FreeFish_C.Init");

	ABP_Fishing_FreeFish_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Fishing_FreeFish.BP_Fishing_FreeFish_C.StartInfinitySymbolMove
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 ArgBasePos                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_Fishing_FreeFish_C::StartInfinitySymbolMove(const struct FVector& ArgBasePos)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fishing_FreeFish.BP_Fishing_FreeFish_C.StartInfinitySymbolMove");

	ABP_Fishing_FreeFish_C_StartInfinitySymbolMove_Params params;
	params.ArgBasePos = ArgBasePos;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Fishing_FreeFish.BP_Fishing_FreeFish_C.Move_InfinitySymbol
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Fishing_FreeFish_C::Move_InfinitySymbol()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fishing_FreeFish.BP_Fishing_FreeFish_C.Move_InfinitySymbol");

	ABP_Fishing_FreeFish_C_Move_InfinitySymbol_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Fishing_FreeFish.BP_Fishing_FreeFish_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Fishing_FreeFish_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fishing_FreeFish.BP_Fishing_FreeFish_C.UserConstructionScript");

	ABP_Fishing_FreeFish_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Fishing_FreeFish.BP_Fishing_FreeFish_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Fishing_FreeFish_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fishing_FreeFish.BP_Fishing_FreeFish_C.ReceiveTick");

	ABP_Fishing_FreeFish_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Fishing_FreeFish.BP_Fishing_FreeFish_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Fishing_FreeFish_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fishing_FreeFish.BP_Fishing_FreeFish_C.ReceiveBeginPlay");

	ABP_Fishing_FreeFish_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Fishing_FreeFish.BP_Fishing_FreeFish_C.ExecuteUbergraph_BP_Fishing_FreeFish
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Fishing_FreeFish_C::ExecuteUbergraph_BP_Fishing_FreeFish(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fishing_FreeFish.BP_Fishing_FreeFish_C.ExecuteUbergraph_BP_Fishing_FreeFish");

	ABP_Fishing_FreeFish_C_ExecuteUbergraph_BP_Fishing_FreeFish_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
