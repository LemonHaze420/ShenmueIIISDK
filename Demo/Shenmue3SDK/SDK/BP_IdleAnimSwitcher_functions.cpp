
#include "../SDK.h"

// Name: S3Demo, Version: 0.90.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BP_IdleAnimSwitcher.BP_IdleAnimSwitcher_C.EndIdle
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            IdleVariation                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UBP_IdleAnimSwitcher_C::EndIdle(int* IdleVariation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IdleAnimSwitcher.BP_IdleAnimSwitcher_C.EndIdle");

	UBP_IdleAnimSwitcher_C_EndIdle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IdleVariation != nullptr)
		*IdleVariation = params.IdleVariation;
}


// Function BP_IdleAnimSwitcher.BP_IdleAnimSwitcher_C.UpdateIdle
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            IdleVariation                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_IdleAnimSwitcher_C::UpdateIdle(float DeltaSeconds, int* IdleVariation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IdleAnimSwitcher.BP_IdleAnimSwitcher_C.UpdateIdle");

	UBP_IdleAnimSwitcher_C_UpdateIdle_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IdleVariation != nullptr)
		*IdleVariation = params.IdleVariation;
}


// Function BP_IdleAnimSwitcher.BP_IdleAnimSwitcher_C.StartIdle
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            IdleVariation                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UBP_IdleAnimSwitcher_C::StartIdle(int* IdleVariation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IdleAnimSwitcher.BP_IdleAnimSwitcher_C.StartIdle");

	UBP_IdleAnimSwitcher_C_StartIdle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IdleVariation != nullptr)
		*IdleVariation = params.IdleVariation;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
