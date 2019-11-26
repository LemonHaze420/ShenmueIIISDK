
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
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AnimTime                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AddressBook_C::StartSelectAnim(float* AnimTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AddressBook.BP_AddressBook_C.StartSelectAnim");

	ABP_AddressBook_C_StartSelectAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimTime != nullptr)
		*AnimTime = params.AnimTime;
}


// Function BP_AddressBook.BP_AddressBook_C.HiddenCursor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Hidden                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AddressBook_C::HiddenCursor(bool Hidden)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AddressBook.BP_AddressBook_C.HiddenCursor");

	ABP_AddressBook_C_HiddenCursor_Params params;
	params.Hidden = Hidden;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AddressBook.BP_AddressBook_C.PushButton
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
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
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsNext                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AddressBook_C::AddressBook_NextPage(bool IsNext, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AddressBook.BP_AddressBook_C.AddressBook_NextPage");

	ABP_AddressBook_C_AddressBook_NextPage_Params params;
	params.IsNext = IsNext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function BP_AddressBook.BP_AddressBook_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_AddressBook_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AddressBook.BP_AddressBook_C.UserConstructionScript");

	ABP_AddressBook_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AddressBook.BP_AddressBook_C.򠪦􆖐񍳔_
// (BlueprintEvent)

void ABP_AddressBook_C::UnknownFunc01()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AddressBook.BP_AddressBook_C.򠪦􆖐񍳔_");

	ABP_AddressBook_C_UnknownFunc01__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AddressBook.BP_AddressBook_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_AddressBook_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AddressBook.BP_AddressBook_C.ReceiveBeginPlay");

	ABP_AddressBook_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AddressBook.BP_AddressBook_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AddressBook_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AddressBook.BP_AddressBook_C.ReceiveTick");

	ABP_AddressBook_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AddressBook.BP_AddressBook_C.Destroy
// (BlueprintCallable, BlueprintEvent)

void ABP_AddressBook_C::Destroy()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AddressBook.BP_AddressBook_C.Destroy");

	ABP_AddressBook_C_Destroy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AddressBook.BP_AddressBook_C.SetCaptureMempPAdPart
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AddressBook_C::SetCaptureMempPAdPart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AddressBook.BP_AddressBook_C.SetCaptureMempPAdPart");

	ABP_AddressBook_C_SetCaptureMempPAdPart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AddressBook.BP_AddressBook_C.OpenBook
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AddressBook_C::OpenBook()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AddressBook.BP_AddressBook_C.OpenBook");

	ABP_AddressBook_C_OpenBook_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AddressBook.BP_AddressBook_C.PushNewPage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsR2                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AddressBook_C::PushNewPage(bool IsR2)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AddressBook.BP_AddressBook_C.PushNewPage");

	ABP_AddressBook_C_PushNewPage_Params params;
	params.IsR2 = IsR2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AddressBook.BP_AddressBook_C.NextPage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bRight                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsLast                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AddressBook_C::NextPage(bool bRight, bool IsLast)
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
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bRight                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AddressBook_C::NextPageContinueTurning(bool bRight)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AddressBook.BP_AddressBook_C.NextPageContinueTurning");

	ABP_AddressBook_C_NextPageContinueTurning_Params params;
	params.bRight = bRight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AddressBook.BP_AddressBook_C.ExecuteUbergraph_BP_AddressBook
// (HasDefaults)
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
