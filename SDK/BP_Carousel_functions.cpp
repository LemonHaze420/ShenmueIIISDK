
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

// Function BP_Carousel.BP_Carousel_C.IsBusy
// (Net, Exec, Native, Static, NetMulticast, MulticastDelegate, Public, Protected, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_Carousel_C::STATIC_IsBusy(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Carousel.BP_Carousel_C.IsBusy");

	UBP_Carousel_C_IsBusy_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_Carousel.BP_Carousel_C.GetDirectionFromString
// (Net, NetReliable, Exec, Native, Event, Static, MulticastDelegate, Public, Protected, Delegate, NetServer, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           Reverse                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ECarouselRotate>   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ECarouselRotate> UBP_Carousel_C::STATIC_GetDirectionFromString(const struct FText& Text, bool Reverse)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Carousel.BP_Carousel_C.GetDirectionFromString");

	UBP_Carousel_C_GetDirectionFromString_Params params;
	params.Text = Text;
	params.Reverse = Reverse;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Carousel.BP_Carousel_C.RotateExec
// (Net, Exec, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Protected, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)

void UBP_Carousel_C::RotateExec()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Carousel.BP_Carousel_C.RotateExec");

	UBP_Carousel_C_RotateExec_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Carousel.BP_Carousel_C.RequestRotate
// (Exec, Native, NetResponse, NetMulticast, MulticastDelegate, Public, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<ECarouselRotate>   Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Carousel_C::RequestRotate(TEnumAsByte<ECarouselRotate> Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Carousel.BP_Carousel_C.RequestRotate");

	UBP_Carousel_C_RequestRotate_Params params;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Carousel.BP_Carousel_C.CreateActorList
// (NetReliable, Event, Static, MulticastDelegate, Private, Protected, Delegate, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)

void UBP_Carousel_C::STATIC_CreateActorList()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Carousel.BP_Carousel_C.CreateActorList");

	UBP_Carousel_C_CreateActorList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Carousel.BP_Carousel_C.ReceiveBeginPlay
// (Net, Exec, Native, Event, NetResponse, Static, MulticastDelegate, Public, NetServer, BlueprintEvent, BlueprintPure)

void UBP_Carousel_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Carousel.BP_Carousel_C.ReceiveBeginPlay");

	UBP_Carousel_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Carousel.BP_Carousel_C.ReceiveTick
// (NetReliable, NetRequest, Native, Protected, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Carousel_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Carousel.BP_Carousel_C.ReceiveTick");

	UBP_Carousel_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Carousel.BP_Carousel_C.ExecuteUbergraph_BP_Carousel
// (NetResponse, Static, MulticastDelegate, Public, Protected, Delegate, NetServer, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Carousel_C::STATIC_ExecuteUbergraph_BP_Carousel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Carousel.BP_Carousel_C.ExecuteUbergraph_BP_Carousel");

	UBP_Carousel_C_ExecuteUbergraph_BP_Carousel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
