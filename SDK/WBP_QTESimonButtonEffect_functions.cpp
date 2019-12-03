
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

// Function WBP_QTESimonButtonEffect.WBP_QTESimonButtonEffect_C.SetButtonImage
// (NetRequest, NetResponse, Static, Public, NetServer, HasDefaults, NetClient, BlueprintPure)
// Parameters:
// class UTexture2D*              Image                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_QTESimonButtonEffect_C::STATIC_SetButtonImage(class UTexture2D* Image)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESimonButtonEffect.WBP_QTESimonButtonEffect_C.SetButtonImage");

	UWBP_QTESimonButtonEffect_C_SetButtonImage_Params params;
	params.Image = Image;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESimonButtonEffect.WBP_QTESimonButtonEffect_C.PlayInstruction
// (NetReliable, NetRequest, Exec, Native, NetResponse, Private, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure)

void UWBP_QTESimonButtonEffect_C::PlayInstruction()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESimonButtonEffect.WBP_QTESimonButtonEffect_C.PlayInstruction");

	UWBP_QTESimonButtonEffect_C_PlayInstruction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESimonButtonEffect.WBP_QTESimonButtonEffect_C.Reset
// (NetReliable, Exec, Static, NetMulticast, Private, Delegate, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)

void UWBP_QTESimonButtonEffect_C::STATIC_Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESimonButtonEffect.WBP_QTESimonButtonEffect_C.Reset");

	UWBP_QTESimonButtonEffect_C_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
