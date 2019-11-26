
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
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  cameraClass                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_TalkCameraPrev_C::SpawnCameraFromClass(class UClass* cameraClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.SpawnCameraFromClass");

	Uwgt_TalkCameraPrev_C_SpawnCameraFromClass_Params params;
	params.cameraClass = cameraClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.CheckCameraKind
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            mask                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uwgt_TalkCameraPrev_C::CheckCameraKind(int mask, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.CheckCameraKind");

	Uwgt_TalkCameraPrev_C_CheckCameraKind_Params params;
	params.mask = mask;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.ToggleWindowSize
// (Public, BlueprintCallable, BlueprintEvent)

void Uwgt_TalkCameraPrev_C::ToggleWindowSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.ToggleWindowSize");

	Uwgt_TalkCameraPrev_C_ToggleWindowSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.CheckLookAtSocket
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            mask                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uwgt_TalkCameraPrev_C::CheckLookAtSocket(int mask, bool* Result)
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
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            mask                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uwgt_TalkCameraPrev_C::CheckDistance(int mask, bool* Result)
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
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            mask                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uwgt_TalkCameraPrev_C::CheckAngle(int mask, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.CheckAngle");

	Uwgt_TalkCameraPrev_C_CheckAngle_Params params;
	params.mask = mask;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.CheckShoulderOrNot
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            mask                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uwgt_TalkCameraPrev_C::CheckShoulderOrNot(int mask, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.CheckShoulderOrNot");

	Uwgt_TalkCameraPrev_C_CheckShoulderOrNot_Params params;
	params.mask = mask;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.CheckPersonNum
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
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
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Uwgt_TalkCameraPrev_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.Refresh");

	Uwgt_TalkCameraPrev_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.GetFilterdCameras
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UClass*>          Cameras                        (Parm, OutParm, ZeroConstructor)

void Uwgt_TalkCameraPrev_C::GetFilterdCameras(TArray<class UClass*>* Cameras)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.GetFilterdCameras");

	Uwgt_TalkCameraPrev_C_GetFilterdCameras_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Cameras != nullptr)
		*Cameras = params.Cameras;
}


// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.CheckCameraCollision
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  TalkCamera                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsAvailable                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<struct FHitResult>      HitResults                     (Parm, OutParm, ZeroConstructor)

void Uwgt_TalkCameraPrev_C::CheckCameraCollision(class UClass* TalkCamera, bool* IsAvailable, TArray<struct FHitResult>* HitResults)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.CheckCameraCollision");

	Uwgt_TalkCameraPrev_C_CheckCameraCollision_Params params;
	params.TalkCamera = TalkCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsAvailable != nullptr)
		*IsAvailable = params.IsAvailable;
	if (HitResults != nullptr)
		*HitResults = params.HitResults;
}


// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.ResetCollisionErrorText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Uwgt_TalkCameraPrev_C::ResetCollisionErrorText()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.ResetCollisionErrorText");

	Uwgt_TalkCameraPrev_C_ResetCollisionErrorText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.SetCollisionErrorText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsHit                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FHitResult>      HitResults                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void Uwgt_TalkCameraPrev_C::SetCollisionErrorText(bool IsHit, TArray<struct FHitResult>* HitResults)
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
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  cameraClass                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uwgt_TalkCameraPrev_C::CanUseCamera(class UClass* cameraClass, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.CanUseCamera");

	Uwgt_TalkCameraPrev_C_CanUseCamera_Params params;
	params.cameraClass = cameraClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
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

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.OnPreviewKeyDown
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent               InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Uwgt_TalkCameraPrev_C::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.OnPreviewKeyDown");

	Uwgt_TalkCameraPrev_C_OnPreviewKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.ChangePrevCamera
// (Public, BlueprintCallable, BlueprintEvent)

void Uwgt_TalkCameraPrev_C::ChangePrevCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.ChangePrevCamera");

	Uwgt_TalkCameraPrev_C_ChangePrevCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.GetPrevDefautTalkCamera
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  cameraClass                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uwgt_TalkCameraPrev_C::GetPrevDefautTalkCamera(class UClass** cameraClass)
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
// (Public, BlueprintCallable, BlueprintEvent)

void Uwgt_TalkCameraPrev_C::ChangeNextCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.ChangeNextCamera");

	Uwgt_TalkCameraPrev_C_ChangeNextCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.GetNextDefautTalkCamera
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
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
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Object                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_TalkCameraPrev_C::SetCameraName(class UObject* Object)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.SetCameraName");

	Uwgt_TalkCameraPrev_C_SetCameraName_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uwgt_TalkCameraPrev_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.Construct");

	Uwgt_TalkCameraPrev_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uwgt_TalkCameraPrev_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.Destruct");

	Uwgt_TalkCameraPrev_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.BndEvt__NextButton_K2Node_ComponentBoundEvent_84_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void Uwgt_TalkCameraPrev_C::BndEvt__NextButton_K2Node_ComponentBoundEvent_84_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.BndEvt__NextButton_K2Node_ComponentBoundEvent_84_OnButtonClickedEvent__DelegateSignature");

	Uwgt_TalkCameraPrev_C_BndEvt__NextButton_K2Node_ComponentBoundEvent_84_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.BndEvt__PrevButton_K2Node_ComponentBoundEvent_85_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void Uwgt_TalkCameraPrev_C::BndEvt__PrevButton_K2Node_ComponentBoundEvent_85_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.BndEvt__PrevButton_K2Node_ComponentBoundEvent_85_OnButtonClickedEvent__DelegateSignature");

	Uwgt_TalkCameraPrev_C_BndEvt__PrevButton_K2Node_ComponentBoundEvent_85_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.BndEvt__rejectCameraByCollision_K2Node_ComponentBoundEvent_86_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_TalkCameraPrev_C::BndEvt__rejectCameraByCollision_K2Node_ComponentBoundEvent_86_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.BndEvt__rejectCameraByCollision_K2Node_ComponentBoundEvent_86_OnCheckBoxComponentStateChanged__DelegateSignature");

	Uwgt_TalkCameraPrev_C_BndEvt__rejectCameraByCollision_K2Node_ComponentBoundEvent_86_OnCheckBoxComponentStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.BndEvt__CheckCollision_K2Node_ComponentBoundEvent_87_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_TalkCameraPrev_C::BndEvt__CheckCollision_K2Node_ComponentBoundEvent_87_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.BndEvt__CheckCollision_K2Node_ComponentBoundEvent_87_OnCheckBoxComponentStateChanged__DelegateSignature");

	Uwgt_TalkCameraPrev_C_BndEvt__CheckCollision_K2Node_ComponentBoundEvent_87_OnCheckBoxComponentStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
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

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.BndEvt__CheckBox_3_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_TalkCameraPrev_C::BndEvt__CheckBox_3_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.BndEvt__CheckBox_3_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature");

	Uwgt_TalkCameraPrev_C_BndEvt__CheckBox_3_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.BndEvt__CheckBox_4_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_TalkCameraPrev_C::BndEvt__CheckBox_4_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.BndEvt__CheckBox_4_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature");

	Uwgt_TalkCameraPrev_C_BndEvt__CheckBox_4_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.BndEvt__CheckBox_5_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_TalkCameraPrev_C::BndEvt__CheckBox_5_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.BndEvt__CheckBox_5_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature");

	Uwgt_TalkCameraPrev_C_BndEvt__CheckBox_5_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.BndEvt__Single_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_TalkCameraPrev_C::BndEvt__Single_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.BndEvt__Single_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature");

	Uwgt_TalkCameraPrev_C_BndEvt__Single_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.BndEvt__Pair_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_TalkCameraPrev_C::BndEvt__Pair_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.BndEvt__Pair_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature");

	Uwgt_TalkCameraPrev_C_BndEvt__Pair_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.BndEvt__Sholder_K2Node_ComponentBoundEvent_357_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
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

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.BndEvt__Near_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_TalkCameraPrev_C::BndEvt__Near_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.BndEvt__Near_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature");

	Uwgt_TalkCameraPrev_C_BndEvt__Near_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.BndEvt__NotNear_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_TalkCameraPrev_C::BndEvt__NotNear_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.BndEvt__NotNear_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature");

	Uwgt_TalkCameraPrev_C_BndEvt__NotNear_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.BndEvt__Far_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_TalkCameraPrev_C::BndEvt__Far_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.BndEvt__Far_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature");

	Uwgt_TalkCameraPrev_C_BndEvt__Far_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.BndEvt__TooFar_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_TalkCameraPrev_C::BndEvt__TooFar_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.BndEvt__TooFar_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature");

	Uwgt_TalkCameraPrev_C_BndEvt__TooFar_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.BndEvt__Bust_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_TalkCameraPrev_C::BndEvt__Bust_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.BndEvt__Bust_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature");

	Uwgt_TalkCameraPrev_C_BndEvt__Bust_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.BndEvt__Wast_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_TalkCameraPrev_C::BndEvt__Wast_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.BndEvt__Wast_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature");

	Uwgt_TalkCameraPrev_C_BndEvt__Wast_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.BndEvt__Full_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_TalkCameraPrev_C::BndEvt__Full_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.BndEvt__Full_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature");

	Uwgt_TalkCameraPrev_C_BndEvt__Full_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.BndEvt__Closeup_K2Node_ComponentBoundEvent_7_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_TalkCameraPrev_C::BndEvt__Closeup_K2Node_ComponentBoundEvent_7_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.BndEvt__Closeup_K2Node_ComponentBoundEvent_7_OnCheckBoxComponentStateChanged__DelegateSignature");

	Uwgt_TalkCameraPrev_C_BndEvt__Closeup_K2Node_ComponentBoundEvent_7_OnCheckBoxComponentStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.BndEvt__SizeToggleButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void Uwgt_TalkCameraPrev_C::BndEvt__SizeToggleButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.BndEvt__SizeToggleButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	Uwgt_TalkCameraPrev_C_BndEvt__SizeToggleButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.BndEvt__CameraKind_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
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

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.ExecuteUbergraph_wgt_TalkCameraPrev
// (HasDefaults)
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
