
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

// Function BP_S3GameMode.BP_S3GameMode_C.IsNPCFadeInProgress
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_S3GameMode_C::IsNPCFadeInProgress()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3GameMode.BP_S3GameMode_C.IsNPCFadeInProgress");

	ABP_S3GameMode_C_IsNPCFadeInProgress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3GameMode.BP_S3GameMode_C.CheckSkip
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           dummy                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3GameMode_C::CheckSkip(bool* dummy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3GameMode.BP_S3GameMode_C.CheckSkip");

	ABP_S3GameMode_C_CheckSkip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (dummy != nullptr)
		*dummy = params.dummy;
}


// Function BP_S3GameMode.BP_S3GameMode_C.RestoreExtendAttention
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_S3GameMode_C::RestoreExtendAttention()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3GameMode.BP_S3GameMode_C.RestoreExtendAttention");

	ABP_S3GameMode_C_RestoreExtendAttention_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3GameMode.BP_S3GameMode_C.ExtendAttention
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  AttentionControllerClass       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3GameMode_C::ExtendAttention(class UClass* AttentionControllerClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3GameMode.BP_S3GameMode_C.ExtendAttention");

	ABP_S3GameMode_C_ExtendAttention_Params params;
	params.AttentionControllerClass = AttentionControllerClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3GameMode.BP_S3GameMode_C.RetryGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_S3GameMode_C::RetryGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3GameMode.BP_S3GameMode_C.RetryGame");

	ABP_S3GameMode_C_RetryGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3GameMode.BP_S3GameMode_C.InitWeather
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_S3GameMode_C::InitWeather()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3GameMode.BP_S3GameMode_C.InitWeather");

	ABP_S3GameMode_C_InitWeather_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3GameMode.BP_S3GameMode_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_S3GameMode_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3GameMode.BP_S3GameMode_C.UserConstructionScript");

	ABP_S3GameMode_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3GameMode.BP_S3GameMode_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_S3GameMode_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3GameMode.BP_S3GameMode_C.ReceiveBeginPlay");

	ABP_S3GameMode_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3GameMode.BP_S3GameMode_C.CheckTimeManager
// (BlueprintCallable, BlueprintEvent)

void ABP_S3GameMode_C::CheckTimeManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3GameMode.BP_S3GameMode_C.CheckTimeManager");

	ABP_S3GameMode_C_CheckTimeManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3GameMode.BP_S3GameMode_C.SetSkyManager
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AS3SkyManager*           InSkyManager                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3GameMode_C::SetSkyManager(class AS3SkyManager* InSkyManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3GameMode.BP_S3GameMode_C.SetSkyManager");

	ABP_S3GameMode_C_SetSkyManager_Params params;
	params.InSkyManager = InSkyManager;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3GameMode.BP_S3GameMode_C.ExecuteUbergraph_BP_S3GameMode
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3GameMode_C::ExecuteUbergraph_BP_S3GameMode(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3GameMode.BP_S3GameMode_C.ExecuteUbergraph_BP_S3GameMode");

	ABP_S3GameMode_C_ExecuteUbergraph_BP_S3GameMode_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
