
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
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_StaticMeshWithLights_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StaticMeshWithLights.BP_StaticMeshWithLights_C.UserConstructionScript");

	ABP_StaticMeshWithLights_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StaticMeshWithLights.BP_StaticMeshWithLights_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_StaticMeshWithLights_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StaticMeshWithLights.BP_StaticMeshWithLights_C.ReceiveBeginPlay");

	ABP_StaticMeshWithLights_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StaticMeshWithLights.BP_StaticMeshWithLights_C.DayTimeEventDispatcher_Event_1
// (BlueprintCallable, BlueprintEvent)
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
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Intensity                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            MatID                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInstanceDynamic* DMI                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           On                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_StaticMeshWithLights_C::LightSourceChange(float Intensity, int MatID, class UMaterialInstanceDynamic* DMI, bool On)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StaticMeshWithLights.BP_StaticMeshWithLights_C.LightSourceChange");

	ABP_StaticMeshWithLights_C_LightSourceChange_Params params;
	params.Intensity = Intensity;
	params.MatID = MatID;
	params.DMI = DMI;
	params.On = On;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StaticMeshWithLights.BP_StaticMeshWithLights_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
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
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bNewLightEnable                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_StaticMeshWithLights_C::OnSetLightEnable(bool bNewLightEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StaticMeshWithLights.BP_StaticMeshWithLights_C.OnSetLightEnable");

	ABP_StaticMeshWithLights_C_OnSetLightEnable_Params params;
	params.bNewLightEnable = bNewLightEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StaticMeshWithLights.BP_StaticMeshWithLights_C.OnSetLightCastShadow
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bNewLightCastShadow            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_StaticMeshWithLights_C::OnSetLightCastShadow(bool bNewLightCastShadow)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StaticMeshWithLights.BP_StaticMeshWithLights_C.OnSetLightCastShadow");

	ABP_StaticMeshWithLights_C_OnSetLightCastShadow_Params params;
	params.bNewLightCastShadow = bNewLightCastShadow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StaticMeshWithLights.BP_StaticMeshWithLights_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_StaticMeshWithLights_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StaticMeshWithLights.BP_StaticMeshWithLights_C.ReceiveTick");

	ABP_StaticMeshWithLights_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StaticMeshWithLights.BP_StaticMeshWithLights_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_StaticMeshWithLights_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StaticMeshWithLights.BP_StaticMeshWithLights_C.ReceiveEndPlay");

	ABP_StaticMeshWithLights_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StaticMeshWithLights.BP_StaticMeshWithLights_C.ExecuteUbergraph_BP_StaticMeshWithLights
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_StaticMeshWithLights_C::ExecuteUbergraph_BP_StaticMeshWithLights(int EntryPoint)
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
