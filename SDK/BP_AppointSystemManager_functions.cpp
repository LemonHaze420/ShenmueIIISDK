
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

// Function BP_AppointSystemManager.BP_AppointSystemManager_C.GetPriority
// (NetReliable, NetRequest, Exec, Event, NetResponse, Static, NetMulticast, Protected, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ABP_AppointSystemManager_C::STATIC_GetPriority()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AppointSystemManager.BP_AppointSystemManager_C.GetPriority");

	ABP_AppointSystemManager_C_GetPriority_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_AppointSystemManager.BP_AppointSystemManager_C.GetDetectAction
// (NetResponse, Private, Protected, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<struct FS3DetectActionParam> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FS3DetectActionParam> ABP_AppointSystemManager_C::GetDetectAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AppointSystemManager.BP_AppointSystemManager_C.GetDetectAction");

	ABP_AppointSystemManager_C_GetDetectAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_AppointSystemManager.BP_AppointSystemManager_C.PauseAps
// (NetRequest, NetResponse, MulticastDelegate, Delegate, NetServer, NetClient, Const)
// Parameters:
// bool                           Pause                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AppointSystemManager_C::PauseAps(bool Pause)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AppointSystemManager.BP_AppointSystemManager_C.PauseAps");

	ABP_AppointSystemManager_C_PauseAps_Params params;
	params.Pause = Pause;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AppointSystemManager.BP_AppointSystemManager_C.ClucSpawnLocationSHE
// (NetReliable, NetRequest, Exec, Event, Static, Public, Private, NetServer, NetClient, Const)
// Parameters:
// float                          BackOffset                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Side_Offset                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Hight_Offset                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 SHE_vector                     (Parm, OutParm, IsPlainOldData)
// struct FRotator                SHE_rot                        (Parm, OutParm, IsPlainOldData)

void ABP_AppointSystemManager_C::STATIC_ClucSpawnLocationSHE(float BackOffset, float Side_Offset, float Hight_Offset, struct FVector* SHE_vector, struct FRotator* SHE_rot)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AppointSystemManager.BP_AppointSystemManager_C.ClucSpawnLocationSHE");

	ABP_AppointSystemManager_C_ClucSpawnLocationSHE_Params params;
	params.BackOffset = BackOffset;
	params.Side_Offset = Side_Offset;
	params.Hight_Offset = Hight_Offset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SHE_vector != nullptr)
		*SHE_vector = params.SHE_vector;
	if (SHE_rot != nullptr)
		*SHE_rot = params.SHE_rot;
}


// Function BP_AppointSystemManager.BP_AppointSystemManager_C.WarpShe
// (Net, Exec, Native, Event, NetMulticast, MulticastDelegate, Private, NetServer, NetClient, Const)

void ABP_AppointSystemManager_C::WarpShe()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AppointSystemManager.BP_AppointSystemManager_C.WarpShe");

	ABP_AppointSystemManager_C_WarpShe_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AppointSystemManager.BP_AppointSystemManager_C.AddDays
// (Net, NetReliable, NetRequest, Native, Event, NetResponse, Static, MulticastDelegate, Public, Delegate, NetServer, NetClient, Const)
// Parameters:
// int                            Days                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FDateTime               ReturnValue                    (Parm, OutParm, ReturnParm)

struct FDateTime ABP_AppointSystemManager_C::STATIC_AddDays(int Days)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AppointSystemManager.BP_AppointSystemManager_C.AddDays");

	ABP_AppointSystemManager_C_AddDays_Params params;
	params.Days = Days;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_AppointSystemManager.BP_AppointSystemManager_C.CheckEnableTime
// (NetRequest, Native, Event, NetMulticast, MulticastDelegate, Private, NetServer, NetClient, Const)
// Parameters:
// int                            in_index                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            out_index                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AppointSystemManager_C::CheckEnableTime(int in_index, int* out_index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AppointSystemManager.BP_AppointSystemManager_C.CheckEnableTime");

	ABP_AppointSystemManager_C_CheckEnableTime_Params params;
	params.in_index = in_index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_index != nullptr)
		*out_index = params.out_index;
}


// Function BP_AppointSystemManager.BP_AppointSystemManager_C.DetectEnable_Help
// (Net, NetReliable, Native, Static, NetMulticast, MulticastDelegate, Public, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AppointSystemManager_C::STATIC_DetectEnable_Help(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AppointSystemManager.BP_AppointSystemManager_C.DetectEnable_Help");

	ABP_AppointSystemManager_C_DetectEnable_Help_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AppointSystemManager.BP_AppointSystemManager_C.SetExspFlag
// (Event, Static, NetMulticast, MulticastDelegate, Public, NetServer, NetClient, Const)
// Parameters:
// TEnumAsByte<EN_AppointKStype>  ks_type                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AppointSystemManager_C::STATIC_SetExspFlag(TEnumAsByte<EN_AppointKStype> ks_type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AppointSystemManager.BP_AppointSystemManager_C.SetExspFlag");

	ABP_AppointSystemManager_C_SetExspFlag_Params params;
	params.ks_type = ks_type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AppointSystemManager.BP_AppointSystemManager_C.CancelAPS
// (NetReliable, NetRequest, Exec, Native, NetResponse, Static, NetServer, NetClient)

void ABP_AppointSystemManager_C::STATIC_CancelAPS()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AppointSystemManager.BP_AppointSystemManager_C.CancelAPS");

	ABP_AppointSystemManager_C_CancelAPS_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AppointSystemManager.BP_AppointSystemManager_C.GetJumpRot
// (NetReliable, NetRequest, Exec, NetResponse, Private, Protected, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<EN_AppointKStype>  ks_type                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          jumprot                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           jump_enable                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AppointSystemManager_C::GetJumpRot(TEnumAsByte<EN_AppointKStype> ks_type, float* jumprot, bool* jump_enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AppointSystemManager.BP_AppointSystemManager_C.GetJumpRot");

	ABP_AppointSystemManager_C_GetJumpRot_Params params;
	params.ks_type = ks_type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (jumprot != nullptr)
		*jumprot = params.jumprot;
	if (jump_enable != nullptr)
		*jump_enable = params.jump_enable;
}


// Function BP_AppointSystemManager.BP_AppointSystemManager_C.KillKSchild
// (NetRequest, Native, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Protected, NetClient, Const)

void ABP_AppointSystemManager_C::KillKSchild()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AppointSystemManager.BP_AppointSystemManager_C.KillKSchild");

	ABP_AppointSystemManager_C_KillKSchild_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AppointSystemManager.BP_AppointSystemManager_C.GetJumpTime
// (NetRequest, Native, Static, MulticastDelegate, Public, Private, Protected, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<EN_AppointKStype>  ks_type                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FST_AppointDate         time_data                      (Parm, OutParm)

void ABP_AppointSystemManager_C::STATIC_GetJumpTime(TEnumAsByte<EN_AppointKStype> ks_type, struct FST_AppointDate* time_data)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AppointSystemManager.BP_AppointSystemManager_C.GetJumpTime");

	ABP_AppointSystemManager_C_GetJumpTime_Params params;
	params.ks_type = ks_type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (time_data != nullptr)
		*time_data = params.time_data;
}


// Function BP_AppointSystemManager.BP_AppointSystemManager_C.GetEyecatch
// (Native, Static, Delegate, NetServer, NetClient, Const)
// Parameters:
// TEnumAsByte<EN_AppointKStype>  ks_type                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Eyecatch                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           eyecatch_enable                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AppointSystemManager_C::STATIC_GetEyecatch(TEnumAsByte<EN_AppointKStype> ks_type, struct FName* Eyecatch, bool* eyecatch_enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AppointSystemManager.BP_AppointSystemManager_C.GetEyecatch");

	ABP_AppointSystemManager_C_GetEyecatch_Params params;
	params.ks_type = ks_type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Eyecatch != nullptr)
		*Eyecatch = params.Eyecatch;
	if (eyecatch_enable != nullptr)
		*eyecatch_enable = params.eyecatch_enable;
}


// Function BP_AppointSystemManager.BP_AppointSystemManager_C.GetJumpPoint
// (Net, NetRequest, Static, Delegate, NetServer, NetClient, Const)
// Parameters:
// TEnumAsByte<EN_AppointKStype>  ks_type                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 jumppos                        (Parm, OutParm, IsPlainOldData)
// bool                           jump_enable                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AppointSystemManager_C::STATIC_GetJumpPoint(TEnumAsByte<EN_AppointKStype> ks_type, struct FVector* jumppos, bool* jump_enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AppointSystemManager.BP_AppointSystemManager_C.GetJumpPoint");

	ABP_AppointSystemManager_C_GetJumpPoint_Params params;
	params.ks_type = ks_type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (jumppos != nullptr)
		*jumppos = params.jumppos;
	if (jump_enable != nullptr)
		*jump_enable = params.jump_enable;
}


// Function BP_AppointSystemManager.BP_AppointSystemManager_C.ExecAddKs
// (NetRequest, Exec, Static, Private, Protected, Delegate, NetServer, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_AppointSystemManager_C::STATIC_ExecAddKs()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AppointSystemManager.BP_AppointSystemManager_C.ExecAddKs");

	ABP_AppointSystemManager_C_ExecAddKs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AppointSystemManager.BP_AppointSystemManager_C.GetSelectTexts
// (Net, NetRequest, Exec, Native, Event, NetMulticast, MulticastDelegate, Private, NetServer, NetClient, Const)
// Parameters:
// struct FName                   INameID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   GetName                        (Parm, OutParm)

void ABP_AppointSystemManager_C::GetSelectTexts(const struct FName& INameID, struct FText* GetName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AppointSystemManager.BP_AppointSystemManager_C.GetSelectTexts");

	ABP_AppointSystemManager_C_GetSelectTexts_Params params;
	params.INameID = INameID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GetName != nullptr)
		*GetName = params.GetName;
}


// Function BP_AppointSystemManager.BP_AppointSystemManager_C.ChangeKSFilter
// (NetRequest, Exec, Event, NetResponse, Static, NetMulticast, Private, NetServer, NetClient, Const)

void ABP_AppointSystemManager_C::STATIC_ChangeKSFilter()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AppointSystemManager.BP_AppointSystemManager_C.ChangeKSFilter");

	ABP_AppointSystemManager_C_ChangeKSFilter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AppointSystemManager.BP_AppointSystemManager_C.AddKSitem
// (NetReliable, Native, Event, Private, Protected, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            KS_pos                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            EnableTimeMin                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            EnableTimeMax                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            JumpHour                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            JumpMin                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 JumpLocation                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FRotator                jumprot                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FName                   KSlavel                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Eyecatch                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ExspFlag                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ExspCheck                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Add_Complited                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AppointSystemManager_C::AddKSitem(int KS_pos, int EnableTimeMin, int EnableTimeMax, int JumpHour, int JumpMin, const struct FVector& JumpLocation, const struct FRotator& jumprot, const struct FName& KSlavel, const struct FName& Eyecatch, int ExspFlag, const struct FName& ExspCheck, bool* Add_Complited)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AppointSystemManager.BP_AppointSystemManager_C.AddKSitem");

	ABP_AppointSystemManager_C_AddKSitem_Params params;
	params.KS_pos = KS_pos;
	params.EnableTimeMin = EnableTimeMin;
	params.EnableTimeMax = EnableTimeMax;
	params.JumpHour = JumpHour;
	params.JumpMin = JumpMin;
	params.JumpLocation = JumpLocation;
	params.jumprot = jumprot;
	params.KSlavel = KSlavel;
	params.Eyecatch = Eyecatch;
	params.ExspFlag = ExspFlag;
	params.ExspCheck = ExspCheck;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Add_Complited != nullptr)
		*Add_Complited = params.Add_Complited;
}


// Function BP_AppointSystemManager.BP_AppointSystemManager_C.SetPlayEyecatchFlag
// (NetReliable, NetRequest, Exec, NetResponse, MulticastDelegate, Delegate, NetServer, NetClient, Const)
// Parameters:
// bool                           Play                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AppointSystemManager_C::SetPlayEyecatchFlag(bool Play)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AppointSystemManager.BP_AppointSystemManager_C.SetPlayEyecatchFlag");

	ABP_AppointSystemManager_C_SetPlayEyecatchFlag_Params params;
	params.Play = Play;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AppointSystemManager.BP_AppointSystemManager_C.ChangeSkipEndFade
// (Exec, NetResponse, MulticastDelegate, Delegate, NetServer, NetClient, Const)
// Parameters:
// bool                           EndFadeFlag                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AppointSystemManager_C::ChangeSkipEndFade(bool EndFadeFlag)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AppointSystemManager.BP_AppointSystemManager_C.ChangeSkipEndFade");

	ABP_AppointSystemManager_C_ChangeSkipEndFade_Params params;
	params.EndFadeFlag = EndFadeFlag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AppointSystemManager.BP_AppointSystemManager_C.IsEnableButtonTime
// (Net, NetReliable, NetRequest, Exec, Event, NetMulticast, MulticastDelegate, Public, Delegate, NetServer, NetClient, Const)
// Parameters:
// bool                           IsEnable                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AppointSystemManager_C::IsEnableButtonTime(bool* IsEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AppointSystemManager.BP_AppointSystemManager_C.IsEnableButtonTime");

	ABP_AppointSystemManager_C_IsEnableButtonTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsEnable != nullptr)
		*IsEnable = params.IsEnable;
}


// Function BP_AppointSystemManager.BP_AppointSystemManager_C.ReleaseAppointData
// (Net, NetReliable, NetRequest, Event, NetMulticast, MulticastDelegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport)

void ABP_AppointSystemManager_C::ReleaseAppointData()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AppointSystemManager.BP_AppointSystemManager_C.ReleaseAppointData");

	ABP_AppointSystemManager_C_ReleaseAppointData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AppointSystemManager.BP_AppointSystemManager_C.IsPassAppoint
// (NetReliable, NetRequest, Static, Private, Protected, Delegate, NetServer, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           IsFuture                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AppointSystemManager_C::STATIC_IsPassAppoint(bool* IsFuture)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AppointSystemManager.BP_AppointSystemManager_C.IsPassAppoint");

	ABP_AppointSystemManager_C_IsPassAppoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsFuture != nullptr)
		*IsFuture = params.IsFuture;
}


// Function BP_AppointSystemManager.BP_AppointSystemManager_C.GetData
// (Native, NetResponse, Private, Protected, Delegate, NetClient, Const)
// Parameters:
// int                            AddDay                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Year                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Month                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Day                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AppointSystemManager_C::GetData(int AddDay, int* Year, int* Month, int* Day)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AppointSystemManager.BP_AppointSystemManager_C.GetData");

	ABP_AppointSystemManager_C_GetData_Params params;
	params.AddDay = AddDay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Year != nullptr)
		*Year = params.Year;
	if (Month != nullptr)
		*Month = params.Month;
	if (Day != nullptr)
		*Day = params.Day;
}


// Function BP_AppointSystemManager.BP_AppointSystemManager_C.IsAppointFuture
// (Net, NetReliable, NetRequest, Exec, Event, Protected, Delegate, HasDefaults, NetClient)
// Parameters:
// bool                           Pass                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AppointSystemManager_C::IsAppointFuture(bool* Pass)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AppointSystemManager.BP_AppointSystemManager_C.IsAppointFuture");

	ABP_AppointSystemManager_C_IsAppointFuture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Pass != nullptr)
		*Pass = params.Pass;
}


// Function BP_AppointSystemManager.BP_AppointSystemManager_C.GetAppointData
// (Event, NetResponse, Static, MulticastDelegate, Protected, Delegate, NetServer, Const)
// Parameters:
// struct FVector                 JumpPoint                      (Parm, OutParm, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, OutParm, IsPlainOldData)
// struct FST_AppointDate         Date                           (Parm, OutParm)
// struct FText                   MainText                       (Parm, OutParm)
// struct FText                   SubText                        (Parm, OutParm)

void ABP_AppointSystemManager_C::STATIC_GetAppointData(struct FVector* JumpPoint, struct FRotator* Rotation, struct FST_AppointDate* Date, struct FText* MainText, struct FText* SubText)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AppointSystemManager.BP_AppointSystemManager_C.GetAppointData");

	ABP_AppointSystemManager_C_GetAppointData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (JumpPoint != nullptr)
		*JumpPoint = params.JumpPoint;
	if (Rotation != nullptr)
		*Rotation = params.Rotation;
	if (Date != nullptr)
		*Date = params.Date;
	if (MainText != nullptr)
		*MainText = params.MainText;
	if (SubText != nullptr)
		*SubText = params.SubText;
}


// Function BP_AppointSystemManager.BP_AppointSystemManager_C.SetAppointButtonFlag
// (Net, NetRequest, NetResponse, Static, Public, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           Deny                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AppointSystemManager_C::STATIC_SetAppointButtonFlag(bool Deny)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AppointSystemManager.BP_AppointSystemManager_C.SetAppointButtonFlag");

	ABP_AppointSystemManager_C_SetAppointButtonFlag_Params params;
	params.Deny = Deny;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AppointSystemManager.BP_AppointSystemManager_C.Finalize
// (Net, NetRequest, Exec, Native, Event, NetResponse, NetMulticast, Public, Private, Protected, NetClient, Const)

void ABP_AppointSystemManager_C::Finalize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AppointSystemManager.BP_AppointSystemManager_C.Finalize");

	ABP_AppointSystemManager_C_Finalize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AppointSystemManager.BP_AppointSystemManager_C.DetectActionUnregist
// (Event, NetResponse, Static, NetServer, NetClient)
// Parameters:
// bool                           Unregist                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AppointSystemManager_C::STATIC_DetectActionUnregist(bool Unregist)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AppointSystemManager.BP_AppointSystemManager_C.DetectActionUnregist");

	ABP_AppointSystemManager_C_DetectActionUnregist_Params params;
	params.Unregist = Unregist;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AppointSystemManager.BP_AppointSystemManager_C.SetAppointData
// (Net, NetReliable, Event, NetResponse, Public, Private, Protected, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 JumpPoint                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FRotator                Rotation                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FName                   Eyecatch                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            AddDay                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Hour                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Minute                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            EnableTimeMin                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            EnableTimeMax                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ChangeStep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Label_Left                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           SkipEndFade                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AppointSystemManager_C::SetAppointData(const struct FVector& JumpPoint, const struct FRotator& Rotation, const struct FName& Eyecatch, int AddDay, int Hour, int Minute, int EnableTimeMin, int EnableTimeMax, int ChangeStep, const struct FName& Label_Left, bool SkipEndFade)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AppointSystemManager.BP_AppointSystemManager_C.SetAppointData");

	ABP_AppointSystemManager_C_SetAppointData_Params params;
	params.JumpPoint = JumpPoint;
	params.Rotation = Rotation;
	params.Eyecatch = Eyecatch;
	params.AddDay = AddDay;
	params.Hour = Hour;
	params.Minute = Minute;
	params.EnableTimeMin = EnableTimeMin;
	params.EnableTimeMax = EnableTimeMax;
	params.ChangeStep = ChangeStep;
	params.Label_Left = Label_Left;
	params.SkipEndFade = SkipEndFade;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AppointSystemManager.BP_AppointSystemManager_C.UserConstructionScript
// (NetReliable, NetRequest, Exec, Native, Event, NetResponse, NetMulticast, Public, Private, Protected, NetClient, Const)

void ABP_AppointSystemManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AppointSystemManager.BP_AppointSystemManager_C.UserConstructionScript");

	ABP_AppointSystemManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AppointSystemManager.BP_AppointSystemManager_C.EyecatchFinish
// (NetReliable, NetRequest, Exec, NetResponse, MulticastDelegate, Delegate, NetServer, NetClient, Const)

void ABP_AppointSystemManager_C::EyecatchFinish()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AppointSystemManager.BP_AppointSystemManager_C.EyecatchFinish");

	ABP_AppointSystemManager_C_EyecatchFinish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AppointSystemManager.BP_AppointSystemManager_C.ReceiveTick
// (NetRequest, Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, Const)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AppointSystemManager_C::STATIC_ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AppointSystemManager.BP_AppointSystemManager_C.ReceiveTick");

	ABP_AppointSystemManager_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AppointSystemManager.BP_AppointSystemManager_C.ReceiveBeginPlay
// (Net, NetRequest, Exec, NetResponse, MulticastDelegate, Delegate, NetServer, NetClient, Const)

void ABP_AppointSystemManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AppointSystemManager.BP_AppointSystemManager_C.ReceiveBeginPlay");

	ABP_AppointSystemManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AppointSystemManager.BP_AppointSystemManager_C.DecideDetectAction
// (Net, NetReliable, Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, Const)
// Parameters:
// ES3ActionIconType              Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AppointSystemManager_C::STATIC_DecideDetectAction(ES3ActionIconType Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AppointSystemManager.BP_AppointSystemManager_C.DecideDetectAction");

	ABP_AppointSystemManager_C_DecideDetectAction_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AppointSystemManager.BP_AppointSystemManager_C.EndJump
// (Net, NetRequest, Exec, Event, NetResponse, Static, Public, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AppointSystemManager_C::STATIC_EndJump(class AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AppointSystemManager.BP_AppointSystemManager_C.EndJump");

	ABP_AppointSystemManager_C_EndJump_Params params;
	params.Actor = Actor;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AppointSystemManager.BP_AppointSystemManager_C.ApsChild_TimeOver_Actor1
// (Net, NetReliable, Exec, NetResponse, MulticastDelegate, Delegate, NetServer, NetClient, Const)

void ABP_AppointSystemManager_C::ApsChild_TimeOver_Actor1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AppointSystemManager.BP_AppointSystemManager_C.ApsChild_TimeOver_Actor1");

	ABP_AppointSystemManager_C_ApsChild_TimeOver_Actor1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AppointSystemManager.BP_AppointSystemManager_C.ApsChild_TimeOver_Actor2
// (Net, NetReliable, Exec, NetResponse, MulticastDelegate, Delegate, NetServer, NetClient, Const)

void ABP_AppointSystemManager_C::ApsChild_TimeOver_Actor2()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AppointSystemManager.BP_AppointSystemManager_C.ApsChild_TimeOver_Actor2");

	ABP_AppointSystemManager_C_ApsChild_TimeOver_Actor2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AppointSystemManager.BP_AppointSystemManager_C.ChangePlayerController
// (NetReliable, Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, Const)
// Parameters:
// class APlayerController*       PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AppointSystemManager_C::STATIC_ChangePlayerController(class APlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AppointSystemManager.BP_AppointSystemManager_C.ChangePlayerController");

	ABP_AppointSystemManager_C_ChangePlayerController_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AppointSystemManager.BP_AppointSystemManager_C.HelpEnd
// (NetReliable, Exec, NetResponse, MulticastDelegate, Delegate, NetServer, NetClient, Const)

void ABP_AppointSystemManager_C::HelpEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AppointSystemManager.BP_AppointSystemManager_C.HelpEnd");

	ABP_AppointSystemManager_C_HelpEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AppointSystemManager.BP_AppointSystemManager_C.InHelpEnd
// (Net, Exec, NetResponse, MulticastDelegate, Delegate, NetServer, NetClient, Const)

void ABP_AppointSystemManager_C::InHelpEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AppointSystemManager.BP_AppointSystemManager_C.InHelpEnd");

	ABP_AppointSystemManager_C_InHelpEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AppointSystemManager.BP_AppointSystemManager_C.catch_onSelected
// (Net, Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, Const)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AppointSystemManager_C::STATIC_catch_onSelected(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AppointSystemManager.BP_AppointSystemManager_C.catch_onSelected");

	ABP_AppointSystemManager_C_catch_onSelected_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AppointSystemManager.BP_AppointSystemManager_C.ExecuteUbergraph_BP_AppointSystemManager
// (Net, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AppointSystemManager_C::ExecuteUbergraph_BP_AppointSystemManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AppointSystemManager.BP_AppointSystemManager_C.ExecuteUbergraph_BP_AppointSystemManager");

	ABP_AppointSystemManager_C_ExecuteUbergraph_BP_AppointSystemManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AppointSystemManager.BP_AppointSystemManager_C.EndAppointJump__DelegateSignature
// (NetReliable, NetRequest, Exec, Native, Event, NetResponse, NetMulticast, Public, Private, Protected, NetClient, Const)

void ABP_AppointSystemManager_C::EndAppointJump__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AppointSystemManager.BP_AppointSystemManager_C.EndAppointJump__DelegateSignature");

	ABP_AppointSystemManager_C_EndAppointJump__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AppointSystemManager.BP_AppointSystemManager_C.StartAppointJump__DelegateSignature
// (Net, NetRequest, Exec, Native, Event, NetResponse, NetMulticast, Public, Private, Protected, NetClient, Const)

void ABP_AppointSystemManager_C::StartAppointJump__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AppointSystemManager.BP_AppointSystemManager_C.StartAppointJump__DelegateSignature");

	ABP_AppointSystemManager_C_StartAppointJump__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
