
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

// Function BP_MiniGame_GamblingSignboard.BP_MiniGame_GamblingSignboard_C.InitializeViewMeshComponent
// (NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, MulticastDelegate, Private, Protected, Delegate, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            ViewMeshNum                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBPC_MiniGameBoardNum_C* Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_MiniGame_GamblingSignboard_C::STATIC_InitializeViewMeshComponent(int ViewMeshNum, class UBPC_MiniGameBoardNum_C* Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_GamblingSignboard.BP_MiniGame_GamblingSignboard_C.InitializeViewMeshComponent");

	ABP_MiniGame_GamblingSignboard_C_InitializeViewMeshComponent_Params params;
	params.ViewMeshNum = ViewMeshNum;
	params.Component = Component;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_GamblingSignboard.BP_MiniGame_GamblingSignboard_C.OnObjectLoaded
// (Net, NetRequest, Exec, Native, Event, NetMulticast, MulticastDelegate, Private, Delegate, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 LoadId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 LoadedObject                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_GamblingSignboard_C::OnObjectLoaded(const struct FString& LoadId, class UObject* LoadedObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_GamblingSignboard.BP_MiniGame_GamblingSignboard_C.OnObjectLoaded");

	ABP_MiniGame_GamblingSignboard_C_OnObjectLoaded_Params params;
	params.LoadId = LoadId;
	params.LoadedObject = LoadedObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_GamblingSignboard.BP_MiniGame_GamblingSignboard_C.SetNumberPos
// (Net, NetReliable, Event, Public, Private, Protected, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport)

void ABP_MiniGame_GamblingSignboard_C::SetNumberPos()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_GamblingSignboard.BP_MiniGame_GamblingSignboard_C.SetNumberPos");

	ABP_MiniGame_GamblingSignboard_C_SetNumberPos_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_GamblingSignboard.BP_MiniGame_GamblingSignboard_C.SetBoardInfoOnePlay
// (Native, Event, NetResponse, Static, MulticastDelegate, Private, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<E_MiniGameGambleType> Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OnePlayPrice                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsKihuda                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_GamblingSignboard_C::STATIC_SetBoardInfoOnePlay(TEnumAsByte<E_MiniGameGambleType> Index, int OnePlayPrice, bool IsKihuda)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_GamblingSignboard.BP_MiniGame_GamblingSignboard_C.SetBoardInfoOnePlay");

	ABP_MiniGame_GamblingSignboard_C_SetBoardInfoOnePlay_Params params;
	params.Index = Index;
	params.OnePlayPrice = OnePlayPrice;
	params.IsKihuda = IsKihuda;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_GamblingSignboard.BP_MiniGame_GamblingSignboard_C.SetBoardInfo
// (Exec, Public, Private, Delegate, HasDefaults, NetClient, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<E_MiniGameGambleType> Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            MinNum                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            MaxNum                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OddNum                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_GamblingSignboard_C::SetBoardInfo(TEnumAsByte<E_MiniGameGambleType> Index, int MinNum, int MaxNum, int OddNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_GamblingSignboard.BP_MiniGame_GamblingSignboard_C.SetBoardInfo");

	ABP_MiniGame_GamblingSignboard_C_SetBoardInfo_Params params;
	params.Index = Index;
	params.MinNum = MinNum;
	params.MaxNum = MaxNum;
	params.OddNum = OddNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_GamblingSignboard.BP_MiniGame_GamblingSignboard_C.UserConstructionScript
// (Net, Exec, Native, Event, NetMulticast, MulticastDelegate, Private, Delegate, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_GamblingSignboard_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_GamblingSignboard.BP_MiniGame_GamblingSignboard_C.UserConstructionScript");

	ABP_MiniGame_GamblingSignboard_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_GamblingSignboard.BP_MiniGame_GamblingSignboard_C.ReceiveBeginPlay
// (Exec, Native, Event, Static, NetServer, HasDefaults, NetClient, BlueprintPure)

void ABP_MiniGame_GamblingSignboard_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_GamblingSignboard.BP_MiniGame_GamblingSignboard_C.ReceiveBeginPlay");

	ABP_MiniGame_GamblingSignboard_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_GamblingSignboard.BP_MiniGame_GamblingSignboard_C.ExecuteUbergraph_BP_MiniGame_GamblingSignboard
// (NetRequest, Native, NetMulticast, MulticastDelegate, Private, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_GamblingSignboard_C::ExecuteUbergraph_BP_MiniGame_GamblingSignboard(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_GamblingSignboard.BP_MiniGame_GamblingSignboard_C.ExecuteUbergraph_BP_MiniGame_GamblingSignboard");

	ABP_MiniGame_GamblingSignboard_C_ExecuteUbergraph_BP_MiniGame_GamblingSignboard_Params params;
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
