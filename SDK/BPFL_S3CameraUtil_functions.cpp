
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

// Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.TryGetSpecifiedCalcRotationSpeaker
// (Static, Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class USceneComponent* UBPFL_S3CameraUtil_C::STATIC_TryGetSpecifiedCalcRotationSpeaker(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.TryGetSpecifiedCalcRotationSpeaker");

	UBPFL_S3CameraUtil_C_TryGetSpecifiedCalcRotationSpeaker_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.ToCameraAngleMaskFromClass
// (Static, Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  In                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            mask                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPFL_S3CameraUtil_C::STATIC_ToCameraAngleMaskFromClass(class UClass* In, class UObject* __WorldContext, int* mask)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.ToCameraAngleMaskFromClass");

	UBPFL_S3CameraUtil_C_ToCameraAngleMaskFromClass_Params params;
	params.In = In;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (mask != nullptr)
		*mask = params.mask;
}


// Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.ToCameraFramingMaskFromClass
// (Static, Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  In                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            mask                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPFL_S3CameraUtil_C::STATIC_ToCameraFramingMaskFromClass(class UClass* In, class UObject* __WorldContext, int* mask)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.ToCameraFramingMaskFromClass");

	UBPFL_S3CameraUtil_C_ToCameraFramingMaskFromClass_Params params;
	params.In = In;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (mask != nullptr)
		*mask = params.mask;
}


// Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.ToCameraPairOrSingleMaskFromClass
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  In                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            mask                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPFL_S3CameraUtil_C::STATIC_ToCameraPairOrSingleMaskFromClass(class UClass* In, class UObject* __WorldContext, int* mask)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.ToCameraPairOrSingleMaskFromClass");

	UBPFL_S3CameraUtil_C_ToCameraPairOrSingleMaskFromClass_Params params;
	params.In = In;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (mask != nullptr)
		*mask = params.mask;
}


// Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.SphereTraceForObjectsByTwoSide
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPFL_S3CameraUtil_C::STATIC_SphereTraceForObjectsByTwoSide(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.SphereTraceForObjectsByTwoSide");

	UBPFL_S3CameraUtil_C_SphereTraceForObjectsByTwoSide_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.IsSeeableFromCamera
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FVector>         CameraLocus                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class AActor*                  TargetActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   TargetSocketName               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>          _IgnoreActor                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           isDebug                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          SphereTraceRadius              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<TEnumAsByte<EObjectTypeQuery>> InObjectType                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPFL_S3CameraUtil_C::STATIC_IsSeeableFromCamera(class AActor* TargetActor, const struct FName& TargetSocketName, bool isDebug, float SphereTraceRadius, class UObject* __WorldContext, TArray<struct FVector>* CameraLocus, TArray<class AActor*>* _IgnoreActor, TArray<TEnumAsByte<EObjectTypeQuery>>* InObjectType, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.IsSeeableFromCamera");

	UBPFL_S3CameraUtil_C_IsSeeableFromCamera_Params params;
	params.TargetActor = TargetActor;
	params.TargetSocketName = TargetSocketName;
	params.isDebug = isDebug;
	params.SphereTraceRadius = SphereTraceRadius;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CameraLocus != nullptr)
		*CameraLocus = params.CameraLocus;
	if (_IgnoreActor != nullptr)
		*_IgnoreActor = params._IgnoreActor;
	if (InObjectType != nullptr)
		*InObjectType = params.InObjectType;
	if (Result != nullptr)
		*Result = params.Result;
}


// Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.CheckSeeableForManyTargets
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FVector>         InLocus                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// float                          InBottomSeeableRate            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class ABP_S3CharacterBase_C*> TargetActors                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<TEnumAsByte<EObjectTypeQuery>> InObjectType                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           isDebug                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EM_LeftOrRight>    CameraPosition                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FST_CameraInitialProperty InitalCameraProperty           (BlueprintVisible, BlueprintReadOnly, Parm)
// TArray<class AActor*>          IgnoreActor                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FName                   SocketName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPFL_S3CameraUtil_C::STATIC_CheckSeeableForManyTargets(float InBottomSeeableRate, bool isDebug, TEnumAsByte<EM_LeftOrRight> CameraPosition, const struct FST_CameraInitialProperty& InitalCameraProperty, const struct FName& SocketName, class UObject* __WorldContext, TArray<struct FVector>* InLocus, TArray<class ABP_S3CharacterBase_C*>* TargetActors, TArray<TEnumAsByte<EObjectTypeQuery>>* InObjectType, TArray<class AActor*>* IgnoreActor, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.CheckSeeableForManyTargets");

	UBPFL_S3CameraUtil_C_CheckSeeableForManyTargets_Params params;
	params.InBottomSeeableRate = InBottomSeeableRate;
	params.isDebug = isDebug;
	params.CameraPosition = CameraPosition;
	params.InitalCameraProperty = InitalCameraProperty;
	params.SocketName = SocketName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InLocus != nullptr)
		*InLocus = params.InLocus;
	if (TargetActors != nullptr)
		*TargetActors = params.TargetActors;
	if (InObjectType != nullptr)
		*InObjectType = params.InObjectType;
	if (IgnoreActor != nullptr)
		*IgnoreActor = params.IgnoreActor;
	if (Result != nullptr)
		*Result = params.Result;
}


// Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.isSameDirection
// (Static, Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 From                           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 Target1                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 Target2                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          ToleranceAngle                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPFL_S3CameraUtil_C::STATIC_isSameDirection(const struct FVector& From, const struct FVector& Target1, const struct FVector& Target2, float ToleranceAngle, class UObject* __WorldContext, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.isSameDirection");

	UBPFL_S3CameraUtil_C_isSameDirection_Params params;
	params.From = From;
	params.Target1 = Target1;
	params.Target2 = Target2;
	params.ToleranceAngle = ToleranceAngle;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.IsStraight
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor1                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor2                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor3                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsStraight                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPFL_S3CameraUtil_C::STATIC_IsStraight(class AActor* Actor1, class AActor* Actor2, class AActor* Actor3, class UObject* __WorldContext, bool* IsStraight)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.IsStraight");

	UBPFL_S3CameraUtil_C_IsStraight_Params params;
	params.Actor1 = Actor1;
	params.Actor2 = Actor2;
	params.Actor3 = Actor3;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsStraight != nullptr)
		*IsStraight = params.IsStraight;
}


// Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.ToCameraPairOrSingleMaskFromName
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 In                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            mask                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPFL_S3CameraUtil_C::STATIC_ToCameraPairOrSingleMaskFromName(const struct FString& In, class UObject* __WorldContext, int* mask)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.ToCameraPairOrSingleMaskFromName");

	UBPFL_S3CameraUtil_C_ToCameraPairOrSingleMaskFromName_Params params;
	params.In = In;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (mask != nullptr)
		*mask = params.mask;
}


// Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.ToCameraAngleMaskFromName
// (Static, Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 In                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            mask                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPFL_S3CameraUtil_C::STATIC_ToCameraAngleMaskFromName(const struct FString& In, class UObject* __WorldContext, int* mask)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.ToCameraAngleMaskFromName");

	UBPFL_S3CameraUtil_C_ToCameraAngleMaskFromName_Params params;
	params.In = In;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (mask != nullptr)
		*mask = params.mask;
}


// Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.ToCameraFramingMaskFromName
// (Static, Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 In                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            mask                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPFL_S3CameraUtil_C::STATIC_ToCameraFramingMaskFromName(const struct FString& In, class UObject* __WorldContext, int* mask)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.ToCameraFramingMaskFromName");

	UBPFL_S3CameraUtil_C_ToCameraFramingMaskFromName_Params params;
	params.In = In;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (mask != nullptr)
		*mask = params.mask;
}


// Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.ParseCameraClassToIntensionMask
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  cameraClass                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            retMask                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FRotator                retRotate                      (Parm, OutParm, IsPlainOldData)
// bool                           bError                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPFL_S3CameraUtil_C::STATIC_ParseCameraClassToIntensionMask(class UClass* cameraClass, class UObject* __WorldContext, int* retMask, struct FRotator* retRotate, bool* bError)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.ParseCameraClassToIntensionMask");

	UBPFL_S3CameraUtil_C_ParseCameraClassToIntensionMask_Params params;
	params.cameraClass = cameraClass;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (retMask != nullptr)
		*retMask = params.retMask;
	if (retRotate != nullptr)
		*retRotate = params.retRotate;
	if (bError != nullptr)
		*bError = params.bError;
}


// Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.CameraClassNameToBitMask
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Camera                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPFL_S3CameraUtil_C::STATIC_CameraClassNameToBitMask(class UClass* Camera, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.CameraClassNameToBitMask");

	UBPFL_S3CameraUtil_C_CameraClassNameToBitMask_Params params;
	params.Camera = Camera;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.DistanceToBitmask
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Distance                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            mask                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPFL_S3CameraUtil_C::STATIC_DistanceToBitmask(float Distance, class UObject* __WorldContext, int* mask)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.DistanceToBitmask");

	UBPFL_S3CameraUtil_C_DistanceToBitmask_Params params;
	params.Distance = Distance;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (mask != nullptr)
		*mask = params.mask;
}


// Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.CalcInfoFromMultiplePersonCamera
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  MultiplePersonCameraClass      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPFL_S3CameraUtil_C::STATIC_CalcInfoFromMultiplePersonCamera(class UClass* MultiplePersonCameraClass, class UObject* __WorldContext, int* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.CalcInfoFromMultiplePersonCamera");

	UBPFL_S3CameraUtil_C_CalcInfoFromMultiplePersonCamera_Params params;
	params.MultiplePersonCameraClass = MultiplePersonCameraClass;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.CalcInfoFromLookAtCameraClass
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  LookAtCamera                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            retMask                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPFL_S3CameraUtil_C::STATIC_CalcInfoFromLookAtCameraClass(class UClass* LookAtCamera, class UObject* __WorldContext, int* retMask)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.CalcInfoFromLookAtCameraClass");

	UBPFL_S3CameraUtil_C_CalcInfoFromLookAtCameraClass_Params params;
	params.LookAtCamera = LookAtCamera;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (retMask != nullptr)
		*retMask = params.retMask;
}


// Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.CalcInfoFromDefaltTalkCameraClass
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  DefaultTalkCamera              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Rotator                        (Parm, OutParm, IsPlainOldData)

void UBPFL_S3CameraUtil_C::STATIC_CalcInfoFromDefaltTalkCameraClass(class UClass* DefaultTalkCamera, class UObject* __WorldContext, int* Result, struct FRotator* Rotator)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.CalcInfoFromDefaltTalkCameraClass");

	UBPFL_S3CameraUtil_C_CalcInfoFromDefaltTalkCameraClass_Params params;
	params.DefaultTalkCamera = DefaultTalkCamera;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
	if (Rotator != nullptr)
		*Rotator = params.Rotator;
}


// Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.CalcCameraInfo
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  BaseTalkCameraClass            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EN_AutoTalkCameraInfo> CameraInfo                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPFL_S3CameraUtil_C::STATIC_CalcCameraInfo(class UClass* BaseTalkCameraClass, class UObject* __WorldContext, TEnumAsByte<EN_AutoTalkCameraInfo>* CameraInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.CalcCameraInfo");

	UBPFL_S3CameraUtil_C_CalcCameraInfo_Params params;
	params.BaseTalkCameraClass = BaseTalkCameraClass;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CameraInfo != nullptr)
		*CameraInfo = params.CameraInfo;
}


// Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.TryGetRightVector
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USkeletalMeshComponent*  Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Right                          (Parm, OutParm, IsPlainOldData)

void UBPFL_S3CameraUtil_C::STATIC_TryGetRightVector(class USkeletalMeshComponent* Target, class UObject* __WorldContext, struct FVector* Right)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.TryGetRightVector");

	UBPFL_S3CameraUtil_C_TryGetRightVector_Params params;
	params.Target = Target;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Right != nullptr)
		*Right = params.Right;
}


// Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.TryGetForwardVector
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USkeletalMeshComponent*  Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Forward                        (Parm, OutParm, IsPlainOldData)

void UBPFL_S3CameraUtil_C::STATIC_TryGetForwardVector(class USkeletalMeshComponent* Target, class UObject* __WorldContext, struct FVector* Forward)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.TryGetForwardVector");

	UBPFL_S3CameraUtil_C_TryGetForwardVector_Params params;
	params.Target = Target;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Forward != nullptr)
		*Forward = params.Forward;
}


// Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.CalcLookAtCameraLocus
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  LookAtCameraClass              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EM_LeftOrRight>    _CameraPosition1               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent*  SpeakingSkeletalMesh1          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class USkeletalMeshComponent*  ListeningSkeletalMesh1         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           debug1                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector>         Locus                          (Parm, OutParm, ZeroConstructor)

void UBPFL_S3CameraUtil_C::STATIC_CalcLookAtCameraLocus(class UClass* LookAtCameraClass, TEnumAsByte<EM_LeftOrRight> _CameraPosition1, class USkeletalMeshComponent* SpeakingSkeletalMesh1, class USkeletalMeshComponent* ListeningSkeletalMesh1, bool debug1, class UObject* __WorldContext, TArray<struct FVector>* Locus)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.CalcLookAtCameraLocus");

	UBPFL_S3CameraUtil_C_CalcLookAtCameraLocus_Params params;
	params.LookAtCameraClass = LookAtCameraClass;
	params._CameraPosition1 = _CameraPosition1;
	params.SpeakingSkeletalMesh1 = SpeakingSkeletalMesh1;
	params.ListeningSkeletalMesh1 = ListeningSkeletalMesh1;
	params.debug1 = debug1;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Locus != nullptr)
		*Locus = params.Locus;
}


// Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.CalcMultiplePersonCameraLocus
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  MultiplePersonCamera           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AS3Character*>    Targets                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector>         Locus                          (Parm, OutParm, ZeroConstructor)

void UBPFL_S3CameraUtil_C::STATIC_CalcMultiplePersonCameraLocus(class UClass* MultiplePersonCamera, class UObject* __WorldContext, TArray<class AS3Character*>* Targets, TArray<struct FVector>* Locus)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.CalcMultiplePersonCameraLocus");

	UBPFL_S3CameraUtil_C_CalcMultiplePersonCameraLocus_Params params;
	params.MultiplePersonCamera = MultiplePersonCamera;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Targets != nullptr)
		*Targets = params.Targets;
	if (Locus != nullptr)
		*Locus = params.Locus;
}


// Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.isAvailavleFromParam
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_CameraInitialProperty InitialCameraProperty          (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           EnableSpin                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FST_CameraSpinProperty  SpinProperty                   (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           EnableDollyZoom                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FST_CameraDollyZoomProperty DollyZoomProperty              (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            DivNum                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent*  SpeakingSkeletalMesh           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class USkeletalMeshComponent*  ListeningSkeletalMesh          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TEnumAsByte<EM_LeftOrRight>    CameraPosition                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           isDebugDraw                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          resultSeeableRate              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<struct FHitResult>      HitResult                      (Parm, OutParm, ZeroConstructor)

void UBPFL_S3CameraUtil_C::STATIC_isAvailavleFromParam(const struct FST_CameraInitialProperty& InitialCameraProperty, bool EnableSpin, const struct FST_CameraSpinProperty& SpinProperty, bool EnableDollyZoom, const struct FST_CameraDollyZoomProperty& DollyZoomProperty, int DivNum, class USkeletalMeshComponent* SpeakingSkeletalMesh, class USkeletalMeshComponent* ListeningSkeletalMesh, TEnumAsByte<EM_LeftOrRight> CameraPosition, float Radius, bool isDebugDraw, class UObject* __WorldContext, TArray<TEnumAsByte<EObjectTypeQuery>>* ObjectTypes, bool* Result, float* resultSeeableRate, TArray<struct FHitResult>* HitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.isAvailavleFromParam");

	UBPFL_S3CameraUtil_C_isAvailavleFromParam_Params params;
	params.InitialCameraProperty = InitialCameraProperty;
	params.EnableSpin = EnableSpin;
	params.SpinProperty = SpinProperty;
	params.EnableDollyZoom = EnableDollyZoom;
	params.DollyZoomProperty = DollyZoomProperty;
	params.DivNum = DivNum;
	params.SpeakingSkeletalMesh = SpeakingSkeletalMesh;
	params.ListeningSkeletalMesh = ListeningSkeletalMesh;
	params.CameraPosition = CameraPosition;
	params.Radius = Radius;
	params.isDebugDraw = isDebugDraw;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ObjectTypes != nullptr)
		*ObjectTypes = params.ObjectTypes;
	if (Result != nullptr)
		*Result = params.Result;
	if (resultSeeableRate != nullptr)
		*resultSeeableRate = params.resultSeeableRate;
	if (HitResult != nullptr)
		*HitResult = params.HitResult;
}


// Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.GetRandomCameraInRange
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  CameraClass1                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  CameraClass2                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FST_CameraInitialProperty CameraInitialProperty          (Parm, OutParm)
// struct FST_CameraSpinProperty  CameraSpin                     (Parm, OutParm)
// struct FST_CameraDollyZoomProperty CameraDolly                    (Parm, OutParm)

void UBPFL_S3CameraUtil_C::STATIC_GetRandomCameraInRange(class UClass* CameraClass1, class UClass* CameraClass2, class UObject* __WorldContext, struct FST_CameraInitialProperty* CameraInitialProperty, struct FST_CameraSpinProperty* CameraSpin, struct FST_CameraDollyZoomProperty* CameraDolly)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.GetRandomCameraInRange");

	UBPFL_S3CameraUtil_C_GetRandomCameraInRange_Params params;
	params.CameraClass1 = CameraClass1;
	params.CameraClass2 = CameraClass2;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CameraInitialProperty != nullptr)
		*CameraInitialProperty = params.CameraInitialProperty;
	if (CameraSpin != nullptr)
		*CameraSpin = params.CameraSpin;
	if (CameraDolly != nullptr)
		*CameraDolly = params.CameraDolly;
}


// Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.RandomDollyInRange
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_CameraDollyZoomProperty Min                            (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FST_CameraDollyZoomProperty Max                            (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FST_CameraDollyZoomProperty Result                         (Parm, OutParm)

void UBPFL_S3CameraUtil_C::STATIC_RandomDollyInRange(const struct FST_CameraDollyZoomProperty& Min, const struct FST_CameraDollyZoomProperty& Max, class UObject* __WorldContext, struct FST_CameraDollyZoomProperty* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.RandomDollyInRange");

	UBPFL_S3CameraUtil_C_RandomDollyInRange_Params params;
	params.Min = Min;
	params.Max = Max;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.CheckBreadthOfRightAndLeftSpaceInDome
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Center                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 XVector                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          Length                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          DeltaAngle                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<TEnumAsByte<EObjectTypeQuery>> HitCheckObjectType             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           isDrawDebug                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EM_LeftOrRight>    SpaciousArea                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          LeftHitRate                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          RightHitRate                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPFL_S3CameraUtil_C::STATIC_CheckBreadthOfRightAndLeftSpaceInDome(const struct FVector& Center, const struct FVector& XVector, float Length, float DeltaAngle, bool isDrawDebug, class UObject* __WorldContext, TArray<TEnumAsByte<EObjectTypeQuery>>* HitCheckObjectType, TEnumAsByte<EM_LeftOrRight>* SpaciousArea, float* LeftHitRate, float* RightHitRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.CheckBreadthOfRightAndLeftSpaceInDome");

	UBPFL_S3CameraUtil_C_CheckBreadthOfRightAndLeftSpaceInDome_Params params;
	params.Center = Center;
	params.XVector = XVector;
	params.Length = Length;
	params.DeltaAngle = DeltaAngle;
	params.isDrawDebug = isDrawDebug;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitCheckObjectType != nullptr)
		*HitCheckObjectType = params.HitCheckObjectType;
	if (SpaciousArea != nullptr)
		*SpaciousArea = params.SpaciousArea;
	if (LeftHitRate != nullptr)
		*LeftHitRate = params.LeftHitRate;
	if (RightHitRate != nullptr)
		*RightHitRate = params.RightHitRate;
}


// Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.RandomSpinInRange
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_CameraSpinProperty  Min                            (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FST_CameraSpinProperty  Max                            (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FST_CameraSpinProperty  Result                         (Parm, OutParm)

void UBPFL_S3CameraUtil_C::STATIC_RandomSpinInRange(const struct FST_CameraSpinProperty& Min, const struct FST_CameraSpinProperty& Max, class UObject* __WorldContext, struct FST_CameraSpinProperty* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.RandomSpinInRange");

	UBPFL_S3CameraUtil_C_RandomSpinInRange_Params params;
	params.Min = Min;
	params.Max = Max;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.RandomInitialcameraPropertyInRange
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_CameraInitialProperty Min                            (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FST_CameraInitialProperty Max                            (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           useForcePair_Flag              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           forcePair                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FST_CameraInitialProperty Result                         (Parm, OutParm)

void UBPFL_S3CameraUtil_C::STATIC_RandomInitialcameraPropertyInRange(const struct FST_CameraInitialProperty& Min, const struct FST_CameraInitialProperty& Max, bool useForcePair_Flag, bool forcePair, class UObject* __WorldContext, struct FST_CameraInitialProperty* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.RandomInitialcameraPropertyInRange");

	UBPFL_S3CameraUtil_C_RandomInitialcameraPropertyInRange_Params params;
	params.Min = Min;
	params.Max = Max;
	params.useForcePair_Flag = useForcePair_Flag;
	params.forcePair = forcePair;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.CreatePairTalkCamera
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_CameraInitialProperty MinInitialProperty             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FST_CameraInitialProperty MaxInitialProperty             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FST_CameraSpinProperty  MinSpin                        (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FST_CameraSpinProperty  MaxSpin                        (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FST_CameraDollyZoomProperty MinDolly                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FST_CameraDollyZoomProperty MaxDolly                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPFL_S3CameraUtil_C::STATIC_CreatePairTalkCamera(const struct FST_CameraInitialProperty& MinInitialProperty, const struct FST_CameraInitialProperty& MaxInitialProperty, const struct FST_CameraSpinProperty& MinSpin, const struct FST_CameraSpinProperty& MaxSpin, const struct FST_CameraDollyZoomProperty& MinDolly, const struct FST_CameraDollyZoomProperty& MaxDolly, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.CreatePairTalkCamera");

	UBPFL_S3CameraUtil_C_CreatePairTalkCamera_Params params;
	params.MinInitialProperty = MinInitialProperty;
	params.MaxInitialProperty = MaxInitialProperty;
	params.MinSpin = MinSpin;
	params.MaxSpin = MaxSpin;
	params.MinDolly = MinDolly;
	params.MaxDolly = MaxDolly;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.GetCameraPropertiesFromClass
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  DefaultTalkCameraClass         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FST_CameraInitialProperty InitialCameraProperty          (Parm, OutParm)
// bool                           Enable_Spin                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FST_CameraSpinProperty  Spin_Property                  (Parm, OutParm)
// bool                           Enable_Dolly_Zoom              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FST_CameraDollyZoomProperty Dolly_Zoom_Property            (Parm, OutParm)

void UBPFL_S3CameraUtil_C::STATIC_GetCameraPropertiesFromClass(class UClass* DefaultTalkCameraClass, class UObject* __WorldContext, struct FST_CameraInitialProperty* InitialCameraProperty, bool* Enable_Spin, struct FST_CameraSpinProperty* Spin_Property, bool* Enable_Dolly_Zoom, struct FST_CameraDollyZoomProperty* Dolly_Zoom_Property)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.GetCameraPropertiesFromClass");

	UBPFL_S3CameraUtil_C_GetCameraPropertiesFromClass_Params params;
	params.DefaultTalkCameraClass = DefaultTalkCameraClass;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InitialCameraProperty != nullptr)
		*InitialCameraProperty = params.InitialCameraProperty;
	if (Enable_Spin != nullptr)
		*Enable_Spin = params.Enable_Spin;
	if (Spin_Property != nullptr)
		*Spin_Property = params.Spin_Property;
	if (Enable_Dolly_Zoom != nullptr)
		*Enable_Dolly_Zoom = params.Enable_Dolly_Zoom;
	if (Dolly_Zoom_Property != nullptr)
		*Dolly_Zoom_Property = params.Dolly_Zoom_Property;
}


// Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.DrawDebugLocus
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FVector>         Locus                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FLinearColor            LineColor                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Thickness                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPFL_S3CameraUtil_C::STATIC_DrawDebugLocus(const struct FLinearColor& LineColor, float Duration, float Thickness, class UObject* __WorldContext, TArray<struct FVector>* Locus)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.DrawDebugLocus");

	UBPFL_S3CameraUtil_C_DrawDebugLocus_Params params;
	params.LineColor = LineColor;
	params.Duration = Duration;
	params.Thickness = Thickness;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Locus != nullptr)
		*Locus = params.Locus;
}


// Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.CheckSeeableFromLocusWithRate
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FVector>         Locus                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// float                          BottomSeeableRate              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent*         SpeakerMesh                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class USceneComponent*         ListenerMesh                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           isDebugDraw                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           isPair                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SocketName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EM_LeftOrRight>    CameraPosition                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FST_CameraInitialProperty InitialCameraProperty          (BlueprintVisible, BlueprintReadOnly, Parm)
// TArray<class AActor*>          ActorsToIgnore                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           bTargetReverse                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           isSeeable                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          resultSeeableRate              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<struct FHitResult>      HitResults                     (Parm, OutParm, ZeroConstructor)

void UBPFL_S3CameraUtil_C::STATIC_CheckSeeableFromLocusWithRate(float BottomSeeableRate, class USceneComponent* SpeakerMesh, class USceneComponent* ListenerMesh, bool isDebugDraw, bool isPair, const struct FName& SocketName, TEnumAsByte<EM_LeftOrRight> CameraPosition, const struct FST_CameraInitialProperty& InitialCameraProperty, bool bTargetReverse, class UObject* __WorldContext, TArray<struct FVector>* Locus, TArray<TEnumAsByte<EObjectTypeQuery>>* ObjectTypes, TArray<class AActor*>* ActorsToIgnore, bool* isSeeable, float* resultSeeableRate, TArray<struct FHitResult>* HitResults)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.CheckSeeableFromLocusWithRate");

	UBPFL_S3CameraUtil_C_CheckSeeableFromLocusWithRate_Params params;
	params.BottomSeeableRate = BottomSeeableRate;
	params.SpeakerMesh = SpeakerMesh;
	params.ListenerMesh = ListenerMesh;
	params.isDebugDraw = isDebugDraw;
	params.isPair = isPair;
	params.SocketName = SocketName;
	params.CameraPosition = CameraPosition;
	params.InitialCameraProperty = InitialCameraProperty;
	params.bTargetReverse = bTargetReverse;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Locus != nullptr)
		*Locus = params.Locus;
	if (ObjectTypes != nullptr)
		*ObjectTypes = params.ObjectTypes;
	if (ActorsToIgnore != nullptr)
		*ActorsToIgnore = params.ActorsToIgnore;
	if (isSeeable != nullptr)
		*isSeeable = params.isSeeable;
	if (resultSeeableRate != nullptr)
		*resultSeeableRate = params.resultSeeableRate;
	if (HitResults != nullptr)
		*HitResults = params.HitResults;
}


// Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.CheckHitFromLocus
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FVector>         Locus                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// float                          Radius                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           isDebugDraw                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAllowOverlap                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>          ActorsToIgnore                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           bCheckTwoSide                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           printCollisionMessage          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsHit                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<struct FHitResult>      HitResults                     (Parm, OutParm, ZeroConstructor)

void UBPFL_S3CameraUtil_C::STATIC_CheckHitFromLocus(float Radius, bool isDebugDraw, bool bAllowOverlap, bool bCheckTwoSide, bool printCollisionMessage, class UObject* __WorldContext, TArray<struct FVector>* Locus, TArray<TEnumAsByte<EObjectTypeQuery>>* ObjectTypes, TArray<class AActor*>* ActorsToIgnore, bool* IsHit, TArray<struct FHitResult>* HitResults)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.CheckHitFromLocus");

	UBPFL_S3CameraUtil_C_CheckHitFromLocus_Params params;
	params.Radius = Radius;
	params.isDebugDraw = isDebugDraw;
	params.bAllowOverlap = bAllowOverlap;
	params.bCheckTwoSide = bCheckTwoSide;
	params.printCollisionMessage = printCollisionMessage;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Locus != nullptr)
		*Locus = params.Locus;
	if (ObjectTypes != nullptr)
		*ObjectTypes = params.ObjectTypes;
	if (ActorsToIgnore != nullptr)
		*ActorsToIgnore = params.ActorsToIgnore;
	if (IsHit != nullptr)
		*IsHit = params.IsHit;
	if (HitResults != nullptr)
		*HitResults = params.HitResults;
}


// Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.isAvailableFromClass
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  TalkCamera                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            DivNum                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent*         SpeakingSkeletalMesh           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class USceneComponent*         ListeningSkeletalMesh          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TEnumAsByte<EM_LeftOrRight>    CameraPosition                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<TEnumAsByte<EObjectTypeQuery>> CheckHitObjectTypes            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           isDebugDraw                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CheckTwoSide                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           printCollisionMessage          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           _isAcEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsAvailable                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<struct FHitResult>      HitResult                      (Parm, OutParm, ZeroConstructor)

void UBPFL_S3CameraUtil_C::STATIC_isAvailableFromClass(class UClass* TalkCamera, int DivNum, class USceneComponent* SpeakingSkeletalMesh, class USceneComponent* ListeningSkeletalMesh, TEnumAsByte<EM_LeftOrRight> CameraPosition, float Radius, bool isDebugDraw, bool CheckTwoSide, bool printCollisionMessage, bool _isAcEvent, class UObject* __WorldContext, TArray<TEnumAsByte<EObjectTypeQuery>>* CheckHitObjectTypes, bool* IsAvailable, TArray<struct FHitResult>* HitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.isAvailableFromClass");

	UBPFL_S3CameraUtil_C_isAvailableFromClass_Params params;
	params.TalkCamera = TalkCamera;
	params.DivNum = DivNum;
	params.SpeakingSkeletalMesh = SpeakingSkeletalMesh;
	params.ListeningSkeletalMesh = ListeningSkeletalMesh;
	params.CameraPosition = CameraPosition;
	params.Radius = Radius;
	params.isDebugDraw = isDebugDraw;
	params.CheckTwoSide = CheckTwoSide;
	params.printCollisionMessage = printCollisionMessage;
	params._isAcEvent = _isAcEvent;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CheckHitObjectTypes != nullptr)
		*CheckHitObjectTypes = params.CheckHitObjectTypes;
	if (IsAvailable != nullptr)
		*IsAvailable = params.IsAvailable;
	if (HitResult != nullptr)
		*HitResult = params.HitResult;
}


// Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.CalcDefaultTalkCameraLocus
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// int                            DivNum                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent*         SpeakingSkeletalMesh           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class USceneComponent*         ListeningSkeletalMesh          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TEnumAsByte<EM_LeftOrRight>    CameraPosition                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FST_CameraInitialProperty InitialCameraProperty          (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           EnableSpin                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FST_CameraSpinProperty  SpinProperty                   (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           EnableDollyZoom                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FST_CameraDollyZoomProperty DollyZoomProperty              (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           isDrawDebug                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector>         newParam                       (Parm, OutParm, ZeroConstructor)

void UBPFL_S3CameraUtil_C::STATIC_CalcDefaultTalkCameraLocus(int DivNum, class USceneComponent* SpeakingSkeletalMesh, class USceneComponent* ListeningSkeletalMesh, TEnumAsByte<EM_LeftOrRight> CameraPosition, const struct FST_CameraInitialProperty& InitialCameraProperty, bool EnableSpin, const struct FST_CameraSpinProperty& SpinProperty, bool EnableDollyZoom, const struct FST_CameraDollyZoomProperty& DollyZoomProperty, bool isDrawDebug, class UObject* __WorldContext, TArray<struct FVector>* newParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.CalcDefaultTalkCameraLocus");

	UBPFL_S3CameraUtil_C_CalcDefaultTalkCameraLocus_Params params;
	params.DivNum = DivNum;
	params.SpeakingSkeletalMesh = SpeakingSkeletalMesh;
	params.ListeningSkeletalMesh = ListeningSkeletalMesh;
	params.CameraPosition = CameraPosition;
	params.InitialCameraProperty = InitialCameraProperty;
	params.EnableSpin = EnableSpin;
	params.SpinProperty = SpinProperty;
	params.EnableDollyZoom = EnableDollyZoom;
	params.DollyZoomProperty = DollyZoomProperty;
	params.isDrawDebug = isDrawDebug;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (newParam != nullptr)
		*newParam = params.newParam;
}


// Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.CalcImaginaryPositionValue
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EM_LeftOrRight>    CameraPosition                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ImaginaryPositionValue         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPFL_S3CameraUtil_C::STATIC_CalcImaginaryPositionValue(TEnumAsByte<EM_LeftOrRight> CameraPosition, class UObject* __WorldContext, float* ImaginaryPositionValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.CalcImaginaryPositionValue");

	UBPFL_S3CameraUtil_C_CalcImaginaryPositionValue_Params params;
	params.CameraPosition = CameraPosition;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ImaginaryPositionValue != nullptr)
		*ImaginaryPositionValue = params.ImaginaryPositionValue;
}


// Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.CalcFinishDollyCameraDistance
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          StartCameraDistance            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          StandardCameraDistance         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          CharacterHalfDistance          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FST_CameraDollyZoomProperty ST_CameraDollyZoomProperty     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FST_CameraInitialProperty ST_CameraInitialProperty       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          FinishCameraDistance           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPFL_S3CameraUtil_C::STATIC_CalcFinishDollyCameraDistance(float StartCameraDistance, float StandardCameraDistance, float CharacterHalfDistance, class UObject* __WorldContext, struct FST_CameraDollyZoomProperty* ST_CameraDollyZoomProperty, struct FST_CameraInitialProperty* ST_CameraInitialProperty, float* FinishCameraDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.CalcFinishDollyCameraDistance");

	UBPFL_S3CameraUtil_C_CalcFinishDollyCameraDistance_Params params;
	params.StartCameraDistance = StartCameraDistance;
	params.StandardCameraDistance = StandardCameraDistance;
	params.CharacterHalfDistance = CharacterHalfDistance;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ST_CameraDollyZoomProperty != nullptr)
		*ST_CameraDollyZoomProperty = params.ST_CameraDollyZoomProperty;
	if (ST_CameraInitialProperty != nullptr)
		*ST_CameraInitialProperty = params.ST_CameraInitialProperty;
	if (FinishCameraDistance != nullptr)
		*FinishCameraDistance = params.FinishCameraDistance;
}


// Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.CalcCameraSpin
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FST_CameraSpinProperty  ST_CameraSpinProperty          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                StartRotation                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FRotator                FinishRotation                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                ResultRotation                 (Parm, OutParm, IsPlainOldData)

void UBPFL_S3CameraUtil_C::STATIC_CalcCameraSpin(float Time, const struct FRotator& StartRotation, const struct FRotator& FinishRotation, class UObject* __WorldContext, struct FST_CameraSpinProperty* ST_CameraSpinProperty, struct FRotator* ResultRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.CalcCameraSpin");

	UBPFL_S3CameraUtil_C_CalcCameraSpin_Params params;
	params.Time = Time;
	params.StartRotation = StartRotation;
	params.FinishRotation = FinishRotation;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ST_CameraSpinProperty != nullptr)
		*ST_CameraSpinProperty = params.ST_CameraSpinProperty;
	if (ResultRotation != nullptr)
		*ResultRotation = params.ResultRotation;
}


// Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.CalcFinishSpin
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// float                          ImaginaryPositionValue         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          StandardhalfDistance           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          CurrentCameraDistance          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FST_CameraInitialProperty ST_CameraInitialProperty       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FST_CameraSpinProperty  ST_CameraSpinProperty          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FRotator                StartRotation                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FRotator                StandardRotation               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                FinishRotation                 (Parm, OutParm, IsPlainOldData)

void UBPFL_S3CameraUtil_C::STATIC_CalcFinishSpin(float ImaginaryPositionValue, float StandardhalfDistance, float CurrentCameraDistance, const struct FRotator& StartRotation, const struct FRotator& StandardRotation, class UObject* __WorldContext, struct FST_CameraInitialProperty* ST_CameraInitialProperty, struct FST_CameraSpinProperty* ST_CameraSpinProperty, struct FRotator* FinishRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.CalcFinishSpin");

	UBPFL_S3CameraUtil_C_CalcFinishSpin_Params params;
	params.ImaginaryPositionValue = ImaginaryPositionValue;
	params.StandardhalfDistance = StandardhalfDistance;
	params.CurrentCameraDistance = CurrentCameraDistance;
	params.StartRotation = StartRotation;
	params.StandardRotation = StandardRotation;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ST_CameraInitialProperty != nullptr)
		*ST_CameraInitialProperty = params.ST_CameraInitialProperty;
	if (ST_CameraSpinProperty != nullptr)
		*ST_CameraSpinProperty = params.ST_CameraSpinProperty;
	if (FinishRotation != nullptr)
		*FinishRotation = params.FinishRotation;
}


// Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.CalcSpinElapsedTime
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          CurrentElapsedTime             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FST_CameraSpinProperty  ST_CameraSpinProperty          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          resultElapsedTime              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPFL_S3CameraUtil_C::STATIC_CalcSpinElapsedTime(float DeltaTime, float CurrentElapsedTime, class UObject* __WorldContext, struct FST_CameraSpinProperty* ST_CameraSpinProperty, float* resultElapsedTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.CalcSpinElapsedTime");

	UBPFL_S3CameraUtil_C_CalcSpinElapsedTime_Params params;
	params.DeltaTime = DeltaTime;
	params.CurrentElapsedTime = CurrentElapsedTime;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ST_CameraSpinProperty != nullptr)
		*ST_CameraSpinProperty = params.ST_CameraSpinProperty;
	if (resultElapsedTime != nullptr)
		*resultElapsedTime = params.resultElapsedTime;
}


// Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.CalcCameraDistance
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USceneComponent*         SpeakingSkeletalMesh           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class USceneComponent*         ListeningSkeletalMesh          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FST_CameraInitialProperty InitialCameraProperty          (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          CameraDistance                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          CharacterHalfDistance          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          StandardCameraDistance         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPFL_S3CameraUtil_C::STATIC_CalcCameraDistance(class USceneComponent* SpeakingSkeletalMesh, class USceneComponent* ListeningSkeletalMesh, const struct FST_CameraInitialProperty& InitialCameraProperty, class UObject* __WorldContext, float* CameraDistance, float* CharacterHalfDistance, float* StandardCameraDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.CalcCameraDistance");

	UBPFL_S3CameraUtil_C_CalcCameraDistance_Params params;
	params.SpeakingSkeletalMesh = SpeakingSkeletalMesh;
	params.ListeningSkeletalMesh = ListeningSkeletalMesh;
	params.InitialCameraProperty = InitialCameraProperty;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CameraDistance != nullptr)
		*CameraDistance = params.CameraDistance;
	if (CharacterHalfDistance != nullptr)
		*CharacterHalfDistance = params.CharacterHalfDistance;
	if (StandardCameraDistance != nullptr)
		*StandardCameraDistance = params.StandardCameraDistance;
}


// Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.CalcCameraRotation
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USceneComponent*         SpeakingSkeletalMesh           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class USceneComponent*         ListeningSkeletalMesh          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          ImaginaryPositionValue         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FST_CameraInitialProperty InitialCameraProperty          (BlueprintVisible, BlueprintReadOnly, Parm)
// TEnumAsByte<EM_LeftOrRight>    CameraPosition                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          StandardhalfDistance           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                ResultRotation                 (Parm, OutParm, IsPlainOldData)
// struct FRotator                StandardRotation               (Parm, OutParm, IsPlainOldData)

void UBPFL_S3CameraUtil_C::STATIC_CalcCameraRotation(class USceneComponent* SpeakingSkeletalMesh, class USceneComponent* ListeningSkeletalMesh, float ImaginaryPositionValue, const struct FST_CameraInitialProperty& InitialCameraProperty, TEnumAsByte<EM_LeftOrRight> CameraPosition, float StandardhalfDistance, class UObject* __WorldContext, struct FRotator* ResultRotation, struct FRotator* StandardRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.CalcCameraRotation");

	UBPFL_S3CameraUtil_C_CalcCameraRotation_Params params;
	params.SpeakingSkeletalMesh = SpeakingSkeletalMesh;
	params.ListeningSkeletalMesh = ListeningSkeletalMesh;
	params.ImaginaryPositionValue = ImaginaryPositionValue;
	params.InitialCameraProperty = InitialCameraProperty;
	params.CameraPosition = CameraPosition;
	params.StandardhalfDistance = StandardhalfDistance;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ResultRotation != nullptr)
		*ResultRotation = params.ResultRotation;
	if (StandardRotation != nullptr)
		*StandardRotation = params.StandardRotation;
}


// Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.CalcLockPointDepthOffset
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USceneComponent*         ListeningSkeletalMesh          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class USceneComponent*         SpeakingSkeletalMesh           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          StandardhalfDistance           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FST_CameraInitialProperty InitialCameraProperty          (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 DepthOffset                    (Parm, OutParm, IsPlainOldData)

void UBPFL_S3CameraUtil_C::STATIC_CalcLockPointDepthOffset(class USceneComponent* ListeningSkeletalMesh, class USceneComponent* SpeakingSkeletalMesh, float StandardhalfDistance, const struct FST_CameraInitialProperty& InitialCameraProperty, class UObject* __WorldContext, struct FVector* DepthOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.CalcLockPointDepthOffset");

	UBPFL_S3CameraUtil_C_CalcLockPointDepthOffset_Params params;
	params.ListeningSkeletalMesh = ListeningSkeletalMesh;
	params.SpeakingSkeletalMesh = SpeakingSkeletalMesh;
	params.StandardhalfDistance = StandardhalfDistance;
	params.InitialCameraProperty = InitialCameraProperty;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DepthOffset != nullptr)
		*DepthOffset = params.DepthOffset;
}


// Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.CalcCameraDollyZoom
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          StartCameraDistance            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          FinishCameraDistance           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FST_CameraDollyZoomProperty ST_CameraDollyZoomProperty     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, OutParm, IsPlainOldData)

void UBPFL_S3CameraUtil_C::STATIC_CalcCameraDollyZoom(float Time, float StartCameraDistance, float FinishCameraDistance, class UObject* __WorldContext, struct FST_CameraDollyZoomProperty* ST_CameraDollyZoomProperty, struct FVector* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.CalcCameraDollyZoom");

	UBPFL_S3CameraUtil_C_CalcCameraDollyZoom_Params params;
	params.Time = Time;
	params.StartCameraDistance = StartCameraDistance;
	params.FinishCameraDistance = FinishCameraDistance;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ST_CameraDollyZoomProperty != nullptr)
		*ST_CameraDollyZoomProperty = params.ST_CameraDollyZoomProperty;
	if (Location != nullptr)
		*Location = params.Location;
}


// Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.CalcCameraFovZoom
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          StartFOV                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FST_CameraFovZoomProperty ST_CameraFovZoomProperty       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          FOV                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPFL_S3CameraUtil_C::STATIC_CalcCameraFovZoom(float Time, float StartFOV, class UObject* __WorldContext, struct FST_CameraFovZoomProperty* ST_CameraFovZoomProperty, float* FOV)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.CalcCameraFovZoom");

	UBPFL_S3CameraUtil_C_CalcCameraFovZoom_Params params;
	params.Time = Time;
	params.StartFOV = StartFOV;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ST_CameraFovZoomProperty != nullptr)
		*ST_CameraFovZoomProperty = params.ST_CameraFovZoomProperty;
	if (FOV != nullptr)
		*FOV = params.FOV;
}


// Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.CalcLookPos
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USceneComponent*         SpeakingSkeletalMesh           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class USceneComponent*         ListeningSkeletalMesh          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          ImaginaryPositionValue         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FST_CameraInitialProperty InitialCameraProperty          (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 LookPos                        (Parm, OutParm, IsPlainOldData)

void UBPFL_S3CameraUtil_C::STATIC_CalcLookPos(class USceneComponent* SpeakingSkeletalMesh, class USceneComponent* ListeningSkeletalMesh, float ImaginaryPositionValue, const struct FST_CameraInitialProperty& InitialCameraProperty, class UObject* __WorldContext, struct FVector* LookPos)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.CalcLookPos");

	UBPFL_S3CameraUtil_C_CalcLookPos_Params params;
	params.SpeakingSkeletalMesh = SpeakingSkeletalMesh;
	params.ListeningSkeletalMesh = ListeningSkeletalMesh;
	params.ImaginaryPositionValue = ImaginaryPositionValue;
	params.InitialCameraProperty = InitialCameraProperty;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LookPos != nullptr)
		*LookPos = params.LookPos;
}


// Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.AdjustRotationFromDistance
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FRotator                Rotation                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          DistanceRatio                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                AdjustmentRotation             (Parm, OutParm, IsPlainOldData)

void UBPFL_S3CameraUtil_C::STATIC_AdjustRotationFromDistance(const struct FRotator& Rotation, float DistanceRatio, class UObject* __WorldContext, struct FRotator* AdjustmentRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.AdjustRotationFromDistance");

	UBPFL_S3CameraUtil_C_AdjustRotationFromDistance_Params params;
	params.Rotation = Rotation;
	params.DistanceRatio = DistanceRatio;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AdjustmentRotation != nullptr)
		*AdjustmentRotation = params.AdjustmentRotation;
}


// Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.AdjustCameraDistance
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          CharacterHalfDistance          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          CameraDistance                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FST_CameraInitialProperty InitialCameraProperty          (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          AdjustmentCameraDistance       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPFL_S3CameraUtil_C::STATIC_AdjustCameraDistance(float CharacterHalfDistance, float CameraDistance, const struct FST_CameraInitialProperty& InitialCameraProperty, class UObject* __WorldContext, float* AdjustmentCameraDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.AdjustCameraDistance");

	UBPFL_S3CameraUtil_C_AdjustCameraDistance_Params params;
	params.CharacterHalfDistance = CharacterHalfDistance;
	params.CameraDistance = CameraDistance;
	params.InitialCameraProperty = InitialCameraProperty;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AdjustmentCameraDistance != nullptr)
		*AdjustmentCameraDistance = params.AdjustmentCameraDistance;
}


// Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.CalcLookPointOffset
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USceneComponent*         ListeningSkeletalMesh          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class USceneComponent*         SpeakingSkeletalMesh           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          StandardhalfDistance           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ImaginaryPositionValue         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FST_CameraInitialProperty InitialCameraProperty          (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 LookPointOffset                (Parm, OutParm, IsPlainOldData)

void UBPFL_S3CameraUtil_C::STATIC_CalcLookPointOffset(class USceneComponent* ListeningSkeletalMesh, class USceneComponent* SpeakingSkeletalMesh, float StandardhalfDistance, float ImaginaryPositionValue, const struct FST_CameraInitialProperty& InitialCameraProperty, class UObject* __WorldContext, struct FVector* LookPointOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.CalcLookPointOffset");

	UBPFL_S3CameraUtil_C_CalcLookPointOffset_Params params;
	params.ListeningSkeletalMesh = ListeningSkeletalMesh;
	params.SpeakingSkeletalMesh = SpeakingSkeletalMesh;
	params.StandardhalfDistance = StandardhalfDistance;
	params.ImaginaryPositionValue = ImaginaryPositionValue;
	params.InitialCameraProperty = InitialCameraProperty;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LookPointOffset != nullptr)
		*LookPointOffset = params.LookPointOffset;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
