
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

// Function SL_Hakkason_SheLead.SL_Hakkason_SheLead_C.SpawnShenfa_Pos
// (Net, NetReliable, NetRequest, Event, NetResponse, Static, MulticastDelegate, Public, Protected, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// class ANPC_SplineMoveActor_C*  SplineActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 she_pos                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          she_dir                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASL_Hakkason_SheLead_C::STATIC_SpawnShenfa_Pos(class ANPC_SplineMoveActor_C* SplineActor, const struct FVector& she_pos, float she_dir)
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_SheLead.SL_Hakkason_SheLead_C.SpawnShenfa_Pos");

	ASL_Hakkason_SheLead_C_SpawnShenfa_Pos_Params params;
	params.SplineActor = SplineActor;
	params.she_pos = she_pos;
	params.she_dir = she_dir;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Hakkason_SheLead.SL_Hakkason_SheLead_C.SpawnShenfa
// (Net, NetReliable, NetRequest, Native, Event, MulticastDelegate, Public, Private, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   LevelName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   FindTag                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ANPC_SplineMoveActor_C*  SplineActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASL_Hakkason_SheLead_C::SpawnShenfa(const struct FName& LevelName, const struct FName& FindTag, class ANPC_SplineMoveActor_C* SplineActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_SheLead.SL_Hakkason_SheLead_C.SpawnShenfa");

	ASL_Hakkason_SheLead_C_SpawnShenfa_Params params;
	params.LevelName = LevelName;
	params.FindTag = FindTag;
	params.SplineActor = SplineActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Hakkason_SheLead.SL_Hakkason_SheLead_C.isPlayer
// (NetResponse, MulticastDelegate, Private, Protected, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           isPlayer                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASL_Hakkason_SheLead_C::isPlayer(class AActor* Actor, bool* isPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_SheLead.SL_Hakkason_SheLead_C.isPlayer");

	ASL_Hakkason_SheLead_C_isPlayer_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (isPlayer != nullptr)
		*isPlayer = params.isPlayer;
}


// Function SL_Hakkason_SheLead.SL_Hakkason_SheLead_C.StartLeadSheHouse
// (Net, Event, NetResponse, NetMulticast, MulticastDelegate, Delegate, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure)

void ASL_Hakkason_SheLead_C::StartLeadSheHouse()
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_SheLead.SL_Hakkason_SheLead_C.StartLeadSheHouse");

	ASL_Hakkason_SheLead_C_StartLeadSheHouse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Hakkason_SheLead.SL_Hakkason_SheLead_C.StartHanabashiShenfa
// (NetReliable, Event, NetResponse, NetMulticast, MulticastDelegate, Delegate, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure)

void ASL_Hakkason_SheLead_C::StartHanabashiShenfa()
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_SheLead.SL_Hakkason_SheLead_C.StartHanabashiShenfa");

	ASL_Hakkason_SheLead_C_StartHanabashiShenfa_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Hakkason_SheLead.SL_Hakkason_SheLead_C.StartLeadSheHousePos
// (Net, NetReliable, Event, NetResponse, NetMulticast, MulticastDelegate, Delegate, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure)

void ASL_Hakkason_SheLead_C::StartLeadSheHousePos()
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_SheLead.SL_Hakkason_SheLead_C.StartLeadSheHousePos");

	ASL_Hakkason_SheLead_C_StartLeadSheHousePos_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Hakkason_SheLead.SL_Hakkason_SheLead_C.StartLead
// (Net, NetReliable, Event, NetResponse, NetMulticast, MulticastDelegate, Delegate, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure)

void ASL_Hakkason_SheLead_C::StartLead()
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_SheLead.SL_Hakkason_SheLead_C.StartLead");

	ASL_Hakkason_SheLead_C_StartLead_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Hakkason_SheLead.SL_Hakkason_SheLead_C.StartHanabashiShenfaPos
// (NetRequest, Event, NetResponse, NetMulticast, MulticastDelegate, Delegate, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure)

void ASL_Hakkason_SheLead_C::StartHanabashiShenfaPos()
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_SheLead.SL_Hakkason_SheLead_C.StartHanabashiShenfaPos");

	ASL_Hakkason_SheLead_C_StartHanabashiShenfaPos_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Hakkason_SheLead.SL_Hakkason_SheLead_C.StartleadPos
// (NetRequest, Event, NetResponse, NetMulticast, MulticastDelegate, Delegate, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure)

void ASL_Hakkason_SheLead_C::StartleadPos()
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_SheLead.SL_Hakkason_SheLead_C.StartleadPos");

	ASL_Hakkason_SheLead_C_StartleadPos_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Hakkason_SheLead.SL_Hakkason_SheLead_C.ExecuteUbergraph_SL_Hakkason_SheLead
// (NetReliable, Exec, Native, Event, NetResponse, Static, Private, Protected, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASL_Hakkason_SheLead_C::STATIC_ExecuteUbergraph_SL_Hakkason_SheLead(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_SheLead.SL_Hakkason_SheLead_C.ExecuteUbergraph_SL_Hakkason_SheLead");

	ASL_Hakkason_SheLead_C_ExecuteUbergraph_SL_Hakkason_SheLead_Params params;
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
