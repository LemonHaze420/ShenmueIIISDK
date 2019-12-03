
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

// Function BP_SubQuestFishing.BP_SubQuestFishing_C.CheckTableIndex
// (Net, NetReliable, NetRequest, Exec, Static, MulticastDelegate, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, NetValidate)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Length                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           In_Range                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_SubQuestFishing_C::STATIC_CheckTableIndex(int Index, int Length, bool* In_Range)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubQuestFishing.BP_SubQuestFishing_C.CheckTableIndex");

	ABP_SubQuestFishing_C_CheckTableIndex_Params params;
	params.Index = Index;
	params.Length = Length;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (In_Range != nullptr)
		*In_Range = params.In_Range;
}


// Function BP_SubQuestFishing.BP_SubQuestFishing_C.CulcFlagValue
// (NetReliable, NetRequest, Exec, Event, NetResponse, MulticastDelegate, Public, Private, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           Start_on_the_way               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            StartCount                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          StartStep                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          StartDifference                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_SubQuestFishing_C::CulcFlagValue(bool* Start_on_the_way, int* StartCount, float* StartStep, float* StartDifference)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubQuestFishing.BP_SubQuestFishing_C.CulcFlagValue");

	ABP_SubQuestFishing_C_CulcFlagValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Start_on_the_way != nullptr)
		*Start_on_the_way = params.Start_on_the_way;
	if (StartCount != nullptr)
		*StartCount = params.StartCount;
	if (StartStep != nullptr)
		*StartStep = params.StartStep;
	if (StartDifference != nullptr)
		*StartDifference = params.StartDifference;
}


// Function BP_SubQuestFishing.BP_SubQuestFishing_C.AddRandom
// (Exec, Event, NetResponse, MulticastDelegate, Delegate, HasDefaults, DLLImport, BlueprintCallable, NetValidate)
// Parameters:
// bool                           Write                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_SubQuestFishing_C::AddRandom(bool* Write)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubQuestFishing.BP_SubQuestFishing_C.AddRandom");

	ABP_SubQuestFishing_C_AddRandom_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Write != nullptr)
		*Write = params.Write;
}


// Function BP_SubQuestFishing.BP_SubQuestFishing_C.GetTableIndex
// (Event, Private, Protected, NetServer, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Length                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            change_index                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_SubQuestFishing_C::GetTableIndex(int Index, int Length, int* change_index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubQuestFishing.BP_SubQuestFishing_C.GetTableIndex");

	ABP_SubQuestFishing_C_GetTableIndex_Params params;
	params.Index = Index;
	params.Length = Length;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (change_index != nullptr)
		*change_index = params.change_index;
}


// Function BP_SubQuestFishing.BP_SubQuestFishing_C.SetTimeChange
// (Exec, Native, Event, NetMulticast, Public, BlueprintPure, NetValidate)
// Parameters:
// int                            CountUp                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Write                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_SubQuestFishing_C::SetTimeChange(int CountUp, bool* Write)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubQuestFishing.BP_SubQuestFishing_C.SetTimeChange");

	ABP_SubQuestFishing_C_SetTimeChange_Params params;
	params.CountUp = CountUp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Write != nullptr)
		*Write = params.Write;
}


// Function BP_SubQuestFishing.BP_SubQuestFishing_C.CulcElapsedTime
// (NetReliable, Public, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            CountUp                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_SubQuestFishing_C::CulcElapsedTime(int* CountUp)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubQuestFishing.BP_SubQuestFishing_C.CulcElapsedTime");

	ABP_SubQuestFishing_C_CulcElapsedTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CountUp != nullptr)
		*CountUp = params.CountUp;
}


// Function BP_SubQuestFishing.BP_SubQuestFishing_C.GameTimeMark
// (NetReliable, NetRequest, Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Delegate, NetServer, HasDefaults, DLLImport, BlueprintEvent, NetValidate)
// Parameters:
// bool                           StartMark                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SubQuestFishing_C::STATIC_GameTimeMark(bool StartMark)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubQuestFishing.BP_SubQuestFishing_C.GameTimeMark");

	ABP_SubQuestFishing_C_GameTimeMark_Params params;
	params.StartMark = StartMark;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SubQuestFishing.BP_SubQuestFishing_C.isEventEnable
// (Net, NetReliable, Native, Event, NetResponse, Static, NetMulticast, Private, Delegate, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_SubQuestFishing_C::STATIC_isEventEnable(bool* Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubQuestFishing.BP_SubQuestFishing_C.isEventEnable");

	ABP_SubQuestFishing_C_isEventEnable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Enable != nullptr)
		*Enable = params.Enable;
}


// Function BP_SubQuestFishing.BP_SubQuestFishing_C.UserConstructionScript
// (Net, NetReliable, Native, NetResponse, Static, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, DLLImport, BlueprintCallable, NetValidate)

void ABP_SubQuestFishing_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubQuestFishing.BP_SubQuestFishing_C.UserConstructionScript");

	ABP_SubQuestFishing_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SubQuestFishing.BP_SubQuestFishing_C.StartEvent
// (NetReliable, NetRequest, Native, MulticastDelegate, Private, Protected, NetServer, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            ArrayIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SetFlags                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SubQuestFishing_C::StartEvent(int ArrayIndex, int SetFlags)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubQuestFishing.BP_SubQuestFishing_C.StartEvent");

	ABP_SubQuestFishing_C_StartEvent_Params params;
	params.ArrayIndex = ArrayIndex;
	params.SetFlags = SetFlags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SubQuestFishing.BP_SubQuestFishing_C.ReceiveTick
// (NetReliable, NetRequest, NetResponse, NetMulticast, Public, Private, Protected, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, NetValidate)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SubQuestFishing_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubQuestFishing.BP_SubQuestFishing_C.ReceiveTick");

	ABP_SubQuestFishing_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SubQuestFishing.BP_SubQuestFishing_C.TimeChange
// (Net, NetRequest, NetResponse, NetMulticast, Public, Private, Protected, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, NetValidate)
// Parameters:
// struct FName                   CutsceneName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SubQuestFishing_C::TimeChange(const struct FName& CutsceneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubQuestFishing.BP_SubQuestFishing_C.TimeChange");

	ABP_SubQuestFishing_C_TimeChange_Params params;
	params.CutsceneName = CutsceneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SubQuestFishing.BP_SubQuestFishing_C.Recharge
// (Net, NetReliable, NetRequest, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Private, Protected, Delegate, DLLImport, BlueprintCallable, NetValidate)

void ABP_SubQuestFishing_C::STATIC_Recharge()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubQuestFishing.BP_SubQuestFishing_C.Recharge");

	ABP_SubQuestFishing_C_Recharge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SubQuestFishing.BP_SubQuestFishing_C.LoadStartIn
// (Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Private, Protected, Delegate, DLLImport, BlueprintCallable, NetValidate)

void ABP_SubQuestFishing_C::STATIC_LoadStartIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubQuestFishing.BP_SubQuestFishing_C.LoadStartIn");

	ABP_SubQuestFishing_C_LoadStartIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SubQuestFishing.BP_SubQuestFishing_C.ReceiveBeginPlay
// (Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Private, Protected, Delegate, DLLImport, BlueprintCallable, NetValidate)

void ABP_SubQuestFishing_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubQuestFishing.BP_SubQuestFishing_C.ReceiveBeginPlay");

	ABP_SubQuestFishing_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SubQuestFishing.BP_SubQuestFishing_C.ExecuteUbergraph_BP_SubQuestFishing
// (Static, NetMulticast, MulticastDelegate, Private, Protected, NetServer, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SubQuestFishing_C::STATIC_ExecuteUbergraph_BP_SubQuestFishing(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubQuestFishing.BP_SubQuestFishing_C.ExecuteUbergraph_BP_SubQuestFishing");

	ABP_SubQuestFishing_C_ExecuteUbergraph_BP_SubQuestFishing_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
