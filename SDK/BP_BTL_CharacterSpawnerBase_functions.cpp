
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

// Function BP_BTL_CharacterSpawnerBase.BP_BTL_CharacterSpawnerBase_C.isPlayer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_BTL_CharacterSpawnerBase_C::isPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_CharacterSpawnerBase.BP_BTL_CharacterSpawnerBase_C.isPlayer");

	ABP_BTL_CharacterSpawnerBase_C_isPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BTL_CharacterSpawnerBase.BP_BTL_CharacterSpawnerBase_C.IsEnabled
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_BTL_CharacterSpawnerBase_C::IsEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_CharacterSpawnerBase.BP_BTL_CharacterSpawnerBase_C.IsEnabled");

	ABP_BTL_CharacterSpawnerBase_C_IsEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BTL_CharacterSpawnerBase.BP_BTL_CharacterSpawnerBase_C.GetSpawnInfo
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                 Outer                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBTL_Launch_NPC_C*       LaunchInfo                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BTL_CharacterSpawnerBase_C::GetSpawnInfo(class UObject* Outer, class UBTL_Launch_NPC_C** LaunchInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_CharacterSpawnerBase.BP_BTL_CharacterSpawnerBase_C.GetSpawnInfo");

	ABP_BTL_CharacterSpawnerBase_C_GetSpawnInfo_Params params;
	params.Outer = Outer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LaunchInfo != nullptr)
		*LaunchInfo = params.LaunchInfo;
}


// Function BP_BTL_CharacterSpawnerBase.BP_BTL_CharacterSpawnerBase_C.GetID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FName                   Identifier                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BTL_CharacterSpawnerBase_C::GetID(struct FName* Identifier)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_CharacterSpawnerBase.BP_BTL_CharacterSpawnerBase_C.GetID");

	ABP_BTL_CharacterSpawnerBase_C_GetID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Identifier != nullptr)
		*Identifier = params.Identifier;
}


// Function BP_BTL_CharacterSpawnerBase.BP_BTL_CharacterSpawnerBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BTL_CharacterSpawnerBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_CharacterSpawnerBase.BP_BTL_CharacterSpawnerBase_C.UserConstructionScript");

	ABP_BTL_CharacterSpawnerBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
