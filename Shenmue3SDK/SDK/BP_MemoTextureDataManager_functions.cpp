
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

// Function BP_MemoTextureDataManager.BP_MemoTextureDataManager_C.GetTextureData
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Label                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               Offset                         (Parm, OutParm, IsPlainOldData)
// class UTexture*                TextureReference               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MemoTextureDataManager_C::GetTextureData(const struct FName& Label, struct FVector2D* Offset, class UTexture** TextureReference)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MemoTextureDataManager.BP_MemoTextureDataManager_C.GetTextureData");

	ABP_MemoTextureDataManager_C_GetTextureData_Params params;
	params.Label = Label;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Offset != nullptr)
		*Offset = params.Offset;
	if (TextureReference != nullptr)
		*TextureReference = params.TextureReference;
}


// Function BP_MemoTextureDataManager.BP_MemoTextureDataManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MemoTextureDataManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MemoTextureDataManager.BP_MemoTextureDataManager_C.UserConstructionScript");

	ABP_MemoTextureDataManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
