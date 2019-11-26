
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

// Function BP_CCBattleProgramBase.BP_CCBattleProgramBase_C.GetEventDispatcher
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UBP_CCBattleEvents_C*    EventDispatcher                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_CCBattleProgramBase_C::GetEventDispatcher(class UBP_CCBattleEvents_C** EventDispatcher)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CCBattleProgramBase.BP_CCBattleProgramBase_C.GetEventDispatcher");

	ABP_CCBattleProgramBase_C_GetEventDispatcher_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EventDispatcher != nullptr)
		*EventDispatcher = params.EventDispatcher;
}


// Function BP_CCBattleProgramBase.BP_CCBattleProgramBase_C.StartRetry
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_CCBattleProgramBase_C::StartRetry()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CCBattleProgramBase.BP_CCBattleProgramBase_C.StartRetry");

	ABP_CCBattleProgramBase_C_StartRetry_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CCBattleProgramBase.BP_CCBattleProgramBase_C.SetPlayerController
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CCBattleProgramBase_C::SetPlayerController(class APlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CCBattleProgramBase.BP_CCBattleProgramBase_C.SetPlayerController");

	ABP_CCBattleProgramBase_C_SetPlayerController_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CCBattleProgramBase.BP_CCBattleProgramBase_C.StartGame_SingleSet
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_CCBattle_Set        SET                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_CCBattleProgramBase_C::StartGame_SingleSet(const struct FST_CCBattle_Set& SET)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CCBattleProgramBase.BP_CCBattleProgramBase_C.StartGame_SingleSet");

	ABP_CCBattleProgramBase_C_StartGame_SingleSet_Params params;
	params.SET = SET;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CCBattleProgramBase.BP_CCBattleProgramBase_C.SetOutputTexture
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextureRenderTarget2D*  Texture                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CCBattleProgramBase_C::SetOutputTexture(class UTextureRenderTarget2D* Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CCBattleProgramBase.BP_CCBattleProgramBase_C.SetOutputTexture");

	ABP_CCBattleProgramBase_C_SetOutputTexture_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CCBattleProgramBase.BP_CCBattleProgramBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_CCBattleProgramBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CCBattleProgramBase.BP_CCBattleProgramBase_C.UserConstructionScript");

	ABP_CCBattleProgramBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CCBattleProgramBase.BP_CCBattleProgramBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_CCBattleProgramBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CCBattleProgramBase.BP_CCBattleProgramBase_C.ReceiveBeginPlay");

	ABP_CCBattleProgramBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CCBattleProgramBase.BP_CCBattleProgramBase_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CCBattleProgramBase_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CCBattleProgramBase.BP_CCBattleProgramBase_C.ReceiveEndPlay");

	ABP_CCBattleProgramBase_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CCBattleProgramBase.BP_CCBattleProgramBase_C.ExecuteUbergraph_BP_CCBattleProgramBase
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CCBattleProgramBase_C::ExecuteUbergraph_BP_CCBattleProgramBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CCBattleProgramBase.BP_CCBattleProgramBase_C.ExecuteUbergraph_BP_CCBattleProgramBase");

	ABP_CCBattleProgramBase_C_ExecuteUbergraph_BP_CCBattleProgramBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
