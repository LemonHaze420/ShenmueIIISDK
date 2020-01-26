
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

// Function SubABP_CutsceneCharacter.SubABP_CutsceneCharacter_C.IsUseFluctuationEmotion
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USubABP_CutsceneCharacter_C::IsUseFluctuationEmotion()
{
	static auto fn = UObject::FindObject<UFunction>("Function SubABP_CutsceneCharacter.SubABP_CutsceneCharacter_C.IsUseFluctuationEmotion");

	USubABP_CutsceneCharacter_C_IsUseFluctuationEmotion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SubABP_CutsceneCharacter.SubABP_CutsceneCharacter_C.InitFaceMotages
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Succsess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USubABP_CutsceneCharacter_C::InitFaceMotages(bool* Succsess)
{
	static auto fn = UObject::FindObject<UFunction>("Function SubABP_CutsceneCharacter.SubABP_CutsceneCharacter_C.InitFaceMotages");

	USubABP_CutsceneCharacter_C_InitFaceMotages_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Succsess != nullptr)
		*Succsess = params.Succsess;
}


// Function SubABP_CutsceneCharacter.SubABP_CutsceneCharacter_C.CalcLookAt
// (Event, Public, BlueprintCallable, BlueprintEvent)

void USubABP_CutsceneCharacter_C::CalcLookAt()
{
	static auto fn = UObject::FindObject<UFunction>("Function SubABP_CutsceneCharacter.SubABP_CutsceneCharacter_C.CalcLookAt");

	USubABP_CutsceneCharacter_C_CalcLookAt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubABP_CutsceneCharacter.SubABP_CutsceneCharacter_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USubABP_CutsceneCharacter_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function SubABP_CutsceneCharacter.SubABP_CutsceneCharacter_C.BlueprintUpdateAnimation");

	USubABP_CutsceneCharacter_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubABP_CutsceneCharacter.SubABP_CutsceneCharacter_C.CalcEmotion
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void USubABP_CutsceneCharacter_C::CalcEmotion()
{
	static auto fn = UObject::FindObject<UFunction>("Function SubABP_CutsceneCharacter.SubABP_CutsceneCharacter_C.CalcEmotion");

	USubABP_CutsceneCharacter_C_CalcEmotion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubABP_CutsceneCharacter.SubABP_CutsceneCharacter_C.CalcClipper
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void USubABP_CutsceneCharacter_C::CalcClipper()
{
	static auto fn = UObject::FindObject<UFunction>("Function SubABP_CutsceneCharacter.SubABP_CutsceneCharacter_C.CalcClipper");

	USubABP_CutsceneCharacter_C_CalcClipper_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubABP_CutsceneCharacter.SubABP_CutsceneCharacter_C.CalcEyeBlink
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void USubABP_CutsceneCharacter_C::CalcEyeBlink()
{
	static auto fn = UObject::FindObject<UFunction>("Function SubABP_CutsceneCharacter.SubABP_CutsceneCharacter_C.CalcEyeBlink");

	USubABP_CutsceneCharacter_C_CalcEyeBlink_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubABP_CutsceneCharacter.SubABP_CutsceneCharacter_C.ExecuteUbergraph_SubABP_CutsceneCharacter
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USubABP_CutsceneCharacter_C::ExecuteUbergraph_SubABP_CutsceneCharacter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SubABP_CutsceneCharacter.SubABP_CutsceneCharacter_C.ExecuteUbergraph_SubABP_CutsceneCharacter");

	USubABP_CutsceneCharacter_C_ExecuteUbergraph_SubABP_CutsceneCharacter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
