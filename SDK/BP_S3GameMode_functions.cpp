
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
// (NetReliable, NetRequest, Native, Static, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_S3GameMode_C::STATIC_IsNPCFadeInProgress()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3GameMode.BP_S3GameMode_C.IsNPCFadeInProgress");

	ABP_S3GameMode_C_IsNPCFadeInProgress_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3GameMode.BP_S3GameMode_C.CheckSkip
// (NetReliable, NetRequest, Event, NetResponse, Public, Delegate, HasOutParms, HasDefaults, Const)
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
// (Net, NetReliable, Exec, Native, Event, Static, NetMulticast, MulticastDelegate, Public, Protected, NetServer, HasOutParms, HasDefaults, NetClient, Const)

void ABP_S3GameMode_C::STATIC_RestoreExtendAttention()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3GameMode.BP_S3GameMode_C.RestoreExtendAttention");

	ABP_S3GameMode_C_RestoreExtendAttention_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3GameMode.BP_S3GameMode_C.ExtendAttention
// (NetReliable, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Protected, NetServer, HasOutParms, HasDefaults, NetClient, Const)
// Parameters:
// class UClass*                  AttentionControllerClass       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3GameMode_C::STATIC_ExtendAttention(class UClass* AttentionControllerClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3GameMode.BP_S3GameMode_C.ExtendAttention");

	ABP_S3GameMode_C_ExtendAttention_Params params;
	params.AttentionControllerClass = AttentionControllerClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3GameMode.BP_S3GameMode_C.RetryGame
// (NetReliable, NetRequest, Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, NetServer, HasOutParms, NetClient, Const)

void ABP_S3GameMode_C::STATIC_RetryGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3GameMode.BP_S3GameMode_C.RetryGame");

	ABP_S3GameMode_C_RetryGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3GameMode.BP_S3GameMode_C.InitWeather
// (Exec, Event, NetResponse, Static, Public, Private, NetServer, NetClient, Const)

void ABP_S3GameMode_C::STATIC_InitWeather()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3GameMode.BP_S3GameMode_C.InitWeather");

	ABP_S3GameMode_C_InitWeather_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3GameMode.BP_S3GameMode_C.UserConstructionScript
// (NetRequest, Native, NetResponse, Static, NetMulticast, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_S3GameMode_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3GameMode.BP_S3GameMode_C.UserConstructionScript");

	ABP_S3GameMode_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3GameMode.BP_S3GameMode_C.ReceiveBeginPlay
// (NetReliable, NetRequest, Exec, Event, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, Const)

void ABP_S3GameMode_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3GameMode.BP_S3GameMode_C.ReceiveBeginPlay");

	ABP_S3GameMode_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3GameMode.BP_S3GameMode_C.CheckTimeManager
// (Net, NetRequest, Exec, Event, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, Const)

void ABP_S3GameMode_C::CheckTimeManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3GameMode.BP_S3GameMode_C.CheckTimeManager");

	ABP_S3GameMode_C_CheckTimeManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3GameMode.BP_S3GameMode_C.SetSkyManager
// (Net, NetRequest, Exec, Event, Static, MulticastDelegate, Public, NetServer, HasOutParms, HasDefaults, NetClient, Const)
// Parameters:
// class AS3SkyManager*           InSkyManager                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3GameMode_C::STATIC_SetSkyManager(class AS3SkyManager* InSkyManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3GameMode.BP_S3GameMode_C.SetSkyManager");

	ABP_S3GameMode_C_SetSkyManager_Params params;
	params.InSkyManager = InSkyManager;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3GameMode.BP_S3GameMode_C.ExecuteUbergraph_BP_S3GameMode
// (Exec, Native, Static, MulticastDelegate, Public, NetServer, HasDefaults, NetClient, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3GameMode_C::STATIC_ExecuteUbergraph_BP_S3GameMode(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3GameMode.BP_S3GameMode_C.ExecuteUbergraph_BP_S3GameMode");

	ABP_S3GameMode_C_ExecuteUbergraph_BP_S3GameMode_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
