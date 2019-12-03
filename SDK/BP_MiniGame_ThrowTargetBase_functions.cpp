
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

// Function BP_MiniGame_ThrowTargetBase.BP_MiniGame_ThrowTargetBase_C.GetMiniGameValueType
// (Net, NetRequest, Native, Event, Static, NetMulticast, Public, Private, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<EN_ValueType>      Type                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_ThrowTargetBase_C::STATIC_GetMiniGameValueType(TEnumAsByte<EN_ValueType>* Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ThrowTargetBase.BP_MiniGame_ThrowTargetBase_C.GetMiniGameValueType");

	ABP_MiniGame_ThrowTargetBase_C_GetMiniGameValueType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Type != nullptr)
		*Type = params.Type;
}


// Function BP_MiniGame_ThrowTargetBase.BP_MiniGame_ThrowTargetBase_C.EnabledMeshTarget
// (NetReliable, NetRequest, Exec, NetMulticast, MulticastDelegate, Private, Protected, NetServer, NetClient, BlueprintPure)

void ABP_MiniGame_ThrowTargetBase_C::EnabledMeshTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ThrowTargetBase.BP_MiniGame_ThrowTargetBase_C.EnabledMeshTarget");

	ABP_MiniGame_ThrowTargetBase_C_EnabledMeshTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ThrowTargetBase.BP_MiniGame_ThrowTargetBase_C.AddSuccessCount
// (NetRequest, Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Protected, NetServer, DLLImport, Const)

void ABP_MiniGame_ThrowTargetBase_C::STATIC_AddSuccessCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ThrowTargetBase.BP_MiniGame_ThrowTargetBase_C.AddSuccessCount");

	ABP_MiniGame_ThrowTargetBase_C_AddSuccessCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ThrowTargetBase.BP_MiniGame_ThrowTargetBase_C.IsGolfHoleType
// (NetRequest, Exec, Native, Event, Static, NetMulticast, Public, Private, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           IsGolfHole                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_ThrowTargetBase_C::STATIC_IsGolfHoleType(bool* IsGolfHole)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ThrowTargetBase.BP_MiniGame_ThrowTargetBase_C.IsGolfHoleType");

	ABP_MiniGame_ThrowTargetBase_C_IsGolfHoleType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsGolfHole != nullptr)
		*IsGolfHole = params.IsGolfHole;
}


// Function BP_MiniGame_ThrowTargetBase.BP_MiniGame_ThrowTargetBase_C.IsStoped
// (NetReliable, NetResponse, Private, NetServer, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bStoped                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_ThrowTargetBase_C::IsStoped(bool* bStoped)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ThrowTargetBase.BP_MiniGame_ThrowTargetBase_C.IsStoped");

	ABP_MiniGame_ThrowTargetBase_C_IsStoped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bStoped != nullptr)
		*bStoped = params.bStoped;
}


// Function BP_MiniGame_ThrowTargetBase.BP_MiniGame_ThrowTargetBase_C.UserConstructionScript
// (Exec, Event, NetResponse, Public, Private, Delegate, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGame_ThrowTargetBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ThrowTargetBase.BP_MiniGame_ThrowTargetBase_C.UserConstructionScript");

	ABP_MiniGame_ThrowTargetBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ThrowTargetBase.BP_MiniGame_ThrowTargetBase_C.EnterMiniGame
// (Net, NetReliable, Exec, Native, Event, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          EnterTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_ThrowTargetBase_C::EnterMiniGame(float EnterTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ThrowTargetBase.BP_MiniGame_ThrowTargetBase_C.EnterMiniGame");

	ABP_MiniGame_ThrowTargetBase_C_EnterMiniGame_Params params;
	params.EnterTime = EnterTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ThrowTargetBase.BP_MiniGame_ThrowTargetBase_C.FinalizeTalk
// (NetReliable, Exec, Native, Event, Static, NetMulticast, Public, Private, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGame_ThrowTargetBase_C::STATIC_FinalizeTalk()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ThrowTargetBase.BP_MiniGame_ThrowTargetBase_C.FinalizeTalk");

	ABP_MiniGame_ThrowTargetBase_C_FinalizeTalk_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ThrowTargetBase.BP_MiniGame_ThrowTargetBase_C.StartMiniGame
// (NetReliable, Exec, Native, Event, Static, NetMulticast, Public, Private, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGame_ThrowTargetBase_C::STATIC_StartMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ThrowTargetBase.BP_MiniGame_ThrowTargetBase_C.StartMiniGame");

	ABP_MiniGame_ThrowTargetBase_C_StartMiniGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ThrowTargetBase.BP_MiniGame_ThrowTargetBase_C.EndMiniGame
// (Net, Exec, Native, Event, Static, NetMulticast, Public, Private, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGame_ThrowTargetBase_C::STATIC_EndMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ThrowTargetBase.BP_MiniGame_ThrowTargetBase_C.EndMiniGame");

	ABP_MiniGame_ThrowTargetBase_C_EndMiniGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ThrowTargetBase.BP_MiniGame_ThrowTargetBase_C.WinMiniGame
// (Net, Exec, Native, Event, Static, NetMulticast, Public, Private, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGame_ThrowTargetBase_C::STATIC_WinMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ThrowTargetBase.BP_MiniGame_ThrowTargetBase_C.WinMiniGame");

	ABP_MiniGame_ThrowTargetBase_C_WinMiniGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ThrowTargetBase.BP_MiniGame_ThrowTargetBase_C.LoseMiniGame
// (Exec, Native, Event, Static, NetMulticast, Public, Private, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGame_ThrowTargetBase_C::STATIC_LoseMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ThrowTargetBase.BP_MiniGame_ThrowTargetBase_C.LoseMiniGame");

	ABP_MiniGame_ThrowTargetBase_C_LoseMiniGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ThrowTargetBase.BP_MiniGame_ThrowTargetBase_C.DrawMiniGame
// (Exec, Native, Event, Static, NetMulticast, Public, Private, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGame_ThrowTargetBase_C::STATIC_DrawMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ThrowTargetBase.BP_MiniGame_ThrowTargetBase_C.DrawMiniGame");

	ABP_MiniGame_ThrowTargetBase_C_DrawMiniGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ThrowTargetBase.BP_MiniGame_ThrowTargetBase_C.RestartMiniGame
// (Net, NetReliable, NetRequest, Native, Event, Static, NetMulticast, Public, Private, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGame_ThrowTargetBase_C::STATIC_RestartMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ThrowTargetBase.BP_MiniGame_ThrowTargetBase_C.RestartMiniGame");

	ABP_MiniGame_ThrowTargetBase_C_RestartMiniGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ThrowTargetBase.BP_MiniGame_ThrowTargetBase_C.ReceiveBeginPlay
// (Net, NetReliable, NetRequest, Native, Event, Static, NetMulticast, Public, Private, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGame_ThrowTargetBase_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ThrowTargetBase.BP_MiniGame_ThrowTargetBase_C.ReceiveBeginPlay");

	ABP_MiniGame_ThrowTargetBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ThrowTargetBase.BP_MiniGame_ThrowTargetBase_C.ReceiveTick
// (Net, Exec, Native, Event, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_ThrowTargetBase_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ThrowTargetBase.BP_MiniGame_ThrowTargetBase_C.ReceiveTick");

	ABP_MiniGame_ThrowTargetBase_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ThrowTargetBase.BP_MiniGame_ThrowTargetBase_C.ExecuteUbergraph_BP_MiniGame_ThrowTargetBase
// (Net, Exec, Native, NetResponse, MulticastDelegate, Private, Protected, Delegate, NetServer, HasOutParms, BlueprintEvent)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_ThrowTargetBase_C::ExecuteUbergraph_BP_MiniGame_ThrowTargetBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ThrowTargetBase.BP_MiniGame_ThrowTargetBase_C.ExecuteUbergraph_BP_MiniGame_ThrowTargetBase");

	ABP_MiniGame_ThrowTargetBase_C_ExecuteUbergraph_BP_MiniGame_ThrowTargetBase_Params params;
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
