
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

// Function BP_SB_HoleBase.BP_SB_HoleBase_C.GetMiniGameValueType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EN_ValueType>      Type                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_SB_HoleBase_C::GetMiniGameValueType(TEnumAsByte<EN_ValueType>* Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SB_HoleBase.BP_SB_HoleBase_C.GetMiniGameValueType");

	ABP_SB_HoleBase_C_GetMiniGameValueType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Type != nullptr)
		*Type = params.Type;
}


// Function BP_SB_HoleBase.BP_SB_HoleBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_SB_HoleBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SB_HoleBase.BP_SB_HoleBase_C.UserConstructionScript");

	ABP_SB_HoleBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SB_HoleBase.BP_SB_HoleBase_C.StartMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_SB_HoleBase_C::StartMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SB_HoleBase.BP_SB_HoleBase_C.StartMiniGame");

	ABP_SB_HoleBase_C_StartMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SB_HoleBase.BP_SB_HoleBase_C.EndMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_SB_HoleBase_C::EndMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SB_HoleBase.BP_SB_HoleBase_C.EndMiniGame");

	ABP_SB_HoleBase_C_EndMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SB_HoleBase.BP_SB_HoleBase_C.WinMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_SB_HoleBase_C::WinMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SB_HoleBase.BP_SB_HoleBase_C.WinMiniGame");

	ABP_SB_HoleBase_C_WinMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SB_HoleBase.BP_SB_HoleBase_C.LoseMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_SB_HoleBase_C::LoseMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SB_HoleBase.BP_SB_HoleBase_C.LoseMiniGame");

	ABP_SB_HoleBase_C_LoseMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SB_HoleBase.BP_SB_HoleBase_C.DrawMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_SB_HoleBase_C::DrawMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SB_HoleBase.BP_SB_HoleBase_C.DrawMiniGame");

	ABP_SB_HoleBase_C_DrawMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SB_HoleBase.BP_SB_HoleBase_C.RestartMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_SB_HoleBase_C::RestartMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SB_HoleBase.BP_SB_HoleBase_C.RestartMiniGame");

	ABP_SB_HoleBase_C_RestartMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SB_HoleBase.BP_SB_HoleBase_C.EnterMiniGame
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          EnterTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SB_HoleBase_C::EnterMiniGame(float EnterTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SB_HoleBase.BP_SB_HoleBase_C.EnterMiniGame");

	ABP_SB_HoleBase_C_EnterMiniGame_Params params;
	params.EnterTime = EnterTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SB_HoleBase.BP_SB_HoleBase_C.FinalizeTalk
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_SB_HoleBase_C::FinalizeTalk()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SB_HoleBase.BP_SB_HoleBase_C.FinalizeTalk");

	ABP_SB_HoleBase_C_FinalizeTalk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SB_HoleBase.BP_SB_HoleBase_C.DeleteHoleInBall
// (BlueprintCallable, BlueprintEvent)

void ABP_SB_HoleBase_C::DeleteHoleInBall()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SB_HoleBase.BP_SB_HoleBase_C.DeleteHoleInBall");

	ABP_SB_HoleBase_C_DeleteHoleInBall_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SB_HoleBase.BP_SB_HoleBase_C.ExecuteUbergraph_BP_SB_HoleBase
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SB_HoleBase_C::ExecuteUbergraph_BP_SB_HoleBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SB_HoleBase.BP_SB_HoleBase_C.ExecuteUbergraph_BP_SB_HoleBase");

	ABP_SB_HoleBase_C_ExecuteUbergraph_BP_SB_HoleBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SB_HoleBase.BP_SB_HoleBase_C.OnHasPassedDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_SB_HoleBase_C::OnHasPassedDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SB_HoleBase.BP_SB_HoleBase_C.OnHasPassedDispatcher__DelegateSignature");

	ABP_SB_HoleBase_C_OnHasPassedDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SB_HoleBase.BP_SB_HoleBase_C.OnHoleInDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_SB_HoleBase_C::OnHoleInDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SB_HoleBase.BP_SB_HoleBase_C.OnHoleInDispatcher__DelegateSignature");

	ABP_SB_HoleBase_C_OnHoleInDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
