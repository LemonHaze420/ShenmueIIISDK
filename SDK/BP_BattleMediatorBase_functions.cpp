
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

// Function BP_BattleMediatorBase.BP_BattleMediatorBase_C.PrelaunchBattle
// (NetReliable, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           dummy                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BattleMediatorBase_C::PrelaunchBattle(bool* dummy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleMediatorBase.BP_BattleMediatorBase_C.PrelaunchBattle");

	ABP_BattleMediatorBase_C_PrelaunchBattle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (dummy != nullptr)
		*dummy = params.dummy;
}


// Function BP_BattleMediatorBase.BP_BattleMediatorBase_C.SelectLoadingHint
// (Net, NetRequest, Exec, Event, Static, MulticastDelegate, Protected, Delegate, NetServer, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Found                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FST_LoadingHintWindowParam Hint                           (Parm, OutParm)

void ABP_BattleMediatorBase_C::STATIC_SelectLoadingHint(bool* Found, struct FST_LoadingHintWindowParam* Hint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleMediatorBase.BP_BattleMediatorBase_C.SelectLoadingHint");

	ABP_BattleMediatorBase_C_SelectLoadingHint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Found != nullptr)
		*Found = params.Found;
	if (Hint != nullptr)
		*Hint = params.Hint;
}


// Function BP_BattleMediatorBase.BP_BattleMediatorBase_C.CountHeldRecoveryItems
// (Exec, Native, Event, MulticastDelegate, Protected, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ABP_BattleMediatorBase_C::CountHeldRecoveryItems()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleMediatorBase.BP_BattleMediatorBase_C.CountHeldRecoveryItems");

	ABP_BattleMediatorBase_C_CountHeldRecoveryItems_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BattleMediatorBase.BP_BattleMediatorBase_C.AllowsRecoveryItems
// (NetRequest, Exec, Native, NetResponse, Public, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_BattleMediatorBase_C::AllowsRecoveryItems()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleMediatorBase.BP_BattleMediatorBase_C.AllowsRecoveryItems");

	ABP_BattleMediatorBase_C_AllowsRecoveryItems_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BattleMediatorBase.BP_BattleMediatorBase_C.IsSparring
// (NetReliable, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Enabled                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BattleMediatorBase_C::IsSparring(bool* Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleMediatorBase.BP_BattleMediatorBase_C.IsSparring");

	ABP_BattleMediatorBase_C_IsSparring_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Enabled != nullptr)
		*Enabled = params.Enabled;
}


// Function BP_BattleMediatorBase.BP_BattleMediatorBase_C.GetRequiredLevels
// (Net, NetReliable, NetRequest, Native, Event, Public, Private, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FName>           Levels                         (Parm, OutParm, ZeroConstructor)
// bool                           OneOrMore                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BattleMediatorBase_C::GetRequiredLevels(TArray<struct FName>* Levels, bool* OneOrMore)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleMediatorBase.BP_BattleMediatorBase_C.GetRequiredLevels");

	ABP_BattleMediatorBase_C_GetRequiredLevels_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Levels != nullptr)
		*Levels = params.Levels;
	if (OneOrMore != nullptr)
		*OneOrMore = params.OneOrMore;
}


// Function BP_BattleMediatorBase.BP_BattleMediatorBase_C.StartLoadingLaunchData
// (NetReliable, NetRequest, Native, Event, Static, NetMulticast, Public, Private, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UBTL_LaunchParameters_C* LaunchDataObject               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BattleMediatorBase_C::STATIC_StartLoadingLaunchData(class UBTL_LaunchParameters_C** LaunchDataObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleMediatorBase.BP_BattleMediatorBase_C.StartLoadingLaunchData");

	ABP_BattleMediatorBase_C_StartLoadingLaunchData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LaunchDataObject != nullptr)
		*LaunchDataObject = params.LaunchDataObject;
}


// Function BP_BattleMediatorBase.BP_BattleMediatorBase_C.CreateLaunchDataObject
// (Exec, Native, Event, NetResponse, Static, MulticastDelegate, Private, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// class UBTL_LaunchParameters_C* Object                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BattleMediatorBase_C::STATIC_CreateLaunchDataObject(class UBTL_LaunchParameters_C** Object)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleMediatorBase.BP_BattleMediatorBase_C.CreateLaunchDataObject");

	ABP_BattleMediatorBase_C_CreateLaunchDataObject_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Object != nullptr)
		*Object = params.Object;
}


// Function BP_BattleMediatorBase.BP_BattleMediatorBase_C.GetBattleID
// (Net, NetReliable, NetRequest, Native, Event, Static, NetMulticast, Public, Private, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   ID                             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BattleMediatorBase_C::STATIC_GetBattleID(struct FName* ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleMediatorBase.BP_BattleMediatorBase_C.GetBattleID");

	ABP_BattleMediatorBase_C_GetBattleID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ID != nullptr)
		*ID = params.ID;
}


// Function BP_BattleMediatorBase.BP_BattleMediatorBase_C.StartBattle
// (Net, NetReliable, Exec, Native, NetResponse, Static, Protected, Delegate, NetServer, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ABP_BattleManagerBase_C* BattleManager                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBTL_LaunchParameters_C* LaunchData                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           dummy                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BattleMediatorBase_C::STATIC_StartBattle(class ABP_BattleManagerBase_C* BattleManager, class UBTL_LaunchParameters_C* LaunchData, bool* dummy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleMediatorBase.BP_BattleMediatorBase_C.StartBattle");

	ABP_BattleMediatorBase_C_StartBattle_Params params;
	params.BattleManager = BattleManager;
	params.LaunchData = LaunchData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (dummy != nullptr)
		*dummy = params.dummy;
}


// Function BP_BattleMediatorBase.BP_BattleMediatorBase_C.ShutdownBattle
// (NetRequest, Exec, Native, Event, NetResponse, MulticastDelegate, Private, Delegate, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ABP_BattleManagerBase_C* Manager                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           dummy                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BattleMediatorBase_C::ShutdownBattle(class ABP_BattleManagerBase_C* Manager, bool* dummy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleMediatorBase.BP_BattleMediatorBase_C.ShutdownBattle");

	ABP_BattleMediatorBase_C_ShutdownBattle_Params params;
	params.Manager = Manager;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (dummy != nullptr)
		*dummy = params.dummy;
}


// Function BP_BattleMediatorBase.BP_BattleMediatorBase_C.UserConstructionScript
// (Net, NetReliable, NetRequest, NetResponse, NetMulticast, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_BattleMediatorBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleMediatorBase.BP_BattleMediatorBase_C.UserConstructionScript");

	ABP_BattleMediatorBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
