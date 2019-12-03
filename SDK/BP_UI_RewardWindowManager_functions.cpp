
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

// Function BP_UI_RewardWindowManager.BP_UI_RewardWindowManager_C.UserConstructionScript
// (Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_UI_RewardWindowManager_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_RewardWindowManager.BP_UI_RewardWindowManager_C.UserConstructionScript");

	ABP_UI_RewardWindowManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_RewardWindowManager.BP_UI_RewardWindowManager_C.ReceiveBeginPlay
// (Net, NetReliable, Native, NetMulticast, Public, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure, Const)

void ABP_UI_RewardWindowManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_RewardWindowManager.BP_UI_RewardWindowManager_C.ReceiveBeginPlay");

	ABP_UI_RewardWindowManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_RewardWindowManager.BP_UI_RewardWindowManager_C.FinsihRewardWindow
// (NetReliable, Native, NetMulticast, Public, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure, Const)

void ABP_UI_RewardWindowManager_C::FinsihRewardWindow()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_RewardWindowManager.BP_UI_RewardWindowManager_C.FinsihRewardWindow");

	ABP_UI_RewardWindowManager_C_FinsihRewardWindow_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_RewardWindowManager.BP_UI_RewardWindowManager_C.AddNotice
// (Native, NetResponse, Public, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// ES3RewardCategory              Category                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_UI_RewardWindowManager_C::AddNotice(ES3RewardCategory Category)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_RewardWindowManager.BP_UI_RewardWindowManager_C.AddNotice");

	ABP_UI_RewardWindowManager_C_AddNotice_Params params;
	params.Category = Category;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_RewardWindowManager.BP_UI_RewardWindowManager_C.ReceiveEndPlay
// (Net, NetReliable, NetRequest, Exec, NetResponse, Public, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_UI_RewardWindowManager_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_RewardWindowManager.BP_UI_RewardWindowManager_C.ReceiveEndPlay");

	ABP_UI_RewardWindowManager_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_RewardWindowManager.BP_UI_RewardWindowManager_C.ExecuteUbergraph_BP_UI_RewardWindowManager
// (NetReliable, NetRequest, Native, Event, NetResponse, Static, NetMulticast, Public, Delegate, NetServer, HasDefaults, NetClient, DLLImport)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_UI_RewardWindowManager_C::STATIC_ExecuteUbergraph_BP_UI_RewardWindowManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_RewardWindowManager.BP_UI_RewardWindowManager_C.ExecuteUbergraph_BP_UI_RewardWindowManager");

	ABP_UI_RewardWindowManager_C_ExecuteUbergraph_BP_UI_RewardWindowManager_Params params;
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
