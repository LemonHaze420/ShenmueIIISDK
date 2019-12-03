
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

// Function TalkCam_BaseTask.TalkCam_BaseTask_C.IsFull
// (NetRequest, Exec, NetResponse, Static, MulticastDelegate, Protected, Delegate, NetServer, Const)
// Parameters:
// int                            mask                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTalkCam_BaseTask_C::STATIC_IsFull(int mask, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function TalkCam_BaseTask.TalkCam_BaseTask_C.IsFull");

	UTalkCam_BaseTask_C_IsFull_Params params;
	params.mask = mask;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function TalkCam_BaseTask.TalkCam_BaseTask_C.IsClose
// (NetReliable, NetRequest, Native, NetResponse, Static, MulticastDelegate, Protected, Delegate, NetServer, Const)
// Parameters:
// int                            mask                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTalkCam_BaseTask_C::STATIC_IsClose(int mask, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function TalkCam_BaseTask.TalkCam_BaseTask_C.IsClose");

	UTalkCam_BaseTask_C_IsClose_Params params;
	params.mask = mask;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function TalkCam_BaseTask.TalkCam_BaseTask_C.IsBust
// (Net, NetReliable, Native, NetResponse, Static, MulticastDelegate, Protected, Delegate, NetServer, Const)
// Parameters:
// int                            mask                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTalkCam_BaseTask_C::STATIC_IsBust(int mask, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function TalkCam_BaseTask.TalkCam_BaseTask_C.IsBust");

	UTalkCam_BaseTask_C_IsBust_Params params;
	params.mask = mask;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function TalkCam_BaseTask.TalkCam_BaseTask_C.IsShoulderCut
// (NetReliable, NetRequest, Exec, NetResponse, Static, MulticastDelegate, Protected, Delegate, NetServer, Const)
// Parameters:
// int                            mask                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTalkCam_BaseTask_C::STATIC_IsShoulderCut(int mask, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function TalkCam_BaseTask.TalkCam_BaseTask_C.IsShoulderCut");

	UTalkCam_BaseTask_C_IsShoulderCut_Params params;
	params.mask = mask;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function TalkCam_BaseTask.TalkCam_BaseTask_C.isPair
// (Net, Native, NetResponse, Static, MulticastDelegate, Protected, Delegate, NetServer, Const)
// Parameters:
// int                            mask                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTalkCam_BaseTask_C::STATIC_isPair(int mask, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function TalkCam_BaseTask.TalkCam_BaseTask_C.isPair");

	UTalkCam_BaseTask_C_isPair_Params params;
	params.mask = mask;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function TalkCam_BaseTask.TalkCam_BaseTask_C.IsFar
// (Exec, Native, NetResponse, Static, MulticastDelegate, Protected, Delegate, NetServer, Const)
// Parameters:
// int                            mask                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTalkCam_BaseTask_C::STATIC_IsFar(int mask, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function TalkCam_BaseTask.TalkCam_BaseTask_C.IsFar");

	UTalkCam_BaseTask_C_IsFar_Params params;
	params.mask = mask;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function TalkCam_BaseTask.TalkCam_BaseTask_C.IsHorizontal
// (Net, Exec, NetResponse, Static, MulticastDelegate, Protected, Delegate, NetServer, Const)
// Parameters:
// int                            mask                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTalkCam_BaseTask_C::STATIC_IsHorizontal(int mask, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function TalkCam_BaseTask.TalkCam_BaseTask_C.IsHorizontal");

	UTalkCam_BaseTask_C_IsHorizontal_Params params;
	params.mask = mask;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function TalkCam_BaseTask.TalkCam_BaseTask_C.ReceiveTickAI
// (Net, NetResponse, MulticastDelegate, Private, NetServer, HasOutParms, Const)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTalkCam_BaseTask_C::ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function TalkCam_BaseTask.TalkCam_BaseTask_C.ReceiveTickAI");

	UTalkCam_BaseTask_C_ReceiveTickAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TalkCam_BaseTask.TalkCam_BaseTask_C.ExecuteUbergraph_TalkCam_BaseTask
// (Net, Native, Static, NetMulticast, MulticastDelegate, Public, Private, HasOutParms, HasDefaults, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTalkCam_BaseTask_C::STATIC_ExecuteUbergraph_TalkCam_BaseTask(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TalkCam_BaseTask.TalkCam_BaseTask_C.ExecuteUbergraph_TalkCam_BaseTask");

	UTalkCam_BaseTask_C_ExecuteUbergraph_TalkCam_BaseTask_Params params;
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
