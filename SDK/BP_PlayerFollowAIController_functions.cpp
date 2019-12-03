
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

// Function BP_PlayerFollowAIController.BP_PlayerFollowAIController_C.SkipCurrentAutoMove
// (Net, NetReliable, Exec, Native, Event, NetResponse, Static, MulticastDelegate, Protected, Delegate, NetServer, Const)

void ABP_PlayerFollowAIController_C::STATIC_SkipCurrentAutoMove()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerFollowAIController.BP_PlayerFollowAIController_C.SkipCurrentAutoMove");

	ABP_PlayerFollowAIController_C_SkipCurrentAutoMove_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerFollowAIController.BP_PlayerFollowAIController_C.StopAutoMove
// (NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, Const)

void ABP_PlayerFollowAIController_C::StopAutoMove()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerFollowAIController.BP_PlayerFollowAIController_C.StopAutoMove");

	ABP_PlayerFollowAIController_C_StopAutoMove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerFollowAIController.BP_PlayerFollowAIController_C.UnPause
// (NetReliable, NetRequest, Native, Event, NetResponse, Static, MulticastDelegate, Protected, Delegate, NetServer, Const)

void ABP_PlayerFollowAIController_C::STATIC_UnPause()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerFollowAIController.BP_PlayerFollowAIController_C.UnPause");

	ABP_PlayerFollowAIController_C_UnPause_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerFollowAIController.BP_PlayerFollowAIController_C.Pause
// (Net, Exec, Native, Event, NetResponse, Static, MulticastDelegate, Protected, Delegate, NetServer, Const)

void ABP_PlayerFollowAIController_C::STATIC_Pause()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerFollowAIController.BP_PlayerFollowAIController_C.Pause");

	ABP_PlayerFollowAIController_C_Pause_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerFollowAIController.BP_PlayerFollowAIController_C.RequestAutoMove
// (Net, NetReliable, Native, Event, NetMulticast, Protected, Delegate, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_PlayerFollowAIController_C::RequestAutoMove()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerFollowAIController.BP_PlayerFollowAIController_C.RequestAutoMove");

	ABP_PlayerFollowAIController_C_RequestAutoMove_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerFollowAIController.BP_PlayerFollowAIController_C.UserConstructionScript
// (Net, NetRequest, Native, NetResponse, NetMulticast, MulticastDelegate, Public, Protected, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_PlayerFollowAIController_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerFollowAIController.BP_PlayerFollowAIController_C.UserConstructionScript");

	ABP_PlayerFollowAIController_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerFollowAIController.BP_PlayerFollowAIController_C.ReceiveEndPlay
// (Net, NetReliable, Native, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, Const)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerFollowAIController_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerFollowAIController.BP_PlayerFollowAIController_C.ReceiveEndPlay");

	ABP_PlayerFollowAIController_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerFollowAIController.BP_PlayerFollowAIController_C.Initialize
// (Exec, Event, NetMulticast, MulticastDelegate, Private, Protected, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
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
// (NetReliable, NetRequest, Exec, Native, Event, NetResponse, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_PlayerFollowAIController_C::UnpossessAndDestroy()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerFollowAIController.BP_PlayerFollowAIController_C.UnpossessAndDestroy");

	ABP_PlayerFollowAIController_C_UnpossessAndDestroy_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerFollowAIController.BP_PlayerFollowAIController_C.ExecuteUbergraph_BP_PlayerFollowAIController
// (NetRequest, Exec, Event, Static, Protected, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerFollowAIController_C::STATIC_ExecuteUbergraph_BP_PlayerFollowAIController(int EntryPoint)
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
