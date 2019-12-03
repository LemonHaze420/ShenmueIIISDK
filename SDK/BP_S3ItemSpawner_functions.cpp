
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

// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.GetHelpName
// (Exec, Native, Event, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, Const)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName ABP_S3ItemSpawner_C::STATIC_GetHelpName()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.GetHelpName");

	ABP_S3ItemSpawner_C_GetHelpName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.GetHelpPriority
// (Net, NetReliable, NetRequest, Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// ES3HelpPriority                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ES3HelpPriority ABP_S3ItemSpawner_C::STATIC_GetHelpPriority()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.GetHelpPriority");

	ABP_S3ItemSpawner_C_GetHelpPriority_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.IsActivateHelp
// (Net, NetReliable, Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_S3ItemSpawner_C::STATIC_IsActivateHelp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.IsActivateHelp");

	ABP_S3ItemSpawner_C_IsActivateHelp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.RegisterHelp
// (Net, NetReliable, NetRequest, Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, Const)
// Parameters:
// ES3HelpRegisterTiming          Timing                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_S3ItemSpawner_C::STATIC_RegisterHelp(ES3HelpRegisterTiming Timing)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.RegisterHelp");

	ABP_S3ItemSpawner_C_RegisterHelp_Params params;
	params.Timing = Timing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.UnregisterHelp
// (NetReliable, NetRequest, Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, Const)
// Parameters:
// ES3HelpRegisterTiming          Timing                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_S3ItemSpawner_C::STATIC_UnregisterHelp(ES3HelpRegisterTiming Timing)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.UnregisterHelp");

	ABP_S3ItemSpawner_C_UnregisterHelp_Params params;
	params.Timing = Timing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.SetAquisitionItem
// (Exec, Native, Event, NetResponse, Static, MulticastDelegate, Public, Private, NetServer, NetClient, Const)

void ABP_S3ItemSpawner_C::STATIC_SetAquisitionItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.SetAquisitionItem");

	ABP_S3ItemSpawner_C_SetAquisitionItem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.IsAcquisitionItem
// (Net, Native, Event, Static, MulticastDelegate, Protected, Delegate, NetServer, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_S3ItemSpawner_C::STATIC_IsAcquisitionItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.IsAcquisitionItem");

	ABP_S3ItemSpawner_C_IsAcquisitionItem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.InitializeSearchItemActor
// (NetReliable, Exec, Event, NetResponse, Static, NetMulticast, Public, Private, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_S3ItemSpawner_C::STATIC_InitializeSearchItemActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.InitializeSearchItemActor");

	ABP_S3ItemSpawner_C_InitializeSearchItemActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.IsPlayOnlyLookScript
// (Net, NetRequest, Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, Const)
// Parameters:
// bool                           isPlay                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3ItemSpawner_C::STATIC_IsPlayOnlyLookScript(bool* isPlay)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.IsPlayOnlyLookScript");

	ABP_S3ItemSpawner_C_IsPlayOnlyLookScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (isPlay != nullptr)
		*isPlay = params.isPlay;
}


// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.GetUniqueCameraTransform
// (NetRequest, Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, Const)
// Parameters:
// struct FTransform              Transform                      (Parm, OutParm, IsPlainOldData)

void ABP_S3ItemSpawner_C::STATIC_GetUniqueCameraTransform(struct FTransform* Transform)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.GetUniqueCameraTransform");

	ABP_S3ItemSpawner_C_GetUniqueCameraTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Transform != nullptr)
		*Transform = params.Transform;
}


// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.IsLooking
// (Net, NetReliable, Exec, Native, NetResponse, NetMulticast, Delegate, NetClient, Const)
// Parameters:
// bool                           Look                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3ItemSpawner_C::IsLooking(bool* Look)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.IsLooking");

	ABP_S3ItemSpawner_C_IsLooking_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Look != nullptr)
		*Look = params.Look;
}


// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.GetCameraLocationOffset
// (NetReliable, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, Const)
// Parameters:
// struct FVector                 CameraLocationOffset           (Parm, OutParm, IsPlainOldData)

void ABP_S3ItemSpawner_C::STATIC_GetCameraLocationOffset(struct FVector* CameraLocationOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.GetCameraLocationOffset");

	ABP_S3ItemSpawner_C_GetCameraLocationOffset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CameraLocationOffset != nullptr)
		*CameraLocationOffset = params.CameraLocationOffset;
}


// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.GetItemIDAsName
// (NetRequest, Native, Event, NetResponse, NetMulticast, Private, Delegate, HasOutParms, HasDefaults, Const)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName ABP_S3ItemSpawner_C::GetItemIDAsName()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.GetItemIDAsName");

	ABP_S3ItemSpawner_C_GetItemIDAsName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.UniqueActionOnFind
// (Net, NetReliable, NetRequest, Native, Event, NetResponse, NetMulticast, Public, Private, Protected, NetClient, Const)

void ABP_S3ItemSpawner_C::UniqueActionOnFind()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.UniqueActionOnFind");

	ABP_S3ItemSpawner_C_UniqueActionOnFind_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.ForceFindSelf
// (Net, NetRequest, Exec, Event, NetResponse, NetMulticast, Private, Delegate, HasOutParms, HasDefaults, Const)

void ABP_S3ItemSpawner_C::ForceFindSelf()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.ForceFindSelf");

	ABP_S3ItemSpawner_C_ForceFindSelf_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.RemovalItem
// (Exec, Native, NetMulticast, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_S3ItemSpawner_C::RemovalItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.RemovalItem");

	ABP_S3ItemSpawner_C_RemovalItem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.IsCompleted
// (Net, Exec, Native, Event, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, Const)
// Parameters:
// bool                           bCompleted                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3ItemSpawner_C::STATIC_IsCompleted(bool* bCompleted)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.IsCompleted");

	ABP_S3ItemSpawner_C_IsCompleted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bCompleted != nullptr)
		*bCompleted = params.bCompleted;
}


// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.InFront
// (NetRequest, Exec, MulticastDelegate, Private, Protected, Delegate, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_S3ItemSpawner_C::InFront()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.InFront");

	ABP_S3ItemSpawner_C_InFront_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.MyDestructor
// (Native, Event, NetMulticast, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_S3ItemSpawner_C::MyDestructor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.MyDestructor");

	ABP_S3ItemSpawner_C_MyDestructor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.CalcTargetDirection
// (NetReliable, Native, Event, NetResponse, MulticastDelegate, Public, Protected, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ABP_S3ItemSpawner_C*     BP_S3ItemSpawner               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 PC_Sensor_Input_Dir_WS         (Parm, OutParm, IsPlainOldData)
// float                          PC_NPCSelect_Dir               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3ItemSpawner_C::CalcTargetDirection(class ABP_S3ItemSpawner_C* BP_S3ItemSpawner, struct FVector* PC_Sensor_Input_Dir_WS, float* PC_NPCSelect_Dir, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.CalcTargetDirection");

	ABP_S3ItemSpawner_C_CalcTargetDirection_Params params;
	params.BP_S3ItemSpawner = BP_S3ItemSpawner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PC_Sensor_Input_Dir_WS != nullptr)
		*PC_Sensor_Input_Dir_WS = params.PC_Sensor_Input_Dir_WS;
	if (PC_NPCSelect_Dir != nullptr)
		*PC_NPCSelect_Dir = params.PC_NPCSelect_Dir;
	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.SetSearchStep
// (NetReliable, Event, Public, Private, NetServer, NetClient, Const)

void ABP_S3ItemSpawner_C::SetSearchStep()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.SetSearchStep");

	ABP_S3ItemSpawner_C_SetSearchStep_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.SwitchTarget
// (NetReliable, Exec, Native, Event, NetResponse, Static, MulticastDelegate, Public, Private, NetServer, NetClient, Const)

void ABP_S3ItemSpawner_C::STATIC_SwitchTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.SwitchTarget");

	ABP_S3ItemSpawner_C_SwitchTarget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.IsCurrentItem
// (Net, NetRequest, Native, Event, NetResponse, Static, NetMulticast, Public, Private, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3ItemSpawner_C::STATIC_IsCurrentItem(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.IsCurrentItem");

	ABP_S3ItemSpawner_C_IsCurrentItem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.IsOverlappingPlayer
// (NetRequest, Exec, Native, Event, NetResponse, Static, MulticastDelegate, Public, Private, NetServer, NetClient, Const)
// Parameters:
// class UObject*                 Object                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           RangeFlag                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3ItemSpawner_C::STATIC_IsOverlappingPlayer(class UObject* Object, bool* RangeFlag, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.IsOverlappingPlayer");

	ABP_S3ItemSpawner_C_IsOverlappingPlayer_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RangeFlag != nullptr)
		*RangeFlag = params.RangeFlag;
	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.OverlappingCheck
// (NetReliable, NetRequest, Exec, NetResponse, MulticastDelegate, Public, Private, Delegate, HasOutParms, Const)

void ABP_S3ItemSpawner_C::OverlappingCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.OverlappingCheck");

	ABP_S3ItemSpawner_C_OverlappingCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.UpdateEffect
// (Exec, Native, NetMulticast, Public, Private, NetServer, HasOutParms, NetClient, Const)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Current                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3ItemSpawner_C::UpdateEffect(float Value, bool Current)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.UpdateEffect");

	ABP_S3ItemSpawner_C_UpdateEffect_Params params;
	params.Value = Value;
	params.Current = Current;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.CalcRelativeAngle
// (Net, Delegate, NetServer, NetClient, Const)
// Parameters:
// float                          RelativeAngle                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           CurrentItem                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3ItemSpawner_C::CalcRelativeAngle(float* RelativeAngle, bool* CurrentItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.CalcRelativeAngle");

	ABP_S3ItemSpawner_C_CalcRelativeAngle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RelativeAngle != nullptr)
		*RelativeAngle = params.RelativeAngle;
	if (CurrentItem != nullptr)
		*CurrentItem = params.CurrentItem;
}


// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.CreateEffect
// (Exec, Native, NetMulticast, MulticastDelegate, Public, NetServer, NetClient, Const)

void ABP_S3ItemSpawner_C::CreateEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.CreateEffect");

	ABP_S3ItemSpawner_C_CreateEffect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.CalcCameraTransform
// (Net, NetRequest, Exec, NetResponse, Static, NetMulticast, MulticastDelegate, Private, Protected, NetClient, Const)

void ABP_S3ItemSpawner_C::STATIC_CalcCameraTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.CalcCameraTransform");

	ABP_S3ItemSpawner_C_CalcCameraTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.Initialize
// (Exec, Native, Event, Private, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Enable                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3ItemSpawner_C::Initialize(bool* Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.Initialize");

	ABP_S3ItemSpawner_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Enable != nullptr)
		*Enable = params.Enable;
}


// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.UserConstructionScript
// (NetRequest, Native, NetResponse, NetMulticast, Private, Protected, Delegate, NetClient, Const)

void ABP_S3ItemSpawner_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.UserConstructionScript");

	ABP_S3ItemSpawner_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.ReceiveBeginPlay
// (NetReliable, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, Const)

void ABP_S3ItemSpawner_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.ReceiveBeginPlay");

	ABP_S3ItemSpawner_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.ReceiveTick
// (NetReliable, Exec, Native, Event, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, Const)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3ItemSpawner_C::STATIC_ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.ReceiveTick");

	ABP_S3ItemSpawner_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.BndEvt__HitCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (Net, NetReliable, Native, Event, Static, MulticastDelegate, Protected, Delegate, NetServer, Const)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_S3ItemSpawner_C::STATIC_BndEvt__HitCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.BndEvt__HitCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_S3ItemSpawner_C_BndEvt__HitCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.ReceiveDestroyed
// (Net, NetRequest, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, Const)

void ABP_S3ItemSpawner_C::STATIC_ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.ReceiveDestroyed");

	ABP_S3ItemSpawner_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.BndEvt__HitCollision_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature
// (Native, Event, NetResponse, Public, Private, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3ItemSpawner_C::BndEvt__HitCollision_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.BndEvt__HitCollision_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature");

	ABP_S3ItemSpawner_C_BndEvt__HitCollision_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.BndEvt__GetCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (Net, NetReliable, Exec, Native, Event, Static, MulticastDelegate, Protected, Delegate, NetServer, Const)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_S3ItemSpawner_C::STATIC_BndEvt__GetCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.BndEvt__GetCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_S3ItemSpawner_C_BndEvt__GetCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.BndEvt__GetCollision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// (Net, NetRequest, Exec, Event, NetResponse, Public, Private, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3ItemSpawner_C::BndEvt__GetCollision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.BndEvt__GetCollision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	ABP_S3ItemSpawner_C_BndEvt__GetCollision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.BndEvt__WakeupCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (Exec, Native, Event, Static, MulticastDelegate, Protected, Delegate, NetServer, Const)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_S3ItemSpawner_C::STATIC_BndEvt__WakeupCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.BndEvt__WakeupCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_S3ItemSpawner_C_BndEvt__WakeupCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.BndEvt__WakeupCollision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// (NetReliable, NetRequest, Exec, Event, NetResponse, Public, Private, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3ItemSpawner_C::BndEvt__WakeupCollision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.BndEvt__WakeupCollision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	ABP_S3ItemSpawner_C_BndEvt__WakeupCollision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.ReceiveEndPlay
// (Net, NetReliable, Exec, Native, Event, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, Const)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3ItemSpawner_C::STATIC_ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.ReceiveEndPlay");

	ABP_S3ItemSpawner_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.SetEnabledHelp
// (Net, NetReliable, Exec, Native, Event, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, Const)
// Parameters:
// bool                           Condition                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3ItemSpawner_C::STATIC_SetEnabledHelp(bool Condition)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.SetEnabledHelp");

	ABP_S3ItemSpawner_C_SetEnabledHelp_Params params;
	params.Condition = Condition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.BndEvt__HelpReactCollision_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature
// (NetReliable, NetRequest, Native, Event, Static, MulticastDelegate, Protected, Delegate, NetServer, Const)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_S3ItemSpawner_C::STATIC_BndEvt__HelpReactCollision_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.BndEvt__HelpReactCollision_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_S3ItemSpawner_C_BndEvt__HelpReactCollision_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.BndEvt__HelpReactCollision_K2Node_ComponentBoundEvent_6_ComponentEndOverlapSignature__DelegateSignature
// (NetRequest, NetMulticast, MulticastDelegate, Protected, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3ItemSpawner_C::BndEvt__HelpReactCollision_K2Node_ComponentBoundEvent_6_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.BndEvt__HelpReactCollision_K2Node_ComponentBoundEvent_6_ComponentEndOverlapSignature__DelegateSignature");

	ABP_S3ItemSpawner_C_BndEvt__HelpReactCollision_K2Node_ComponentBoundEvent_6_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.DelayedInitialize
// (NetRequest, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, Const)

void ABP_S3ItemSpawner_C::STATIC_DelayedInitialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.DelayedInitialize");

	ABP_S3ItemSpawner_C_DelayedInitialize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.BeginActionVisibleAndFound
// (Net, NetReliable, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, Const)

void ABP_S3ItemSpawner_C::STATIC_BeginActionVisibleAndFound()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.BeginActionVisibleAndFound");

	ABP_S3ItemSpawner_C_BeginActionVisibleAndFound_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.ExecuteUbergraph_BP_S3ItemSpawner
// (MulticastDelegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3ItemSpawner_C::ExecuteUbergraph_BP_S3ItemSpawner(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.ExecuteUbergraph_BP_S3ItemSpawner");

	ABP_S3ItemSpawner_C_ExecuteUbergraph_BP_S3ItemSpawner_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
