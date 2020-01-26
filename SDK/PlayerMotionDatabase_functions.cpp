
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

// Function PlayerMotionDatabase.PlayerMotionDatabase_C.IndexMontageByInt
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UAnimMontage*>    List                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            Int                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage*            Output                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APlayerMotionDatabase_C::IndexMontageByInt(TArray<class UAnimMontage*> List, int Int, class UAnimMontage** Output)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerMotionDatabase.PlayerMotionDatabase_C.IndexMontageByInt");

	APlayerMotionDatabase_C_IndexMontageByInt_Params params;
	params.List = List;
	params.Int = Int;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;
}


// Function PlayerMotionDatabase.PlayerMotionDatabase_C.SearchMontage_Event
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EN_PC_EventMontage> Event                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage*            Output                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APlayerMotionDatabase_C::SearchMontage_Event(TEnumAsByte<EN_PC_EventMontage> Event, class UAnimMontage** Output)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerMotionDatabase.PlayerMotionDatabase_C.SearchMontage_Event");

	APlayerMotionDatabase_C_SearchMontage_Event_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;
}


// Function PlayerMotionDatabase.PlayerMotionDatabase_C.SearchMontage_KnockDoor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EN_DoorOpenType>   Enum                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage*            Output                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APlayerMotionDatabase_C::SearchMontage_KnockDoor(TEnumAsByte<EN_DoorOpenType> Enum, class UAnimMontage** Output)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerMotionDatabase.PlayerMotionDatabase_C.SearchMontage_KnockDoor");

	APlayerMotionDatabase_C_SearchMontage_KnockDoor_Params params;
	params.Enum = Enum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;
}


// Function PlayerMotionDatabase.PlayerMotionDatabase_C.SearchMontage_OpenDoor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EN_DoorOpenType>   Enum                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           RightSide                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage*            Output                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APlayerMotionDatabase_C::SearchMontage_OpenDoor(TEnumAsByte<EN_DoorOpenType> Enum, bool RightSide, class UAnimMontage** Output)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerMotionDatabase.PlayerMotionDatabase_C.SearchMontage_OpenDoor");

	APlayerMotionDatabase_C_SearchMontage_OpenDoor_Params params;
	params.Enum = Enum;
	params.RightSide = RightSide;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;
}


// Function PlayerMotionDatabase.PlayerMotionDatabase_C.SearchMontage_TalkShow
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EN_SHOW_ID>        Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Crouch                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage*            Output                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APlayerMotionDatabase_C::SearchMontage_TalkShow(TEnumAsByte<EN_SHOW_ID> Item, bool Crouch, class UAnimMontage** Output)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerMotionDatabase.PlayerMotionDatabase_C.SearchMontage_TalkShow");

	APlayerMotionDatabase_C_SearchMontage_TalkShow_Params params;
	params.Item = Item;
	params.Crouch = Crouch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;
}


// Function PlayerMotionDatabase.PlayerMotionDatabase_C.SearchMontage_WalkEnd
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Right                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage*            Output                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APlayerMotionDatabase_C::SearchMontage_WalkEnd(bool Right, class UAnimMontage** Output)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerMotionDatabase.PlayerMotionDatabase_C.SearchMontage_WalkEnd");

	APlayerMotionDatabase_C_SearchMontage_WalkEnd_Params params;
	params.Right = Right;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;
}


// Function PlayerMotionDatabase.PlayerMotionDatabase_C.IndexMontageByEnum
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UAnimMontage*>    List                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// unsigned char                  Enum                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage*            Output                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APlayerMotionDatabase_C::IndexMontageByEnum(TArray<class UAnimMontage*> List, unsigned char Enum, class UAnimMontage** Output)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerMotionDatabase.PlayerMotionDatabase_C.IndexMontageByEnum");

	APlayerMotionDatabase_C_IndexMontageByEnum_Params params;
	params.List = List;
	params.Enum = Enum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;
}


// Function PlayerMotionDatabase.PlayerMotionDatabase_C.SearchMontage_Turn
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EN_PC_TurnDirection10> TurnDir10                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage*            Output                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APlayerMotionDatabase_C::SearchMontage_Turn(TEnumAsByte<EN_PC_TurnDirection10> TurnDir10, class UAnimMontage** Output)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerMotionDatabase.PlayerMotionDatabase_C.SearchMontage_Turn");

	APlayerMotionDatabase_C_SearchMontage_Turn_Params params;
	params.TurnDir10 = TurnDir10;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;
}


// Function PlayerMotionDatabase.PlayerMotionDatabase_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void APlayerMotionDatabase_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerMotionDatabase.PlayerMotionDatabase_C.Initialize");

	APlayerMotionDatabase_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerMotionDatabase.PlayerMotionDatabase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APlayerMotionDatabase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerMotionDatabase.PlayerMotionDatabase_C.UserConstructionScript");

	APlayerMotionDatabase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerMotionDatabase.PlayerMotionDatabase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APlayerMotionDatabase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerMotionDatabase.PlayerMotionDatabase_C.ReceiveBeginPlay");

	APlayerMotionDatabase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerMotionDatabase.PlayerMotionDatabase_C.ExecuteUbergraph_PlayerMotionDatabase
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerMotionDatabase_C::ExecuteUbergraph_PlayerMotionDatabase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerMotionDatabase.PlayerMotionDatabase_C.ExecuteUbergraph_PlayerMotionDatabase");

	APlayerMotionDatabase_C_ExecuteUbergraph_PlayerMotionDatabase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
