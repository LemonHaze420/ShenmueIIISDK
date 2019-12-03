
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

// Function PlayerMotionDatabaseManager.PlayerMotionDatabaseManager_C.GetSelectedDatabase
// (NetReliable, NetRequest, Exec, Native, NetResponse, NetMulticast, MulticastDelegate, Public, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<EPC_EN_PlayerMotionDatabase> DatabaseType                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APlayerMotionDatabase_C* Database                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPlayerMotionDatabaseManager_C::GetSelectedDatabase(TEnumAsByte<EPC_EN_PlayerMotionDatabase> DatabaseType, class APlayerMotionDatabase_C** Database)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerMotionDatabaseManager.PlayerMotionDatabaseManager_C.GetSelectedDatabase");

	UPlayerMotionDatabaseManager_C_GetSelectedDatabase_Params params;
	params.DatabaseType = DatabaseType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Database != nullptr)
		*Database = params.Database;
}


// Function PlayerMotionDatabaseManager.PlayerMotionDatabaseManager_C.GetDatabase
// (NetReliable, NetRequest, Exec, Native, NetResponse, NetMulticast, MulticastDelegate, Public, Private, NetServer, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class APlayerMotionDatabase_C* Datagbase                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPlayerMotionDatabaseManager_C::GetDatabase(class APlayerMotionDatabase_C** Datagbase)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerMotionDatabaseManager.PlayerMotionDatabaseManager_C.GetDatabase");

	UPlayerMotionDatabaseManager_C_GetDatabase_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Datagbase != nullptr)
		*Datagbase = params.Datagbase;
}


// Function PlayerMotionDatabaseManager.PlayerMotionDatabaseManager_C.Initialize
// (Net, Native, NetResponse, Static, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)

void UPlayerMotionDatabaseManager_C::STATIC_Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerMotionDatabaseManager.PlayerMotionDatabaseManager_C.Initialize");

	UPlayerMotionDatabaseManager_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerMotionDatabaseManager.PlayerMotionDatabaseManager_C.SwitchDatabase
// (Exec, Native, Event, Static, NetMulticast, Public, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<EPC_EN_PlayerMotionDatabase> DatabaseType                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerMotionDatabaseManager_C::STATIC_SwitchDatabase(TEnumAsByte<EPC_EN_PlayerMotionDatabase> DatabaseType)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerMotionDatabaseManager.PlayerMotionDatabaseManager_C.SwitchDatabase");

	UPlayerMotionDatabaseManager_C_SwitchDatabase_Params params;
	params.DatabaseType = DatabaseType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
