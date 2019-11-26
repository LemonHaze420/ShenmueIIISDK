
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

// Function BP_UI_ExchangeManager.BP_UI_ExchangeManager_C.IsVisibleRStickCenterPos
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsCenter                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_UI_ExchangeManager_C::IsVisibleRStickCenterPos(bool* IsCenter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ExchangeManager.BP_UI_ExchangeManager_C.IsVisibleRStickCenterPos");

	ABP_UI_ExchangeManager_C_IsVisibleRStickCenterPos_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsCenter != nullptr)
		*IsCenter = params.IsCenter;
}


// Function BP_UI_ExchangeManager.BP_UI_ExchangeManager_C.IsVisibleRStickOnlyViewMode
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_UI_ExchangeManager_C::IsVisibleRStickOnlyViewMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ExchangeManager.BP_UI_ExchangeManager_C.IsVisibleRStickOnlyViewMode");

	ABP_UI_ExchangeManager_C_IsVisibleRStickOnlyViewMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_UI_ExchangeManager.BP_UI_ExchangeManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_UI_ExchangeManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ExchangeManager.BP_UI_ExchangeManager_C.UserConstructionScript");

	ABP_UI_ExchangeManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ExchangeManager.BP_UI_ExchangeManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_UI_ExchangeManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ExchangeManager.BP_UI_ExchangeManager_C.ReceiveBeginPlay");

	ABP_UI_ExchangeManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ExchangeManager.BP_UI_ExchangeManager_C.ExecuteUbergraph_BP_UI_ExchangeManager
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_UI_ExchangeManager_C::ExecuteUbergraph_BP_UI_ExchangeManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ExchangeManager.BP_UI_ExchangeManager_C.ExecuteUbergraph_BP_UI_ExchangeManager");

	ABP_UI_ExchangeManager_C_ExecuteUbergraph_BP_UI_ExchangeManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
