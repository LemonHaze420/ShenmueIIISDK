
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

// Function BP_Chara_WorldTel2.BP_Chara_WorldTel2_C.GetTalkComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UBPC_S3_TalkComponent_C* BPC_S3_TalkComponent           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_Chara_WorldTel2_C::GetTalkComponent(class UBPC_S3_TalkComponent_C** BPC_S3_TalkComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chara_WorldTel2.BP_Chara_WorldTel2_C.GetTalkComponent");

	ABP_Chara_WorldTel2_C_GetTalkComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BPC_S3_TalkComponent != nullptr)
		*BPC_S3_TalkComponent = params.BPC_S3_TalkComponent;
}


// Function BP_Chara_WorldTel2.BP_Chara_WorldTel2_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Chara_WorldTel2_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chara_WorldTel2.BP_Chara_WorldTel2_C.UserConstructionScript");

	ABP_Chara_WorldTel2_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Chara_WorldTel2.BP_Chara_WorldTel2_C.TelStart
// (BlueprintCallable, BlueprintEvent)

void ABP_Chara_WorldTel2_C::TelStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chara_WorldTel2.BP_Chara_WorldTel2_C.TelStart");

	ABP_Chara_WorldTel2_C_TelStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Chara_WorldTel2.BP_Chara_WorldTel2_C.TelEnd
// (BlueprintCallable, BlueprintEvent)

void ABP_Chara_WorldTel2_C::TelEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chara_WorldTel2.BP_Chara_WorldTel2_C.TelEnd");

	ABP_Chara_WorldTel2_C_TelEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Chara_WorldTel2.BP_Chara_WorldTel2_C.TalkStart
// (BlueprintCallable, BlueprintEvent)

void ABP_Chara_WorldTel2_C::TalkStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chara_WorldTel2.BP_Chara_WorldTel2_C.TalkStart");

	ABP_Chara_WorldTel2_C_TalkStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Chara_WorldTel2.BP_Chara_WorldTel2_C.CallStart
// (BlueprintCallable, BlueprintEvent)

void ABP_Chara_WorldTel2_C::CallStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chara_WorldTel2.BP_Chara_WorldTel2_C.CallStart");

	ABP_Chara_WorldTel2_C_CallStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Chara_WorldTel2.BP_Chara_WorldTel2_C.CallEnd
// (BlueprintCallable, BlueprintEvent)

void ABP_Chara_WorldTel2_C::CallEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chara_WorldTel2.BP_Chara_WorldTel2_C.CallEnd");

	ABP_Chara_WorldTel2_C_CallEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Chara_WorldTel2.BP_Chara_WorldTel2_C.OnTalkFinished
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class US3TalkComponent*        TalkComponent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           interrupted                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Chara_WorldTel2_C::OnTalkFinished(class US3TalkComponent* TalkComponent, bool interrupted)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chara_WorldTel2.BP_Chara_WorldTel2_C.OnTalkFinished");

	ABP_Chara_WorldTel2_C_OnTalkFinished_Params params;
	params.TalkComponent = TalkComponent;
	params.interrupted = interrupted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Chara_WorldTel2.BP_Chara_WorldTel2_C.ExecuteUbergraph_BP_Chara_WorldTel2
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Chara_WorldTel2_C::ExecuteUbergraph_BP_Chara_WorldTel2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chara_WorldTel2.BP_Chara_WorldTel2_C.ExecuteUbergraph_BP_Chara_WorldTel2");

	ABP_Chara_WorldTel2_C_ExecuteUbergraph_BP_Chara_WorldTel2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Chara_WorldTel2.BP_Chara_WorldTel2_C.ED_ButtonPush__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_Chara_WorldTel2_C::ED_ButtonPush__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chara_WorldTel2.BP_Chara_WorldTel2_C.ED_ButtonPush__DelegateSignature");

	ABP_Chara_WorldTel2_C_ED_ButtonPush__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Chara_WorldTel2.BP_Chara_WorldTel2_C.ED_CallEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_Chara_WorldTel2_C::ED_CallEnd__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chara_WorldTel2.BP_Chara_WorldTel2_C.ED_CallEnd__DelegateSignature");

	ABP_Chara_WorldTel2_C_ED_CallEnd__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Chara_WorldTel2.BP_Chara_WorldTel2_C.ED_CallStart__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_Chara_WorldTel2_C::ED_CallStart__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chara_WorldTel2.BP_Chara_WorldTel2_C.ED_CallStart__DelegateSignature");

	ABP_Chara_WorldTel2_C_ED_CallStart__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Chara_WorldTel2.BP_Chara_WorldTel2_C.ED_TalkFinish__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_Chara_WorldTel2_C::ED_TalkFinish__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chara_WorldTel2.BP_Chara_WorldTel2_C.ED_TalkFinish__DelegateSignature");

	ABP_Chara_WorldTel2_C_ED_TalkFinish__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Chara_WorldTel2.BP_Chara_WorldTel2_C.ED_TalkStart__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_Chara_WorldTel2_C::ED_TalkStart__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chara_WorldTel2.BP_Chara_WorldTel2_C.ED_TalkStart__DelegateSignature");

	ABP_Chara_WorldTel2_C_ED_TalkStart__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Chara_WorldTel2.BP_Chara_WorldTel2_C.ED_TelEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_Chara_WorldTel2_C::ED_TelEnd__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chara_WorldTel2.BP_Chara_WorldTel2_C.ED_TelEnd__DelegateSignature");

	ABP_Chara_WorldTel2_C_ED_TelEnd__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Chara_WorldTel2.BP_Chara_WorldTel2_C.ED_TelStart__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_Chara_WorldTel2_C::ED_TelStart__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chara_WorldTel2.BP_Chara_WorldTel2_C.ED_TelStart__DelegateSignature");

	ABP_Chara_WorldTel2_C_ED_TelStart__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
