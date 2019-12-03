
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

// Function BP_TalkProcess_LookSpeed.BP_TalkProcess_LookSpeed_C.Activate
// (Net, NetReliable, Exec, Native, NetResponse, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, Const)

void UBP_TalkProcess_LookSpeed_C::Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkProcess_LookSpeed.BP_TalkProcess_LookSpeed_C.Activate");

	UBP_TalkProcess_LookSpeed_C_Activate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkProcess_LookSpeed.BP_TalkProcess_LookSpeed_C.Update
// (Native, NetResponse, Protected, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_TalkProcess_LookSpeed_C::Update(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkProcess_LookSpeed.BP_TalkProcess_LookSpeed_C.Update");

	UBP_TalkProcess_LookSpeed_C_Update_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkProcess_LookSpeed.BP_TalkProcess_LookSpeed_C.ExecuteUbergraph_BP_TalkProcess_LookSpeed
// (Net, NetReliable, NetRequest, NetResponse, Protected, Delegate, NetServer, HasOutParms, HasDefaults, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_TalkProcess_LookSpeed_C::ExecuteUbergraph_BP_TalkProcess_LookSpeed(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkProcess_LookSpeed.BP_TalkProcess_LookSpeed_C.ExecuteUbergraph_BP_TalkProcess_LookSpeed");

	UBP_TalkProcess_LookSpeed_C_ExecuteUbergraph_BP_TalkProcess_LookSpeed_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
