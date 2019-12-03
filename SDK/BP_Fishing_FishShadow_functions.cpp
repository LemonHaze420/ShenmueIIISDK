
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
// (Exec, Native, Static, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 BaseLocation                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_Fishing_FishShadow_C::STATIC_UpdateFishBaseLocation(const struct FVector& BaseLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fishing_FishShadow.BP_Fishing_FishShadow_C.UpdateFishBaseLocation");

	ABP_Fishing_FishShadow_C_UpdateFishBaseLocation_Params params;
	params.BaseLocation = BaseLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Fishing_FishShadow.BP_Fishing_FishShadow_C.CheckBite
// (NetReliable, NetRequest, Exec, Event, NetResponse, Static, Public, Private, NetServer, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ArgBite                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Fishing_FishShadow_C::STATIC_CheckBite(bool* ArgBite)
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
// (Net, NetReliable, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)

void ABP_Fishing_FishShadow_C::MoveEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fishing_FishShadow.BP_Fishing_FishShadow_C.MoveEnd");

	ABP_Fishing_FishShadow_C_MoveEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Fishing_FishShadow.BP_Fishing_FishShadow_C.MoveStart
// (Exec, Native, Static, NetMulticast, Protected, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ArgType                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ArgFishNum                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ArgCenterPos                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          BiteWait                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Fishing_FishShadow_C::STATIC_MoveStart(int ArgType, int ArgFishNum, const struct FVector& ArgCenterPos, float BiteWait)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fishing_FishShadow.BP_Fishing_FishShadow_C.MoveStart");

	ABP_Fishing_FishShadow_C_MoveStart_Params params;
	params.ArgType = ArgType;
	params.ArgFishNum = ArgFishNum;
	params.ArgCenterPos = ArgCenterPos;
	params.BiteWait = BiteWait;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Fishing_FishShadow.BP_Fishing_FishShadow_C.Init
// (Net, NetReliable, Exec, Native, Event, NetMulticast, Public, Private, Protected, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_Fishing_FishShadow_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fishing_FishShadow.BP_Fishing_FishShadow_C.Init");

	ABP_Fishing_FishShadow_C_Init_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Fishing_FishShadow.BP_Fishing_FishShadow_C.StartInfinitySymbolMove
// (Net, NetRequest, Native, Static, Private, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 ArgBasePos                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_Fishing_FishShadow_C::STATIC_StartInfinitySymbolMove(const struct FVector& ArgBasePos)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fishing_FishShadow.BP_Fishing_FishShadow_C.StartInfinitySymbolMove");

	ABP_Fishing_FishShadow_C_StartInfinitySymbolMove_Params params;
	params.ArgBasePos = ArgBasePos;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Fishing_FishShadow.BP_Fishing_FishShadow_C.Move_InfinitySymbol
// (NetRequest, Exec, Native, NetResponse, Static, Public, Private, NetServer, BlueprintCallable, BlueprintEvent, BlueprintPure)

void ABP_Fishing_FishShadow_C::STATIC_Move_InfinitySymbol()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fishing_FishShadow.BP_Fishing_FishShadow_C.Move_InfinitySymbol");

	ABP_Fishing_FishShadow_C_Move_InfinitySymbol_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Fishing_FishShadow.BP_Fishing_FishShadow_C.UserConstructionScript
// (Net, NetRequest, NetResponse, Public, NetServer, BlueprintCallable, BlueprintEvent, BlueprintPure)

void ABP_Fishing_FishShadow_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fishing_FishShadow.BP_Fishing_FishShadow_C.UserConstructionScript");

	ABP_Fishing_FishShadow_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Fishing_FishShadow.BP_Fishing_FishShadow_C.ReceiveTick
// (Net, NetReliable, Event, NetResponse, Static, Private, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Fishing_FishShadow_C::STATIC_ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fishing_FishShadow.BP_Fishing_FishShadow_C.ReceiveTick");

	ABP_Fishing_FishShadow_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Fishing_FishShadow.BP_Fishing_FishShadow_C.ExecuteUbergraph_BP_Fishing_FishShadow
// (Exec, Event, Delegate, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure)
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
