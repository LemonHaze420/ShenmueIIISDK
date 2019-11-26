
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
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EN_ValueType>      Type                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_ThrowTargetBase_C::GetMiniGameValueType(TEnumAsByte<EN_ValueType>* Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ThrowTargetBase.BP_MiniGame_ThrowTargetBase_C.GetMiniGameValueType");

	ABP_MiniGame_ThrowTargetBase_C_GetMiniGameValueType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Type != nullptr)
		*Type = params.Type;
}


// Function BP_MiniGame_ThrowTargetBase.BP_MiniGame_ThrowTargetBase_C.EnabledMeshTarget
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_ThrowTargetBase_C::EnabledMeshTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ThrowTargetBase.BP_MiniGame_ThrowTargetBase_C.EnabledMeshTarget");

	ABP_MiniGame_ThrowTargetBase_C_EnabledMeshTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ThrowTargetBase.BP_MiniGame_ThrowTargetBase_C.AddSuccessCount
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_ThrowTargetBase_C::AddSuccessCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ThrowTargetBase.BP_MiniGame_ThrowTargetBase_C.AddSuccessCount");

	ABP_MiniGame_ThrowTargetBase_C_AddSuccessCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ThrowTargetBase.BP_MiniGame_ThrowTargetBase_C.IsGolfHoleType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsGolfHole                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_ThrowTargetBase_C::IsGolfHoleType(bool* IsGolfHole)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ThrowTargetBase.BP_MiniGame_ThrowTargetBase_C.IsGolfHoleType");

	ABP_MiniGame_ThrowTargetBase_C_IsGolfHoleType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsGolfHole != nullptr)
		*IsGolfHole = params.IsGolfHole;
}


// Function BP_MiniGame_ThrowTargetBase.BP_MiniGame_ThrowTargetBase_C.IsStoped
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
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
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_ThrowTargetBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ThrowTargetBase.BP_MiniGame_ThrowTargetBase_C.UserConstructionScript");

	ABP_MiniGame_ThrowTargetBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ThrowTargetBase.BP_MiniGame_ThrowTargetBase_C.EnterMiniGame
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          EnterTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_ThrowTargetBase_C::EnterMiniGame(float EnterTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ThrowTargetBase.BP_MiniGame_ThrowTargetBase_C.EnterMiniGame");

	ABP_MiniGame_ThrowTargetBase_C_EnterMiniGame_Params params;
	params.EnterTime = EnterTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ThrowTargetBase.BP_MiniGame_ThrowTargetBase_C.FinalizeTalk
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_ThrowTargetBase_C::FinalizeTalk()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ThrowTargetBase.BP_MiniGame_ThrowTargetBase_C.FinalizeTalk");

	ABP_MiniGame_ThrowTargetBase_C_FinalizeTalk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ThrowTargetBase.BP_MiniGame_ThrowTargetBase_C.StartMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_ThrowTargetBase_C::StartMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ThrowTargetBase.BP_MiniGame_ThrowTargetBase_C.StartMiniGame");

	ABP_MiniGame_ThrowTargetBase_C_StartMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ThrowTargetBase.BP_MiniGame_ThrowTargetBase_C.EndMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_ThrowTargetBase_C::EndMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ThrowTargetBase.BP_MiniGame_ThrowTargetBase_C.EndMiniGame");

	ABP_MiniGame_ThrowTargetBase_C_EndMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ThrowTargetBase.BP_MiniGame_ThrowTargetBase_C.WinMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_ThrowTargetBase_C::WinMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ThrowTargetBase.BP_MiniGame_ThrowTargetBase_C.WinMiniGame");

	ABP_MiniGame_ThrowTargetBase_C_WinMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ThrowTargetBase.BP_MiniGame_ThrowTargetBase_C.LoseMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_ThrowTargetBase_C::LoseMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ThrowTargetBase.BP_MiniGame_ThrowTargetBase_C.LoseMiniGame");

	ABP_MiniGame_ThrowTargetBase_C_LoseMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ThrowTargetBase.BP_MiniGame_ThrowTargetBase_C.DrawMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_ThrowTargetBase_C::DrawMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ThrowTargetBase.BP_MiniGame_ThrowTargetBase_C.DrawMiniGame");

	ABP_MiniGame_ThrowTargetBase_C_DrawMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ThrowTargetBase.BP_MiniGame_ThrowTargetBase_C.RestartMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_ThrowTargetBase_C::RestartMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ThrowTargetBase.BP_MiniGame_ThrowTargetBase_C.RestartMiniGame");

	ABP_MiniGame_ThrowTargetBase_C_RestartMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ThrowTargetBase.BP_MiniGame_ThrowTargetBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MiniGame_ThrowTargetBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ThrowTargetBase.BP_MiniGame_ThrowTargetBase_C.ReceiveBeginPlay");

	ABP_MiniGame_ThrowTargetBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ThrowTargetBase.BP_MiniGame_ThrowTargetBase_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_ThrowTargetBase_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ThrowTargetBase.BP_MiniGame_ThrowTargetBase_C.ReceiveTick");

	ABP_MiniGame_ThrowTargetBase_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ThrowTargetBase.BP_MiniGame_ThrowTargetBase_C.ExecuteUbergraph_BP_MiniGame_ThrowTargetBase
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_ThrowTargetBase_C::ExecuteUbergraph_BP_MiniGame_ThrowTargetBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ThrowTargetBase.BP_MiniGame_ThrowTargetBase_C.ExecuteUbergraph_BP_MiniGame_ThrowTargetBase");

	ABP_MiniGame_ThrowTargetBase_C_ExecuteUbergraph_BP_MiniGame_ThrowTargetBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
