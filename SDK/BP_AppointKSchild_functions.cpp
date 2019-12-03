
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

// Function BP_AppointKSchild.BP_AppointKSchild_C.isLive
// (Net, Exec, Private, Delegate, HasOutParms, HasDefaults, Const)
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
// (NetReliable, Native, MulticastDelegate, Private, Protected, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           Forced                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AppointKSchild_C::ExecSelfKill(bool Forced)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AppointKSchild.BP_AppointKSchild_C.ExecSelfKill");

	ABP_AppointKSchild_C_ExecSelfKill_Params params;
	params.Forced = Forced;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AppointKSchild.BP_AppointKSchild_C.ExecExspFlagSet
// (Net, NetRequest, Event, NetResponse, Static, MulticastDelegate, Protected, Delegate, NetServer, Const)

void ABP_AppointKSchild_C::STATIC_ExecExspFlagSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AppointKSchild.BP_AppointKSchild_C.ExecExspFlagSet");

	ABP_AppointKSchild_C_ExecExspFlagSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AppointKSchild.BP_AppointKSchild_C.GetJumpRot
// (Net, Static, MulticastDelegate, Private, NetServer, HasOutParms, Const)
// Parameters:
// float                          Jump_point                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AppointKSchild_C::STATIC_GetJumpRot(float* Jump_point)
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
// (NetResponse, NetMulticast, MulticastDelegate, Private, Delegate, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
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
// (NetReliable, NetRequest, Exec, Native, NetResponse, NetMulticast, Private, Protected, Delegate, HasOutParms, Const)
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
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AppointKSchild.BP_AppointKSchild_C.GetJumpInfo
// (Event, NetResponse, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, Const)
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
// (Net, NetReliable, NetRequest, Exec, Native, NetResponse, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FName                   eyecatch_id                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AppointKSchild_C::GetEyeCatchID(struct FName* eyecatch_id)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AppointKSchild.BP_AppointKSchild_C.GetEyeCatchID");

	ABP_AppointKSchild_C_GetEyeCatchID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (eyecatch_id != nullptr)
		*eyecatch_id = params.eyecatch_id;
}


// Function BP_AppointKSchild.BP_AppointKSchild_C.GetKsLabelID
// (NetReliable, NetRequest, Exec, Native, NetResponse, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FName                   ks_id                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AppointKSchild_C::GetKsLabelID(struct FName* ks_id)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AppointKSchild.BP_AppointKSchild_C.GetKsLabelID");

	ABP_AppointKSchild_C_GetKsLabelID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ks_id != nullptr)
		*ks_id = params.ks_id;
}


// Function BP_AppointKSchild.BP_AppointKSchild_C.CheckEnableTime
// (Native, Private, Delegate, HasOutParms, HasDefaults, Const)

void ABP_AppointKSchild_C::CheckEnableTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AppointKSchild.BP_AppointKSchild_C.CheckEnableTime");

	ABP_AppointKSchild_C_CheckEnableTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AppointKSchild.BP_AppointKSchild_C.UserConstructionScript
// (Net, NetReliable, NetRequest, NetResponse, NetMulticast, MulticastDelegate, Public, Protected, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_AppointKSchild_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AppointKSchild.BP_AppointKSchild_C.UserConstructionScript");

	ABP_AppointKSchild_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AppointKSchild.BP_AppointKSchild_C.ReceiveTick
// (NetReliable, NetRequest, Exec, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, Const)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AppointKSchild_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AppointKSchild.BP_AppointKSchild_C.ReceiveTick");

	ABP_AppointKSchild_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AppointKSchild.BP_AppointKSchild_C.ExecuteUbergraph_BP_AppointKSchild
// (Net, NetRequest, Native, Event, Static, NetMulticast, Private, Delegate, NetServer, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AppointKSchild_C::STATIC_ExecuteUbergraph_BP_AppointKSchild(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AppointKSchild.BP_AppointKSchild_C.ExecuteUbergraph_BP_AppointKSchild");

	ABP_AppointKSchild_C_ExecuteUbergraph_BP_AppointKSchild_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AppointKSchild.BP_AppointKSchild_C.ApsChild_TimeOver__DelegateSignature
// (NetReliable, NetRequest, NetResponse, NetMulticast, MulticastDelegate, Public, Protected, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

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
