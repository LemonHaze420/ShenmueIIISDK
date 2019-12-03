
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

// Function WBP_DebugCutsceneID.WBP_DebugCutsceneID_C.Update
// (Exec, Event, MulticastDelegate, Public, NetServer, NetClient, Const)

void UWBP_DebugCutsceneID_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DebugCutsceneID.WBP_DebugCutsceneID_C.Update");

	UWBP_DebugCutsceneID_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_DebugCutsceneID.WBP_DebugCutsceneID_C.Construct
// (Net, Native, NetResponse, Static, MulticastDelegate, Public, NetServer, BlueprintEvent, BlueprintPure)

void UWBP_DebugCutsceneID_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DebugCutsceneID.WBP_DebugCutsceneID_C.Construct");

	UWBP_DebugCutsceneID_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_DebugCutsceneID.WBP_DebugCutsceneID_C.Tick
// (Net, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Protected, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_DebugCutsceneID_C::STATIC_Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DebugCutsceneID.WBP_DebugCutsceneID_C.Tick");

	UWBP_DebugCutsceneID_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_DebugCutsceneID.WBP_DebugCutsceneID_C.ExecuteUbergraph_WBP_DebugCutsceneID
// (NetRequest, Exec, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Private, NetServer, NetClient, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_DebugCutsceneID_C::ExecuteUbergraph_WBP_DebugCutsceneID(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DebugCutsceneID.WBP_DebugCutsceneID_C.ExecuteUbergraph_WBP_DebugCutsceneID");

	UWBP_DebugCutsceneID_C_ExecuteUbergraph_WBP_DebugCutsceneID_Params params;
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
