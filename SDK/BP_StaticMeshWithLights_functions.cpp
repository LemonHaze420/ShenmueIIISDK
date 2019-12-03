
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

// Function BP_StaticMeshWithLights.BP_StaticMeshWithLights_C.UserConstructionScript
// (NetRequest, Exec, Event, NetResponse, Static, Private, Protected, Delegate, HasOutParms, BlueprintEvent, NetValidate)

void ABP_StaticMeshWithLights_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StaticMeshWithLights.BP_StaticMeshWithLights_C.UserConstructionScript");

	ABP_StaticMeshWithLights_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StaticMeshWithLights.BP_StaticMeshWithLights_C.ReceiveBeginPlay
// (NetRequest, Event, Static, NetMulticast, Protected, Delegate, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, NetValidate)

void ABP_StaticMeshWithLights_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StaticMeshWithLights.BP_StaticMeshWithLights_C.ReceiveBeginPlay");

	ABP_StaticMeshWithLights_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StaticMeshWithLights.BP_StaticMeshWithLights_C.DayTimeEventDispatcher_Event_1
// (NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, NetValidate)
// Parameters:
// ES3DayTimeEvent                EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_StaticMeshWithLights_C::DayTimeEventDispatcher_Event_1(ES3DayTimeEvent EventType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StaticMeshWithLights.BP_StaticMeshWithLights_C.DayTimeEventDispatcher_Event_1");

	ABP_StaticMeshWithLights_C_DayTimeEventDispatcher_Event_1_Params params;
	params.EventType = EventType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StaticMeshWithLights.BP_StaticMeshWithLights_C.LightSourceChange
// (Net, NetReliable, NetRequest, Native, NetResponse, Static, MulticastDelegate, Public, Private, Protected, Delegate, HasDefaults, DLLImport, BlueprintEvent, NetValidate)
// Parameters:
// float                          Intensity                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            MatID                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInstanceDynamic* DMI                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           On                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_StaticMeshWithLights_C::STATIC_LightSourceChange(float Intensity, int MatID, class UMaterialInstanceDynamic* DMI, bool On)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StaticMeshWithLights.BP_StaticMeshWithLights_C.LightSourceChange");

	ABP_StaticMeshWithLights_C_LightSourceChange_Params params;
	params.Intensity = Intensity;
	params.MatID = MatID;
	params.DMI = DMI;
	params.On = On;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StaticMeshWithLights.BP_StaticMeshWithLights_C.CustomEvent_1
// (NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, NetValidate)
// Parameters:
// int                            EventIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_StaticMeshWithLights_C::CustomEvent_1(int EventIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StaticMeshWithLights.BP_StaticMeshWithLights_C.CustomEvent_1");

	ABP_StaticMeshWithLights_C_CustomEvent_1_Params params;
	params.EventIndex = EventIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StaticMeshWithLights.BP_StaticMeshWithLights_C.OnSetLightEnable
// (Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, NetValidate)
// Parameters:
// bool                           bNewLightEnable                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_StaticMeshWithLights_C::STATIC_OnSetLightEnable(bool bNewLightEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StaticMeshWithLights.BP_StaticMeshWithLights_C.OnSetLightEnable");

	ABP_StaticMeshWithLights_C_OnSetLightEnable_Params params;
	params.bNewLightEnable = bNewLightEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StaticMeshWithLights.BP_StaticMeshWithLights_C.OnSetLightCastShadow
// (Net, NetRequest, Exec, Native, Event, NetResponse, Static, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, NetValidate)
// Parameters:
// bool                           bNewLightCastShadow            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_StaticMeshWithLights_C::STATIC_OnSetLightCastShadow(bool bNewLightCastShadow)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StaticMeshWithLights.BP_StaticMeshWithLights_C.OnSetLightCastShadow");

	ABP_StaticMeshWithLights_C_OnSetLightCastShadow_Params params;
	params.bNewLightCastShadow = bNewLightCastShadow;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StaticMeshWithLights.BP_StaticMeshWithLights_C.ReceiveTick
// (Net, NetRequest, Exec, Native, Event, NetResponse, Static, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, NetValidate)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_StaticMeshWithLights_C::STATIC_ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StaticMeshWithLights.BP_StaticMeshWithLights_C.ReceiveTick");

	ABP_StaticMeshWithLights_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StaticMeshWithLights.BP_StaticMeshWithLights_C.ReceiveEndPlay
// (NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, NetValidate)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_StaticMeshWithLights_C::STATIC_ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StaticMeshWithLights.BP_StaticMeshWithLights_C.ReceiveEndPlay");

	ABP_StaticMeshWithLights_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StaticMeshWithLights.BP_StaticMeshWithLights_C.ExecuteUbergraph_BP_StaticMeshWithLights
// (Net, NetReliable, Exec, Event, Static, MulticastDelegate, Protected, NetServer, HasOutParms, HasDefaults, NetClient, NetValidate)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_StaticMeshWithLights_C::STATIC_ExecuteUbergraph_BP_StaticMeshWithLights(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StaticMeshWithLights.BP_StaticMeshWithLights_C.ExecuteUbergraph_BP_StaticMeshWithLights");

	ABP_StaticMeshWithLights_C_ExecuteUbergraph_BP_StaticMeshWithLights_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
