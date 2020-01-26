
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

// Function BP_PlayerFollowAIController.BP_PlayerFollowAIController_C.SkipCurrentAutoMove
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerFollowAIController_C::SkipCurrentAutoMove()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerFollowAIController.BP_PlayerFollowAIController_C.SkipCurrentAutoMove");

	ABP_PlayerFollowAIController_C_SkipCurrentAutoMove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerFollowAIController.BP_PlayerFollowAIController_C.StopAutoMove
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerFollowAIController_C::StopAutoMove()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerFollowAIController.BP_PlayerFollowAIController_C.StopAutoMove");

	ABP_PlayerFollowAIController_C_StopAutoMove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerFollowAIController.BP_PlayerFollowAIController_C.UnPause
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerFollowAIController_C::UnPause()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerFollowAIController.BP_PlayerFollowAIController_C.UnPause");

	ABP_PlayerFollowAIController_C_UnPause_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerFollowAIController.BP_PlayerFollowAIController_C.Pause
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerFollowAIController_C::Pause()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerFollowAIController.BP_PlayerFollowAIController_C.Pause");

	ABP_PlayerFollowAIController_C_Pause_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerFollowAIController.BP_PlayerFollowAIController_C.RequestAutoMove
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerFollowAIController_C::RequestAutoMove()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerFollowAIController.BP_PlayerFollowAIController_C.RequestAutoMove");

	ABP_PlayerFollowAIController_C_RequestAutoMove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerFollowAIController.BP_PlayerFollowAIController_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerFollowAIController_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerFollowAIController.BP_PlayerFollowAIController_C.UserConstructionScript");

	ABP_PlayerFollowAIController_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerFollowAIController.BP_PlayerFollowAIController_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerFollowAIController_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerFollowAIController.BP_PlayerFollowAIController_C.ReceiveEndPlay");

	ABP_PlayerFollowAIController_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerFollowAIController.BP_PlayerFollowAIController_C.Initialize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_NPCLeadManager_C*    LeadNPCAI                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_S3_Character_Adventure_C* PlayerPawn                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerFollowAIController_C::Initialize(class ABP_NPCLeadManager_C* LeadNPCAI, class ABP_S3_Character_Adventure_C* PlayerPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerFollowAIController.BP_PlayerFollowAIController_C.Initialize");

	ABP_PlayerFollowAIController_C_Initialize_Params params;
	params.LeadNPCAI = LeadNPCAI;
	params.PlayerPawn = PlayerPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerFollowAIController.BP_PlayerFollowAIController_C.UnpossessAndDestroy
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerFollowAIController_C::UnpossessAndDestroy()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerFollowAIController.BP_PlayerFollowAIController_C.UnpossessAndDestroy");

	ABP_PlayerFollowAIController_C_UnpossessAndDestroy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerFollowAIController.BP_PlayerFollowAIController_C.ExecuteUbergraph_BP_PlayerFollowAIController
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerFollowAIController_C::ExecuteUbergraph_BP_PlayerFollowAIController(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerFollowAIController.BP_PlayerFollowAIController_C.ExecuteUbergraph_BP_PlayerFollowAIController");

	ABP_PlayerFollowAIController_C_ExecuteUbergraph_BP_PlayerFollowAIController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
