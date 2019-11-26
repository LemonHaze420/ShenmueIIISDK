
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

// Function BP_Fishing_FishShadow.BP_Fishing_FishShadow_C.UpdateFishBaseLocation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 BaseLocation                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_Fishing_FishShadow_C::UpdateFishBaseLocation(const struct FVector& BaseLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fishing_FishShadow.BP_Fishing_FishShadow_C.UpdateFishBaseLocation");

	ABP_Fishing_FishShadow_C_UpdateFishBaseLocation_Params params;
	params.BaseLocation = BaseLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Fishing_FishShadow.BP_Fishing_FishShadow_C.CheckBite
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ArgBite                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Fishing_FishShadow_C::CheckBite(bool* ArgBite)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fishing_FishShadow.BP_Fishing_FishShadow_C.CheckBite");

	ABP_Fishing_FishShadow_C_CheckBite_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ArgBite != nullptr)
		*ArgBite = params.ArgBite;
}


// Function BP_Fishing_FishShadow.BP_Fishing_FishShadow_C.MoveEnd
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Fishing_FishShadow_C::MoveEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fishing_FishShadow.BP_Fishing_FishShadow_C.MoveEnd");

	ABP_Fishing_FishShadow_C_MoveEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Fishing_FishShadow.BP_Fishing_FishShadow_C.MoveStart
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ArgType                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ArgFishNum                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ArgCenterPos                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          BiteWait                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Fishing_FishShadow_C::MoveStart(int ArgType, int ArgFishNum, const struct FVector& ArgCenterPos, float BiteWait)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fishing_FishShadow.BP_Fishing_FishShadow_C.MoveStart");

	ABP_Fishing_FishShadow_C_MoveStart_Params params;
	params.ArgType = ArgType;
	params.ArgFishNum = ArgFishNum;
	params.ArgCenterPos = ArgCenterPos;
	params.BiteWait = BiteWait;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Fishing_FishShadow.BP_Fishing_FishShadow_C.Init
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Fishing_FishShadow_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fishing_FishShadow.BP_Fishing_FishShadow_C.Init");

	ABP_Fishing_FishShadow_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Fishing_FishShadow.BP_Fishing_FishShadow_C.StartInfinitySymbolMove
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 ArgBasePos                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_Fishing_FishShadow_C::StartInfinitySymbolMove(const struct FVector& ArgBasePos)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fishing_FishShadow.BP_Fishing_FishShadow_C.StartInfinitySymbolMove");

	ABP_Fishing_FishShadow_C_StartInfinitySymbolMove_Params params;
	params.ArgBasePos = ArgBasePos;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Fishing_FishShadow.BP_Fishing_FishShadow_C.Move_InfinitySymbol
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Fishing_FishShadow_C::Move_InfinitySymbol()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fishing_FishShadow.BP_Fishing_FishShadow_C.Move_InfinitySymbol");

	ABP_Fishing_FishShadow_C_Move_InfinitySymbol_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Fishing_FishShadow.BP_Fishing_FishShadow_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Fishing_FishShadow_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fishing_FishShadow.BP_Fishing_FishShadow_C.UserConstructionScript");

	ABP_Fishing_FishShadow_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Fishing_FishShadow.BP_Fishing_FishShadow_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Fishing_FishShadow_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fishing_FishShadow.BP_Fishing_FishShadow_C.ReceiveTick");

	ABP_Fishing_FishShadow_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Fishing_FishShadow.BP_Fishing_FishShadow_C.ExecuteUbergraph_BP_Fishing_FishShadow
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Fishing_FishShadow_C::ExecuteUbergraph_BP_Fishing_FishShadow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fishing_FishShadow.BP_Fishing_FishShadow_C.ExecuteUbergraph_BP_Fishing_FishShadow");

	ABP_Fishing_FishShadow_C_ExecuteUbergraph_BP_Fishing_FishShadow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
