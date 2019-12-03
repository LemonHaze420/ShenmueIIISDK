
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

// Function Ansel.AnselFunctionLibrary.StopSession
// ()
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)

void UAnselFunctionLibrary::StopSession(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ansel.AnselFunctionLibrary.StopSession");

	UAnselFunctionLibrary_StopSession_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ansel.AnselFunctionLibrary.StartSession
// ()
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)

void UAnselFunctionLibrary::StartSession(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ansel.AnselFunctionLibrary.StartSession");

	UAnselFunctionLibrary_StartSession_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ansel.AnselFunctionLibrary.SetUIControlVisibility
// ()
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EUIControlEffectTarget> UIControlTarget                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsVisible                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAnselFunctionLibrary::SetUIControlVisibility(class UObject* WorldContextObject, TEnumAsByte<EUIControlEffectTarget> UIControlTarget, bool bIsVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ansel.AnselFunctionLibrary.SetUIControlVisibility");

	UAnselFunctionLibrary_SetUIControlVisibility_Params params;
	params.WorldContextObject = WorldContextObject;
	params.UIControlTarget = UIControlTarget;
	params.bIsVisible = bIsVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ansel.AnselFunctionLibrary.SetSettleFrames
// ()
// Parameters:
// int                            NumSettleFrames                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAnselFunctionLibrary::SetSettleFrames(int NumSettleFrames)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ansel.AnselFunctionLibrary.SetSettleFrames");

	UAnselFunctionLibrary_SetSettleFrames_Params params;
	params.NumSettleFrames = NumSettleFrames;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ansel.AnselFunctionLibrary.SetIsPhotographyAllowed
// ()
// Parameters:
// bool                           bIsPhotographyAllowed          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAnselFunctionLibrary::SetIsPhotographyAllowed(bool bIsPhotographyAllowed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ansel.AnselFunctionLibrary.SetIsPhotographyAllowed");

	UAnselFunctionLibrary_SetIsPhotographyAllowed_Params params;
	params.bIsPhotographyAllowed = bIsPhotographyAllowed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ansel.AnselFunctionLibrary.SetCameraMovementSpeed
// ()
// Parameters:
// float                          TranslationSpeed               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAnselFunctionLibrary::SetCameraMovementSpeed(float TranslationSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ansel.AnselFunctionLibrary.SetCameraMovementSpeed");

	UAnselFunctionLibrary_SetCameraMovementSpeed_Params params;
	params.TranslationSpeed = TranslationSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ansel.AnselFunctionLibrary.SetCameraConstraintDistance
// ()
// Parameters:
// float                          MaxCameraDistance              (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAnselFunctionLibrary::SetCameraConstraintDistance(float MaxCameraDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ansel.AnselFunctionLibrary.SetCameraConstraintDistance");

	UAnselFunctionLibrary_SetCameraConstraintDistance_Params params;
	params.MaxCameraDistance = MaxCameraDistance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ansel.AnselFunctionLibrary.SetCameraConstraintCameraSize
// ()
// Parameters:
// float                          CameraSize                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAnselFunctionLibrary::SetCameraConstraintCameraSize(float CameraSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ansel.AnselFunctionLibrary.SetCameraConstraintCameraSize");

	UAnselFunctionLibrary_SetCameraConstraintCameraSize_Params params;
	params.CameraSize = CameraSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ansel.AnselFunctionLibrary.SetAutoPostprocess
// ()
// Parameters:
// bool                           bShouldAutoPostprocess         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAnselFunctionLibrary::SetAutoPostprocess(bool bShouldAutoPostprocess)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ansel.AnselFunctionLibrary.SetAutoPostprocess");

	UAnselFunctionLibrary_SetAutoPostprocess_Params params;
	params.bShouldAutoPostprocess = bShouldAutoPostprocess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ansel.AnselFunctionLibrary.SetAutoPause
// ()
// Parameters:
// bool                           bShouldAutoPause               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAnselFunctionLibrary::SetAutoPause(bool bShouldAutoPause)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ansel.AnselFunctionLibrary.SetAutoPause");

	UAnselFunctionLibrary_SetAutoPause_Params params;
	params.bShouldAutoPause = bShouldAutoPause;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ansel.AnselFunctionLibrary.IsPhotographyAvailable
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAnselFunctionLibrary::IsPhotographyAvailable()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ansel.AnselFunctionLibrary.IsPhotographyAvailable");

	UAnselFunctionLibrary_IsPhotographyAvailable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Ansel.AnselFunctionLibrary.IsPhotographyAllowed
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAnselFunctionLibrary::IsPhotographyAllowed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ansel.AnselFunctionLibrary.IsPhotographyAllowed");

	UAnselFunctionLibrary_IsPhotographyAllowed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Ansel.AnselFunctionLibrary.ConstrainCameraByGeometry
// ()
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NewCameraLocation              (ConstParm, Parm, IsPlainOldData)
// struct FVector                 PreviousCameraLocation         (ConstParm, Parm, IsPlainOldData)
// struct FVector                 OriginalCameraLocation         (ConstParm, Parm, IsPlainOldData)
// struct FVector                 OutCameraLocation              (Parm, OutParm, IsPlainOldData)

void UAnselFunctionLibrary::ConstrainCameraByGeometry(class UObject* WorldContextObject, const struct FVector& NewCameraLocation, const struct FVector& PreviousCameraLocation, const struct FVector& OriginalCameraLocation, struct FVector* OutCameraLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ansel.AnselFunctionLibrary.ConstrainCameraByGeometry");

	UAnselFunctionLibrary_ConstrainCameraByGeometry_Params params;
	params.WorldContextObject = WorldContextObject;
	params.NewCameraLocation = NewCameraLocation;
	params.PreviousCameraLocation = PreviousCameraLocation;
	params.OriginalCameraLocation = OriginalCameraLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutCameraLocation != nullptr)
		*OutCameraLocation = params.OutCameraLocation;
}


// Function Ansel.AnselFunctionLibrary.ConstrainCameraByDistance
// ()
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NewCameraLocation              (ConstParm, Parm, IsPlainOldData)
// struct FVector                 PreviousCameraLocation         (ConstParm, Parm, IsPlainOldData)
// struct FVector                 OriginalCameraLocation         (ConstParm, Parm, IsPlainOldData)
// struct FVector                 OutCameraLocation              (Parm, OutParm, IsPlainOldData)
// float                          MaxDistance                    (Parm, ZeroConstructor, IsPlainOldData)

void UAnselFunctionLibrary::ConstrainCameraByDistance(class UObject* WorldContextObject, const struct FVector& NewCameraLocation, const struct FVector& PreviousCameraLocation, const struct FVector& OriginalCameraLocation, float MaxDistance, struct FVector* OutCameraLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ansel.AnselFunctionLibrary.ConstrainCameraByDistance");

	UAnselFunctionLibrary_ConstrainCameraByDistance_Params params;
	params.WorldContextObject = WorldContextObject;
	params.NewCameraLocation = NewCameraLocation;
	params.PreviousCameraLocation = PreviousCameraLocation;
	params.OriginalCameraLocation = OriginalCameraLocation;
	params.MaxDistance = MaxDistance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutCameraLocation != nullptr)
		*OutCameraLocation = params.OutCameraLocation;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
