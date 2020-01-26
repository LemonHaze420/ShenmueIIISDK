
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

// Function BP_MiniGameDLCBigWheel.BP_MiniGameDLCBigWheel_C.IsSpecialEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Event                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameDLCBigWheel_C::IsSpecialEvent(bool* Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameDLCBigWheel.BP_MiniGameDLCBigWheel_C.IsSpecialEvent");

	ABP_MiniGameDLCBigWheel_C_IsSpecialEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Event != nullptr)
		*Event = params.Event;
}


// Function BP_MiniGameDLCBigWheel.BP_MiniGameDLCBigWheel_C.UpdateEventFlag
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGameDLCBigWheel_C::UpdateEventFlag()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameDLCBigWheel.BP_MiniGameDLCBigWheel_C.UpdateEventFlag");

	ABP_MiniGameDLCBigWheel_C_UpdateEventFlag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameDLCBigWheel.BP_MiniGameDLCBigWheel_C.IsGetAllItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UDataTable*              Table                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_MiniGameDLCBigWheel_C::IsGetAllItem(class UDataTable* Table)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameDLCBigWheel.BP_MiniGameDLCBigWheel_C.IsGetAllItem");

	ABP_MiniGameDLCBigWheel_C_IsGetAllItem_Params params;
	params.Table = Table;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MiniGameDLCBigWheel.BP_MiniGameDLCBigWheel_C.IsFigureEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_MiniGameDLCBigWheel_C::IsFigureEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameDLCBigWheel.BP_MiniGameDLCBigWheel_C.IsFigureEvent");

	ABP_MiniGameDLCBigWheel_C_IsFigureEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MiniGameDLCBigWheel.BP_MiniGameDLCBigWheel_C.IsAfterEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_MiniGameDLCBigWheel_C::IsAfterEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameDLCBigWheel.BP_MiniGameDLCBigWheel_C.IsAfterEvent");

	ABP_MiniGameDLCBigWheel_C_IsAfterEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MiniGameDLCBigWheel.BP_MiniGameDLCBigWheel_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGameDLCBigWheel_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameDLCBigWheel.BP_MiniGameDLCBigWheel_C.UserConstructionScript");

	ABP_MiniGameDLCBigWheel_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameDLCBigWheel.BP_MiniGameDLCBigWheel_C.UpdateSpecialItemData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDataTable*              DataTable                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Count                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameDLCBigWheel_C::UpdateSpecialItemData(class UDataTable* DataTable, int Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameDLCBigWheel.BP_MiniGameDLCBigWheel_C.UpdateSpecialItemData");

	ABP_MiniGameDLCBigWheel_C_UpdateSpecialItemData_Params params;
	params.DataTable = DataTable;
	params.Count = Count;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameDLCBigWheel.BP_MiniGameDLCBigWheel_C.OnFlagChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ArrayIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SetFlags                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameDLCBigWheel_C::OnFlagChanged(int ArrayIndex, int SetFlags)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameDLCBigWheel.BP_MiniGameDLCBigWheel_C.OnFlagChanged");

	ABP_MiniGameDLCBigWheel_C_OnFlagChanged_Params params;
	params.ArrayIndex = ArrayIndex;
	params.SetFlags = SetFlags;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameDLCBigWheel.BP_MiniGameDLCBigWheel_C.AddJackpotCount
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGameDLCBigWheel_C::AddJackpotCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameDLCBigWheel.BP_MiniGameDLCBigWheel_C.AddJackpotCount");

	ABP_MiniGameDLCBigWheel_C_AddJackpotCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameDLCBigWheel.BP_MiniGameDLCBigWheel_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MiniGameDLCBigWheel_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameDLCBigWheel.BP_MiniGameDLCBigWheel_C.ReceiveBeginPlay");

	ABP_MiniGameDLCBigWheel_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameDLCBigWheel.BP_MiniGameDLCBigWheel_C.UpdateTicketNum
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGameDLCBigWheel_C::UpdateTicketNum()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameDLCBigWheel.BP_MiniGameDLCBigWheel_C.UpdateTicketNum");

	ABP_MiniGameDLCBigWheel_C_UpdateTicketNum_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameDLCBigWheel.BP_MiniGameDLCBigWheel_C.EndMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGameDLCBigWheel_C::EndMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameDLCBigWheel.BP_MiniGameDLCBigWheel_C.EndMiniGame");

	ABP_MiniGameDLCBigWheel_C_EndMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameDLCBigWheel.BP_MiniGameDLCBigWheel_C.ExecuteUbergraph_BP_MiniGameDLCBigWheel
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameDLCBigWheel_C::ExecuteUbergraph_BP_MiniGameDLCBigWheel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameDLCBigWheel.BP_MiniGameDLCBigWheel_C.ExecuteUbergraph_BP_MiniGameDLCBigWheel");

	ABP_MiniGameDLCBigWheel_C_ExecuteUbergraph_BP_MiniGameDLCBigWheel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
