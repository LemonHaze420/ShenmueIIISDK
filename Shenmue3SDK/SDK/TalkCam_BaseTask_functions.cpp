
#include "../SDK.h"

// Name: S3Demo, Version: 0.90.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function TalkCam_BaseTask.TalkCam_BaseTask_C.IsFull
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            mask                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTalkCam_BaseTask_C::IsFull(int mask, bool* Result)
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
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            mask                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTalkCam_BaseTask_C::IsClose(int mask, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function TalkCam_BaseTask.TalkCam_BaseTask_C.IsClose");

	UTalkCam_BaseTask_C_IsClose_Params params;
	params.mask = mask;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function TalkCam_BaseTask.TalkCam_BaseTask_C.IsBust
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            mask                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTalkCam_BaseTask_C::IsBust(int mask, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function TalkCam_BaseTask.TalkCam_BaseTask_C.IsBust");

	UTalkCam_BaseTask_C_IsBust_Params params;
	params.mask = mask;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function TalkCam_BaseTask.TalkCam_BaseTask_C.IsShoulderCut
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            mask                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTalkCam_BaseTask_C::IsShoulderCut(int mask, bool* Result)
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
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            mask                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTalkCam_BaseTask_C::isPair(int mask, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function TalkCam_BaseTask.TalkCam_BaseTask_C.isPair");

	UTalkCam_BaseTask_C_isPair_Params params;
	params.mask = mask;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function TalkCam_BaseTask.TalkCam_BaseTask_C.IsFar
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            mask                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTalkCam_BaseTask_C::IsFar(int mask, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function TalkCam_BaseTask.TalkCam_BaseTask_C.IsFar");

	UTalkCam_BaseTask_C_IsFar_Params params;
	params.mask = mask;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function TalkCam_BaseTask.TalkCam_BaseTask_C.IsHorizontal
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            mask                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTalkCam_BaseTask_C::IsHorizontal(int mask, bool* Result)
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
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController**          OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn**                  ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTalkCam_BaseTask_C::ReceiveTickAI(class AAIController** OwnerController, class APawn** ControlledPawn, float* DeltaSeconds)
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
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTalkCam_BaseTask_C::ExecuteUbergraph_TalkCam_BaseTask(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TalkCam_BaseTask.TalkCam_BaseTask_C.ExecuteUbergraph_TalkCam_BaseTask");

	UTalkCam_BaseTask_C_ExecuteUbergraph_TalkCam_BaseTask_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
