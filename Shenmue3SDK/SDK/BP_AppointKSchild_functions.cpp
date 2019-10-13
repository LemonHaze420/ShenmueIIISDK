
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

// Function BP_AppointKSchild.BP_AppointKSchild_C.isLive
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           LIVE                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AppointKSchild_C::isLive(bool* LIVE)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AppointKSchild.BP_AppointKSchild_C.isLive");

	ABP_AppointKSchild_C_isLive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LIVE != nullptr)
		*LIVE = params.LIVE;
}


// Function BP_AppointKSchild.BP_AppointKSchild_C.ExecSelfKill
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Forced                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AppointKSchild_C::ExecSelfKill(bool Forced)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AppointKSchild.BP_AppointKSchild_C.ExecSelfKill");

	ABP_AppointKSchild_C_ExecSelfKill_Params params;
	params.Forced = Forced;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AppointKSchild.BP_AppointKSchild_C.ExecExspFlagSet
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AppointKSchild_C::ExecExspFlagSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AppointKSchild.BP_AppointKSchild_C.ExecExspFlagSet");

	ABP_AppointKSchild_C_ExecExspFlagSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AppointKSchild.BP_AppointKSchild_C.GetJumpRot
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Jump_point                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AppointKSchild_C::GetJumpRot(float* Jump_point)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AppointKSchild.BP_AppointKSchild_C.GetJumpRot");

	ABP_AppointKSchild_C_GetJumpRot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Jump_point != nullptr)
		*Jump_point = params.Jump_point;
}


// Function BP_AppointKSchild.BP_AppointKSchild_C.GetJumpTime
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Hour                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Min                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AppointKSchild_C::GetJumpTime(int* Hour, int* Min)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AppointKSchild.BP_AppointKSchild_C.GetJumpTime");

	ABP_AppointKSchild_C_GetJumpTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Hour != nullptr)
		*Hour = params.Hour;
	if (Min != nullptr)
		*Min = params.Min;
}


// Function BP_AppointKSchild.BP_AppointKSchild_C.SetKSinfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            EnableTimeMin                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            EnableTimeMax                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            JumpHour                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            JumpMin                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 JumpLocation                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FRotator                jumprot                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FName                   KSlavel                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Eyecatch                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ExspFlagSet                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ExspControl                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AppointKSchild_C::SetKSinfo(int EnableTimeMin, int EnableTimeMax, int JumpHour, int JumpMin, const struct FVector& JumpLocation, const struct FRotator& jumprot, const struct FName& KSlavel, const struct FName& Eyecatch, int ExspFlagSet, const struct FName& ExspControl)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AppointKSchild.BP_AppointKSchild_C.SetKSinfo");

	ABP_AppointKSchild_C_SetKSinfo_Params params;
	params.EnableTimeMin = EnableTimeMin;
	params.EnableTimeMax = EnableTimeMax;
	params.JumpHour = JumpHour;
	params.JumpMin = JumpMin;
	params.JumpLocation = JumpLocation;
	params.jumprot = jumprot;
	params.KSlavel = KSlavel;
	params.Eyecatch = Eyecatch;
	params.ExspFlagSet = ExspFlagSet;
	params.ExspControl = ExspControl;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AppointKSchild.BP_AppointKSchild_C.GetJumpInfo
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 Jump_point                     (Parm, OutParm, IsPlainOldData)

void ABP_AppointKSchild_C::GetJumpInfo(struct FVector* Jump_point)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AppointKSchild.BP_AppointKSchild_C.GetJumpInfo");

	ABP_AppointKSchild_C_GetJumpInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Jump_point != nullptr)
		*Jump_point = params.Jump_point;
}


// Function BP_AppointKSchild.BP_AppointKSchild_C.GetEyeCatchID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   eyecatch_id                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AppointKSchild_C::GetEyeCatchID(struct FName* eyecatch_id)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AppointKSchild.BP_AppointKSchild_C.GetEyeCatchID");

	ABP_AppointKSchild_C_GetEyeCatchID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (eyecatch_id != nullptr)
		*eyecatch_id = params.eyecatch_id;
}


// Function BP_AppointKSchild.BP_AppointKSchild_C.GetKsLabelID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   ks_id                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AppointKSchild_C::GetKsLabelID(struct FName* ks_id)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AppointKSchild.BP_AppointKSchild_C.GetKsLabelID");

	ABP_AppointKSchild_C_GetKsLabelID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ks_id != nullptr)
		*ks_id = params.ks_id;
}


// Function BP_AppointKSchild.BP_AppointKSchild_C.CheckEnableTime
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_AppointKSchild_C::CheckEnableTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AppointKSchild.BP_AppointKSchild_C.CheckEnableTime");

	ABP_AppointKSchild_C_CheckEnableTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AppointKSchild.BP_AppointKSchild_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_AppointKSchild_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AppointKSchild.BP_AppointKSchild_C.UserConstructionScript");

	ABP_AppointKSchild_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AppointKSchild.BP_AppointKSchild_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AppointKSchild_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AppointKSchild.BP_AppointKSchild_C.ReceiveTick");

	ABP_AppointKSchild_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AppointKSchild.BP_AppointKSchild_C.ExecuteUbergraph_BP_AppointKSchild
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AppointKSchild_C::ExecuteUbergraph_BP_AppointKSchild(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AppointKSchild.BP_AppointKSchild_C.ExecuteUbergraph_BP_AppointKSchild");

	ABP_AppointKSchild_C_ExecuteUbergraph_BP_AppointKSchild_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AppointKSchild.BP_AppointKSchild_C.ApsChild_TimeOver__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_AppointKSchild_C::ApsChild_TimeOver__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AppointKSchild.BP_AppointKSchild_C.ApsChild_TimeOver__DelegateSignature");

	ABP_AppointKSchild_C_ApsChild_TimeOver__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
