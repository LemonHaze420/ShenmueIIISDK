
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

// Function WBP_MiniGame_CC.WBP_MiniGame_CC_C.InitializeChickenImage
// (NetReliable, Private, Protected, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void UWBP_MiniGame_CC_C::InitializeChickenImage()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGame_CC.WBP_MiniGame_CC_C.InitializeChickenImage");

	UWBP_MiniGame_CC_C_InitializeChickenImage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniGame_CC.WBP_MiniGame_CC_C.AddChickenProgress
// (NetRequest, Exec, NetResponse, Static, Public, Delegate, BlueprintCallable)

void UWBP_MiniGame_CC_C::STATIC_AddChickenProgress()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGame_CC.WBP_MiniGame_CC_C.AddChickenProgress");

	UWBP_MiniGame_CC_C_AddChickenProgress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniGame_CC.WBP_MiniGame_CC_C.SetCircleProgress
// (NetReliable, NetRequest, Exec, Event, Static, MulticastDelegate, Private, Protected, Delegate, NetServer, HasDefaults, NetClient, Const)
// Parameters:
// float                          Progress                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MiniGame_CC_C::STATIC_SetCircleProgress(float Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGame_CC.WBP_MiniGame_CC_C.SetCircleProgress");

	UWBP_MiniGame_CC_C_SetCircleProgress_Params params;
	params.Progress = Progress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniGame_CC.WBP_MiniGame_CC_C.PreConstruct
// (NetReliable, Exec, Event, Static, MulticastDelegate, Private, Protected, Delegate, NetServer, HasDefaults, NetClient, Const)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MiniGame_CC_C::STATIC_PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGame_CC.WBP_MiniGame_CC_C.PreConstruct");

	UWBP_MiniGame_CC_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniGame_CC.WBP_MiniGame_CC_C.Construct
// (NetReliable, Exec, Native, NetMulticast, Public, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void UWBP_MiniGame_CC_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGame_CC.WBP_MiniGame_CC_C.Construct");

	UWBP_MiniGame_CC_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniGame_CC.WBP_MiniGame_CC_C.ExecuteUbergraph_WBP_MiniGame_CC
// (Net, NetReliable, NetRequest, Exec, Native, Event, NetMulticast, Private, Protected, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MiniGame_CC_C::ExecuteUbergraph_WBP_MiniGame_CC(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGame_CC.WBP_MiniGame_CC_C.ExecuteUbergraph_WBP_MiniGame_CC");

	UWBP_MiniGame_CC_C_ExecuteUbergraph_WBP_MiniGame_CC_Params params;
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
