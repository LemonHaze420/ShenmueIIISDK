
#include "../SDK.h"

// Name: Shenmue3SDK, Version: 1.4.1

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function Ansel.AnselFunctionLibrary.StopSession
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)

void UAnselFunctionLibrary::STATIC_StopSession(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ansel.AnselFunctionLibrary.StopSession");

	UAnselFunctionLibrary_StopSession_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ansel.AnselFunctionLibrary.StartSession
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)

void UAnselFunctionLibrary::STATIC_StartSession(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ansel.AnselFunctionLibrary.StartSession");

	UAnselFunctionLibrary_StartSession_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ansel.AnselFunctionLibrary.SetUIControlVisibility
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EUIControlEffectTarget> UIControlTarget                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsVisible                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAnselFunctionLibrary::STATIC_SetUIControlVisibility(class UObject* WorldContextObject, TEnumAsByte<EUIControlEffectTarget> UIControlTarget, bool bIsVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ansel.AnselFunctionLibrary.SetUIControlVisibility");

	UAnselFunctionLibrary_SetUIControlVisibility_Params params;
	params.WorldContextObject = WorldContextObject;
	params.UIControlTarget = UIControlTarget;
	params.bIsVisible = bIsVisible;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ansel.AnselFunctionLibrary.SetSettleFrames
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            NumSettleFrames                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAnselFunctionLibrary::STATIC_SetSettleFrames(int NumSettleFrames)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ansel.AnselFunctionLibrary.SetSettleFrames");

	UAnselFunctionLibrary_SetSettleFrames_Params params;
	params.NumSettleFrames = NumSettleFrames;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ansel.AnselFunctionLibrary.SetIsPhotographyAllowed
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           bIsPhotographyAllowed          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAnselFunctionLibrary::STATIC_SetIsPhotographyAllowed(bool bIsPhotographyAllowed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ansel.AnselFunctionLibrary.SetIsPhotographyAllowed");

	UAnselFunctionLibrary_SetIsPhotographyAllowed_Params params;
	params.bIsPhotographyAllowed = bIsPhotographyAllowed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ansel.AnselFunctionLibrary.SetCameraMovementSpeed
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          TranslationSpeed               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAnselFunctionLibrary::STATIC_SetCameraMovementSpeed(float TranslationSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ansel.AnselFunctionLibrary.SetCameraMovementSpeed");

	UAnselFunctionLibrary_SetCameraMovementSpeed_Params params;
	params.TranslationSpeed = TranslationSpeed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ansel.AnselFunctionLibrary.SetCameraConstraintDistance
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          MaxCameraDistance              (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAnselFunctionLibrary::STATIC_SetCameraConstraintDistance(float MaxCameraDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ansel.AnselFunctionLibrary.SetCameraConstraintDistance");

	UAnselFunctionLibrary_SetCameraConstraintDistance_Params params;
	params.MaxCameraDistance = MaxCameraDistance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ansel.AnselFunctionLibrary.SetCameraConstraintCameraSize
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          CameraSize                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAnselFunctionLibrary::STATIC_SetCameraConstraintCameraSize(float CameraSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ansel.AnselFunctionLibrary.SetCameraConstraintCameraSize");

	UAnselFunctionLibrary_SetCameraConstraintCameraSize_Params params;
	params.CameraSize = CameraSize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ansel.AnselFunctionLibrary.SetAutoPostprocess
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           bShouldAutoPostprocess         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAnselFunctionLibrary::STATIC_SetAutoPostprocess(bool bShouldAutoPostprocess)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ansel.AnselFunctionLibrary.SetAutoPostprocess");

	UAnselFunctionLibrary_SetAutoPostprocess_Params params;
	params.bShouldAutoPostprocess = bShouldAutoPostprocess;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ansel.AnselFunctionLibrary.SetAutoPause
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           bShouldAutoPause               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAnselFunctionLibrary::STATIC_SetAutoPause(bool bShouldAutoPause)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ansel.AnselFunctionLibrary.SetAutoPause");

	UAnselFunctionLibrary_SetAutoPause_Params params;
	params.bShouldAutoPause = bShouldAutoPause;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ansel.AnselFunctionLibrary.IsPhotographyAvailable
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAnselFunctionLibrary::STATIC_IsPhotographyAvailable()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ansel.AnselFunctionLibrary.IsPhotographyAvailable");

	UAnselFunctionLibrary_IsPhotographyAvailable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Ansel.AnselFunctionLibrary.IsPhotographyAllowed
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAnselFunctionLibrary::STATIC_IsPhotographyAllowed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ansel.AnselFunctionLibrary.IsPhotographyAllowed");

	UAnselFunctionLibrary_IsPhotographyAllowed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Ansel.AnselFunctionLibrary.ConstrainCameraByGeometry
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NewCameraLocation              (ConstParm, Parm, IsPlainOldData)
// struct FVector                 PreviousCameraLocation         (ConstParm, Parm, IsPlainOldData)
// struct FVector                 OriginalCameraLocation         (ConstParm, Parm, IsPlainOldData)
// struct FVector                 OutCameraLocation              (Parm, OutParm, IsPlainOldData)

void UAnselFunctionLibrary::STATIC_ConstrainCameraByGeometry(class UObject* WorldContextObject, const struct FVector& NewCameraLocation, const struct FVector& PreviousCameraLocation, const struct FVector& OriginalCameraLocation, struct FVector* OutCameraLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ansel.AnselFunctionLibrary.ConstrainCameraByGeometry");

	UAnselFunctionLibrary_ConstrainCameraByGeometry_Params params;
	params.WorldContextObject = WorldContextObject;
	params.NewCameraLocation = NewCameraLocation;
	params.PreviousCameraLocation = PreviousCameraLocation;
	params.OriginalCameraLocation = OriginalCameraLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutCameraLocation != nullptr)
		*OutCameraLocation = params.OutCameraLocation;
}


// Function Ansel.AnselFunctionLibrary.ConstrainCameraByDistance
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NewCameraLocation              (ConstParm, Parm, IsPlainOldData)
// struct FVector                 PreviousCameraLocation         (ConstParm, Parm, IsPlainOldData)
// struct FVector                 OriginalCameraLocation         (ConstParm, Parm, IsPlainOldData)
// struct FVector                 OutCameraLocation              (Parm, OutParm, IsPlainOldData)
// float                          MaxDistance                    (Parm, ZeroConstructor, IsPlainOldData)

void UAnselFunctionLibrary::STATIC_ConstrainCameraByDistance(class UObject* WorldContextObject, const struct FVector& NewCameraLocation, const struct FVector& PreviousCameraLocation, const struct FVector& OriginalCameraLocation, float MaxDistance, struct FVector* OutCameraLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ansel.AnselFunctionLibrary.ConstrainCameraByDistance");

	UAnselFunctionLibrary_ConstrainCameraByDistance_Params params;
	params.WorldContextObject = WorldContextObject;
	params.NewCameraLocation = NewCameraLocation;
	params.PreviousCameraLocation = PreviousCameraLocation;
	params.OriginalCameraLocation = OriginalCameraLocation;
	params.MaxDistance = MaxDistance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutCameraLocation != nullptr)
		*OutCameraLocation = params.OutCameraLocation;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
