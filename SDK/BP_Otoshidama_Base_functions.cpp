
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

// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.GetRewardFeed
// (Native, NetResponse, NetMulticast, MulticastDelegate, Protected, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ES3RewardType                  Type                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Otoshidama_Base_C::GetRewardFeed(ES3RewardType* Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.GetRewardFeed");

	ABP_Otoshidama_Base_C_GetRewardFeed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Type != nullptr)
		*Type = params.Type;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.GetZoomTarget
// (Net, NetReliable, NetRequest, Exec, NetResponse, NetMulticast, MulticastDelegate, Protected, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USceneComponent*         newParam                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_Otoshidama_Base_C::GetZoomTarget(class USceneComponent** newParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.GetZoomTarget");

	ABP_Otoshidama_Base_C_GetZoomTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (newParam != nullptr)
		*newParam = params.newParam;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.GetBetZoomTarget
// (NetReliable, NetRequest, Exec, NetResponse, NetMulticast, MulticastDelegate, Protected, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USceneComponent*         newParam                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_Otoshidama_Base_C::GetBetZoomTarget(class USceneComponent** newParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.GetBetZoomTarget");

	ABP_Otoshidama_Base_C_GetBetZoomTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (newParam != nullptr)
		*newParam = params.newParam;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.GetCamera
// (Net, NetRequest, Exec, NetResponse, NetMulticast, MulticastDelegate, Protected, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UCameraComponent*        newParam                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_Otoshidama_Base_C::GetCamera(class UCameraComponent** newParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.GetCamera");

	ABP_Otoshidama_Base_C_GetCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (newParam != nullptr)
		*newParam = params.newParam;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.GetCasinoMaterial
// (NetRequest, NetMulticast, Public, Private, Protected, Delegate, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInstance*       Material                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Otoshidama_Base_C::GetCasinoMaterial(int Index, class UMaterialInstance** Material)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.GetCasinoMaterial");

	ABP_Otoshidama_Base_C_GetCasinoMaterial_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Material != nullptr)
		*Material = params.Material;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.SetUpDummyNailMesh
// (NetReliable, Native, Event, NetResponse, MulticastDelegate, Protected, Delegate, NetServer, BlueprintEvent, BlueprintPure, Const)

void ABP_Otoshidama_Base_C::SetUpDummyNailMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.SetUpDummyNailMesh");

	ABP_Otoshidama_Base_C_SetUpDummyNailMesh_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.InitializePocket
// (NetReliable, MulticastDelegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_Otoshidama_Base_C::InitializePocket()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.InitializePocket");

	ABP_Otoshidama_Base_C_InitializePocket_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.GetDetectAction
// (Net, NetReliable, NetRequest, Native, Public, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FS3DetectActionParam> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FS3DetectActionParam> ABP_Otoshidama_Base_C::GetDetectAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.GetDetectAction");

	ABP_Otoshidama_Base_C_GetDetectAction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.InitAsyncLoad
// (Net, NetRequest, Exec, NetResponse, MulticastDelegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           dummy                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Otoshidama_Base_C::InitAsyncLoad(bool* dummy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.InitAsyncLoad");

	ABP_Otoshidama_Base_C_InitAsyncLoad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (dummy != nullptr)
		*dummy = params.dummy;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.GetClothMeshComponent
// (NetReliable, Native, NetResponse, NetMulticast, MulticastDelegate, Protected, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UMeshComponent*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UMeshComponent* ABP_Otoshidama_Base_C::GetClothMeshComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.GetClothMeshComponent");

	ABP_Otoshidama_Base_C_GetClothMeshComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.GetCameraPosition
// (NetReliable, NetRequest, Exec, NetMulticast, Public, Protected, Delegate, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector ABP_Otoshidama_Base_C::GetCameraPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.GetCameraPosition");

	ABP_Otoshidama_Base_C_GetCameraPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.SetBoardMaterial
// (NetRequest, Event, NetResponse, MulticastDelegate, Protected, Delegate, NetServer, BlueprintEvent, BlueprintPure, Const)

void ABP_Otoshidama_Base_C::SetBoardMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.SetBoardMaterial");

	ABP_Otoshidama_Base_C_SetBoardMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.GetMiniGameHelpName
// (NetReliable, Native, Static, MulticastDelegate, Private, Delegate, HasDefaults, NetClient)
// Parameters:
// struct FString                 String                         (Parm, OutParm, ZeroConstructor)

void ABP_Otoshidama_Base_C::STATIC_GetMiniGameHelpName(struct FString* String)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.GetMiniGameHelpName");

	ABP_Otoshidama_Base_C_GetMiniGameHelpName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (String != nullptr)
		*String = params.String;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.GetBottomPocketMaterial
// (Net, NetReliable, Event, NetResponse, Static, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInstance*       return_value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Otoshidama_Base_C::STATIC_GetBottomPocketMaterial(int Index, class UMaterialInstance** return_value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.GetBottomPocketMaterial");

	ABP_Otoshidama_Base_C_GetBottomPocketMaterial_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (return_value != nullptr)
		*return_value = params.return_value;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.GetBottomPocketCount
// (Net, NetRequest, Exec, Native, Event, Static, NetMulticast, MulticastDelegate, Private, Protected, Delegate, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            Output                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Otoshidama_Base_C::STATIC_GetBottomPocketCount(int* Output)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.GetBottomPocketCount");

	ABP_Otoshidama_Base_C_GetBottomPocketCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.GetBottomPocket
// (Net, NetReliable, Exec, Native, Event, Static, NetMulticast, MulticastDelegate, Private, Protected, Delegate, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            Dimension_1                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Output                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Otoshidama_Base_C::STATIC_GetBottomPocket(int Dimension_1, int* Output)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.GetBottomPocket");

	ABP_Otoshidama_Base_C_GetBottomPocket_Params params;
	params.Dimension_1 = Dimension_1;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.UpdateHandMotion
// (NetReliable, Exec, Event, NetResponse, NetMulticast, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)

void ABP_Otoshidama_Base_C::UpdateHandMotion()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.UpdateHandMotion");

	ABP_Otoshidama_Base_C_UpdateHandMotion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.SetHandMotion
// (Net, NetRequest, Native, NetResponse, NetMulticast, MulticastDelegate, Protected, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          hand_rate                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Otoshidama_Base_C::SetHandMotion(float hand_rate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.SetHandMotion");

	ABP_Otoshidama_Base_C_SetHandMotion_Params params;
	params.hand_rate = hand_rate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.CenterPocektHit
// (NetRequest, Static, NetMulticast, Public, Private, Protected, NetServer, HasOutParms, HasDefaults, NetClient, Const)
// Parameters:
// int                            hit_result                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Otoshidama_Base_C::STATIC_CenterPocektHit(int hit_result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.CenterPocektHit");

	ABP_Otoshidama_Base_C_CenterPocektHit_Params params;
	params.hit_result = hit_result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.HitCheck
// (NetRequest, Exec, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_Otoshidama_Base_C::HitCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.HitCheck");

	ABP_Otoshidama_Base_C_HitCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.DestroyNail
// (NetReliable, NetRequest, NetResponse, MulticastDelegate, Public, Private, NetServer, BlueprintCallable)

void ABP_Otoshidama_Base_C::DestroyNail()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.DestroyNail");

	ABP_Otoshidama_Base_C_DestroyNail_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.CreateNail
// (Event, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_Otoshidama_Base_C::STATIC_CreateNail()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.CreateNail");

	ABP_Otoshidama_Base_C_CreateNail_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.Finalize_Check
// (NetReliable, Exec, Event, NetMulticast, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_Otoshidama_Base_C::Finalize_Check()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.Finalize_Check");

	ABP_Otoshidama_Base_C_Finalize_Check_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.BottomPocketHit
// (Net, NetReliable, NetRequest, Exec, NetResponse, MulticastDelegate, Public, Protected, Delegate, DLLImport, Const)
// Parameters:
// int                            hit_index                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Otoshidama_Base_C::BottomPocketHit(int hit_index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.BottomPocketHit");

	ABP_Otoshidama_Base_C_BottomPocketHit_Params params;
	params.hit_index = hit_index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.GetDataBaseValue
// (Static, NetMulticast, MulticastDelegate, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent)
// Parameters:
// struct FName                   row_name                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_Otoshidama_Base_C::STATIC_GetDataBaseValue(const struct FName& row_name, int* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.GetDataBaseValue");

	ABP_Otoshidama_Base_C_GetDataBaseValue_Params params;
	params.row_name = row_name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;

	return params.ReturnValue;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.SpawnBall
// (NetReliable, Exec, Event, NetResponse, MulticastDelegate, Public, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ABP_OD_ball_Test_C*      OutputPin                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Otoshidama_Base_C::SpawnBall(class ABP_OD_ball_Test_C** OutputPin)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.SpawnBall");

	ABP_Otoshidama_Base_C_SpawnBall_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutputPin != nullptr)
		*OutputPin = params.OutputPin;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.UserConstructionScript
// (Exec, Static, NetMulticast, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_Otoshidama_Base_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.UserConstructionScript");

	ABP_Otoshidama_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.Timeline_StartCamera__FinishedFunc
// (NetRequest, Native, NetResponse, NetMulticast, MulticastDelegate, Protected, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)

void ABP_Otoshidama_Base_C::Timeline_StartCamera__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.Timeline_StartCamera__FinishedFunc");

	ABP_Otoshidama_Base_C_Timeline_StartCamera__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.Timeline_StartCamera__UpdateFunc
// (Net, NetReliable, Native, NetResponse, NetMulticast, MulticastDelegate, Protected, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)

void ABP_Otoshidama_Base_C::Timeline_StartCamera__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.Timeline_StartCamera__UpdateFunc");

	ABP_Otoshidama_Base_C_Timeline_StartCamera__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.Action Button Pushed
// (Net, NetReliable, Native, NetResponse, NetMulticast, MulticastDelegate, Protected, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)

void ABP_Otoshidama_Base_C::Action_Button_Pushed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.Action Button Pushed");

	ABP_Otoshidama_Base_C_Action_Button_Pushed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.D-Right Pushed
// (NetReliable, NetRequest, Exec, Native, NetResponse, NetMulticast, MulticastDelegate, Protected, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)

void ABP_Otoshidama_Base_C::D_Right_Pushed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.D-Right Pushed");

	ABP_Otoshidama_Base_C_D_Right_Pushed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.D-Left Pushed
// (Net, NetRequest, Exec, Native, NetResponse, NetMulticast, MulticastDelegate, Protected, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)

void ABP_Otoshidama_Base_C::D_Left_Pushed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.D-Left Pushed");

	ABP_Otoshidama_Base_C_D_Left_Pushed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.Back Pushed
// (Net, NetRequest, Exec, Native, NetResponse, NetMulticast, MulticastDelegate, Protected, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)

void ABP_Otoshidama_Base_C::Back_Pushed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.Back Pushed");

	ABP_Otoshidama_Base_C_Back_Pushed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.X Button Pushed
// (NetRequest, Exec, Native, NetResponse, NetMulticast, MulticastDelegate, Protected, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)

void ABP_Otoshidama_Base_C::X_Button_Pushed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.X Button Pushed");

	ABP_Otoshidama_Base_C_X_Button_Pushed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.Input Update
// (NetRequest, Exec, Native, NetResponse, NetMulticast, MulticastDelegate, Protected, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)

void ABP_Otoshidama_Base_C::Input_Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.Input Update");

	ABP_Otoshidama_Base_C_Input_Update_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.D-Right Released
// (Net, NetReliable, Exec, Native, NetResponse, NetMulticast, MulticastDelegate, Protected, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)

void ABP_Otoshidama_Base_C::D_Right_Released()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.D-Right Released");

	ABP_Otoshidama_Base_C_D_Right_Released_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.D-Left Released
// (Net, NetReliable, Exec, Native, NetResponse, NetMulticast, MulticastDelegate, Protected, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)

void ABP_Otoshidama_Base_C::D_Left_Released()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.D-Left Released");

	ABP_Otoshidama_Base_C_D_Left_Released_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.D-Down Released
// (NetReliable, Exec, Native, NetResponse, NetMulticast, MulticastDelegate, Protected, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)

void ABP_Otoshidama_Base_C::D_Down_Released()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.D-Down Released");

	ABP_Otoshidama_Base_C_D_Down_Released_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.D-Down Pushed
// (NetReliable, Exec, Native, NetResponse, NetMulticast, MulticastDelegate, Protected, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)

void ABP_Otoshidama_Base_C::D_Down_Pushed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.D-Down Pushed");

	ABP_Otoshidama_Base_C_D_Down_Pushed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.D-Up Released
// (Net, Exec, Native, NetResponse, NetMulticast, MulticastDelegate, Protected, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)

void ABP_Otoshidama_Base_C::D_Up_Released()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.D-Up Released");

	ABP_Otoshidama_Base_C_D_Up_Released_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.D-Up Pushed
// (Net, Exec, Native, NetResponse, NetMulticast, MulticastDelegate, Protected, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)

void ABP_Otoshidama_Base_C::D_Up_Pushed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.D-Up Pushed");

	ABP_Otoshidama_Base_C_D_Up_Pushed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.LeftStick X-Axis
// (NetReliable, Exec, Static, NetMulticast, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          axis_value                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Otoshidama_Base_C::STATIC_LeftStick_X_Axis(float axis_value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.LeftStick X-Axis");

	ABP_Otoshidama_Base_C_LeftStick_X_Axis_Params params;
	params.axis_value = axis_value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.Left Stick Y-Axis
// (NetReliable, Exec, Native, Event, NetResponse, Static, MulticastDelegate, Private, NetServer, HasOutParms, NetClient, Const)
// Parameters:
// float                          axis_value                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Otoshidama_Base_C::STATIC_Left_Stick_Y_Axis(float axis_value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.Left Stick Y-Axis");

	ABP_Otoshidama_Base_C_Left_Stick_Y_Axis_Params params;
	params.axis_value = axis_value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.Initialize
// (Net, NetReliable, NetRequest, Native, NetResponse, NetMulticast, MulticastDelegate, Protected, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)

void ABP_Otoshidama_Base_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.Initialize");

	ABP_Otoshidama_Base_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.Finalize
// (Net, NetReliable, NetRequest, Native, NetResponse, NetMulticast, MulticastDelegate, Protected, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)

void ABP_Otoshidama_Base_C::Finalize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.Finalize");

	ABP_Otoshidama_Base_C_Finalize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.FinalizeReset
// (NetReliable, NetRequest, Native, NetResponse, NetMulticast, MulticastDelegate, Protected, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)

void ABP_Otoshidama_Base_C::FinalizeReset()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.FinalizeReset");

	ABP_Otoshidama_Base_C_FinalizeReset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.StartMiniGame
// (NetReliable, Exec, NetResponse, NetMulticast, Public, Private, Protected, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintPure, Const)

void ABP_Otoshidama_Base_C::StartMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.StartMiniGame");

	ABP_Otoshidama_Base_C_StartMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.RestartMiniGame
// (Exec, NetResponse, NetMulticast, Public, Private, Protected, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintPure, Const)

void ABP_Otoshidama_Base_C::RestartMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.RestartMiniGame");

	ABP_Otoshidama_Base_C_RestartMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.EndMiniGame
// (Net, NetReliable, Exec, NetResponse, NetMulticast, Public, Private, Protected, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintPure, Const)

void ABP_Otoshidama_Base_C::EndMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.EndMiniGame");

	ABP_Otoshidama_Base_C_EndMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.SetChooseCameraTransform
// (NetReliable, NetRequest, Native, NetResponse, NetMulticast, MulticastDelegate, Protected, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)

void ABP_Otoshidama_Base_C::SetChooseCameraTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.SetChooseCameraTransform");

	ABP_Otoshidama_Base_C_SetChooseCameraTransform_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.OnFinishedFade
// (Net, Event, NetResponse, NetMulticast, MulticastDelegate, Protected, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)

void ABP_Otoshidama_Base_C::OnFinishedFade()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.OnFinishedFade");

	ABP_Otoshidama_Base_C_OnFinishedFade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.ReceiveBeginPlay
// (Net, NetReliable, Exec, NetResponse, NetMulticast, Public, Private, Protected, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintPure, Const)

void ABP_Otoshidama_Base_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.ReceiveBeginPlay");

	ABP_Otoshidama_Base_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.ReceiveTick
// (Net, NetReliable, Exec, Static, NetMulticast, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Otoshidama_Base_C::STATIC_ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.ReceiveTick");

	ABP_Otoshidama_Base_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.BndEvt__fall area_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (Net, NetReliable, NetRequest, Exec, Native, NetResponse, NetMulticast, MulticastDelegate, Private, Protected, Delegate, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_Otoshidama_Base_C::BndEvt__fall_area_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.BndEvt__fall area_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_Otoshidama_Base_C_BndEvt__fall_area_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.GameStart
// (Event, NetResponse, NetMulticast, MulticastDelegate, Protected, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)

void ABP_Otoshidama_Base_C::GameStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.GameStart");

	ABP_Otoshidama_Base_C_GameStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.GameEnd
// (Event, NetResponse, NetMulticast, MulticastDelegate, Protected, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)

void ABP_Otoshidama_Base_C::GameEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.GameEnd");

	ABP_Otoshidama_Base_C_GameEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.BeginHitEvent
// (NetReliable, Exec, Static, NetMulticast, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            hit_index                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Otoshidama_Base_C::STATIC_BeginHitEvent(int hit_index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.BeginHitEvent");

	ABP_Otoshidama_Base_C_BeginHitEvent_Params params;
	params.hit_index = hit_index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.bAllReset
// (Net, NetReliable, NetRequest, Exec, Native, NetResponse, NetMulticast, MulticastDelegate, Protected, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)

void ABP_Otoshidama_Base_C::bAllReset()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.bAllReset");

	ABP_Otoshidama_Base_C_bAllReset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.BndEvt__right_hit_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
// (NetReliable, Event, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_Otoshidama_Base_C::BndEvt__right_hit_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.BndEvt__right_hit_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_Otoshidama_Base_C_BndEvt__right_hit_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.BndEvt__right_hit_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature
// (Exec, Native, NetMulticast, MulticastDelegate, Private, Protected, NetServer, HasOutParms, NetClient, Const)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Otoshidama_Base_C::BndEvt__right_hit_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.BndEvt__right_hit_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature");

	ABP_Otoshidama_Base_C_BndEvt__right_hit_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.BndEvt__left_hit_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature
// (NetRequest, Event, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_Otoshidama_Base_C::BndEvt__left_hit_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.BndEvt__left_hit_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_Otoshidama_Base_C_BndEvt__left_hit_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.BndEvt__left_hit_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature
// (NetReliable, NetRequest, Native, NetMulticast, MulticastDelegate, Private, Protected, NetServer, HasOutParms, NetClient, Const)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Otoshidama_Base_C::BndEvt__left_hit_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.BndEvt__left_hit_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature");

	ABP_Otoshidama_Base_C_BndEvt__left_hit_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.BndEvt__WoodSound_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
// (NetReliable, Exec, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_Otoshidama_Base_C::STATIC_BndEvt__WoodSound_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.BndEvt__WoodSound_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_Otoshidama_Base_C_BndEvt__WoodSound_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.OnTalkEnd
// (NetReliable, NetRequest, Exec, Native, NetResponse, NetMulticast, MulticastDelegate, Protected, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)

void ABP_Otoshidama_Base_C::OnTalkEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.OnTalkEnd");

	ABP_Otoshidama_Base_C_OnTalkEnd_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.CenterPocektHitEvent
// (Net, NetReliable, NetRequest, Exec, Static, NetMulticast, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            hit_element                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Otoshidama_Base_C::STATIC_CenterPocektHitEvent(int hit_element)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.CenterPocektHitEvent");

	ABP_Otoshidama_Base_C_CenterPocektHitEvent_Params params;
	params.hit_element = hit_element;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.DestroyNailEvent
// (Net, NetRequest, Exec, Static, NetMulticast, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ABP_OD_Nail_C*           nail                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Otoshidama_Base_C::STATIC_DestroyNailEvent(class ABP_OD_Nail_C* nail)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.DestroyNailEvent");

	ABP_Otoshidama_Base_C_DestroyNailEvent_Params params;
	params.nail = nail;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.BndEvt__fall area_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature
// (Net, NetReliable, Exec, Native, NetMulticast, MulticastDelegate, Private, Protected, NetServer, HasOutParms, NetClient, Const)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Otoshidama_Base_C::BndEvt__fall_area_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.BndEvt__fall area_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature");

	ABP_Otoshidama_Base_C_BndEvt__fall_area_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.WinMiniGame
// (NetReliable, Exec, NetResponse, NetMulticast, Public, Private, Protected, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintPure, Const)

void ABP_Otoshidama_Base_C::WinMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.WinMiniGame");

	ABP_Otoshidama_Base_C_WinMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.LoseMiniGame
// (Net, Exec, NetResponse, NetMulticast, Public, Private, Protected, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintPure, Const)

void ABP_Otoshidama_Base_C::LoseMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.LoseMiniGame");

	ABP_Otoshidama_Base_C_LoseMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.DrawMiniGame
// (Exec, NetResponse, NetMulticast, Public, Private, Protected, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintPure, Const)

void ABP_Otoshidama_Base_C::DrawMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.DrawMiniGame");

	ABP_Otoshidama_Base_C_DrawMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.BindTalkEndEvent
// (Net, NetReliable, Event, NetResponse, NetMulticast, MulticastDelegate, Protected, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)

void ABP_Otoshidama_Base_C::BindTalkEndEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.BindTalkEndEvent");

	ABP_Otoshidama_Base_C_BindTalkEndEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.CreateNailEvent
// (Net, NetReliable, Event, NetResponse, NetMulticast, MulticastDelegate, Protected, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)

void ABP_Otoshidama_Base_C::CreateNailEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.CreateNailEvent");

	ABP_Otoshidama_Base_C_CreateNailEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.Otoshidama End
// (Net, NetRequest, Exec, Static, NetMulticast, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           is_success                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Otoshidama_Base_C::STATIC_Otoshidama_End(bool is_success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.Otoshidama End");

	ABP_Otoshidama_Base_C_Otoshidama_End_Params params;
	params.is_success = is_success;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.Set Body Collision Enable
// (NetRequest, Exec, Static, NetMulticast, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           is_enable                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Otoshidama_Base_C::STATIC_Set_Body_Collision_Enable(bool is_enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.Set Body Collision Enable");

	ABP_Otoshidama_Base_C_Set_Body_Collision_Enable_Params params;
	params.is_enable = is_enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.BndEvt__WoodSound_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature
// (Net, Exec, Native, NetMulticast, MulticastDelegate, Private, Protected, NetServer, HasOutParms, NetClient, Const)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Otoshidama_Base_C::BndEvt__WoodSound_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.BndEvt__WoodSound_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature");

	ABP_Otoshidama_Base_C_BndEvt__WoodSound_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.BndEvt__WallSoundLeft_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
// (Net, Exec, Event, NetResponse, NetMulticast, MulticastDelegate, Private, Protected, Delegate, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_Otoshidama_Base_C::BndEvt__WallSoundLeft_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.BndEvt__WallSoundLeft_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_Otoshidama_Base_C_BndEvt__WallSoundLeft_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.BndEvt__WallSoundRight_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
// (Net, Exec, Native, Event, Static, NetMulticast, MulticastDelegate, Private, Protected, Delegate, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_Otoshidama_Base_C::STATIC_BndEvt__WallSoundRight_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.BndEvt__WallSoundRight_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_Otoshidama_Base_C_BndEvt__WallSoundRight_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.BndEvt__WallSoundLeft_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature
// (NetReliable, NetRequest, Exec, Event, NetResponse, Static, NetMulticast, Private, Protected, Delegate, Const)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Otoshidama_Base_C::STATIC_BndEvt__WallSoundLeft_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.BndEvt__WallSoundLeft_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature");

	ABP_Otoshidama_Base_C_BndEvt__WallSoundLeft_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.BndEvt__WallSoundRight_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature
// (Net, NetRequest, Native, NetMulticast, MulticastDelegate, Private, Protected, NetServer, HasOutParms, NetClient, Const)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Otoshidama_Base_C::BndEvt__WallSoundRight_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.BndEvt__WallSoundRight_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature");

	ABP_Otoshidama_Base_C_BndEvt__WallSoundRight_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.SetEnabledPlayerEvent
// (NetReliable, NetRequest, Exec, Static, NetMulticast, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Otoshidama_Base_C::STATIC_SetEnabledPlayerEvent(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.SetEnabledPlayerEvent");

	ABP_Otoshidama_Base_C_SetEnabledPlayerEvent_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.RestartGamePlay
// (Net, NetReliable, NetRequest, Event, NetResponse, NetMulticast, MulticastDelegate, Protected, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)

void ABP_Otoshidama_Base_C::RestartGamePlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.RestartGamePlay");

	ABP_Otoshidama_Base_C_RestartGamePlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.Event_CameraUpdate
// (NetReliable, NetRequest, Event, NetResponse, NetMulticast, MulticastDelegate, Protected, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)

void ABP_Otoshidama_Base_C::Event_CameraUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.Event_CameraUpdate");

	ABP_Otoshidama_Base_C_Event_CameraUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.ReceiveEndPlay
// (NetRequest, Exec, Native, NetMulticast, MulticastDelegate, Protected, NetServer, HasDefaults, NetClient, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Otoshidama_Base_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.ReceiveEndPlay");

	ABP_Otoshidama_Base_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.Event_StopStartCamera
// (NetReliable, NetRequest, Event, NetResponse, NetMulticast, MulticastDelegate, Protected, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)

void ABP_Otoshidama_Base_C::Event_StopStartCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.Event_StopStartCamera");

	ABP_Otoshidama_Base_C_Event_StopStartCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.CancelMiniGame
// (Net, Exec, NetResponse, NetMulticast, Public, Private, Protected, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintPure, Const)

void ABP_Otoshidama_Base_C::CancelMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.CancelMiniGame");

	ABP_Otoshidama_Base_C_CancelMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.ChangedClothes
// (Net, Static, MulticastDelegate, Public, Private, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class US3ClothInterface> Interface                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   CharaName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Otoshidama_Base_C::STATIC_ChangedClothes(const TScriptInterface<class US3ClothInterface>& Interface, const struct FName& CharaName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.ChangedClothes");

	ABP_Otoshidama_Base_C_ChangedClothes_Params params;
	params.Interface = Interface;
	params.CharaName = CharaName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.DelayedGameEnd
// (Net, NetRequest, Event, NetResponse, NetMulticast, MulticastDelegate, Protected, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)

void ABP_Otoshidama_Base_C::DelayedGameEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.DelayedGameEnd");

	ABP_Otoshidama_Base_C_DelayedGameEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.DelayedInitialize
// (Net, NetRequest, Event, NetResponse, NetMulticast, MulticastDelegate, Protected, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)

void ABP_Otoshidama_Base_C::DelayedInitialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.DelayedInitialize");

	ABP_Otoshidama_Base_C_DelayedInitialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.EnabledPlayerOnDecide
// (NetRequest, Event, NetResponse, NetMulticast, MulticastDelegate, Protected, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)

void ABP_Otoshidama_Base_C::EnabledPlayerOnDecide()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.EnabledPlayerOnDecide");

	ABP_Otoshidama_Base_C_EnabledPlayerOnDecide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.ExecuteUbergraph_BP_Otoshidama_Base
// (NetMulticast, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Otoshidama_Base_C::ExecuteUbergraph_BP_Otoshidama_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.ExecuteUbergraph_BP_Otoshidama_Base");

	ABP_Otoshidama_Base_C_ExecuteUbergraph_BP_Otoshidama_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
