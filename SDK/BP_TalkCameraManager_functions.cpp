
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

// Function BP_TalkCameraManager.BP_TalkCameraManager_C.PrepareCommonSelectionData
// (NetRequest, Exec, Native, Event, NetMulticast, MulticastDelegate, Public, Private, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)

void ABP_TalkCameraManager_C::PrepareCommonSelectionData()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkCameraManager.BP_TalkCameraManager_C.PrepareCommonSelectionData");

	ABP_TalkCameraManager_C_PrepareCommonSelectionData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkCameraManager.BP_TalkCameraManager_C.ExecuteCharacterAvoidance
// (NetReliable, Exec, Static, NetMulticast, MulticastDelegate, Private, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_TalkCameraManager_C::STATIC_ExecuteCharacterAvoidance()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkCameraManager.BP_TalkCameraManager_C.ExecuteCharacterAvoidance");

	ABP_TalkCameraManager_C_ExecuteCharacterAvoidance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkCameraManager.BP_TalkCameraManager_C.AdjustImaginaryLineCameraPositionFromSpace
// (NetReliable, Exec, Native, NetMulticast, Public, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  InTalkedActor                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  InPlayer                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkCameraManager_C::AdjustImaginaryLineCameraPositionFromSpace(class AActor* InTalkedActor, class AActor* InPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkCameraManager.BP_TalkCameraManager_C.AdjustImaginaryLineCameraPositionFromSpace");

	ABP_TalkCameraManager_C_AdjustImaginaryLineCameraPositionFromSpace_Params params;
	params.InTalkedActor = InTalkedActor;
	params.InPlayer = InPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkCameraManager.BP_TalkCameraManager_C.GetNonCharaCameraTargetSkeletalMesh
// (Net, NetRequest, NetResponse, Static, MulticastDelegate, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  InActor                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class USkeletalMeshComponent* ABP_TalkCameraManager_C::STATIC_GetNonCharaCameraTargetSkeletalMesh(class AActor* InActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkCameraManager.BP_TalkCameraManager_C.GetNonCharaCameraTargetSkeletalMesh");

	ABP_TalkCameraManager_C_GetNonCharaCameraTargetSkeletalMesh_Params params;
	params.InActor = InActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_TalkCameraManager.BP_TalkCameraManager_C.CalcAndSetAvailableCameraForShowItem
// (Net, NetReliable, NetRequest, NetResponse, Static, NetMulticast, MulticastDelegate, Public, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPrimitiveComponent*     SpeakingSkeletalMesh           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UPrimitiveComponent*     ListeningSkeletalMesh          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TEnumAsByte<EM_LeftOrRight>    CameraPosition                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            DivNum                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<TEnumAsByte<EObjectTypeQuery>> CheckHitObjectTypes            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           isDrawDebug                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EAutoCameraType                AutoCameraType                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CheckTwoSide                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           _printCollisionMessage         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           isAcEvent                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_TalkCameraManager_C::STATIC_CalcAndSetAvailableCameraForShowItem(class UPrimitiveComponent* SpeakingSkeletalMesh, class UPrimitiveComponent* ListeningSkeletalMesh, TEnumAsByte<EM_LeftOrRight> CameraPosition, int DivNum, float Radius, bool isDrawDebug, EAutoCameraType AutoCameraType, bool CheckTwoSide, bool _printCollisionMessage, bool isAcEvent, TArray<TEnumAsByte<EObjectTypeQuery>>* CheckHitObjectTypes, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkCameraManager.BP_TalkCameraManager_C.CalcAndSetAvailableCameraForShowItem");

	ABP_TalkCameraManager_C_CalcAndSetAvailableCameraForShowItem_Params params;
	params.SpeakingSkeletalMesh = SpeakingSkeletalMesh;
	params.ListeningSkeletalMesh = ListeningSkeletalMesh;
	params.CameraPosition = CameraPosition;
	params.DivNum = DivNum;
	params.Radius = Radius;
	params.isDrawDebug = isDrawDebug;
	params.AutoCameraType = AutoCameraType;
	params.CheckTwoSide = CheckTwoSide;
	params._printCollisionMessage = _printCollisionMessage;
	params.isAcEvent = isAcEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CheckHitObjectTypes != nullptr)
		*CheckHitObjectTypes = params.CheckHitObjectTypes;
	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_TalkCameraManager.BP_TalkCameraManager_C.ResolveTalkTransitionError
// (NetRequest, Exec, Native, Static, MulticastDelegate, Public, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_TalkCameraManager_C::STATIC_ResolveTalkTransitionError()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkCameraManager.BP_TalkCameraManager_C.ResolveTalkTransitionError");

	ABP_TalkCameraManager_C_ResolveTalkTransitionError_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkCameraManager.BP_TalkCameraManager_C.CheckFilter
// (Exec, Native, NetResponse, Static, MulticastDelegate, Public, Protected, Delegate, Const)
// Parameters:
// int                            mask                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FST_TalkCameraPairOrSingleFilter Param                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FST_TalkCameraShoulderFilter Param2                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FST_TalkCameraAngleFilter Param3                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FST_TalkCameraDistanceFilter Param4                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FST_TalkCameraLookTargetFilter Param5                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FST_TalkCameraKindFilter Param6                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_TalkCameraManager_C::STATIC_CheckFilter(int* mask, struct FST_TalkCameraPairOrSingleFilter* Param, struct FST_TalkCameraShoulderFilter* Param2, struct FST_TalkCameraAngleFilter* Param3, struct FST_TalkCameraDistanceFilter* Param4, struct FST_TalkCameraLookTargetFilter* Param5, struct FST_TalkCameraKindFilter* Param6, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkCameraManager.BP_TalkCameraManager_C.CheckFilter");

	ABP_TalkCameraManager_C_CheckFilter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (mask != nullptr)
		*mask = params.mask;
	if (Param != nullptr)
		*Param = params.Param;
	if (Param2 != nullptr)
		*Param2 = params.Param2;
	if (Param3 != nullptr)
		*Param3 = params.Param3;
	if (Param4 != nullptr)
		*Param4 = params.Param4;
	if (Param5 != nullptr)
		*Param5 = params.Param5;
	if (Param6 != nullptr)
		*Param6 = params.Param6;
	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_TalkCameraManager.BP_TalkCameraManager_C.CheckCameraKind
// (Net, NetReliable, NetRequest, MulticastDelegate, Protected, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable)
// Parameters:
// int                            mask                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FST_TalkCameraKindFilter Param                          (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_TalkCameraManager_C::CheckCameraKind(int mask, const struct FST_TalkCameraKindFilter& Param, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkCameraManager.BP_TalkCameraManager_C.CheckCameraKind");

	ABP_TalkCameraManager_C_CheckCameraKind_Params params;
	params.mask = mask;
	params.Param = Param;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_TalkCameraManager.BP_TalkCameraManager_C.CheckLookAtSocket
// (NetReliable, Exec, NetResponse, NetMulticast, Public, Delegate, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            mask                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FST_TalkCameraLookTargetFilter Param                          (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_TalkCameraManager_C::CheckLookAtSocket(int mask, const struct FST_TalkCameraLookTargetFilter& Param, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkCameraManager.BP_TalkCameraManager_C.CheckLookAtSocket");

	ABP_TalkCameraManager_C_CheckLookAtSocket_Params params;
	params.mask = mask;
	params.Param = Param;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_TalkCameraManager.BP_TalkCameraManager_C.CheckDistance
// (Net, NetReliable, NetRequest, Exec, Event, NetResponse, NetMulticast, Public, Delegate, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            mask                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FST_TalkCameraDistanceFilter Param                          (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_TalkCameraManager_C::CheckDistance(int mask, const struct FST_TalkCameraDistanceFilter& Param, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkCameraManager.BP_TalkCameraManager_C.CheckDistance");

	ABP_TalkCameraManager_C_CheckDistance_Params params;
	params.mask = mask;
	params.Param = Param;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_TalkCameraManager.BP_TalkCameraManager_C.CheckAngle
// (Static, MulticastDelegate, Public, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            mask                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FST_TalkCameraAngleFilter Param                          (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_TalkCameraManager_C::STATIC_CheckAngle(int mask, const struct FST_TalkCameraAngleFilter& Param, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkCameraManager.BP_TalkCameraManager_C.CheckAngle");

	ABP_TalkCameraManager_C_CheckAngle_Params params;
	params.mask = mask;
	params.Param = Param;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_TalkCameraManager.BP_TalkCameraManager_C.CheckShoulderOrNot
// (Native, NetMulticast, MulticastDelegate, Delegate, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            mask                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FST_TalkCameraShoulderFilter Param                          (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_TalkCameraManager_C::CheckShoulderOrNot(int mask, const struct FST_TalkCameraShoulderFilter& Param, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkCameraManager.BP_TalkCameraManager_C.CheckShoulderOrNot");

	ABP_TalkCameraManager_C_CheckShoulderOrNot_Params params;
	params.mask = mask;
	params.Param = Param;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_TalkCameraManager.BP_TalkCameraManager_C.CheckPairOrSingle
// (Native, NetResponse, Static, MulticastDelegate, Public, Protected, Delegate, Const)
// Parameters:
// int                            mask                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FST_TalkCameraPairOrSingleFilter Param                          (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_TalkCameraManager_C::STATIC_CheckPairOrSingle(int mask, const struct FST_TalkCameraPairOrSingleFilter& Param, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkCameraManager.BP_TalkCameraManager_C.CheckPairOrSingle");

	ABP_TalkCameraManager_C_CheckPairOrSingle_Params params;
	params.mask = mask;
	params.Param = Param;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_TalkCameraManager.BP_TalkCameraManager_C.GetFilteredCamera
// (NetReliable, Native, Static, NetMulticast, MulticastDelegate, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FST_TalkCameraPairOrSingleFilter PairOrSingle                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FST_TalkCameraShoulderFilter ShoulderCut                    (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FST_TalkCameraAngleFilter Angle                          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FST_TalkCameraDistanceFilter Distance                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FST_TalkCameraLookTargetFilter LookTarget                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FST_TalkCameraKindFilter CameraKind                     (BlueprintVisible, BlueprintReadOnly, Parm)
// TArray<struct FST_AutoCameraAnalizedInfo> Cameras                        (Parm, OutParm, ZeroConstructor)

void ABP_TalkCameraManager_C::STATIC_GetFilteredCamera(const struct FST_TalkCameraPairOrSingleFilter& PairOrSingle, const struct FST_TalkCameraShoulderFilter& ShoulderCut, const struct FST_TalkCameraAngleFilter& Angle, const struct FST_TalkCameraDistanceFilter& Distance, const struct FST_TalkCameraLookTargetFilter& LookTarget, const struct FST_TalkCameraKindFilter& CameraKind, TArray<struct FST_AutoCameraAnalizedInfo>* Cameras)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkCameraManager.BP_TalkCameraManager_C.GetFilteredCamera");

	ABP_TalkCameraManager_C_GetFilteredCamera_Params params;
	params.PairOrSingle = PairOrSingle;
	params.ShoulderCut = ShoulderCut;
	params.Angle = Angle;
	params.Distance = Distance;
	params.LookTarget = LookTarget;
	params.CameraKind = CameraKind;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Cameras != nullptr)
		*Cameras = params.Cameras;
}


// Function BP_TalkCameraManager.BP_TalkCameraManager_C.AutoCameraCutChageInit
// (Net, NetRequest, Exec, NetResponse, Static, Public, Protected, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                  Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Talked                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_TalkCameraManager_C::STATIC_AutoCameraCutChageInit(class AActor* Player, class AActor* Talked, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkCameraManager.BP_TalkCameraManager_C.AutoCameraCutChageInit");

	ABP_TalkCameraManager_C_AutoCameraCutChageInit_Params params;
	params.Player = Player;
	params.Talked = Talked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_TalkCameraManager.BP_TalkCameraManager_C.DestroyPrevCamera
// (Net, Native, Event, Static, MulticastDelegate, Public, Private, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)

void ABP_TalkCameraManager_C::STATIC_DestroyPrevCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkCameraManager.BP_TalkCameraManager_C.DestroyPrevCamera");

	ABP_TalkCameraManager_C_DestroyPrevCamera_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkCameraManager.BP_TalkCameraManager_C.IsOrderSpecificCamera
// (Net, NetRequest, Exec, Event, NetResponse, MulticastDelegate, Public, Private, Protected, Delegate, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_TalkCameraManager_C::IsOrderSpecificCamera(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkCameraManager.BP_TalkCameraManager_C.IsOrderSpecificCamera");

	ABP_TalkCameraManager_C_IsOrderSpecificCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_TalkCameraManager.BP_TalkCameraManager_C.CanChangeCut
// (NetReliable, NetRequest, Native, NetMulticast, Public, Private, Protected, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_TalkCameraManager_C::CanChangeCut(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkCameraManager.BP_TalkCameraManager_C.CanChangeCut");

	ABP_TalkCameraManager_C_CanChangeCut_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_TalkCameraManager.BP_TalkCameraManager_C.GetRandomAvailableCamera
// (NetReliable, NetResponse, Static, MulticastDelegate, Private, Protected, Delegate)
// Parameters:
// TArray<class UClass*>          AvailableCameras               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UClass*                  Camera                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_TalkCameraManager_C::STATIC_GetRandomAvailableCamera(TArray<class UClass*>* AvailableCameras, class UClass** Camera)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkCameraManager.BP_TalkCameraManager_C.GetRandomAvailableCamera");

	ABP_TalkCameraManager_C_GetRandomAvailableCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AvailableCameras != nullptr)
		*AvailableCameras = params.AvailableCameras;
	if (Camera != nullptr)
		*Camera = params.Camera;
}


// Function BP_TalkCameraManager.BP_TalkCameraManager_C.DestroyDummyMeshComponent
// (Net, Native, Event, NetMulticast, MulticastDelegate, Protected, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable)
// Parameters:
// TArray<class AActor*>          Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_TalkCameraManager_C::DestroyDummyMeshComponent(TArray<class AActor*>* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkCameraManager.BP_TalkCameraManager_C.DestroyDummyMeshComponent");

	ABP_TalkCameraManager_C_DestroyDummyMeshComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Actor != nullptr)
		*Actor = params.Actor;
}


// Function BP_TalkCameraManager.BP_TalkCameraManager_C.TryCreateDummyMesh
// (NetMulticast, Public, Private, Protected, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                  TargetActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  LookAtActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bForceDummy                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent*  MeshComponet                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_TalkCameraManager_C::TryCreateDummyMesh(class AActor* TargetActor, class AActor* LookAtActor, bool bForceDummy, class USkeletalMeshComponent** MeshComponet)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkCameraManager.BP_TalkCameraManager_C.TryCreateDummyMesh");

	ABP_TalkCameraManager_C_TryCreateDummyMesh_Params params;
	params.TargetActor = TargetActor;
	params.LookAtActor = LookAtActor;
	params.bForceDummy = bForceDummy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MeshComponet != nullptr)
		*MeshComponet = params.MeshComponet;
}


// Function BP_TalkCameraManager.BP_TalkCameraManager_C.Init
// (NetRequest, Native, NetResponse, Static, MulticastDelegate, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 LockTargetCharacterId          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_TalkCameraManager_C::STATIC_Init(struct FString* LockTargetCharacterId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkCameraManager.BP_TalkCameraManager_C.Init");

	ABP_TalkCameraManager_C_Init_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LockTargetCharacterId != nullptr)
		*LockTargetCharacterId = params.LockTargetCharacterId;
}


// Function BP_TalkCameraManager.BP_TalkCameraManager_C.SpawnLookAtCamera
// (Net, NetReliable, NetRequest, Native, NetResponse, Static, NetMulticast, Public, Protected, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent)
// Parameters:
// class UClass*                  LookAtCameraClass              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkCameraManager_C::STATIC_SpawnLookAtCamera(class UClass* LookAtCameraClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkCameraManager.BP_TalkCameraManager_C.SpawnLookAtCamera");

	ABP_TalkCameraManager_C_SpawnLookAtCamera_Params params;
	params.LookAtCameraClass = LookAtCameraClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkCameraManager.BP_TalkCameraManager_C.GetOtherActorFromTargets
// (Exec, Delegate, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>          Array                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class AActor*                  InActor                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Other                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_TalkCameraManager_C::GetOtherActorFromTargets(class AActor* InActor, TArray<class AActor*>* Array, class AActor** Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkCameraManager.BP_TalkCameraManager_C.GetOtherActorFromTargets");

	ABP_TalkCameraManager_C_GetOtherActorFromTargets_Params params;
	params.InActor = InActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
	if (Other != nullptr)
		*Other = params.Other;
}


// Function BP_TalkCameraManager.BP_TalkCameraManager_C.GetCameraGroupFromName
// (Native, Static, NetMulticast, Private, Protected, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 CameraGroup                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TArray<class UClass*>          GroupCameras                   (Parm, OutParm, ZeroConstructor)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_TalkCameraManager_C::STATIC_GetCameraGroupFromName(const struct FString& CameraGroup, TArray<class UClass*>* GroupCameras, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkCameraManager.BP_TalkCameraManager_C.GetCameraGroupFromName");

	ABP_TalkCameraManager_C_GetCameraGroupFromName_Params params;
	params.CameraGroup = CameraGroup;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GroupCameras != nullptr)
		*GroupCameras = params.GroupCameras;
	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_TalkCameraManager.BP_TalkCameraManager_C.GetCameraClassFromName
// (NetReliable, Exec, Native, Static, NetMulticast, MulticastDelegate, Public, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FString                 CameraName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UClass*                  cameraClass                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_TalkCameraManager_C::STATIC_GetCameraClassFromName(const struct FString& CameraName, class UClass** cameraClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkCameraManager.BP_TalkCameraManager_C.GetCameraClassFromName");

	ABP_TalkCameraManager_C_GetCameraClassFromName_Params params;
	params.CameraName = CameraName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (cameraClass != nullptr)
		*cameraClass = params.cameraClass;
}


// Function BP_TalkCameraManager.BP_TalkCameraManager_C.GetSpeakingCharacterName
// (NetRequest, Native, Event, NetResponse, Public, Private, Protected, NetServer, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<EM_Charactor>      CharacterType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Name                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_TalkCameraManager_C::GetSpeakingCharacterName(TEnumAsByte<EM_Charactor> CharacterType, struct FName* Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkCameraManager.BP_TalkCameraManager_C.GetSpeakingCharacterName");

	ABP_TalkCameraManager_C_GetSpeakingCharacterName_Params params;
	params.CharacterType = CharacterType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Name != nullptr)
		*Name = params.Name;
}


// Function BP_TalkCameraManager.BP_TalkCameraManager_C.GetAvailableCameraNum
// (NetReliable, Exec, Native, NetMulticast, Public, Private, Protected, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<class UClass*>          Cameras                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            DivNum                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent*  SpeakingSkeletalMesh           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class USkeletalMeshComponent*  ListeningSkeletalMesh          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TEnumAsByte<EM_LeftOrRight>    CameraPosition                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<TEnumAsByte<EObjectTypeQuery>> CheckHitObjectTypes            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           isDebugDraw                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Num                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_TalkCameraManager_C::GetAvailableCameraNum(int DivNum, class USkeletalMeshComponent* SpeakingSkeletalMesh, class USkeletalMeshComponent* ListeningSkeletalMesh, TEnumAsByte<EM_LeftOrRight> CameraPosition, float Radius, bool isDebugDraw, TArray<class UClass*>* Cameras, TArray<TEnumAsByte<EObjectTypeQuery>>* CheckHitObjectTypes, int* Num)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkCameraManager.BP_TalkCameraManager_C.GetAvailableCameraNum");

	ABP_TalkCameraManager_C_GetAvailableCameraNum_Params params;
	params.DivNum = DivNum;
	params.SpeakingSkeletalMesh = SpeakingSkeletalMesh;
	params.ListeningSkeletalMesh = ListeningSkeletalMesh;
	params.CameraPosition = CameraPosition;
	params.Radius = Radius;
	params.isDebugDraw = isDebugDraw;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Cameras != nullptr)
		*Cameras = params.Cameras;
	if (CheckHitObjectTypes != nullptr)
		*CheckHitObjectTypes = params.CheckHitObjectTypes;
	if (Num != nullptr)
		*Num = params.Num;
}


// Function BP_TalkCameraManager.BP_TalkCameraManager_C.CalcCameraPositionFromImaginaryLine
// (Net, Static, NetMulticast, Public, Delegate, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                  NPC                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkCameraManager_C::STATIC_CalcCameraPositionFromImaginaryLine(class AActor* NPC, class AActor* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkCameraManager.BP_TalkCameraManager_C.CalcCameraPositionFromImaginaryLine");

	ABP_TalkCameraManager_C_CalcCameraPositionFromImaginaryLine_Params params;
	params.NPC = NPC;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkCameraManager.BP_TalkCameraManager_C.TryGetDifferentCamera
// (NetRequest, Exec, Native, Static, Delegate, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UClass*>          List                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UClass*                  PrevCamera                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  Camera                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_TalkCameraManager_C::STATIC_TryGetDifferentCamera(class UClass* PrevCamera, TArray<class UClass*>* List, class UClass** Camera, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkCameraManager.BP_TalkCameraManager_C.TryGetDifferentCamera");

	ABP_TalkCameraManager_C_TryGetDifferentCamera_Params params;
	params.PrevCamera = PrevCamera;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (List != nullptr)
		*List = params.List;
	if (Camera != nullptr)
		*Camera = params.Camera;
	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_TalkCameraManager.BP_TalkCameraManager_C.CalcAndSetAvailableCamera
// (Net, NetReliable, Exec, Event, Static, MulticastDelegate, Public, Private, Delegate, NetServer, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UPrimitiveComponent*     SpeakingSkeletalMesh           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UPrimitiveComponent*     ListeningSkeletalMesh          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TEnumAsByte<EM_LeftOrRight>    CameraPosition                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            DivNum                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<TEnumAsByte<EObjectTypeQuery>> CheckHitObjectTypes            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           isDrawDebug                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EAutoCameraType                AutoCameraType                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CheckTwoSide                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           _printCollisionMessage         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           isAcEvent                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_TalkCameraManager_C::STATIC_CalcAndSetAvailableCamera(class UPrimitiveComponent* SpeakingSkeletalMesh, class UPrimitiveComponent* ListeningSkeletalMesh, TEnumAsByte<EM_LeftOrRight> CameraPosition, int DivNum, float Radius, bool isDrawDebug, EAutoCameraType AutoCameraType, bool CheckTwoSide, bool _printCollisionMessage, bool isAcEvent, TArray<TEnumAsByte<EObjectTypeQuery>>* CheckHitObjectTypes, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkCameraManager.BP_TalkCameraManager_C.CalcAndSetAvailableCamera");

	ABP_TalkCameraManager_C_CalcAndSetAvailableCamera_Params params;
	params.SpeakingSkeletalMesh = SpeakingSkeletalMesh;
	params.ListeningSkeletalMesh = ListeningSkeletalMesh;
	params.CameraPosition = CameraPosition;
	params.DivNum = DivNum;
	params.Radius = Radius;
	params.isDrawDebug = isDrawDebug;
	params.AutoCameraType = AutoCameraType;
	params.CheckTwoSide = CheckTwoSide;
	params._printCollisionMessage = _printCollisionMessage;
	params.isAcEvent = isAcEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CheckHitObjectTypes != nullptr)
		*CheckHitObjectTypes = params.CheckHitObjectTypes;
	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_TalkCameraManager.BP_TalkCameraManager_C.SetNextCameraFromRandom
// (Exec, Native, NetMulticast, MulticastDelegate, Delegate, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_TalkCameraManager_C::SetNextCameraFromRandom()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkCameraManager.BP_TalkCameraManager_C.SetNextCameraFromRandom");

	ABP_TalkCameraManager_C_SetNextCameraFromRandom_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkCameraManager.BP_TalkCameraManager_C.SpawnDefalutTalkCamera
// (NetMulticast, NetServer, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UClass*                  cameraClass                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkCameraManager_C::SpawnDefalutTalkCamera(class UClass* cameraClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkCameraManager.BP_TalkCameraManager_C.SpawnDefalutTalkCamera");

	ABP_TalkCameraManager_C_SpawnDefalutTalkCamera_Params params;
	params.cameraClass = cameraClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkCameraManager.BP_TalkCameraManager_C.SetCameraPositionFromImaginaryLine
// (Exec, Event, Static, NetMulticast, MulticastDelegate, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ABP_TalkCameraManager_C::STATIC_SetCameraPositionFromImaginaryLine()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkCameraManager.BP_TalkCameraManager_C.SetCameraPositionFromImaginaryLine");

	ABP_TalkCameraManager_C_SetCameraPositionFromImaginaryLine_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkCameraManager.BP_TalkCameraManager_C.UserConstructionScript
// (Net, NetReliable, NetRequest, Native, NetResponse, MulticastDelegate, Private, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)

void ABP_TalkCameraManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkCameraManager.BP_TalkCameraManager_C.UserConstructionScript");

	ABP_TalkCameraManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkCameraManager.BP_TalkCameraManager_C.ChangeTarget
// (Net, Exec, Native, Event, NetMulticast, MulticastDelegate, Public, Private, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>          NewTarget                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// float                          lerpTime                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkCameraManager_C::ChangeTarget(TArray<class AActor*> NewTarget, float lerpTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkCameraManager.BP_TalkCameraManager_C.ChangeTarget");

	ABP_TalkCameraManager_C_ChangeTarget_Params params;
	params.NewTarget = NewTarget;
	params.lerpTime = lerpTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkCameraManager.BP_TalkCameraManager_C.ChangeToLookAtCamera
// (NetReliable, NetRequest, Exec, Event, NetResponse, MulticastDelegate, Public, Private, Protected, Delegate, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  MotionActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  TargetActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkCameraManager_C::ChangeToLookAtCamera(class AActor* Player, class AActor* MotionActor, class AActor* TargetActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkCameraManager.BP_TalkCameraManager_C.ChangeToLookAtCamera");

	ABP_TalkCameraManager_C_ChangeToLookAtCamera_Params params;
	params.Player = Player;
	params.MotionActor = MotionActor;
	params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkCameraManager.BP_TalkCameraManager_C.ReceiveTick
// (NetReliable, NetRequest, Exec, Event, NetResponse, Static, NetMulticast, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkCameraManager_C::STATIC_ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkCameraManager.BP_TalkCameraManager_C.ReceiveTick");

	ABP_TalkCameraManager_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkCameraManager.BP_TalkCameraManager_C.ChangeCameraByAutoCameraDirector
// (NetReliable, NetRequest, Exec, Native, Event, NetMulticast, MulticastDelegate, Public, Private, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  TalkedActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkCameraManager_C::ChangeCameraByAutoCameraDirector(class AActor* Player, class AActor* TalkedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkCameraManager.BP_TalkCameraManager_C.ChangeCameraByAutoCameraDirector");

	ABP_TalkCameraManager_C_ChangeCameraByAutoCameraDirector_Params params;
	params.Player = Player;
	params.TalkedActor = TalkedActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkCameraManager.BP_TalkCameraManager_C.ReceiveEndPlay
// (NetReliable, NetRequest, Exec, Event, NetResponse, Static, NetMulticast, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkCameraManager_C::STATIC_ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkCameraManager.BP_TalkCameraManager_C.ReceiveEndPlay");

	ABP_TalkCameraManager_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkCameraManager.BP_TalkCameraManager_C.ChangeToStartShowItemCamera
// (NetReliable, NetRequest, Native, NetResponse, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void ABP_TalkCameraManager_C::ChangeToStartShowItemCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkCameraManager.BP_TalkCameraManager_C.ChangeToStartShowItemCamera");

	ABP_TalkCameraManager_C_ChangeToStartShowItemCamera_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkCameraManager.BP_TalkCameraManager_C.ChangeToShowItemZoomCamera
// (Net, NetRequest, Native, NetResponse, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void ABP_TalkCameraManager_C::ChangeToShowItemZoomCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkCameraManager.BP_TalkCameraManager_C.ChangeToShowItemZoomCamera");

	ABP_TalkCameraManager_C_ChangeToShowItemZoomCamera_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkCameraManager.BP_TalkCameraManager_C.ChangeCamera
// (Net, NetReliable, NetRequest, Native, NetResponse, Static, NetMulticast, HasOutParms, HasDefaults, DLLImport)
// Parameters:
// struct FString                 LookTargetCharacterID          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// EAutoCameraType                AutoCameraType                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           isSameTarget                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 UseCameraName                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 UseCameraGroup                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class AActor*                  PlayerActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  TalkedActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkCameraManager_C::STATIC_ChangeCamera(const struct FString& LookTargetCharacterID, EAutoCameraType AutoCameraType, bool isSameTarget, const struct FString& UseCameraName, const struct FString& UseCameraGroup, class AActor* PlayerActor, class AActor* TalkedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkCameraManager.BP_TalkCameraManager_C.ChangeCamera");

	ABP_TalkCameraManager_C_ChangeCamera_Params params;
	params.LookTargetCharacterID = LookTargetCharacterID;
	params.AutoCameraType = AutoCameraType;
	params.isSameTarget = isSameTarget;
	params.UseCameraName = UseCameraName;
	params.UseCameraGroup = UseCameraGroup;
	params.PlayerActor = PlayerActor;
	params.TalkedActor = TalkedActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkCameraManager.BP_TalkCameraManager_C.SpawnNextCamera
// (Net, NetRequest, Native, NetResponse, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void ABP_TalkCameraManager_C::SpawnNextCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkCameraManager.BP_TalkCameraManager_C.SpawnNextCamera");

	ABP_TalkCameraManager_C_SpawnNextCamera_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkCameraManager.BP_TalkCameraManager_C.ExecuteUbergraph_BP_TalkCameraManager
// (Net, NetReliable, Exec, Event, Static, Private, Delegate, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkCameraManager_C::STATIC_ExecuteUbergraph_BP_TalkCameraManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkCameraManager.BP_TalkCameraManager_C.ExecuteUbergraph_BP_TalkCameraManager");

	ABP_TalkCameraManager_C_ExecuteUbergraph_BP_TalkCameraManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkCameraManager.BP_TalkCameraManager_C.OnSelectedAutoCamera__DelegateSignature
// (Event, NetResponse, NetMulticast, MulticastDelegate, Private, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)

void ABP_TalkCameraManager_C::OnSelectedAutoCamera__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkCameraManager.BP_TalkCameraManager_C.OnSelectedAutoCamera__DelegateSignature");

	ABP_TalkCameraManager_C_OnSelectedAutoCamera__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
