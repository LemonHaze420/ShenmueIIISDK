
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

// Function wgt_BTL_MontagePlayer.wgt_BTL_MontagePlayer_C.RelayOnSceneCapture
// (Private, BlueprintCallable, BlueprintEvent)

void Uwgt_BTL_MontagePlayer_C::RelayOnSceneCapture()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_BTL_MontagePlayer.wgt_BTL_MontagePlayer_C.RelayOnSceneCapture");

	Uwgt_BTL_MontagePlayer_C_RelayOnSceneCapture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_BTL_MontagePlayer.wgt_BTL_MontagePlayer_C.SetSkillLibrary
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBTL_CommandLibraryBase* CommandLibrary                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_BTL_MontagePlayer_C::SetSkillLibrary(class UBTL_CommandLibraryBase* CommandLibrary)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_BTL_MontagePlayer.wgt_BTL_MontagePlayer_C.SetSkillLibrary");

	Uwgt_BTL_MontagePlayer_C_SetSkillLibrary_Params params;
	params.CommandLibrary = CommandLibrary;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_BTL_MontagePlayer.wgt_BTL_MontagePlayer_C.IsLoadingFinished
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Uwgt_BTL_MontagePlayer_C::IsLoadingFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_BTL_MontagePlayer.wgt_BTL_MontagePlayer_C.IsLoadingFinished");

	Uwgt_BTL_MontagePlayer_C_IsLoadingFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function wgt_BTL_MontagePlayer.wgt_BTL_MontagePlayer_C.IsRenderObjectReady
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Uwgt_BTL_MontagePlayer_C::IsRenderObjectReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_BTL_MontagePlayer.wgt_BTL_MontagePlayer_C.IsRenderObjectReady");

	Uwgt_BTL_MontagePlayer_C_IsRenderObjectReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function wgt_BTL_MontagePlayer.wgt_BTL_MontagePlayer_C.CalculateRenderObjectTransform
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform Uwgt_BTL_MontagePlayer_C::CalculateRenderObjectTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_BTL_MontagePlayer.wgt_BTL_MontagePlayer_C.CalculateRenderObjectTransform");

	Uwgt_BTL_MontagePlayer_C_CalculateRenderObjectTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function wgt_BTL_MontagePlayer.wgt_BTL_MontagePlayer_C.DestroyRenderObject
// (Protected, BlueprintCallable, BlueprintEvent)

void Uwgt_BTL_MontagePlayer_C::DestroyRenderObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_BTL_MontagePlayer.wgt_BTL_MontagePlayer_C.DestroyRenderObject");

	Uwgt_BTL_MontagePlayer_C_DestroyRenderObject_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_BTL_MontagePlayer.wgt_BTL_MontagePlayer_C.PlaySingleFrame
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uwgt_BTL_MontagePlayer_C::PlaySingleFrame(const struct FName& InputPin, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_BTL_MontagePlayer.wgt_BTL_MontagePlayer_C.PlaySingleFrame");

	Uwgt_BTL_MontagePlayer_C_PlaySingleFrame_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function wgt_BTL_MontagePlayer.wgt_BTL_MontagePlayer_C.StopMotion
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uwgt_BTL_MontagePlayer_C::StopMotion(bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_BTL_MontagePlayer.wgt_BTL_MontagePlayer_C.StopMotion");

	Uwgt_BTL_MontagePlayer_C_StopMotion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function wgt_BTL_MontagePlayer.wgt_BTL_MontagePlayer_C.PlayMotionForItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uwgt_BTL_MontagePlayer_C::PlayMotionForItem(const struct FName& InputPin, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_BTL_MontagePlayer.wgt_BTL_MontagePlayer_C.PlayMotionForItem");

	Uwgt_BTL_MontagePlayer_C_PlayMotionForItem_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function wgt_BTL_MontagePlayer.wgt_BTL_MontagePlayer_C.SpawnRenderObject
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           newParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uwgt_BTL_MontagePlayer_C::SpawnRenderObject(class UClass* InputPin, bool* newParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_BTL_MontagePlayer.wgt_BTL_MontagePlayer_C.SpawnRenderObject");

	Uwgt_BTL_MontagePlayer_C_SpawnRenderObject_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (newParam != nullptr)
		*newParam = params.newParam;
}


// Function wgt_BTL_MontagePlayer.wgt_BTL_MontagePlayer_C.SetRenderTex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextureRenderTarget2D*  Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_BTL_MontagePlayer_C::SetRenderTex(class UTextureRenderTarget2D* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_BTL_MontagePlayer.wgt_BTL_MontagePlayer_C.SetRenderTex");

	Uwgt_BTL_MontagePlayer_C_SetRenderTex_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_BTL_MontagePlayer.wgt_BTL_MontagePlayer_C.OnLoaded_887C3B4A44C26F627DEC4EAAECA73E5C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_BTL_MontagePlayer_C::OnLoaded_887C3B4A44C26F627DEC4EAAECA73E5C(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_BTL_MontagePlayer.wgt_BTL_MontagePlayer_C.OnLoaded_887C3B4A44C26F627DEC4EAAECA73E5C");

	Uwgt_BTL_MontagePlayer_C_OnLoaded_887C3B4A44C26F627DEC4EAAECA73E5C_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_BTL_MontagePlayer.wgt_BTL_MontagePlayer_C.OnLoaded_6B67131F435381D27123BE8560D7EF88
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_BTL_MontagePlayer_C::OnLoaded_6B67131F435381D27123BE8560D7EF88(class UClass* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_BTL_MontagePlayer.wgt_BTL_MontagePlayer_C.OnLoaded_6B67131F435381D27123BE8560D7EF88");

	Uwgt_BTL_MontagePlayer_C_OnLoaded_6B67131F435381D27123BE8560D7EF88_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_BTL_MontagePlayer.wgt_BTL_MontagePlayer_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_BTL_MontagePlayer_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_BTL_MontagePlayer.wgt_BTL_MontagePlayer_C.Tick");

	Uwgt_BTL_MontagePlayer_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_BTL_MontagePlayer.wgt_BTL_MontagePlayer_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uwgt_BTL_MontagePlayer_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_BTL_MontagePlayer.wgt_BTL_MontagePlayer_C.Destruct");

	Uwgt_BTL_MontagePlayer_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_BTL_MontagePlayer.wgt_BTL_MontagePlayer_C.RespawnRenderObject
// (BlueprintCallable, BlueprintEvent)

void Uwgt_BTL_MontagePlayer_C::RespawnRenderObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_BTL_MontagePlayer.wgt_BTL_MontagePlayer_C.RespawnRenderObject");

	Uwgt_BTL_MontagePlayer_C_RespawnRenderObject_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_BTL_MontagePlayer.wgt_BTL_MontagePlayer_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uwgt_BTL_MontagePlayer_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_BTL_MontagePlayer.wgt_BTL_MontagePlayer_C.Construct");

	Uwgt_BTL_MontagePlayer_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_BTL_MontagePlayer.wgt_BTL_MontagePlayer_C.ExecuteUbergraph_wgt_BTL_MontagePlayer
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_BTL_MontagePlayer_C::ExecuteUbergraph_wgt_BTL_MontagePlayer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_BTL_MontagePlayer.wgt_BTL_MontagePlayer_C.ExecuteUbergraph_wgt_BTL_MontagePlayer");

	Uwgt_BTL_MontagePlayer_C_ExecuteUbergraph_wgt_BTL_MontagePlayer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_BTL_MontagePlayer.wgt_BTL_MontagePlayer_C.OnSceneCapture__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uwgt_BTL_MontagePlayer_C::OnSceneCapture__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_BTL_MontagePlayer.wgt_BTL_MontagePlayer_C.OnSceneCapture__DelegateSignature");

	Uwgt_BTL_MontagePlayer_C_OnSceneCapture__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
