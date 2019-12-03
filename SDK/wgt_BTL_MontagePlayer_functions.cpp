
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
// (NetReliable, Exec, Native, Public, Private, Delegate, NetClient, BlueprintCallable, BlueprintPure, Const)

void Uwgt_BTL_MontagePlayer_C::RelayOnSceneCapture()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_BTL_MontagePlayer.wgt_BTL_MontagePlayer_C.RelayOnSceneCapture");

	Uwgt_BTL_MontagePlayer_C_RelayOnSceneCapture_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_BTL_MontagePlayer.wgt_BTL_MontagePlayer_C.SetSkillLibrary
// (Net, NetReliable, NetRequest, Exec, NetResponse, Static, Protected, Delegate, NetServer, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UBTL_CommandLibraryBase* CommandLibrary                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_BTL_MontagePlayer_C::STATIC_SetSkillLibrary(class UBTL_CommandLibraryBase* CommandLibrary)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_BTL_MontagePlayer.wgt_BTL_MontagePlayer_C.SetSkillLibrary");

	Uwgt_BTL_MontagePlayer_C_SetSkillLibrary_Params params;
	params.CommandLibrary = CommandLibrary;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_BTL_MontagePlayer.wgt_BTL_MontagePlayer_C.IsLoadingFinished
// (NetReliable, Exec, Native, NetResponse, Static, NetMulticast, Public, Protected, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Uwgt_BTL_MontagePlayer_C::STATIC_IsLoadingFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_BTL_MontagePlayer.wgt_BTL_MontagePlayer_C.IsLoadingFinished");

	Uwgt_BTL_MontagePlayer_C_IsLoadingFinished_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function wgt_BTL_MontagePlayer.wgt_BTL_MontagePlayer_C.IsRenderObjectReady
// (Net, NetReliable, Event, Static, NetMulticast, Private, NetServer, HasOutParms, HasDefaults, NetClient, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Uwgt_BTL_MontagePlayer_C::STATIC_IsRenderObjectReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_BTL_MontagePlayer.wgt_BTL_MontagePlayer_C.IsRenderObjectReady");

	Uwgt_BTL_MontagePlayer_C_IsRenderObjectReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function wgt_BTL_MontagePlayer.wgt_BTL_MontagePlayer_C.CalculateRenderObjectTransform
// (NetReliable, NetRequest, Exec, Event, NetResponse, MulticastDelegate, Protected, Delegate, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
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
// (Native, Event, Static, NetMulticast, Private, Protected, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure, Const)

void Uwgt_BTL_MontagePlayer_C::STATIC_DestroyRenderObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_BTL_MontagePlayer.wgt_BTL_MontagePlayer_C.DestroyRenderObject");

	Uwgt_BTL_MontagePlayer_C_DestroyRenderObject_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_BTL_MontagePlayer.wgt_BTL_MontagePlayer_C.PlaySingleFrame
// (NetReliable, MulticastDelegate, Public, Delegate, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
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
// (NetReliable, NetRequest, Native, Event, NetResponse, Static, NetMulticast, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uwgt_BTL_MontagePlayer_C::STATIC_StopMotion(bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_BTL_MontagePlayer.wgt_BTL_MontagePlayer_C.StopMotion");

	Uwgt_BTL_MontagePlayer_C_StopMotion_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function wgt_BTL_MontagePlayer.wgt_BTL_MontagePlayer_C.PlayMotionForItem
// (Net, NetReliable, Native, Event, MulticastDelegate, Public, Delegate, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FName                   InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uwgt_BTL_MontagePlayer_C::PlayMotionForItem(const struct FName& InputPin, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_BTL_MontagePlayer.wgt_BTL_MontagePlayer_C.PlayMotionForItem");

	Uwgt_BTL_MontagePlayer_C_PlayMotionForItem_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function wgt_BTL_MontagePlayer.wgt_BTL_MontagePlayer_C.SpawnRenderObject
// (NetReliable, NetRequest, Event, NetResponse, NetMulticast, MulticastDelegate, Protected, NetServer, BlueprintCallable, BlueprintEvent, BlueprintPure)
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
// (NetRequest, NetResponse, Static, NetMulticast, Delegate, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UTextureRenderTarget2D*  Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_BTL_MontagePlayer_C::STATIC_SetRenderTex(class UTextureRenderTarget2D* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_BTL_MontagePlayer.wgt_BTL_MontagePlayer_C.SetRenderTex");

	Uwgt_BTL_MontagePlayer_C_SetRenderTex_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_BTL_MontagePlayer.wgt_BTL_MontagePlayer_C.OnLoaded_887C3B4A44C26F627DEC4EAAECA73E5C
// (Net, Static, NetMulticast, Private, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_BTL_MontagePlayer_C::STATIC_OnLoaded_887C3B4A44C26F627DEC4EAAECA73E5C(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_BTL_MontagePlayer.wgt_BTL_MontagePlayer_C.OnLoaded_887C3B4A44C26F627DEC4EAAECA73E5C");

	Uwgt_BTL_MontagePlayer_C_OnLoaded_887C3B4A44C26F627DEC4EAAECA73E5C_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_BTL_MontagePlayer.wgt_BTL_MontagePlayer_C.OnLoaded_6B67131F435381D27123BE8560D7EF88
// (NetReliable, Static, NetMulticast, Private, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// class UClass*                  Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_BTL_MontagePlayer_C::STATIC_OnLoaded_6B67131F435381D27123BE8560D7EF88(class UClass* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_BTL_MontagePlayer.wgt_BTL_MontagePlayer_C.OnLoaded_6B67131F435381D27123BE8560D7EF88");

	Uwgt_BTL_MontagePlayer_C_OnLoaded_6B67131F435381D27123BE8560D7EF88_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_BTL_MontagePlayer.wgt_BTL_MontagePlayer_C.Tick
// (NetReliable, NetRequest, Exec, Native, NetResponse, Static, Private, Protected, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_BTL_MontagePlayer_C::STATIC_Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_BTL_MontagePlayer.wgt_BTL_MontagePlayer_C.Tick");

	Uwgt_BTL_MontagePlayer_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_BTL_MontagePlayer.wgt_BTL_MontagePlayer_C.Destruct
// (NetRequest, Exec, Native, Public, Private, Delegate, NetClient, BlueprintCallable, BlueprintPure, Const)

void Uwgt_BTL_MontagePlayer_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_BTL_MontagePlayer.wgt_BTL_MontagePlayer_C.Destruct");

	Uwgt_BTL_MontagePlayer_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_BTL_MontagePlayer.wgt_BTL_MontagePlayer_C.RespawnRenderObject
// (NetRequest, Exec, Native, Public, Private, Delegate, NetClient, BlueprintCallable, BlueprintPure, Const)

void Uwgt_BTL_MontagePlayer_C::RespawnRenderObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_BTL_MontagePlayer.wgt_BTL_MontagePlayer_C.RespawnRenderObject");

	Uwgt_BTL_MontagePlayer_C_RespawnRenderObject_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_BTL_MontagePlayer.wgt_BTL_MontagePlayer_C.Construct
// (Net, NetReliable, Exec, Native, Public, Private, Delegate, NetClient, BlueprintCallable, BlueprintPure, Const)

void Uwgt_BTL_MontagePlayer_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_BTL_MontagePlayer.wgt_BTL_MontagePlayer_C.Construct");

	Uwgt_BTL_MontagePlayer_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_BTL_MontagePlayer.wgt_BTL_MontagePlayer_C.ExecuteUbergraph_wgt_BTL_MontagePlayer
// (Net, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_BTL_MontagePlayer_C::STATIC_ExecuteUbergraph_wgt_BTL_MontagePlayer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_BTL_MontagePlayer.wgt_BTL_MontagePlayer_C.ExecuteUbergraph_wgt_BTL_MontagePlayer");

	Uwgt_BTL_MontagePlayer_C_ExecuteUbergraph_wgt_BTL_MontagePlayer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_BTL_MontagePlayer.wgt_BTL_MontagePlayer_C.OnSceneCapture__DelegateSignature
// (NetReliable, Exec, Event, NetMulticast, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

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
