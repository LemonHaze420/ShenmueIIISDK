
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

// Function BPC_MiniGame_KungFuProgress.BPC_MiniGame_KungFuProgress_C.MakeExperienceMultiplier
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<E_MiniGame_KungFuType> Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Ramp                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBPC_MiniGame_KungFuProgress_C::MakeExperienceMultiplier(TEnumAsByte<E_MiniGame_KungFuType> Type, float Ramp)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGame_KungFuProgress.BPC_MiniGame_KungFuProgress_C.MakeExperienceMultiplier");

	UBPC_MiniGame_KungFuProgress_C_MakeExperienceMultiplier_Params params;
	params.Type = Type;
	params.Ramp = Ramp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPC_MiniGame_KungFuProgress.BPC_MiniGame_KungFuProgress_C.SetKungFuProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_MiniGame_KungFuType> Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            flag                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_MiniGame_KungFuProgress_C::SetKungFuProgress(TEnumAsByte<E_MiniGame_KungFuType> Type, int flag)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGame_KungFuProgress.BPC_MiniGame_KungFuProgress_C.SetKungFuProgress");

	UBPC_MiniGame_KungFuProgress_C_SetKungFuProgress_Params params;
	params.Type = Type;
	params.flag = flag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGame_KungFuProgress.BPC_MiniGame_KungFuProgress_C.GetKungFuProgress
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<E_MiniGame_KungFuType> Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ProgressNum                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_MiniGame_KungFuProgress_C::GetKungFuProgress(TEnumAsByte<E_MiniGame_KungFuType> Type, int* ProgressNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGame_KungFuProgress.BPC_MiniGame_KungFuProgress_C.GetKungFuProgress");

	UBPC_MiniGame_KungFuProgress_C_GetKungFuProgress_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ProgressNum != nullptr)
		*ProgressNum = params.ProgressNum;
}


// Function BPC_MiniGame_KungFuProgress.BPC_MiniGame_KungFuProgress_C.AddKungFuProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_MiniGame_KungFuType> Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ScoreRatio                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_MiniGame_KungFuProgress_C::AddKungFuProgress(TEnumAsByte<E_MiniGame_KungFuType> Type, float ScoreRatio)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGame_KungFuProgress.BPC_MiniGame_KungFuProgress_C.AddKungFuProgress");

	UBPC_MiniGame_KungFuProgress_C_AddKungFuProgress_Params params;
	params.Type = Type;
	params.ScoreRatio = ScoreRatio;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
