
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

// Function BP_MiniGame_ThrowObjectBase.BP_MiniGame_ThrowObjectBase_C.GetMiniGameValueType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EN_ValueType>      Type                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_ThrowObjectBase_C::GetMiniGameValueType(TEnumAsByte<EN_ValueType>* Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ThrowObjectBase.BP_MiniGame_ThrowObjectBase_C.GetMiniGameValueType");

	ABP_MiniGame_ThrowObjectBase_C_GetMiniGameValueType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Type != nullptr)
		*Type = params.Type;
}


// Function BP_MiniGame_ThrowObjectBase.BP_MiniGame_ThrowObjectBase_C.IsGameCenterMode
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bGameCenter                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_ThrowObjectBase_C::IsGameCenterMode(bool* bGameCenter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ThrowObjectBase.BP_MiniGame_ThrowObjectBase_C.IsGameCenterMode");

	ABP_MiniGame_ThrowObjectBase_C_IsGameCenterMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bGameCenter != nullptr)
		*bGameCenter = params.bGameCenter;
}


// Function BP_MiniGame_ThrowObjectBase.BP_MiniGame_ThrowObjectBase_C.SetGameCenterMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bGolfType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_ThrowObjectBase_C::SetGameCenterMode(bool bGolfType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ThrowObjectBase.BP_MiniGame_ThrowObjectBase_C.SetGameCenterMode");

	ABP_MiniGame_ThrowObjectBase_C_SetGameCenterMode_Params params;
	params.bGolfType = bGolfType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ThrowObjectBase.BP_MiniGame_ThrowObjectBase_C.Throw
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_ThrowObjectBase_C::Throw()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ThrowObjectBase.BP_MiniGame_ThrowObjectBase_C.Throw");

	ABP_MiniGame_ThrowObjectBase_C_Throw_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ThrowObjectBase.BP_MiniGame_ThrowObjectBase_C.IsStoped
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bStoped                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_ThrowObjectBase_C::IsStoped(bool* bStoped)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ThrowObjectBase.BP_MiniGame_ThrowObjectBase_C.IsStoped");

	ABP_MiniGame_ThrowObjectBase_C_IsStoped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bStoped != nullptr)
		*bStoped = params.bStoped;
}


// Function BP_MiniGame_ThrowObjectBase.BP_MiniGame_ThrowObjectBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_ThrowObjectBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ThrowObjectBase.BP_MiniGame_ThrowObjectBase_C.UserConstructionScript");

	ABP_MiniGame_ThrowObjectBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ThrowObjectBase.BP_MiniGame_ThrowObjectBase_C.WinMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_ThrowObjectBase_C::WinMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ThrowObjectBase.BP_MiniGame_ThrowObjectBase_C.WinMiniGame");

	ABP_MiniGame_ThrowObjectBase_C_WinMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ThrowObjectBase.BP_MiniGame_ThrowObjectBase_C.LoseMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_ThrowObjectBase_C::LoseMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ThrowObjectBase.BP_MiniGame_ThrowObjectBase_C.LoseMiniGame");

	ABP_MiniGame_ThrowObjectBase_C_LoseMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ThrowObjectBase.BP_MiniGame_ThrowObjectBase_C.DrawMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_ThrowObjectBase_C::DrawMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ThrowObjectBase.BP_MiniGame_ThrowObjectBase_C.DrawMiniGame");

	ABP_MiniGame_ThrowObjectBase_C_DrawMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ThrowObjectBase.BP_MiniGame_ThrowObjectBase_C.EndMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_ThrowObjectBase_C::EndMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ThrowObjectBase.BP_MiniGame_ThrowObjectBase_C.EndMiniGame");

	ABP_MiniGame_ThrowObjectBase_C_EndMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ThrowObjectBase.BP_MiniGame_ThrowObjectBase_C.StartMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_ThrowObjectBase_C::StartMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ThrowObjectBase.BP_MiniGame_ThrowObjectBase_C.StartMiniGame");

	ABP_MiniGame_ThrowObjectBase_C_StartMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ThrowObjectBase.BP_MiniGame_ThrowObjectBase_C.FinalizeTalk
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_ThrowObjectBase_C::FinalizeTalk()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ThrowObjectBase.BP_MiniGame_ThrowObjectBase_C.FinalizeTalk");

	ABP_MiniGame_ThrowObjectBase_C_FinalizeTalk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ThrowObjectBase.BP_MiniGame_ThrowObjectBase_C.RestartMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_ThrowObjectBase_C::RestartMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ThrowObjectBase.BP_MiniGame_ThrowObjectBase_C.RestartMiniGame");

	ABP_MiniGame_ThrowObjectBase_C_RestartMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ThrowObjectBase.BP_MiniGame_ThrowObjectBase_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_ThrowObjectBase_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ThrowObjectBase.BP_MiniGame_ThrowObjectBase_C.ReceiveTick");

	ABP_MiniGame_ThrowObjectBase_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ThrowObjectBase.BP_MiniGame_ThrowObjectBase_C.EnterMiniGame
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          EnterTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_ThrowObjectBase_C::EnterMiniGame(float EnterTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ThrowObjectBase.BP_MiniGame_ThrowObjectBase_C.EnterMiniGame");

	ABP_MiniGame_ThrowObjectBase_C_EnterMiniGame_Params params;
	params.EnterTime = EnterTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ThrowObjectBase.BP_MiniGame_ThrowObjectBase_C.ExecuteUbergraph_BP_MiniGame_ThrowObjectBase
// ()
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
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bResult                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Score                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   GiftName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsSpecial                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USoundAtomCue*           SuccessSound                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsGameCenter                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_ThrowObjectBase_C::OnStopedDispatcher__DelegateSignature(bool bResult, int Score, const struct FName& GiftName, bool IsSpecial, class USoundAtomCue* SuccessSound, bool IsGameCenter)
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
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_ThrowObjectBase_C::OnFirstTouchDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ThrowObjectBase.BP_MiniGame_ThrowObjectBase_C.OnFirstTouchDispatcher__DelegateSignature");

	ABP_MiniGame_ThrowObjectBase_C_OnFirstTouchDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
