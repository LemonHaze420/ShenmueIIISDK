
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

// Function ABP_WorldTel.ABP_WorldTel_C.BlueprintUpdateAnimation
// (Net, NetRequest, Static, Private, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_WorldTel_C::STATIC_BlueprintUpdateAnimation(float DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_WorldTel.ABP_WorldTel_C.BlueprintUpdateAnimation");

	UABP_WorldTel_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_WorldTel.ABP_WorldTel_C.TelEnd
// (NetReliable, NetRequest, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void UABP_WorldTel_C::TelEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_WorldTel.ABP_WorldTel_C.TelEnd");

	UABP_WorldTel_C_TelEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_WorldTel.ABP_WorldTel_C.TelStart
// (Net, NetRequest, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void UABP_WorldTel_C::TelStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_WorldTel.ABP_WorldTel_C.TelStart");

	UABP_WorldTel_C_TelStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_WorldTel.ABP_WorldTel_C.AnimNotify_Talk_Start
// (Net, NetRequest, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void UABP_WorldTel_C::AnimNotify_Talk_Start()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_WorldTel.ABP_WorldTel_C.AnimNotify_Talk_Start");

	UABP_WorldTel_C_AnimNotify_Talk_Start_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_WorldTel.ABP_WorldTel_C.AnimNotify_CallStart
// (NetRequest, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void UABP_WorldTel_C::AnimNotify_CallStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_WorldTel.ABP_WorldTel_C.AnimNotify_CallStart");

	UABP_WorldTel_C_AnimNotify_CallStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_WorldTel.ABP_WorldTel_C.AnimNotify_CallEnd
// (NetRequest, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void UABP_WorldTel_C::AnimNotify_CallEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_WorldTel.ABP_WorldTel_C.AnimNotify_CallEnd");

	UABP_WorldTel_C_AnimNotify_CallEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_WorldTel.ABP_WorldTel_C.AnimNotify_Sound_Cloth01
// (Net, NetReliable, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void UABP_WorldTel_C::AnimNotify_Sound_Cloth01()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_WorldTel.ABP_WorldTel_C.AnimNotify_Sound_Cloth01");

	UABP_WorldTel_C_AnimNotify_Sound_Cloth01_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_WorldTel.ABP_WorldTel_C.AnimNotify_Sound_Take
// (Net, NetReliable, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void UABP_WorldTel_C::AnimNotify_Sound_Take()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_WorldTel.ABP_WorldTel_C.AnimNotify_Sound_Take");

	UABP_WorldTel_C_AnimNotify_Sound_Take_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_WorldTel.ABP_WorldTel_C.AnimNotify_Sound_ButtonPush
// (NetReliable, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void UABP_WorldTel_C::AnimNotify_Sound_ButtonPush()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_WorldTel.ABP_WorldTel_C.AnimNotify_Sound_ButtonPush");

	UABP_WorldTel_C_AnimNotify_Sound_ButtonPush_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_WorldTel.ABP_WorldTel_C.AnimNotify_Sound_end
// (NetReliable, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void UABP_WorldTel_C::AnimNotify_Sound_end()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_WorldTel.ABP_WorldTel_C.AnimNotify_Sound_end");

	UABP_WorldTel_C_AnimNotify_Sound_end_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_WorldTel.ABP_WorldTel_C.ExecuteUbergraph_ABP_WorldTel
// (NetRequest, Native, Static, MulticastDelegate, Public, Private, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_WorldTel_C::STATIC_ExecuteUbergraph_ABP_WorldTel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_WorldTel.ABP_WorldTel_C.ExecuteUbergraph_ABP_WorldTel");

	UABP_WorldTel_C_ExecuteUbergraph_ABP_WorldTel_Params params;
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
