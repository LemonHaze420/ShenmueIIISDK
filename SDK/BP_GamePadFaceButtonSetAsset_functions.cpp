
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

// Function BP_GamePadFaceButtonSetAsset.BP_GamePadFaceButtonSetAsset_C.GetArray
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TArray<class UTexture2D*>      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UTexture2D*> UBP_GamePadFaceButtonSetAsset_C::GetArray()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GamePadFaceButtonSetAsset.BP_GamePadFaceButtonSetAsset_C.GetArray");

	UBP_GamePadFaceButtonSetAsset_C_GetArray_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_GamePadFaceButtonSetAsset.BP_GamePadFaceButtonSetAsset_C.GetImageByPadIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// ES3PadButtonIndex              Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Texture                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GamePadFaceButtonSetAsset_C::GetImageByPadIndex(ES3PadButtonIndex Index, class UTexture2D** Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GamePadFaceButtonSetAsset.BP_GamePadFaceButtonSetAsset_C.GetImageByPadIndex");

	UBP_GamePadFaceButtonSetAsset_C_GetImageByPadIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Texture != nullptr)
		*Texture = params.Texture;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
