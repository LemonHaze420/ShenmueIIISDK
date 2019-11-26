
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

// Function BPI_Otoshidama.BPI_Otoshidama_C.EnabledPlayerOnDecide
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_Otoshidama_C::EnabledPlayerOnDecide()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Otoshidama.BPI_Otoshidama_C.EnabledPlayerOnDecide");

	UBPI_Otoshidama_C_EnabledPlayerOnDecide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_Otoshidama.BPI_Otoshidama_C.SetChooseCameraTransform
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_Otoshidama_C::SetChooseCameraTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Otoshidama.BPI_Otoshidama_C.SetChooseCameraTransform");

	UBPI_Otoshidama_C_SetChooseCameraTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_Otoshidama.BPI_Otoshidama_C.GetRewardFeed
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// ES3RewardType                  Type                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPI_Otoshidama_C::GetRewardFeed(ES3RewardType* Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Otoshidama.BPI_Otoshidama_C.GetRewardFeed");

	UBPI_Otoshidama_C_GetRewardFeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Type != nullptr)
		*Type = params.Type;
}


// Function BPI_Otoshidama.BPI_Otoshidama_C.SetEnabledPlayerEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_Otoshidama_C::SetEnabledPlayerEvent(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Otoshidama.BPI_Otoshidama_C.SetEnabledPlayerEvent");

	UBPI_Otoshidama_C_SetEnabledPlayerEvent_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_Otoshidama.BPI_Otoshidama_C.GetCamera
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCameraComponent*        newParam                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBPI_Otoshidama_C::GetCamera(class UCameraComponent** newParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Otoshidama.BPI_Otoshidama_C.GetCamera");

	UBPI_Otoshidama_C_GetCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (newParam != nullptr)
		*newParam = params.newParam;
}


// Function BPI_Otoshidama.BPI_Otoshidama_C.GetBetZoomTarget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*         newParam                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBPI_Otoshidama_C::GetBetZoomTarget(class USceneComponent** newParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Otoshidama.BPI_Otoshidama_C.GetBetZoomTarget");

	UBPI_Otoshidama_C_GetBetZoomTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (newParam != nullptr)
		*newParam = params.newParam;
}


// Function BPI_Otoshidama.BPI_Otoshidama_C.GetZoomTarget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*         newParam                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBPI_Otoshidama_C::GetZoomTarget(class USceneComponent** newParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Otoshidama.BPI_Otoshidama_C.GetZoomTarget");

	UBPI_Otoshidama_C_GetZoomTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (newParam != nullptr)
		*newParam = params.newParam;
}


// Function BPI_Otoshidama.BPI_Otoshidama_C.BindTalkEndEvent
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_Otoshidama_C::BindTalkEndEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Otoshidama.BPI_Otoshidama_C.BindTalkEndEvent");

	UBPI_Otoshidama_C_BindTalkEndEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_Otoshidama.BPI_Otoshidama_C.CreateNailEvent
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_Otoshidama_C::CreateNailEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Otoshidama.BPI_Otoshidama_C.CreateNailEvent");

	UBPI_Otoshidama_C_CreateNailEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
