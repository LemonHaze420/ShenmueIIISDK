
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

// Function BP_money_status.BP_money_status_C.IsShouldVisible
// (NetRequest, NetResponse, Private, Delegate, HasOutParms, NetClient, DLLImport)
// Parameters:
// bool                           Visible                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_money_status_C::IsShouldVisible(bool* Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_money_status.BP_money_status_C.IsShouldVisible");

	ABP_money_status_C_IsShouldVisible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Visible != nullptr)
		*Visible = params.Visible;
}


// Function BP_money_status.BP_money_status_C.SetForbid
// (NetRequest, MulticastDelegate, Private, Protected, Delegate, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Fobid                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_money_status_C::SetForbid(class AActor* Actor, bool Fobid)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_money_status.BP_money_status_C.SetForbid");

	ABP_money_status_C_SetForbid_Params params;
	params.Actor = Actor;
	params.Fobid = Fobid;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_money_status.BP_money_status_C.CheckVisible
// (Net, Exec, Native, MulticastDelegate, Protected, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable)

void ABP_money_status_C::CheckVisible()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_money_status.BP_money_status_C.CheckVisible");

	ABP_money_status_C_CheckVisible_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_money_status.BP_money_status_C.Hide
// (Native, Event, NetResponse, MulticastDelegate, Public, Private, Protected, Delegate, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_money_status_C::Hide(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_money_status.BP_money_status_C.Hide");

	ABP_money_status_C_Hide_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_money_status.BP_money_status_C.Show
// (Net, NetReliable, NetRequest, Exec, Native, Static, NetMulticast, MulticastDelegate, Private, Protected, NetServer, NetClient, BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_money_status_C::STATIC_Show(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_money_status.BP_money_status_C.Show");

	ABP_money_status_C_Show_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_money_status.BP_money_status_C.UserConstructionScript
// (Exec, Native, Event, NetMulticast, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_money_status_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_money_status.BP_money_status_C.UserConstructionScript");

	ABP_money_status_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_money_status.BP_money_status_C.ReceiveBeginPlay
// (Net, NetReliable, Static, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void ABP_money_status_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_money_status.BP_money_status_C.ReceiveBeginPlay");

	ABP_money_status_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_money_status.BP_money_status_C.ReceiveEndPlay
// (Net, NetRequest, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_money_status_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_money_status.BP_money_status_C.ReceiveEndPlay");

	ABP_money_status_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_money_status.BP_money_status_C.CreateWidget
// (NetReliable, Static, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void ABP_money_status_C::STATIC_CreateWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_money_status.BP_money_status_C.CreateWidget");

	ABP_money_status_C_CreateWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_money_status.BP_money_status_C.DestroyWidget
// (Net, Static, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void ABP_money_status_C::STATIC_DestroyWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_money_status.BP_money_status_C.DestroyWidget");

	ABP_money_status_C_DestroyWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_money_status.BP_money_status_C.FadeOutFinished
// (Net, Static, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void ABP_money_status_C::STATIC_FadeOutFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_money_status.BP_money_status_C.FadeOutFinished");

	ABP_money_status_C_FadeOutFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_money_status.BP_money_status_C.ExecuteUbergraph_BP_money_status
// (NetReliable, NetRequest, Exec, Static, MulticastDelegate, Protected, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_money_status_C::STATIC_ExecuteUbergraph_BP_money_status(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_money_status.BP_money_status_C.ExecuteUbergraph_BP_money_status");

	ABP_money_status_C_ExecuteUbergraph_BP_money_status_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
