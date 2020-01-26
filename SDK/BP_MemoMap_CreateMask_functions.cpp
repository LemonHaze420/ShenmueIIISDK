
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

// Function BP_MemoMap_CreateMask.BP_MemoMap_CreateMask_C.DebugOpenCheck
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsOpen                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MemoMap_CreateMask_C::DebugOpenCheck(bool* IsOpen)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MemoMap_CreateMask.BP_MemoMap_CreateMask_C.DebugOpenCheck");

	ABP_MemoMap_CreateMask_C_DebugOpenCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsOpen != nullptr)
		*IsOpen = params.IsOpen;
}


// Function BP_MemoMap_CreateMask.BP_MemoMap_CreateMask_C.MakeMask
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPanelWidget*            InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// ES3Where                       Place                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MemoMap_CreateMask_C::MakeMask(class UPanelWidget* InputPin, ES3Where Place)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MemoMap_CreateMask.BP_MemoMap_CreateMask_C.MakeMask");

	ABP_MemoMap_CreateMask_C_MakeMask_Params params;
	params.InputPin = InputPin;
	params.Place = Place;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MemoMap_CreateMask.BP_MemoMap_CreateMask_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MemoMap_CreateMask_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MemoMap_CreateMask.BP_MemoMap_CreateMask_C.UserConstructionScript");

	ABP_MemoMap_CreateMask_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MemoMap_CreateMask.BP_MemoMap_CreateMask_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MemoMap_CreateMask_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MemoMap_CreateMask.BP_MemoMap_CreateMask_C.ReceiveBeginPlay");

	ABP_MemoMap_CreateMask_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MemoMap_CreateMask.BP_MemoMap_CreateMask_C.ExecuteUbergraph_BP_MemoMap_CreateMask
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MemoMap_CreateMask_C::ExecuteUbergraph_BP_MemoMap_CreateMask(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MemoMap_CreateMask.BP_MemoMap_CreateMask_C.ExecuteUbergraph_BP_MemoMap_CreateMask");

	ABP_MemoMap_CreateMask_C_ExecuteUbergraph_BP_MemoMap_CreateMask_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
