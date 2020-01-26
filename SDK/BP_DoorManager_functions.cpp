
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

// Function BP_DoorManager.BP_DoorManager_C.LazyFindDoors
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_DoorManager_C::LazyFindDoors()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DoorManager.BP_DoorManager_C.LazyFindDoors");

	ABP_DoorManager_C_LazyFindDoors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DoorManager.BP_DoorManager_C.ForbidPCDoorInteraction
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_DoorManager_C::ForbidPCDoorInteraction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DoorManager.BP_DoorManager_C.ForbidPCDoorInteraction");

	ABP_DoorManager_C_ForbidPCDoorInteraction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DoorManager.BP_DoorManager_C.GetDoors
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class ABP_Gimmick_OpenDoor_Template_C*> Doors                          (Parm, OutParm, ZeroConstructor)

void ABP_DoorManager_C::GetDoors(TArray<class ABP_Gimmick_OpenDoor_Template_C*>* Doors)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DoorManager.BP_DoorManager_C.GetDoors");

	ABP_DoorManager_C_GetDoors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Doors != nullptr)
		*Doors = params.Doors;
}


// Function BP_DoorManager.BP_DoorManager_C.ChangeDoorType
// (Public, BlueprintCallable, BlueprintEvent)
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

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DoorManager.BP_DoorManager_C.SetDoors
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_DoorManager_C::SetDoors()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DoorManager.BP_DoorManager_C.SetDoors");

	ABP_DoorManager_C_SetDoors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DoorManager.BP_DoorManager_C.GetDoorByName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 DoorName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class ABP_Gimmick_OpenDoor_Template_C* DoorActor                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_DoorManager_C::GetDoorByName(const struct FString& DoorName, class ABP_Gimmick_OpenDoor_Template_C** DoorActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DoorManager.BP_DoorManager_C.GetDoorByName");

	ABP_DoorManager_C_GetDoorByName_Params params;
	params.DoorName = DoorName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DoorActor != nullptr)
		*DoorActor = params.DoorActor;
}


// Function BP_DoorManager.BP_DoorManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_DoorManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DoorManager.BP_DoorManager_C.UserConstructionScript");

	ABP_DoorManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
