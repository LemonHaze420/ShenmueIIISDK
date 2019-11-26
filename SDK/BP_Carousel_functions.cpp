
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

// Function BP_Carousel.BP_Carousel_C.isBusy
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_Carousel_C::isBusy(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Carousel.BP_Carousel_C.isBusy");

	UBP_Carousel_C_isBusy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_Carousel.BP_Carousel_C.GetDirectionFromString
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           Reverse                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ECarouselRotate>   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ECarouselRotate> UBP_Carousel_C::GetDirectionFromString(const struct FText& Text, bool Reverse)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Carousel.BP_Carousel_C.GetDirectionFromString");

	UBP_Carousel_C_GetDirectionFromString_Params params;
	params.Text = Text;
	params.Reverse = Reverse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Carousel.BP_Carousel_C.RotateExec
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_Carousel_C::RotateExec()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Carousel.BP_Carousel_C.RotateExec");

	UBP_Carousel_C_RotateExec_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Carousel.BP_Carousel_C.RequestRotate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ECarouselRotate>   Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Carousel_C::RequestRotate(TEnumAsByte<ECarouselRotate> Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Carousel.BP_Carousel_C.RequestRotate");

	UBP_Carousel_C_RequestRotate_Params params;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Carousel.BP_Carousel_C.CreateActorList
// (Protected, BlueprintCallable, BlueprintEvent)

void UBP_Carousel_C::CreateActorList()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Carousel.BP_Carousel_C.CreateActorList");

	UBP_Carousel_C_CreateActorList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Carousel.BP_Carousel_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_Carousel_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Carousel.BP_Carousel_C.ReceiveBeginPlay");

	UBP_Carousel_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Carousel.BP_Carousel_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Carousel_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Carousel.BP_Carousel_C.ReceiveTick");

	UBP_Carousel_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Carousel.BP_Carousel_C.ExecuteUbergraph_BP_Carousel
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Carousel_C::ExecuteUbergraph_BP_Carousel(int EntryPoint)
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
