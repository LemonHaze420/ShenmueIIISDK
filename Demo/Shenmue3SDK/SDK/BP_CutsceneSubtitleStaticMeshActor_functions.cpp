
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

// Function BP_CutsceneSubtitleStaticMeshActor.BP_CutsceneSubtitleStaticMeshActor_C.GetSubtitleCharaName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FName                   newParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_CutsceneSubtitleStaticMeshActor_C::GetSubtitleCharaName(struct FName* newParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneSubtitleStaticMeshActor.BP_CutsceneSubtitleStaticMeshActor_C.GetSubtitleCharaName");

	ABP_CutsceneSubtitleStaticMeshActor_C_GetSubtitleCharaName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (newParam != nullptr)
		*newParam = params.newParam;
}


// Function BP_CutsceneSubtitleStaticMeshActor.BP_CutsceneSubtitleStaticMeshActor_C.UpdateSubtitleWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FName>           Labels                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_CutsceneSubtitleStaticMeshActor_C::UpdateSubtitleWidget(TArray<struct FName>* Labels)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneSubtitleStaticMeshActor.BP_CutsceneSubtitleStaticMeshActor_C.UpdateSubtitleWidget");

	ABP_CutsceneSubtitleStaticMeshActor_C_UpdateSubtitleWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Labels != nullptr)
		*Labels = params.Labels;
}


// Function BP_CutsceneSubtitleStaticMeshActor.BP_CutsceneSubtitleStaticMeshActor_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_CutsceneSubtitleStaticMeshActor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneSubtitleStaticMeshActor.BP_CutsceneSubtitleStaticMeshActor_C.UserConstructionScript");

	ABP_CutsceneSubtitleStaticMeshActor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
