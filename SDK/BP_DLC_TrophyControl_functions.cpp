
#include "../SDK.h"

// Name: Shenmue3SDK, Version: 1.4.1

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BP_DLC_TrophyControl.BP_DLC_TrophyControl_C.CheckCurrentFlag
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Enable                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_DLC_TrophyControl_C::CheckCurrentFlag(bool* Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DLC_TrophyControl.BP_DLC_TrophyControl_C.CheckCurrentFlag");

	ABP_DLC_TrophyControl_C_CheckCurrentFlag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Enable != nullptr)
		*Enable = params.Enable;
}


// Function BP_DLC_TrophyControl.BP_DLC_TrophyControl_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_DLC_TrophyControl_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DLC_TrophyControl.BP_DLC_TrophyControl_C.UserConstructionScript");

	ABP_DLC_TrophyControl_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DLC_TrophyControl.BP_DLC_TrophyControl_C.EvtFlagChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ArrayIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SetFlags                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DLC_TrophyControl_C::EvtFlagChange(int ArrayIndex, int SetFlags)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DLC_TrophyControl.BP_DLC_TrophyControl_C.EvtFlagChange");

	ABP_DLC_TrophyControl_C_EvtFlagChange_Params params;
	params.ArrayIndex = ArrayIndex;
	params.SetFlags = SetFlags;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DLC_TrophyControl.BP_DLC_TrophyControl_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_DLC_TrophyControl_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DLC_TrophyControl.BP_DLC_TrophyControl_C.ReceiveBeginPlay");

	ABP_DLC_TrophyControl_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DLC_TrophyControl.BP_DLC_TrophyControl_C.ExecuteUbergraph_BP_DLC_TrophyControl
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DLC_TrophyControl_C::ExecuteUbergraph_BP_DLC_TrophyControl(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DLC_TrophyControl.BP_DLC_TrophyControl_C.ExecuteUbergraph_BP_DLC_TrophyControl");

	ABP_DLC_TrophyControl_C_ExecuteUbergraph_BP_DLC_TrophyControl_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
