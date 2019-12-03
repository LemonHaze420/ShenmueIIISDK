
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

// Function BP_GamePadFaceButtonSetAsset.BP_GamePadFaceButtonSetAsset_C.GetArray
// (NetReliable, NetRequest, NetResponse, Static, Private, Delegate, HasOutParms, BlueprintEvent)
// Parameters:
// TArray<class UTexture2D*>      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UTexture2D*> UBP_GamePadFaceButtonSetAsset_C::STATIC_GetArray()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GamePadFaceButtonSetAsset.BP_GamePadFaceButtonSetAsset_C.GetArray");

	UBP_GamePadFaceButtonSetAsset_C_GetArray_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_GamePadFaceButtonSetAsset.BP_GamePadFaceButtonSetAsset_C.GetImageByPadIndex
// (NetReliable, NetRequest, Static, NetMulticast, MulticastDelegate, Public, Protected, BlueprintCallable)
// Parameters:
// ES3PadButtonIndex              Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Texture                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GamePadFaceButtonSetAsset_C::STATIC_GetImageByPadIndex(ES3PadButtonIndex Index, class UTexture2D** Texture)
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
