
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

// Function BP_Chara_WorldTel2.BP_Chara_WorldTel2_C.GetTalkComponent
// (NetReliable, Native, Event, NetResponse, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, Const)
// Parameters:
// class UBPC_S3_TalkComponent_C* BPC_S3_TalkComponent           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_Chara_WorldTel2_C::GetTalkComponent(class UBPC_S3_TalkComponent_C** BPC_S3_TalkComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chara_WorldTel2.BP_Chara_WorldTel2_C.GetTalkComponent");

	ABP_Chara_WorldTel2_C_GetTalkComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BPC_S3_TalkComponent != nullptr)
		*BPC_S3_TalkComponent = params.BPC_S3_TalkComponent;
}


// Function BP_Chara_WorldTel2.BP_Chara_WorldTel2_C.UserConstructionScript
// (Net, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Protected, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_Chara_WorldTel2_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chara_WorldTel2.BP_Chara_WorldTel2_C.UserConstructionScript");

	ABP_Chara_WorldTel2_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Chara_WorldTel2.BP_Chara_WorldTel2_C.TelStart
// (Net, Native, Event, NetResponse, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, Const)

void ABP_Chara_WorldTel2_C::TelStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chara_WorldTel2.BP_Chara_WorldTel2_C.TelStart");

	ABP_Chara_WorldTel2_C_TelStart_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Chara_WorldTel2.BP_Chara_WorldTel2_C.TelEnd
// (Net, Native, Event, NetResponse, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, Const)

void ABP_Chara_WorldTel2_C::TelEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chara_WorldTel2.BP_Chara_WorldTel2_C.TelEnd");

	ABP_Chara_WorldTel2_C_TelEnd_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Chara_WorldTel2.BP_Chara_WorldTel2_C.TalkStart
// (Native, Event, NetResponse, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, Const)

void ABP_Chara_WorldTel2_C::TalkStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chara_WorldTel2.BP_Chara_WorldTel2_C.TalkStart");

	ABP_Chara_WorldTel2_C_TalkStart_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Chara_WorldTel2.BP_Chara_WorldTel2_C.CallStart
// (Native, Event, NetResponse, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, Const)

void ABP_Chara_WorldTel2_C::CallStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chara_WorldTel2.BP_Chara_WorldTel2_C.CallStart");

	ABP_Chara_WorldTel2_C_CallStart_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Chara_WorldTel2.BP_Chara_WorldTel2_C.CallEnd
// (Net, NetReliable, NetRequest, Exec, Event, NetResponse, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, Const)

void ABP_Chara_WorldTel2_C::CallEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chara_WorldTel2.BP_Chara_WorldTel2_C.CallEnd");

	ABP_Chara_WorldTel2_C_CallEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Chara_WorldTel2.BP_Chara_WorldTel2_C.OnTalkFinished
// (Net, NetReliable, Event, MulticastDelegate, Public, Private, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
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
// (Net, NetResponse, Static, MulticastDelegate, Private, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Chara_WorldTel2_C::STATIC_ExecuteUbergraph_BP_Chara_WorldTel2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chara_WorldTel2.BP_Chara_WorldTel2_C.ExecuteUbergraph_BP_Chara_WorldTel2");

	ABP_Chara_WorldTel2_C_ExecuteUbergraph_BP_Chara_WorldTel2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Chara_WorldTel2.BP_Chara_WorldTel2_C.ED_ButtonPush__DelegateSignature
// (Net, Exec, Event, NetResponse, Static, MulticastDelegate, Public, Protected, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_Chara_WorldTel2_C::STATIC_ED_ButtonPush__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chara_WorldTel2.BP_Chara_WorldTel2_C.ED_ButtonPush__DelegateSignature");

	ABP_Chara_WorldTel2_C_ED_ButtonPush__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Chara_WorldTel2.BP_Chara_WorldTel2_C.ED_CallEnd__DelegateSignature
// (Net, NetReliable, Exec, Event, NetResponse, Static, MulticastDelegate, Public, Protected, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_Chara_WorldTel2_C::STATIC_ED_CallEnd__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chara_WorldTel2.BP_Chara_WorldTel2_C.ED_CallEnd__DelegateSignature");

	ABP_Chara_WorldTel2_C_ED_CallEnd__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Chara_WorldTel2.BP_Chara_WorldTel2_C.ED_CallStart__DelegateSignature
// (NetRequest, Exec, Event, NetResponse, Static, MulticastDelegate, Public, Protected, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_Chara_WorldTel2_C::STATIC_ED_CallStart__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chara_WorldTel2.BP_Chara_WorldTel2_C.ED_CallStart__DelegateSignature");

	ABP_Chara_WorldTel2_C_ED_CallStart__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Chara_WorldTel2.BP_Chara_WorldTel2_C.ED_TalkFinish__DelegateSignature
// (Net, NetReliable, Exec, Event, NetResponse, Static, MulticastDelegate, Public, Protected, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_Chara_WorldTel2_C::STATIC_ED_TalkFinish__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chara_WorldTel2.BP_Chara_WorldTel2_C.ED_TalkFinish__DelegateSignature");

	ABP_Chara_WorldTel2_C_ED_TalkFinish__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Chara_WorldTel2.BP_Chara_WorldTel2_C.ED_TalkStart__DelegateSignature
// (Net, NetRequest, Exec, Event, NetResponse, Static, MulticastDelegate, Public, Protected, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_Chara_WorldTel2_C::STATIC_ED_TalkStart__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chara_WorldTel2.BP_Chara_WorldTel2_C.ED_TalkStart__DelegateSignature");

	ABP_Chara_WorldTel2_C_ED_TalkStart__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Chara_WorldTel2.BP_Chara_WorldTel2_C.ED_TelEnd__DelegateSignature
// (NetRequest, Exec, Event, NetResponse, Static, MulticastDelegate, Public, Protected, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_Chara_WorldTel2_C::STATIC_ED_TelEnd__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chara_WorldTel2.BP_Chara_WorldTel2_C.ED_TelEnd__DelegateSignature");

	ABP_Chara_WorldTel2_C_ED_TelEnd__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Chara_WorldTel2.BP_Chara_WorldTel2_C.ED_TelStart__DelegateSignature
// (Net, NetRequest, Exec, Event, NetResponse, Static, MulticastDelegate, Public, Protected, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_Chara_WorldTel2_C::STATIC_ED_TelStart__DelegateSignature()
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
