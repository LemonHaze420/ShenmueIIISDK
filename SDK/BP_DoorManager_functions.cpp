
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

// Function BP_DoorManager.BP_DoorManager_C.LazyFindDoors
// (NetReliable, NetRequest, Event, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_DoorManager_C::LazyFindDoors()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DoorManager.BP_DoorManager_C.LazyFindDoors");

	ABP_DoorManager_C_LazyFindDoors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DoorManager.BP_DoorManager_C.ForbidPCDoorInteraction
// (NetReliable, Exec, Native, Event, NetResponse, Delegate, NetServer, NetClient, Const)

void ABP_DoorManager_C::ForbidPCDoorInteraction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DoorManager.BP_DoorManager_C.ForbidPCDoorInteraction");

	ABP_DoorManager_C_ForbidPCDoorInteraction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DoorManager.BP_DoorManager_C.GetDoors
// (Net, Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, Const)
// Parameters:
// TArray<class ABP_Gimmick_OpenDoor_Template_C*> Doors                          (Parm, OutParm, ZeroConstructor)

void ABP_DoorManager_C::STATIC_GetDoors(TArray<class ABP_Gimmick_OpenDoor_Template_C*>* Doors)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DoorManager.BP_DoorManager_C.GetDoors");

	ABP_DoorManager_C_GetDoors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Doors != nullptr)
		*Doors = params.Doors;
}


// Function BP_DoorManager.BP_DoorManager_C.ChangeDoorType
// (Net, NetReliable, Exec, Native, NetResponse, NetMulticast, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, Const)
// Parameters:
// struct FString                 DoorName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TEnumAsByte<EN_DoorType>       DoorType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DoorManager_C::ChangeDoorType(const struct FString& DoorName, TEnumAsByte<EN_DoorType> DoorType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DoorManager.BP_DoorManager_C.ChangeDoorType");

	ABP_DoorManager_C_ChangeDoorType_Params params;
	params.DoorName = DoorName;
	params.DoorType = DoorType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DoorManager.BP_DoorManager_C.SetDoors
// (NetRequest, Exec, Event, Private, Protected, Delegate, NetClient, Const)

void ABP_DoorManager_C::SetDoors()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DoorManager.BP_DoorManager_C.SetDoors");

	ABP_DoorManager_C_SetDoors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DoorManager.BP_DoorManager_C.GetDoorByName
// (Net, NetRequest, Native, Event, Private, Protected, Delegate, NetClient, Const)
// Parameters:
// struct FString                 DoorName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class ABP_Gimmick_OpenDoor_Template_C* DoorActor                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_DoorManager_C::GetDoorByName(const struct FString& DoorName, class ABP_Gimmick_OpenDoor_Template_C** DoorActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DoorManager.BP_DoorManager_C.GetDoorByName");

	ABP_DoorManager_C_GetDoorByName_Params params;
	params.DoorName = DoorName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DoorActor != nullptr)
		*DoorActor = params.DoorActor;
}


// Function BP_DoorManager.BP_DoorManager_C.UserConstructionScript
// (Net, NetReliable, NetRequest, Native, Event, Static, NetMulticast, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_DoorManager_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DoorManager.BP_DoorManager_C.UserConstructionScript");

	ABP_DoorManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
