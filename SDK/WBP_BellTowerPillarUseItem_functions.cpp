
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

// Function WBP_BellTowerPillarUseItem.WBP_BellTowerPillarUseItem_C.SetCrossButtonIconInputableLightVisible
// (NetRequest, Native, Event, Static, NetMulticast, MulticastDelegate, Private, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsVisible                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_BellTowerPillarUseItem_C::STATIC_SetCrossButtonIconInputableLightVisible(bool IsVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BellTowerPillarUseItem.WBP_BellTowerPillarUseItem_C.SetCrossButtonIconInputableLightVisible");

	UWBP_BellTowerPillarUseItem_C_SetCrossButtonIconInputableLightVisible_Params params;
	params.IsVisible = IsVisible;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_BellTowerPillarUseItem.WBP_BellTowerPillarUseItem_C.StartButtonIcon
// (Net, NetReliable, Exec, Public, Private, Protected, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)

void UWBP_BellTowerPillarUseItem_C::StartButtonIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BellTowerPillarUseItem.WBP_BellTowerPillarUseItem_C.StartButtonIcon");

	UWBP_BellTowerPillarUseItem_C_StartButtonIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_BellTowerPillarUseItem.WBP_BellTowerPillarUseItem_C.SetupButtonIcon
// (NetRequest, NetResponse, Static, NetMulticast, Private, Protected, Delegate, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void UWBP_BellTowerPillarUseItem_C::STATIC_SetupButtonIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BellTowerPillarUseItem.WBP_BellTowerPillarUseItem_C.SetupButtonIcon");

	UWBP_BellTowerPillarUseItem_C_SetupButtonIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_BellTowerPillarUseItem.WBP_BellTowerPillarUseItem_C.UpdateButtonIcon
// (Net, NetReliable, NetRequest, Exec, Native, Event, NetMulticast, MulticastDelegate, Public, Protected, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)

void UWBP_BellTowerPillarUseItem_C::UpdateButtonIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BellTowerPillarUseItem.WBP_BellTowerPillarUseItem_C.UpdateButtonIcon");

	UWBP_BellTowerPillarUseItem_C_UpdateButtonIcon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_BellTowerPillarUseItem.WBP_BellTowerPillarUseItem_C.SetupArrow
// (NetRequest, Static, NetMulticast, Public, Private, NetServer, Const)

void UWBP_BellTowerPillarUseItem_C::STATIC_SetupArrow()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BellTowerPillarUseItem.WBP_BellTowerPillarUseItem_C.SetupArrow");

	UWBP_BellTowerPillarUseItem_C_SetupArrow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_BellTowerPillarUseItem.WBP_BellTowerPillarUseItem_C.IsFinishable
// (Native, Event, NetResponse, Static, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_BellTowerPillarUseItem_C::STATIC_IsFinishable()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BellTowerPillarUseItem.WBP_BellTowerPillarUseItem_C.IsFinishable");

	UWBP_BellTowerPillarUseItem_C_IsFinishable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_BellTowerPillarUseItem.WBP_BellTowerPillarUseItem_C.IsStartable
// (Exec, Native, Event, NetResponse, Static, Public, Private, Protected, NetServer, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_BellTowerPillarUseItem_C::STATIC_IsStartable()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BellTowerPillarUseItem.WBP_BellTowerPillarUseItem_C.IsStartable");

	UWBP_BellTowerPillarUseItem_C_IsStartable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_BellTowerPillarUseItem.WBP_BellTowerPillarUseItem_C.Finish
// (NetRequest, NetResponse, NetMulticast, MulticastDelegate, Public, Protected, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)

void UWBP_BellTowerPillarUseItem_C::Finish()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BellTowerPillarUseItem.WBP_BellTowerPillarUseItem_C.Finish");

	UWBP_BellTowerPillarUseItem_C_Finish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_BellTowerPillarUseItem.WBP_BellTowerPillarUseItem_C.Start
// (Net, NetResponse, NetMulticast, MulticastDelegate, Public, Protected, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)

void UWBP_BellTowerPillarUseItem_C::Start()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BellTowerPillarUseItem.WBP_BellTowerPillarUseItem_C.Start");

	UWBP_BellTowerPillarUseItem_C_Start_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_BellTowerPillarUseItem.WBP_BellTowerPillarUseItem_C.PreConstruct
// (Net, NetReliable, NetRequest, Native, Static, NetMulticast, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_BellTowerPillarUseItem_C::STATIC_PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BellTowerPillarUseItem.WBP_BellTowerPillarUseItem_C.PreConstruct");

	UWBP_BellTowerPillarUseItem_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_BellTowerPillarUseItem.WBP_BellTowerPillarUseItem_C.Construct
// (Net, Native, Event, NetResponse, Static, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void UWBP_BellTowerPillarUseItem_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BellTowerPillarUseItem.WBP_BellTowerPillarUseItem_C.Construct");

	UWBP_BellTowerPillarUseItem_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_BellTowerPillarUseItem.WBP_BellTowerPillarUseItem_C.Tick
// (NetRequest, Exec, Native, NetResponse, Static, Public, Private, Protected, NetServer, BlueprintCallable)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_BellTowerPillarUseItem_C::STATIC_Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BellTowerPillarUseItem.WBP_BellTowerPillarUseItem_C.Tick");

	UWBP_BellTowerPillarUseItem_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_BellTowerPillarUseItem.WBP_BellTowerPillarUseItem_C.ExecuteUbergraph_WBP_BellTowerPillarUseItem
// (NetReliable, NetRequest, Static, MulticastDelegate, Public, Private, HasDefaults, NetClient, DLLImport)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_BellTowerPillarUseItem_C::STATIC_ExecuteUbergraph_WBP_BellTowerPillarUseItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BellTowerPillarUseItem.WBP_BellTowerPillarUseItem_C.ExecuteUbergraph_WBP_BellTowerPillarUseItem");

	UWBP_BellTowerPillarUseItem_C_ExecuteUbergraph_WBP_BellTowerPillarUseItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_BellTowerPillarUseItem.WBP_BellTowerPillarUseItem_C.OnFinishedDispatcher__DelegateSignature
// (Net, NetReliable, NetRequest, Exec, Event, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void UWBP_BellTowerPillarUseItem_C::STATIC_OnFinishedDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BellTowerPillarUseItem.WBP_BellTowerPillarUseItem_C.OnFinishedDispatcher__DelegateSignature");

	UWBP_BellTowerPillarUseItem_C_OnFinishedDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
