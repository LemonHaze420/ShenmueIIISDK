
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

// Function BP_Gimmick_warpPortalComp.BP_Gimmick_warpPortalComp_C.ModPlayerForTeleport
// (Net, NetReliable, NetMulticast, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ToTeleport                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Gimmick_warpPortalComp_C::ModPlayerForTeleport(bool ToTeleport)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Gimmick_warpPortalComp.BP_Gimmick_warpPortalComp_C.ModPlayerForTeleport");

	UBP_Gimmick_warpPortalComp_C_ModPlayerForTeleport_Params params;
	params.ToTeleport = ToTeleport;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Gimmick_warpPortalComp.BP_Gimmick_warpPortalComp_C.FadePlayer
// (NetReliable, Public, Private, Delegate, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           Fade                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Gimmick_warpPortalComp_C::FadePlayer(bool Fade)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Gimmick_warpPortalComp.BP_Gimmick_warpPortalComp_C.FadePlayer");

	UBP_Gimmick_warpPortalComp_C_FadePlayer_Params params;
	params.Fade = Fade;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Gimmick_warpPortalComp.BP_Gimmick_warpPortalComp_C.SetPortalTransform
// (NetReliable, Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTransform              Transform                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UBP_Gimmick_warpPortalComp_C::STATIC_SetPortalTransform(const struct FTransform& Transform)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Gimmick_warpPortalComp.BP_Gimmick_warpPortalComp_C.SetPortalTransform");

	UBP_Gimmick_warpPortalComp_C_SetPortalTransform_Params params;
	params.Transform = Transform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Gimmick_warpPortalComp.BP_Gimmick_warpPortalComp_C.GetPortalTransform
// (Net, Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTransform              Transform                      (Parm, OutParm, IsPlainOldData)

void UBP_Gimmick_warpPortalComp_C::STATIC_GetPortalTransform(struct FTransform* Transform)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Gimmick_warpPortalComp.BP_Gimmick_warpPortalComp_C.GetPortalTransform");

	UBP_Gimmick_warpPortalComp_C_GetPortalTransform_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Transform != nullptr)
		*Transform = params.Transform;
}


// Function BP_Gimmick_warpPortalComp.BP_Gimmick_warpPortalComp_C.isAvailable(player)
// (Net, NetReliable, NetRequest, Native, Static, NetMulticast, MulticastDelegate, Public, Delegate, HasOutParms, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_Gimmick_warpPortalComp_C::STATIC_isAvailable_player_(class AActor* OtherActor, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Gimmick_warpPortalComp.BP_Gimmick_warpPortalComp_C.isAvailable(player)");

	UBP_Gimmick_warpPortalComp_C_isAvailable_player__Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_Gimmick_warpPortalComp.BP_Gimmick_warpPortalComp_C.ReceiveBeginPlay
// (Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void UBP_Gimmick_warpPortalComp_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Gimmick_warpPortalComp.BP_Gimmick_warpPortalComp_C.ReceiveBeginPlay");

	UBP_Gimmick_warpPortalComp_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Gimmick_warpPortalComp.BP_Gimmick_warpPortalComp_C.ReturnPlayerState
// (Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void UBP_Gimmick_warpPortalComp_C::STATIC_ReturnPlayerState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Gimmick_warpPortalComp.BP_Gimmick_warpPortalComp_C.ReturnPlayerState");

	UBP_Gimmick_warpPortalComp_C_ReturnPlayerState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Gimmick_warpPortalComp.BP_Gimmick_warpPortalComp_C.onTeleport
// (NetReliable, NetRequest, Exec, Native, Event, NetResponse, Public, Private, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Gimmick_warpPortalComp_C::onTeleport(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Gimmick_warpPortalComp.BP_Gimmick_warpPortalComp_C.onTeleport");

	UBP_Gimmick_warpPortalComp_C_onTeleport_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Gimmick_warpPortalComp.BP_Gimmick_warpPortalComp_C.ReceiveEndPlay
// (Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Public, Private, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Gimmick_warpPortalComp_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Gimmick_warpPortalComp.BP_Gimmick_warpPortalComp_C.ReceiveEndPlay");

	UBP_Gimmick_warpPortalComp_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Gimmick_warpPortalComp.BP_Gimmick_warpPortalComp_C.ExecuteUbergraph_BP_Gimmick_warpPortalComp
// (Net, NetReliable, Native, Static, NetMulticast, Public, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Gimmick_warpPortalComp_C::STATIC_ExecuteUbergraph_BP_Gimmick_warpPortalComp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Gimmick_warpPortalComp.BP_Gimmick_warpPortalComp_C.ExecuteUbergraph_BP_Gimmick_warpPortalComp");

	UBP_Gimmick_warpPortalComp_C_ExecuteUbergraph_BP_Gimmick_warpPortalComp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Gimmick_warpPortalComp.BP_Gimmick_warpPortalComp_C.teleport__DelegateSignature
// (Net, NetRequest, Exec, NetResponse, Static, NetMulticast, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Gimmick_warpPortalComp_C::STATIC_teleport__DelegateSignature(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Gimmick_warpPortalComp.BP_Gimmick_warpPortalComp_C.teleport__DelegateSignature");

	UBP_Gimmick_warpPortalComp_C_teleport__DelegateSignature_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
