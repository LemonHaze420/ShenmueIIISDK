
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

// Function BP_PlayerStairMotionDataAsset.BP_PlayerStairMotionDataAsset_C.GetLoopStartPoint
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*            Montage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EM_LeftOrRight>    Foot                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBP_PlayerStairMotionDataAsset_C::GetLoopStartPoint(class UAnimMontage* Montage, TEnumAsByte<EM_LeftOrRight> Foot)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerStairMotionDataAsset.BP_PlayerStairMotionDataAsset_C.GetLoopStartPoint");

	UBP_PlayerStairMotionDataAsset_C_GetLoopStartPoint_Params params;
	params.Montage = Montage;
	params.Foot = Foot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PlayerStairMotionDataAsset.BP_PlayerStairMotionDataAsset_C.GetStopMotion
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           DirUp                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Right                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAnimMontage* UBP_PlayerStairMotionDataAsset_C::GetStopMotion(bool DirUp, bool Right)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerStairMotionDataAsset.BP_PlayerStairMotionDataAsset_C.GetStopMotion");

	UBP_PlayerStairMotionDataAsset_C_GetStopMotion_Params params;
	params.DirUp = DirUp;
	params.Right = Right;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PlayerStairMotionDataAsset.BP_PlayerStairMotionDataAsset_C.GetStartMotion
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           DirUp                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Right                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAnimMontage* UBP_PlayerStairMotionDataAsset_C::GetStartMotion(bool DirUp, bool Right)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerStairMotionDataAsset.BP_PlayerStairMotionDataAsset_C.GetStartMotion");

	UBP_PlayerStairMotionDataAsset_C_GetStartMotion_Params params;
	params.DirUp = DirUp;
	params.Right = Right;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PlayerStairMotionDataAsset.BP_PlayerStairMotionDataAsset_C.GetLoopMotion
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           DirUp                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Run                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage*            Montage                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_PlayerStairMotionDataAsset_C::GetLoopMotion(bool DirUp, bool Run, class UAnimMontage** Montage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerStairMotionDataAsset.BP_PlayerStairMotionDataAsset_C.GetLoopMotion");

	UBP_PlayerStairMotionDataAsset_C_GetLoopMotion_Params params;
	params.DirUp = DirUp;
	params.Run = Run;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Montage != nullptr)
		*Montage = params.Montage;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
