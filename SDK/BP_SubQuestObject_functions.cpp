
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

// Function BP_SubQuestObject.BP_SubQuestObject_C.ChangeDispObject
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           DispObject                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SubQuestObject_C::ChangeDispObject(bool DispObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubQuestObject.BP_SubQuestObject_C.ChangeDispObject");

	ABP_SubQuestObject_C_ChangeDispObject_Params params;
	params.DispObject = DispObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SubQuestObject.BP_SubQuestObject_C.CheckSubQuestFlag
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           DispEnable                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_SubQuestObject_C::CheckSubQuestFlag(bool* DispEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubQuestObject.BP_SubQuestObject_C.CheckSubQuestFlag");

	ABP_SubQuestObject_C_CheckSubQuestFlag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DispEnable != nullptr)
		*DispEnable = params.DispEnable;
}


// Function BP_SubQuestObject.BP_SubQuestObject_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_SubQuestObject_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubQuestObject.BP_SubQuestObject_C.UserConstructionScript");

	ABP_SubQuestObject_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SubQuestObject.BP_SubQuestObject_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SubQuestObject_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubQuestObject.BP_SubQuestObject_C.ReceiveTick");

	ABP_SubQuestObject_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SubQuestObject.BP_SubQuestObject_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SubQuestObject_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubQuestObject.BP_SubQuestObject_C.ReceiveEndPlay");

	ABP_SubQuestObject_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SubQuestObject.BP_SubQuestObject_C.Event_FlagChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ArrayIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SetFlags                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SubQuestObject_C::Event_FlagChange(int ArrayIndex, int SetFlags)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubQuestObject.BP_SubQuestObject_C.Event_FlagChange");

	ABP_SubQuestObject_C_Event_FlagChange_Params params;
	params.ArrayIndex = ArrayIndex;
	params.SetFlags = SetFlags;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SubQuestObject.BP_SubQuestObject_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SubQuestObject_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubQuestObject.BP_SubQuestObject_C.ReceiveBeginPlay");

	ABP_SubQuestObject_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SubQuestObject.BP_SubQuestObject_C.ExecuteUbergraph_BP_SubQuestObject
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SubQuestObject_C::ExecuteUbergraph_BP_SubQuestObject(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubQuestObject.BP_SubQuestObject_C.ExecuteUbergraph_BP_SubQuestObject");

	ABP_SubQuestObject_C_ExecuteUbergraph_BP_SubQuestObject_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
