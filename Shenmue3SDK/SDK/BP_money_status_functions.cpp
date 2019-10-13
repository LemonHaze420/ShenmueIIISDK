
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

// Function BP_money_status.BP_money_status_C.IsShouldVisible
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
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
// (Public, BlueprintCallable, BlueprintEvent)
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
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_money_status_C::CheckVisible()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_money_status.BP_money_status_C.CheckVisible");

	ABP_money_status_C_CheckVisible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_money_status.BP_money_status_C.Hide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_money_status_C::Hide(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_money_status.BP_money_status_C.Hide");

	ABP_money_status_C_Hide_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_money_status.BP_money_status_C.Show
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_money_status_C::Show(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_money_status.BP_money_status_C.Show");

	ABP_money_status_C_Show_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_money_status.BP_money_status_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_money_status_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_money_status.BP_money_status_C.UserConstructionScript");

	ABP_money_status_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_money_status.BP_money_status_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_money_status_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_money_status.BP_money_status_C.ReceiveBeginPlay");

	ABP_money_status_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_money_status.BP_money_status_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_money_status_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_money_status.BP_money_status_C.ReceiveEndPlay");

	ABP_money_status_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_money_status.BP_money_status_C.CreateWidget
// (BlueprintCallable, BlueprintEvent)

void ABP_money_status_C::CreateWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_money_status.BP_money_status_C.CreateWidget");

	ABP_money_status_C_CreateWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_money_status.BP_money_status_C.DestroyWidget
// (BlueprintCallable, BlueprintEvent)

void ABP_money_status_C::DestroyWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_money_status.BP_money_status_C.DestroyWidget");

	ABP_money_status_C_DestroyWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_money_status.BP_money_status_C.FadeOutFinished
// (BlueprintCallable, BlueprintEvent)

void ABP_money_status_C::FadeOutFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_money_status.BP_money_status_C.FadeOutFinished");

	ABP_money_status_C_FadeOutFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_money_status.BP_money_status_C.ExecuteUbergraph_BP_money_status
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_money_status_C::ExecuteUbergraph_BP_money_status(int EntryPoint)
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
