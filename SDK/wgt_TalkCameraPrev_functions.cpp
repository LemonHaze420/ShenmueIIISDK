
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

// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.SpawnCameraFromClass
// (NetReliable, NetRequest, Event, Static, Public, Private, Protected, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// class UClass*                  cameraClass                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_TalkCameraPrev_C::STATIC_SpawnCameraFromClass(class UClass* cameraClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.SpawnCameraFromClass");

	Uwgt_TalkCameraPrev_C_SpawnCameraFromClass_Params params;
	params.cameraClass = cameraClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.CheckCameraKind
// (Exec, Native, MulticastDelegate, Protected, Delegate, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            mask                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uwgt_TalkCameraPrev_C::CheckCameraKind(int mask, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.CheckCameraKind");

	Uwgt_TalkCameraPrev_C_CheckCameraKind_Params params;
	params.mask = mask;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.ToggleWindowSize
// (NetRequest, Native, Static, MulticastDelegate, Public, Private, Protected, NetServer, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void Uwgt_TalkCameraPrev_C::STATIC_ToggleWindowSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.ToggleWindowSize");

	Uwgt_TalkCameraPrev_C_ToggleWindowSize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.CheckLookAtSocket
// (NetRequest, Exec, Event, NetResponse, Static, NetMulticast, Public, Protected, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            mask                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uwgt_TalkCameraPrev_C::STATIC_CheckLookAtSocket(int mask, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.CheckLookAtSocket");

	Uwgt_TalkCameraPrev_C_CheckLookAtSocket_Params params;
	params.mask = mask;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.CheckDistance
// (Net, NetReliable, NetRequest, Event, NetResponse, Static, MulticastDelegate, Public, Protected, Delegate, NetServer, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            mask                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uwgt_TalkCameraPrev_C::STATIC_CheckDistance(int mask, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.CheckDistance");

	Uwgt_TalkCameraPrev_C_CheckDistance_Params params;
	params.mask = mask;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.CheckAngle
// (Exec, Native, Event, Static, NetMulticast, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            mask                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uwgt_TalkCameraPrev_C::STATIC_CheckAngle(int mask, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.CheckAngle");

	Uwgt_TalkCameraPrev_C_CheckAngle_Params params;
	params.mask = mask;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.CheckShoulderOrNot
// (Exec, Native, Event, NetResponse, Static, MulticastDelegate, Private, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            mask                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uwgt_TalkCameraPrev_C::STATIC_CheckShoulderOrNot(int mask, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.CheckShoulderOrNot");

	Uwgt_TalkCameraPrev_C_CheckShoulderOrNot_Params params;
	params.mask = mask;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.CheckPersonNum
// (NetReliable, Event, MulticastDelegate, Protected, Delegate, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            mask                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uwgt_TalkCameraPrev_C::CheckPersonNum(int mask, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.CheckPersonNum");

	Uwgt_TalkCameraPrev_C_CheckPersonNum_Params params;
	params.mask = mask;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.Refresh
// (Native, NetResponse, Static, NetMulticast, MulticastDelegate, Private, DLLImport, BlueprintEvent, BlueprintPure)

void Uwgt_TalkCameraPrev_C::STATIC_Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.Refresh");

	Uwgt_TalkCameraPrev_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.GetFilterdCameras
// (NetRequest, Native, Event, NetMulticast, MulticastDelegate, Public, Protected, Delegate, NetServer, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UClass*>          Cameras                        (Parm, OutParm, ZeroConstructor)

void Uwgt_TalkCameraPrev_C::GetFilterdCameras(TArray<class UClass*>* Cameras)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.GetFilterdCameras");

	Uwgt_TalkCameraPrev_C_GetFilterdCameras_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Cameras != nullptr)
		*Cameras = params.Cameras;
}


// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.CheckCameraCollision
// (Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Private, Protected, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// class UClass*                  TalkCamera                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsAvailable                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<struct FHitResult>      HitResults                     (Parm, OutParm, ZeroConstructor)

void Uwgt_TalkCameraPrev_C::STATIC_CheckCameraCollision(class UClass* TalkCamera, bool* IsAvailable, TArray<struct FHitResult>* HitResults)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.CheckCameraCollision");

	Uwgt_TalkCameraPrev_C_CheckCameraCollision_Params params;
	params.TalkCamera = TalkCamera;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsAvailable != nullptr)
		*IsAvailable = params.IsAvailable;
	if (HitResults != nullptr)
		*HitResults = params.HitResults;
}


// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.ResetCollisionErrorText
// (Net, Native, Event, Private, Protected, NetClient, Const)

void Uwgt_TalkCameraPrev_C::ResetCollisionErrorText()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.ResetCollisionErrorText");

	Uwgt_TalkCameraPrev_C_ResetCollisionErrorText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.SetCollisionErrorText
// (Static, NetMulticast, MulticastDelegate, Public, Protected, Delegate, NetServer, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           IsHit                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FHitResult>      HitResults                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void Uwgt_TalkCameraPrev_C::STATIC_SetCollisionErrorText(bool IsHit, TArray<struct FHitResult>* HitResults)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.SetCollisionErrorText");

	Uwgt_TalkCameraPrev_C_SetCollisionErrorText_Params params;
	params.IsHit = IsHit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitResults != nullptr)
		*HitResults = params.HitResults;
}


// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.CanUseCamera
// (Native, Public, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                  cameraClass                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uwgt_TalkCameraPrev_C::CanUseCamera(class UClass* cameraClass, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.CanUseCamera");

	Uwgt_TalkCameraPrev_C_CanUseCamera_Params params;
	params.cameraClass = cameraClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.OnKeyDown
// (NetReliable, NetRequest, Exec, Native, Event, Private, Delegate, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent               InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Uwgt_TalkCameraPrev_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.OnKeyDown");

	Uwgt_TalkCameraPrev_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.OnPreviewKeyDown
// (Native, NetResponse, Static, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent               InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Uwgt_TalkCameraPrev_C::STATIC_OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.OnPreviewKeyDown");

	Uwgt_TalkCameraPrev_C_OnPreviewKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.ChangePrevCamera
// (NetRequest, Exec, Native, Static, MulticastDelegate, Private, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void Uwgt_TalkCameraPrev_C::STATIC_ChangePrevCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.ChangePrevCamera");

	Uwgt_TalkCameraPrev_C_ChangePrevCamera_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.GetPrevDefautTalkCamera
// (Net, Exec, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Protected, Delegate, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  cameraClass                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uwgt_TalkCameraPrev_C::STATIC_GetPrevDefautTalkCamera(class UClass** cameraClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.GetPrevDefautTalkCamera");

	Uwgt_TalkCameraPrev_C_GetPrevDefautTalkCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (cameraClass != nullptr)
		*cameraClass = params.cameraClass;
}


// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.ChangeNextCamera
// (Exec, Native, Static, MulticastDelegate, Private, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void Uwgt_TalkCameraPrev_C::STATIC_ChangeNextCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.ChangeNextCamera");

	Uwgt_TalkCameraPrev_C_ChangeNextCamera_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.GetNextDefautTalkCamera
// (NetRequest, Exec, Event, MulticastDelegate, Protected, Delegate, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  cameraClass                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uwgt_TalkCameraPrev_C::GetNextDefautTalkCamera(class UClass** cameraClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.GetNextDefautTalkCamera");

	Uwgt_TalkCameraPrev_C_GetNextDefautTalkCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (cameraClass != nullptr)
		*cameraClass = params.cameraClass;
}


// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.SetCameraName
// (NetRequest, Native, Static, MulticastDelegate, Private, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 Object                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_TalkCameraPrev_C::STATIC_SetCameraName(class UObject* Object)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.SetCameraName");

	Uwgt_TalkCameraPrev_C_SetCameraName_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.Construct
// (Net, Event, Static, Public, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure, Const)

void Uwgt_TalkCameraPrev_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.Construct");

	Uwgt_TalkCameraPrev_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.Destruct
// (Event, Static, Public, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure, Const)

void Uwgt_TalkCameraPrev_C::STATIC_Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.Destruct");

	Uwgt_TalkCameraPrev_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.BndEvt__NextButton_K2Node_ComponentBoundEvent_84_OnButtonClickedEvent__DelegateSignature
// (Event, Static, Public, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure, Const)

void Uwgt_TalkCameraPrev_C::STATIC_BndEvt__NextButton_K2Node_ComponentBoundEvent_84_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.BndEvt__NextButton_K2Node_ComponentBoundEvent_84_OnButtonClickedEvent__DelegateSignature");

	Uwgt_TalkCameraPrev_C_BndEvt__NextButton_K2Node_ComponentBoundEvent_84_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.BndEvt__PrevButton_K2Node_ComponentBoundEvent_85_OnButtonClickedEvent__DelegateSignature
// (Net, NetReliable, NetRequest, Exec, Native, Static, Public, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure, Const)

void Uwgt_TalkCameraPrev_C::STATIC_BndEvt__PrevButton_K2Node_ComponentBoundEvent_85_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.BndEvt__PrevButton_K2Node_ComponentBoundEvent_85_OnButtonClickedEvent__DelegateSignature");

	Uwgt_TalkCameraPrev_C_BndEvt__PrevButton_K2Node_ComponentBoundEvent_85_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.BndEvt__rejectCameraByCollision_K2Node_ComponentBoundEvent_86_OnCheckBoxComponentStateChanged__DelegateSignature
// (Net, NetRequest, Native, Event, Static, Public, Private, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           bIsChecked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_TalkCameraPrev_C::STATIC_BndEvt__rejectCameraByCollision_K2Node_ComponentBoundEvent_86_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.BndEvt__rejectCameraByCollision_K2Node_ComponentBoundEvent_86_OnCheckBoxComponentStateChanged__DelegateSignature");

	Uwgt_TalkCameraPrev_C_BndEvt__rejectCameraByCollision_K2Node_ComponentBoundEvent_86_OnCheckBoxComponentStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.BndEvt__CheckCollision_K2Node_ComponentBoundEvent_87_OnCheckBoxComponentStateChanged__DelegateSignature
// (NetRequest, Native, Event, Static, Public, Private, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           bIsChecked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_TalkCameraPrev_C::STATIC_BndEvt__CheckCollision_K2Node_ComponentBoundEvent_87_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.BndEvt__CheckCollision_K2Node_ComponentBoundEvent_87_OnCheckBoxComponentStateChanged__DelegateSignature");

	Uwgt_TalkCameraPrev_C_BndEvt__CheckCollision_K2Node_ComponentBoundEvent_87_OnCheckBoxComponentStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.Tick
// (NetReliable, NetRequest, Native, NetResponse, NetMulticast, MulticastDelegate, Public, NetServer, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_TalkCameraPrev_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.Tick");

	Uwgt_TalkCameraPrev_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.BndEvt__CheckBox_3_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
// (Net, NetReliable, Native, Event, Static, Public, Private, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           bIsChecked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_TalkCameraPrev_C::STATIC_BndEvt__CheckBox_3_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.BndEvt__CheckBox_3_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature");

	Uwgt_TalkCameraPrev_C_BndEvt__CheckBox_3_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.BndEvt__CheckBox_4_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature
// (Net, NetReliable, Native, Event, Static, Public, Private, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           bIsChecked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_TalkCameraPrev_C::STATIC_BndEvt__CheckBox_4_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.BndEvt__CheckBox_4_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature");

	Uwgt_TalkCameraPrev_C_BndEvt__CheckBox_4_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.BndEvt__CheckBox_5_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature
// (NetReliable, Native, Event, Static, Public, Private, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           bIsChecked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_TalkCameraPrev_C::STATIC_BndEvt__CheckBox_5_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.BndEvt__CheckBox_5_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature");

	Uwgt_TalkCameraPrev_C_BndEvt__CheckBox_5_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.BndEvt__Single_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature
// (Net, Native, Event, Static, Public, Private, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           bIsChecked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_TalkCameraPrev_C::STATIC_BndEvt__Single_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.BndEvt__Single_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature");

	Uwgt_TalkCameraPrev_C_BndEvt__Single_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.BndEvt__Pair_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature
// (Native, Event, Static, Public, Private, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           bIsChecked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_TalkCameraPrev_C::STATIC_BndEvt__Pair_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.BndEvt__Pair_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature");

	Uwgt_TalkCameraPrev_C_BndEvt__Pair_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.BndEvt__Sholder_K2Node_ComponentBoundEvent_357_OnSelectionChangedEvent__DelegateSignature
// (Net, Native, NetResponse, NetMulticast, MulticastDelegate, Public, NetServer, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FString                 SelectedItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>       SelectionType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_TalkCameraPrev_C::BndEvt__Sholder_K2Node_ComponentBoundEvent_357_OnSelectionChangedEvent__DelegateSignature(const struct FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.BndEvt__Sholder_K2Node_ComponentBoundEvent_357_OnSelectionChangedEvent__DelegateSignature");

	Uwgt_TalkCameraPrev_C_BndEvt__Sholder_K2Node_ComponentBoundEvent_357_OnSelectionChangedEvent__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.BndEvt__Near_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
// (Net, NetReliable, Exec, Native, Event, Static, Public, Private, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           bIsChecked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_TalkCameraPrev_C::STATIC_BndEvt__Near_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.BndEvt__Near_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature");

	Uwgt_TalkCameraPrev_C_BndEvt__Near_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.BndEvt__NotNear_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature
// (NetReliable, Exec, Native, Event, Static, Public, Private, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           bIsChecked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_TalkCameraPrev_C::STATIC_BndEvt__NotNear_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.BndEvt__NotNear_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature");

	Uwgt_TalkCameraPrev_C_BndEvt__NotNear_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.BndEvt__Far_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature
// (Net, Exec, Native, Event, Static, Public, Private, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           bIsChecked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_TalkCameraPrev_C::STATIC_BndEvt__Far_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.BndEvt__Far_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature");

	Uwgt_TalkCameraPrev_C_BndEvt__Far_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.BndEvt__TooFar_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature
// (Net, Exec, Native, Event, Static, Public, Private, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           bIsChecked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_TalkCameraPrev_C::STATIC_BndEvt__TooFar_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.BndEvt__TooFar_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature");

	Uwgt_TalkCameraPrev_C_BndEvt__TooFar_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.BndEvt__Bust_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature
// (Exec, Native, Event, Static, Public, Private, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           bIsChecked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_TalkCameraPrev_C::STATIC_BndEvt__Bust_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.BndEvt__Bust_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature");

	Uwgt_TalkCameraPrev_C_BndEvt__Bust_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.BndEvt__Wast_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature
// (Net, NetReliable, NetRequest, Native, Event, Static, Public, Private, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           bIsChecked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_TalkCameraPrev_C::STATIC_BndEvt__Wast_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.BndEvt__Wast_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature");

	Uwgt_TalkCameraPrev_C_BndEvt__Wast_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.BndEvt__Full_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature
// (NetReliable, NetRequest, Native, Event, Static, Public, Private, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           bIsChecked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_TalkCameraPrev_C::STATIC_BndEvt__Full_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.BndEvt__Full_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature");

	Uwgt_TalkCameraPrev_C_BndEvt__Full_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.BndEvt__Closeup_K2Node_ComponentBoundEvent_7_OnCheckBoxComponentStateChanged__DelegateSignature
// (NetReliable, NetRequest, Native, Event, Static, Public, Private, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           bIsChecked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_TalkCameraPrev_C::STATIC_BndEvt__Closeup_K2Node_ComponentBoundEvent_7_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.BndEvt__Closeup_K2Node_ComponentBoundEvent_7_OnCheckBoxComponentStateChanged__DelegateSignature");

	Uwgt_TalkCameraPrev_C_BndEvt__Closeup_K2Node_ComponentBoundEvent_7_OnCheckBoxComponentStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.BndEvt__SizeToggleButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (NetReliable, Event, Static, Public, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure, Const)

void Uwgt_TalkCameraPrev_C::STATIC_BndEvt__SizeToggleButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.BndEvt__SizeToggleButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	Uwgt_TalkCameraPrev_C_BndEvt__SizeToggleButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.BndEvt__CameraKind_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature
// (NetRequest, Native, NetResponse, NetMulticast, MulticastDelegate, Public, NetServer, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FString                 SelectedItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>       SelectionType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_TalkCameraPrev_C::BndEvt__CameraKind_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(const struct FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.BndEvt__CameraKind_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature");

	Uwgt_TalkCameraPrev_C_BndEvt__CameraKind_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.ExecuteUbergraph_wgt_TalkCameraPrev
// (NetReliable, NetMulticast, MulticastDelegate, Private, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_TalkCameraPrev_C::ExecuteUbergraph_wgt_TalkCameraPrev(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.ExecuteUbergraph_wgt_TalkCameraPrev");

	Uwgt_TalkCameraPrev_C_ExecuteUbergraph_wgt_TalkCameraPrev_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
