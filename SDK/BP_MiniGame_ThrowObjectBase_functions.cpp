
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

// Function BP_MiniGame_ThrowObjectBase.BP_MiniGame_ThrowObjectBase_C.GetMiniGameValueType
// (Net, Native, Event, NetResponse, Static, MulticastDelegate, Delegate, NetServer, NetClient, Const)
// Parameters:
// TEnumAsByte<EN_ValueType>      Type                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_ThrowObjectBase_C::STATIC_GetMiniGameValueType(TEnumAsByte<EN_ValueType>* Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ThrowObjectBase.BP_MiniGame_ThrowObjectBase_C.GetMiniGameValueType");

	ABP_MiniGame_ThrowObjectBase_C_GetMiniGameValueType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Type != nullptr)
		*Type = params.Type;
}


// Function BP_MiniGame_ThrowObjectBase.BP_MiniGame_ThrowObjectBase_C.IsGameCenterMode
// (NetReliable, NetRequest, Native, Static, NetMulticast, MulticastDelegate, Public, NetServer, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bGameCenter                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_ThrowObjectBase_C::STATIC_IsGameCenterMode(bool* bGameCenter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ThrowObjectBase.BP_MiniGame_ThrowObjectBase_C.IsGameCenterMode");

	ABP_MiniGame_ThrowObjectBase_C_IsGameCenterMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bGameCenter != nullptr)
		*bGameCenter = params.bGameCenter;
}


// Function BP_MiniGame_ThrowObjectBase.BP_MiniGame_ThrowObjectBase_C.SetGameCenterMode
// (Net, NetRequest, Native, Static, NetMulticast, MulticastDelegate, Public, NetServer, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bGolfType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_ThrowObjectBase_C::STATIC_SetGameCenterMode(bool bGolfType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ThrowObjectBase.BP_MiniGame_ThrowObjectBase_C.SetGameCenterMode");

	ABP_MiniGame_ThrowObjectBase_C_SetGameCenterMode_Params params;
	params.bGolfType = bGolfType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ThrowObjectBase.BP_MiniGame_ThrowObjectBase_C.Throw
// (Net, NetRequest, Exec, NetResponse, NetMulticast, Public, Private, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_ThrowObjectBase_C::Throw()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ThrowObjectBase.BP_MiniGame_ThrowObjectBase_C.Throw");

	ABP_MiniGame_ThrowObjectBase_C_Throw_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ThrowObjectBase.BP_MiniGame_ThrowObjectBase_C.IsStoped
// (NetReliable, Exec, Native, Event, NetResponse, Static, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           bStoped                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_ThrowObjectBase_C::STATIC_IsStoped(bool* bStoped)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ThrowObjectBase.BP_MiniGame_ThrowObjectBase_C.IsStoped");

	ABP_MiniGame_ThrowObjectBase_C_IsStoped_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bStoped != nullptr)
		*bStoped = params.bStoped;
}


// Function BP_MiniGame_ThrowObjectBase.BP_MiniGame_ThrowObjectBase_C.UserConstructionScript
// (Net, NetReliable, Exec, Native, Event, Static, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ABP_MiniGame_ThrowObjectBase_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ThrowObjectBase.BP_MiniGame_ThrowObjectBase_C.UserConstructionScript");

	ABP_MiniGame_ThrowObjectBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ThrowObjectBase.BP_MiniGame_ThrowObjectBase_C.WinMiniGame
// (NetRequest, Native, Static, NetMulticast, MulticastDelegate, Public, NetServer, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_ThrowObjectBase_C::STATIC_WinMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ThrowObjectBase.BP_MiniGame_ThrowObjectBase_C.WinMiniGame");

	ABP_MiniGame_ThrowObjectBase_C_WinMiniGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ThrowObjectBase.BP_MiniGame_ThrowObjectBase_C.LoseMiniGame
// (Net, NetReliable, Native, Static, NetMulticast, MulticastDelegate, Public, NetServer, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_ThrowObjectBase_C::STATIC_LoseMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ThrowObjectBase.BP_MiniGame_ThrowObjectBase_C.LoseMiniGame");

	ABP_MiniGame_ThrowObjectBase_C_LoseMiniGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ThrowObjectBase.BP_MiniGame_ThrowObjectBase_C.DrawMiniGame
// (Net, NetReliable, Native, Static, NetMulticast, MulticastDelegate, Public, NetServer, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_ThrowObjectBase_C::STATIC_DrawMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ThrowObjectBase.BP_MiniGame_ThrowObjectBase_C.DrawMiniGame");

	ABP_MiniGame_ThrowObjectBase_C_DrawMiniGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ThrowObjectBase.BP_MiniGame_ThrowObjectBase_C.EndMiniGame
// (NetReliable, Native, Static, NetMulticast, MulticastDelegate, Public, NetServer, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_ThrowObjectBase_C::STATIC_EndMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ThrowObjectBase.BP_MiniGame_ThrowObjectBase_C.EndMiniGame");

	ABP_MiniGame_ThrowObjectBase_C_EndMiniGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ThrowObjectBase.BP_MiniGame_ThrowObjectBase_C.StartMiniGame
// (NetReliable, Native, Static, NetMulticast, MulticastDelegate, Public, NetServer, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_ThrowObjectBase_C::STATIC_StartMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ThrowObjectBase.BP_MiniGame_ThrowObjectBase_C.StartMiniGame");

	ABP_MiniGame_ThrowObjectBase_C_StartMiniGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ThrowObjectBase.BP_MiniGame_ThrowObjectBase_C.FinalizeTalk
// (Net, Native, Static, NetMulticast, MulticastDelegate, Public, NetServer, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_ThrowObjectBase_C::STATIC_FinalizeTalk()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ThrowObjectBase.BP_MiniGame_ThrowObjectBase_C.FinalizeTalk");

	ABP_MiniGame_ThrowObjectBase_C_FinalizeTalk_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ThrowObjectBase.BP_MiniGame_ThrowObjectBase_C.RestartMiniGame
// (Net, Native, Static, NetMulticast, MulticastDelegate, Public, NetServer, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_ThrowObjectBase_C::STATIC_RestartMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ThrowObjectBase.BP_MiniGame_ThrowObjectBase_C.RestartMiniGame");

	ABP_MiniGame_ThrowObjectBase_C_RestartMiniGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ThrowObjectBase.BP_MiniGame_ThrowObjectBase_C.ReceiveTick
// (Net, Native, Static, Protected, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_ThrowObjectBase_C::STATIC_ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ThrowObjectBase.BP_MiniGame_ThrowObjectBase_C.ReceiveTick");

	ABP_MiniGame_ThrowObjectBase_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ThrowObjectBase.BP_MiniGame_ThrowObjectBase_C.EnterMiniGame
// (Net, Native, Static, Protected, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          EnterTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_ThrowObjectBase_C::STATIC_EnterMiniGame(float EnterTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ThrowObjectBase.BP_MiniGame_ThrowObjectBase_C.EnterMiniGame");

	ABP_MiniGame_ThrowObjectBase_C_EnterMiniGame_Params params;
	params.EnterTime = EnterTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ThrowObjectBase.BP_MiniGame_ThrowObjectBase_C.ExecuteUbergraph_BP_MiniGame_ThrowObjectBase
// (Net, NetRequest, Event, MulticastDelegate, Public, Private, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_ThrowObjectBase_C::ExecuteUbergraph_BP_MiniGame_ThrowObjectBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ThrowObjectBase.BP_MiniGame_ThrowObjectBase_C.ExecuteUbergraph_BP_MiniGame_ThrowObjectBase");

	ABP_MiniGame_ThrowObjectBase_C_ExecuteUbergraph_BP_MiniGame_ThrowObjectBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ThrowObjectBase.BP_MiniGame_ThrowObjectBase_C.OnStopedDispatcher__DelegateSignature
// (Net, NetReliable, NetRequest, Exec, Event, NetResponse, Static, NetMulticast, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           bResult                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Score                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   GiftName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsSpecial                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USoundAtomCue*           SuccessSound                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsGameCenter                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_ThrowObjectBase_C::STATIC_OnStopedDispatcher__DelegateSignature(bool bResult, int Score, const struct FName& GiftName, bool IsSpecial, class USoundAtomCue* SuccessSound, bool IsGameCenter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ThrowObjectBase.BP_MiniGame_ThrowObjectBase_C.OnStopedDispatcher__DelegateSignature");

	ABP_MiniGame_ThrowObjectBase_C_OnStopedDispatcher__DelegateSignature_Params params;
	params.bResult = bResult;
	params.Score = Score;
	params.GiftName = GiftName;
	params.IsSpecial = IsSpecial;
	params.SuccessSound = SuccessSound;
	params.IsGameCenter = IsGameCenter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ThrowObjectBase.BP_MiniGame_ThrowObjectBase_C.OnFirstTouchDispatcher__DelegateSignature
// (NetReliable, Native, Static, MulticastDelegate, Public, Private, Protected, Delegate, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_ThrowObjectBase_C::STATIC_OnFirstTouchDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ThrowObjectBase.BP_MiniGame_ThrowObjectBase_C.OnFirstTouchDispatcher__DelegateSignature");

	ABP_MiniGame_ThrowObjectBase_C_OnFirstTouchDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
