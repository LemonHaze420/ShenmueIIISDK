
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

// Function BP_AddressBook.BP_AddressBook_C.StartSelectAnim
// (Net, NetReliable, Native, NetResponse, Delegate, HasOutParms, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          AnimTime                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AddressBook_C::StartSelectAnim(float* AnimTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AddressBook.BP_AddressBook_C.StartSelectAnim");

	ABP_AddressBook_C_StartSelectAnim_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimTime != nullptr)
		*AnimTime = params.AnimTime;
}


// Function BP_AddressBook.BP_AddressBook_C.HiddenCursor
// (Exec, Event, NetResponse, Static, NetMulticast, Protected, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           Hidden                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AddressBook_C::STATIC_HiddenCursor(bool Hidden)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AddressBook.BP_AddressBook_C.HiddenCursor");

	ABP_AddressBook_C_HiddenCursor_Params params;
	params.Hidden = Hidden;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AddressBook.BP_AddressBook_C.PushButton
// (Exec, Event, NetResponse, NetMulticast, Private, Delegate, NetClient, Const)
// Parameters:
// struct FVector2D               CursorPosition                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_AddressBook_C::PushButton(const struct FVector2D& CursorPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AddressBook.BP_AddressBook_C.PushButton");

	ABP_AddressBook_C_PushButton_Params params;
	params.CursorPosition = CursorPosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AddressBook.BP_AddressBook_C.AddressBook_NextPage
// (Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           IsNext                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AddressBook_C::STATIC_AddressBook_NextPage(bool IsNext, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AddressBook.BP_AddressBook_C.AddressBook_NextPage");

	ABP_AddressBook_C_AddressBook_NextPage_Params params;
	params.IsNext = IsNext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function BP_AddressBook.BP_AddressBook_C.UserConstructionScript
// (Net, NetReliable, NetRequest, Native, Event, NetResponse, Static, NetMulticast, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_AddressBook_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AddressBook.BP_AddressBook_C.UserConstructionScript");

	ABP_AddressBook_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AddressBook.BP_AddressBook_C.򠪦􆖐񍳔_
// (NetReliable, NetRequest, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, Const)

void ABP_AddressBook_C::UnknownFunc01()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AddressBook.BP_AddressBook_C.򠪦􆖐񍳔_");

	ABP_AddressBook_C__UnknownFunc01__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AddressBook.BP_AddressBook_C.ReceiveBeginPlay
// (NetReliable, NetRequest, Static, NetMulticast, Public, Delegate, NetServer)

void ABP_AddressBook_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AddressBook.BP_AddressBook_C.ReceiveBeginPlay");

	ABP_AddressBook_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AddressBook.BP_AddressBook_C.ReceiveTick
// (NetReliable, NetRequest, Native, Event, NetResponse, Static, NetMulticast, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AddressBook_C::STATIC_ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AddressBook.BP_AddressBook_C.ReceiveTick");

	ABP_AddressBook_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AddressBook.BP_AddressBook_C.Destroy
// (Net, NetReliable, Static, NetMulticast, Public, Delegate, NetServer)

void ABP_AddressBook_C::STATIC_Destroy()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AddressBook.BP_AddressBook_C.Destroy");

	ABP_AddressBook_C_Destroy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AddressBook.BP_AddressBook_C.SetCaptureMempPAdPart
// (Event, NetResponse, Static, NetMulticast, Public, Private, Protected, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_AddressBook_C::STATIC_SetCaptureMempPAdPart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AddressBook.BP_AddressBook_C.SetCaptureMempPAdPart");

	ABP_AddressBook_C_SetCaptureMempPAdPart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AddressBook.BP_AddressBook_C.OpenBook
// (NetRequest, Native, Public, Private, Delegate, NetClient, BlueprintCallable, BlueprintPure, Const)

void ABP_AddressBook_C::OpenBook()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AddressBook.BP_AddressBook_C.OpenBook");

	ABP_AddressBook_C_OpenBook_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AddressBook.BP_AddressBook_C.PushNewPage
// (Exec, Native, Event, NetResponse, Static, NetMulticast, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsR2                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AddressBook_C::STATIC_PushNewPage(bool IsR2)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AddressBook.BP_AddressBook_C.PushNewPage");

	ABP_AddressBook_C_PushNewPage_Params params;
	params.IsR2 = IsR2;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AddressBook.BP_AddressBook_C.NextPage
// (NetReliable, NetRequest, Exec, Event, NetResponse, Static, NetMulticast, Public, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           bRight                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsLast                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AddressBook_C::STATIC_NextPage(bool bRight, bool IsLast)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AddressBook.BP_AddressBook_C.NextPage");

	ABP_AddressBook_C_NextPage_Params params;
	params.bRight = bRight;
	params.IsLast = IsLast;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AddressBook.BP_AddressBook_C.NextPageContinueTurning
// (Net, Exec, Native, Event, NetResponse, Static, NetMulticast, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bRight                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AddressBook_C::STATIC_NextPageContinueTurning(bool bRight)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AddressBook.BP_AddressBook_C.NextPageContinueTurning");

	ABP_AddressBook_C_NextPageContinueTurning_Params params;
	params.bRight = bRight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AddressBook.BP_AddressBook_C.ExecuteUbergraph_BP_AddressBook
// (NetReliable, Private, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AddressBook_C::ExecuteUbergraph_BP_AddressBook(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AddressBook.BP_AddressBook_C.ExecuteUbergraph_BP_AddressBook");

	ABP_AddressBook_C_ExecuteUbergraph_BP_AddressBook_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
