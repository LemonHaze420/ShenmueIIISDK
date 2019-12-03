
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

// Function WBP_MiniGame_GameTimer.WBP_MiniGame_GameTimer_C.SetCenterIcon
// (NetRequest, Exec, Native, Event, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              Texture                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MiniGame_GameTimer_C::SetCenterIcon(class UTexture2D* Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGame_GameTimer.WBP_MiniGame_GameTimer_C.SetCenterIcon");

	UWBP_MiniGame_GameTimer_C_SetCenterIcon_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniGame_GameTimer.WBP_MiniGame_GameTimer_C.SetProgress
// (Net, Exec, Event, Static, NetMulticast, MulticastDelegate, Private, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          Progress                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MiniGame_GameTimer_C::STATIC_SetProgress(float Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGame_GameTimer.WBP_MiniGame_GameTimer_C.SetProgress");

	UWBP_MiniGame_GameTimer_C_SetProgress_Params params;
	params.Progress = Progress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniGame_GameTimer.WBP_MiniGame_GameTimer_C.PreConstruct
// (Net, NetRequest, Exec, Native, Event, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MiniGame_GameTimer_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGame_GameTimer.WBP_MiniGame_GameTimer_C.PreConstruct");

	UWBP_MiniGame_GameTimer_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniGame_GameTimer.WBP_MiniGame_GameTimer_C.Construct
// (Net, NetReliable, NetRequest, Exec, Native, Event, Static, NetMulticast, MulticastDelegate, Public, Private, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void UWBP_MiniGame_GameTimer_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGame_GameTimer.WBP_MiniGame_GameTimer_C.Construct");

	UWBP_MiniGame_GameTimer_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniGame_GameTimer.WBP_MiniGame_GameTimer_C.ExecuteUbergraph_WBP_MiniGame_GameTimer
// (Net, NetRequest, Exec, Native, Event, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MiniGame_GameTimer_C::ExecuteUbergraph_WBP_MiniGame_GameTimer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGame_GameTimer.WBP_MiniGame_GameTimer_C.ExecuteUbergraph_WBP_MiniGame_GameTimer");

	UWBP_MiniGame_GameTimer_C_ExecuteUbergraph_WBP_MiniGame_GameTimer_Params params;
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
