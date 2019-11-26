
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

// Function BPC_EventLevelStreaming.BPC_EventLevelStreaming_C.SetRequestOwner
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_EventLevelStreaming_C::SetRequestOwner(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_EventLevelStreaming.BPC_EventLevelStreaming_C.SetRequestOwner");

	UBPC_EventLevelStreaming_C_SetRequestOwner_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_EventLevelStreaming.BPC_EventLevelStreaming_C.GetRequestOwner
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UBPC_EventLevelStreaming_C::GetRequestOwner()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_EventLevelStreaming.BPC_EventLevelStreaming_C.GetRequestOwner");

	UBPC_EventLevelStreaming_C_GetRequestOwner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPC_EventLevelStreaming.BPC_EventLevelStreaming_C.IsDataLevelSet
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBPC_EventLevelStreaming_C::IsDataLevelSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_EventLevelStreaming.BPC_EventLevelStreaming_C.IsDataLevelSet");

	UBPC_EventLevelStreaming_C_IsDataLevelSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPC_EventLevelStreaming.BPC_EventLevelStreaming_C.StartListLevelLoad
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FName>           NeedLevels                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBPC_EventLevelStreaming_C::StartListLevelLoad(TArray<struct FName>* NeedLevels)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_EventLevelStreaming.BPC_EventLevelStreaming_C.StartListLevelLoad");

	UBPC_EventLevelStreaming_C_StartListLevelLoad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NeedLevels != nullptr)
		*NeedLevels = params.NeedLevels;
}


// Function BPC_EventLevelStreaming.BPC_EventLevelStreaming_C.FinishLevelStreaming
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_EventLevelStreaming_C::FinishLevelStreaming(const struct FName& ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_EventLevelStreaming.BPC_EventLevelStreaming_C.FinishLevelStreaming");

	UBPC_EventLevelStreaming_C_FinishLevelStreaming_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_EventLevelStreaming.BPC_EventLevelStreaming_C.StreamDataLevel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_EventLevelStreaming_C::StreamDataLevel(const struct FName& Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_EventLevelStreaming.BPC_EventLevelStreaming_C.StreamDataLevel");

	UBPC_EventLevelStreaming_C_StreamDataLevel_Params params;
	params.Level = Level;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_EventLevelStreaming.BPC_EventLevelStreaming_C.UnloadLevels
// (BlueprintCallable, BlueprintEvent)

void UBPC_EventLevelStreaming_C::UnloadLevels()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_EventLevelStreaming.BPC_EventLevelStreaming_C.UnloadLevels");

	UBPC_EventLevelStreaming_C_UnloadLevels_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_EventLevelStreaming.BPC_EventLevelStreaming_C.FinishedUnloadLevel
// (BlueprintCallable, BlueprintEvent)

void UBPC_EventLevelStreaming_C::FinishedUnloadLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_EventLevelStreaming.BPC_EventLevelStreaming_C.FinishedUnloadLevel");

	UBPC_EventLevelStreaming_C_FinishedUnloadLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_EventLevelStreaming.BPC_EventLevelStreaming_C.UnloadDataLevelOnly
// (BlueprintCallable, BlueprintEvent)

void UBPC_EventLevelStreaming_C::UnloadDataLevelOnly()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_EventLevelStreaming.BPC_EventLevelStreaming_C.UnloadDataLevelOnly");

	UBPC_EventLevelStreaming_C_UnloadDataLevelOnly_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_EventLevelStreaming.BPC_EventLevelStreaming_C.StartStreaming
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FName>           NeedLevels                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBPC_EventLevelStreaming_C::StartStreaming(TArray<struct FName>* NeedLevels)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_EventLevelStreaming.BPC_EventLevelStreaming_C.StartStreaming");

	UBPC_EventLevelStreaming_C_StartStreaming_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NeedLevels != nullptr)
		*NeedLevels = params.NeedLevels;
}


// Function BPC_EventLevelStreaming.BPC_EventLevelStreaming_C.ExecuteUbergraph_BPC_EventLevelStreaming
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_EventLevelStreaming_C::ExecuteUbergraph_BPC_EventLevelStreaming(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_EventLevelStreaming.BPC_EventLevelStreaming_C.ExecuteUbergraph_BPC_EventLevelStreaming");

	UBPC_EventLevelStreaming_C_ExecuteUbergraph_BPC_EventLevelStreaming_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_EventLevelStreaming.BPC_EventLevelStreaming_C.OnFinishListLoad__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBPC_EventLevelStreaming_C::OnFinishListLoad__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_EventLevelStreaming.BPC_EventLevelStreaming_C.OnFinishListLoad__DelegateSignature");

	UBPC_EventLevelStreaming_C_OnFinishListLoad__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_EventLevelStreaming.BPC_EventLevelStreaming_C.OnFinishUnload__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBPC_EventLevelStreaming_C::OnFinishUnload__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_EventLevelStreaming.BPC_EventLevelStreaming_C.OnFinishUnload__DelegateSignature");

	UBPC_EventLevelStreaming_C_OnFinishUnload__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_EventLevelStreaming.BPC_EventLevelStreaming_C.OnFinishDataLoad__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBPC_EventLevelStreaming_C::OnFinishDataLoad__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_EventLevelStreaming.BPC_EventLevelStreaming_C.OnFinishDataLoad__DelegateSignature");

	UBPC_EventLevelStreaming_C_OnFinishDataLoad__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
