
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

// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.GetRewardFeed
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// ES3RewardType                  Type                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Otoshidama_Base_C::GetRewardFeed(ES3RewardType* Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.GetRewardFeed");

	ABP_Otoshidama_Base_C_GetRewardFeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Type != nullptr)
		*Type = params.Type;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.GetZoomTarget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
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
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
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
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
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
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
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
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Otoshidama_Base_C::SetUpDummyNailMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.SetUpDummyNailMesh");

	ABP_Otoshidama_Base_C_SetUpDummyNailMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.InitializePocket
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Otoshidama_Base_C::InitializePocket()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.InitializePocket");

	ABP_Otoshidama_Base_C_InitializePocket_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.GetDetectAction
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS3DetectActionParam> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FS3DetectActionParam> ABP_Otoshidama_Base_C::GetDetectAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.GetDetectAction");

	ABP_Otoshidama_Base_C_GetDetectAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.InitAsyncLoad
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
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
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMeshComponent*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UMeshComponent* ABP_Otoshidama_Base_C::GetClothMeshComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.GetClothMeshComponent");

	ABP_Otoshidama_Base_C_GetClothMeshComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.GetCameraPosition
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
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
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Otoshidama_Base_C::SetBoardMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.SetBoardMaterial");

	ABP_Otoshidama_Base_C_SetBoardMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.GetMiniGameHelpName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 String                         (Parm, OutParm, ZeroConstructor)

void ABP_Otoshidama_Base_C::GetMiniGameHelpName(struct FString* String)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.GetMiniGameHelpName");

	ABP_Otoshidama_Base_C_GetMiniGameHelpName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (String != nullptr)
		*String = params.String;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.GetBottomPocketMaterial
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInstance*       return_value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Otoshidama_Base_C::GetBottomPocketMaterial(int Index, class UMaterialInstance** return_value)
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
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Output                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Otoshidama_Base_C::GetBottomPocketCount(int* Output)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.GetBottomPocketCount");

	ABP_Otoshidama_Base_C_GetBottomPocketCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.GetBottomPocket
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Dimension_1                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Output                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Otoshidama_Base_C::GetBottomPocket(int Dimension_1, int* Output)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.GetBottomPocket");

	ABP_Otoshidama_Base_C_GetBottomPocket_Params params;
	params.Dimension_1 = Dimension_1;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.UpdateHandMotion
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Otoshidama_Base_C::UpdateHandMotion()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.UpdateHandMotion");

	ABP_Otoshidama_Base_C_UpdateHandMotion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.SetHandMotion
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          hand_rate                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Otoshidama_Base_C::SetHandMotion(float hand_rate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.SetHandMotion");

	ABP_Otoshidama_Base_C_SetHandMotion_Params params;
	params.hand_rate = hand_rate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.CenterPocektHit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            hit_result                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Otoshidama_Base_C::CenterPocektHit(int hit_result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.CenterPocektHit");

	ABP_Otoshidama_Base_C_CenterPocektHit_Params params;
	params.hit_result = hit_result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.HitCheck
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Otoshidama_Base_C::HitCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.HitCheck");

	ABP_Otoshidama_Base_C_HitCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.DestroyNail
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Otoshidama_Base_C::DestroyNail()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.DestroyNail");

	ABP_Otoshidama_Base_C_DestroyNail_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.CreateNail
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Otoshidama_Base_C::CreateNail()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.CreateNail");

	ABP_Otoshidama_Base_C_CreateNail_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.Finalize_Check
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Otoshidama_Base_C::Finalize_Check()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.Finalize_Check");

	ABP_Otoshidama_Base_C_Finalize_Check_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.BottomPocketHit
// (Protected, BlueprintCallable, BlueprintEvent)
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
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   row_name                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_Otoshidama_Base_C::GetDataBaseValue(const struct FName& row_name, int* Value)
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
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
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
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Otoshidama_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.UserConstructionScript");

	ABP_Otoshidama_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.Timeline_StartCamera__FinishedFunc
// (BlueprintEvent)

void ABP_Otoshidama_Base_C::Timeline_StartCamera__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.Timeline_StartCamera__FinishedFunc");

	ABP_Otoshidama_Base_C_Timeline_StartCamera__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.Timeline_StartCamera__UpdateFunc
// (BlueprintEvent)

void ABP_Otoshidama_Base_C::Timeline_StartCamera__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.Timeline_StartCamera__UpdateFunc");

	ABP_Otoshidama_Base_C_Timeline_StartCamera__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.Action Button Pushed
// (BlueprintCallable, BlueprintEvent)

void ABP_Otoshidama_Base_C::Action_Button_Pushed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.Action Button Pushed");

	ABP_Otoshidama_Base_C_Action_Button_Pushed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.D-Right Pushed
// (BlueprintCallable, BlueprintEvent)

void ABP_Otoshidama_Base_C::D_Right_Pushed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.D-Right Pushed");

	ABP_Otoshidama_Base_C_D_Right_Pushed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.D-Left Pushed
// (BlueprintCallable, BlueprintEvent)

void ABP_Otoshidama_Base_C::D_Left_Pushed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.D-Left Pushed");

	ABP_Otoshidama_Base_C_D_Left_Pushed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.Back Pushed
// (BlueprintCallable, BlueprintEvent)

void ABP_Otoshidama_Base_C::Back_Pushed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.Back Pushed");

	ABP_Otoshidama_Base_C_Back_Pushed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.X Button Pushed
// (BlueprintCallable, BlueprintEvent)

void ABP_Otoshidama_Base_C::X_Button_Pushed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.X Button Pushed");

	ABP_Otoshidama_Base_C_X_Button_Pushed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.Input Update
// (BlueprintCallable, BlueprintEvent)

void ABP_Otoshidama_Base_C::Input_Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.Input Update");

	ABP_Otoshidama_Base_C_Input_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.D-Right Released
// (BlueprintCallable, BlueprintEvent)

void ABP_Otoshidama_Base_C::D_Right_Released()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.D-Right Released");

	ABP_Otoshidama_Base_C_D_Right_Released_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.D-Left Released
// (BlueprintCallable, BlueprintEvent)

void ABP_Otoshidama_Base_C::D_Left_Released()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.D-Left Released");

	ABP_Otoshidama_Base_C_D_Left_Released_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.D-Down Released
// (BlueprintCallable, BlueprintEvent)

void ABP_Otoshidama_Base_C::D_Down_Released()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.D-Down Released");

	ABP_Otoshidama_Base_C_D_Down_Released_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.D-Down Pushed
// (BlueprintCallable, BlueprintEvent)

void ABP_Otoshidama_Base_C::D_Down_Pushed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.D-Down Pushed");

	ABP_Otoshidama_Base_C_D_Down_Pushed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.D-Up Released
// (BlueprintCallable, BlueprintEvent)

void ABP_Otoshidama_Base_C::D_Up_Released()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.D-Up Released");

	ABP_Otoshidama_Base_C_D_Up_Released_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.D-Up Pushed
// (BlueprintCallable, BlueprintEvent)

void ABP_Otoshidama_Base_C::D_Up_Pushed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.D-Up Pushed");

	ABP_Otoshidama_Base_C_D_Up_Pushed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.LeftStick X-Axis
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Axis_Value                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Otoshidama_Base_C::LeftStick_X_Axis(float Axis_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.LeftStick X-Axis");

	ABP_Otoshidama_Base_C_LeftStick_X_Axis_Params params;
	params.Axis_Value = Axis_Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.Left Stick Y-Axis
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Axis_Value                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Otoshidama_Base_C::Left_Stick_Y_Axis(float Axis_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.Left Stick Y-Axis");

	ABP_Otoshidama_Base_C_Left_Stick_Y_Axis_Params params;
	params.Axis_Value = Axis_Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.Initialize
// (BlueprintCallable, BlueprintEvent)

void ABP_Otoshidama_Base_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.Initialize");

	ABP_Otoshidama_Base_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.Finalize
// (BlueprintCallable, BlueprintEvent)

void ABP_Otoshidama_Base_C::Finalize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.Finalize");

	ABP_Otoshidama_Base_C_Finalize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.FinalizeReset
// (BlueprintCallable, BlueprintEvent)

void ABP_Otoshidama_Base_C::FinalizeReset()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.FinalizeReset");

	ABP_Otoshidama_Base_C_FinalizeReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.StartMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Otoshidama_Base_C::StartMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.StartMiniGame");

	ABP_Otoshidama_Base_C_StartMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.RestartMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Otoshidama_Base_C::RestartMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.RestartMiniGame");

	ABP_Otoshidama_Base_C_RestartMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.EndMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Otoshidama_Base_C::EndMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.EndMiniGame");

	ABP_Otoshidama_Base_C_EndMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.SetChooseCameraTransform
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Otoshidama_Base_C::SetChooseCameraTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.SetChooseCameraTransform");

	ABP_Otoshidama_Base_C_SetChooseCameraTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.OnFinishedFade
// (BlueprintCallable, BlueprintEvent)

void ABP_Otoshidama_Base_C::OnFinishedFade()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.OnFinishedFade");

	ABP_Otoshidama_Base_C_OnFinishedFade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Otoshidama_Base_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.ReceiveBeginPlay");

	ABP_Otoshidama_Base_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Otoshidama_Base_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.ReceiveTick");

	ABP_Otoshidama_Base_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.BndEvt__fall area_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
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

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.GameStart
// (BlueprintCallable, BlueprintEvent)

void ABP_Otoshidama_Base_C::GameStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.GameStart");

	ABP_Otoshidama_Base_C_GameStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.GameEnd
// (BlueprintCallable, BlueprintEvent)

void ABP_Otoshidama_Base_C::GameEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.GameEnd");

	ABP_Otoshidama_Base_C_GameEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.BeginHitEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            hit_index                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Otoshidama_Base_C::BeginHitEvent(int hit_index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.BeginHitEvent");

	ABP_Otoshidama_Base_C_BeginHitEvent_Params params;
	params.hit_index = hit_index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.bAllReset
// (BlueprintCallable, BlueprintEvent)

void ABP_Otoshidama_Base_C::bAllReset()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.bAllReset");

	ABP_Otoshidama_Base_C_bAllReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.BndEvt__right_hit_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
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
// (BlueprintEvent)
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

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.BndEvt__left_hit_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
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
// (BlueprintEvent)
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

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.BndEvt__WoodSound_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_Otoshidama_Base_C::BndEvt__WoodSound_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
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
// (BlueprintCallable, BlueprintEvent)

void ABP_Otoshidama_Base_C::OnTalkEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.OnTalkEnd");

	ABP_Otoshidama_Base_C_OnTalkEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.CenterPocektHitEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            hit_element                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Otoshidama_Base_C::CenterPocektHitEvent(int hit_element)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.CenterPocektHitEvent");

	ABP_Otoshidama_Base_C_CenterPocektHitEvent_Params params;
	params.hit_element = hit_element;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.DestroyNailEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_OD_Nail_C*           nail                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Otoshidama_Base_C::DestroyNailEvent(class ABP_OD_Nail_C* nail)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.DestroyNailEvent");

	ABP_Otoshidama_Base_C_DestroyNailEvent_Params params;
	params.nail = nail;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.BndEvt__fall area_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
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

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.WinMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Otoshidama_Base_C::WinMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.WinMiniGame");

	ABP_Otoshidama_Base_C_WinMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.LoseMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Otoshidama_Base_C::LoseMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.LoseMiniGame");

	ABP_Otoshidama_Base_C_LoseMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.DrawMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Otoshidama_Base_C::DrawMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.DrawMiniGame");

	ABP_Otoshidama_Base_C_DrawMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.BindTalkEndEvent
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Otoshidama_Base_C::BindTalkEndEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.BindTalkEndEvent");

	ABP_Otoshidama_Base_C_BindTalkEndEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.CreateNailEvent
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Otoshidama_Base_C::CreateNailEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.CreateNailEvent");

	ABP_Otoshidama_Base_C_CreateNailEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.Otoshidama End
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           is_success                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Otoshidama_Base_C::Otoshidama_End(bool is_success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.Otoshidama End");

	ABP_Otoshidama_Base_C_Otoshidama_End_Params params;
	params.is_success = is_success;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.Set Body Collision Enable
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           is_enable                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Otoshidama_Base_C::Set_Body_Collision_Enable(bool is_enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.Set Body Collision Enable");

	ABP_Otoshidama_Base_C_Set_Body_Collision_Enable_Params params;
	params.is_enable = is_enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.BndEvt__WoodSound_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
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

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.BndEvt__WallSoundLeft_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
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
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_Otoshidama_Base_C::BndEvt__WallSoundRight_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
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

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.BndEvt__WallSoundLeft_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Otoshidama_Base_C::BndEvt__WallSoundLeft_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
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
// (BlueprintEvent)
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

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.SetEnabledPlayerEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Otoshidama_Base_C::SetEnabledPlayerEvent(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.SetEnabledPlayerEvent");

	ABP_Otoshidama_Base_C_SetEnabledPlayerEvent_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.RestartGamePlay
// (BlueprintCallable, BlueprintEvent)

void ABP_Otoshidama_Base_C::RestartGamePlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.RestartGamePlay");

	ABP_Otoshidama_Base_C_RestartGamePlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.Event_CameraUpdate
// (BlueprintCallable, BlueprintEvent)

void ABP_Otoshidama_Base_C::Event_CameraUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.Event_CameraUpdate");

	ABP_Otoshidama_Base_C_Event_CameraUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Otoshidama_Base_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.ReceiveEndPlay");

	ABP_Otoshidama_Base_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.Event_StopStartCamera
// (BlueprintCallable, BlueprintEvent)

void ABP_Otoshidama_Base_C::Event_StopStartCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.Event_StopStartCamera");

	ABP_Otoshidama_Base_C_Event_StopStartCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.CancelMiniGame
// (BlueprintCallable, BlueprintEvent)

void ABP_Otoshidama_Base_C::CancelMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.CancelMiniGame");

	ABP_Otoshidama_Base_C_CancelMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.ChangedClothes
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class US3ClothInterface> Interface                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   CharaName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Otoshidama_Base_C::ChangedClothes(const TScriptInterface<class US3ClothInterface>& Interface, const struct FName& CharaName)
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
// (BlueprintCallable, BlueprintEvent)

void ABP_Otoshidama_Base_C::DelayedGameEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.DelayedGameEnd");

	ABP_Otoshidama_Base_C_DelayedGameEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.DelayedInitialize
// (Event, Public, BlueprintEvent)

void ABP_Otoshidama_Base_C::DelayedInitialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.DelayedInitialize");

	ABP_Otoshidama_Base_C_DelayedInitialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.EnabledPlayerOnDecide
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Otoshidama_Base_C::EnabledPlayerOnDecide()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.EnabledPlayerOnDecide");

	ABP_Otoshidama_Base_C_EnabledPlayerOnDecide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.ExecuteUbergraph_BP_Otoshidama_Base
// (HasDefaults)
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
