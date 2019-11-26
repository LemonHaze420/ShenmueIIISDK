
#include "../SDK.h"

// Name: S3Demo, Version: 0.90.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BP_MiniGameSceneCapture.BP_MiniGameSceneCapture_C.GetMaterial
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UMaterialInstanceDynamic* UseMaterial                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameSceneCapture_C::GetMaterial(class UMaterialInstanceDynamic** UseMaterial)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameSceneCapture.BP_MiniGameSceneCapture_C.GetMaterial");

	ABP_MiniGameSceneCapture_C_GetMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (UseMaterial != nullptr)
		*UseMaterial = params.UseMaterial;
}


// Function BP_MiniGameSceneCapture.BP_MiniGameSceneCapture_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGameSceneCapture_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameSceneCapture.BP_MiniGameSceneCapture_C.UserConstructionScript");

	ABP_MiniGameSceneCapture_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameSceneCapture.BP_MiniGameSceneCapture_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MiniGameSceneCapture_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameSceneCapture.BP_MiniGameSceneCapture_C.ReceiveBeginPlay");

	ABP_MiniGameSceneCapture_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameSceneCapture.BP_MiniGameSceneCapture_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameSceneCapture_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameSceneCapture.BP_MiniGameSceneCapture_C.ReceiveEndPlay");

	ABP_MiniGameSceneCapture_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameSceneCapture.BP_MiniGameSceneCapture_C.ExecuteUbergraph_BP_MiniGameSceneCapture
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameSceneCapture_C::ExecuteUbergraph_BP_MiniGameSceneCapture(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameSceneCapture.BP_MiniGameSceneCapture_C.ExecuteUbergraph_BP_MiniGameSceneCapture");

	ABP_MiniGameSceneCapture_C_ExecuteUbergraph_BP_MiniGameSceneCapture_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
