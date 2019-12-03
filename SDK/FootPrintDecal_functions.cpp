
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

// Function FootPrintDecal.FootPrintDecal_C.UserConstructionScript
// (Net, NetRequest, Exec, Native, NetResponse, NetMulticast, MulticastDelegate, Private, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)

void AFootPrintDecal_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function FootPrintDecal.FootPrintDecal_C.UserConstructionScript");

	AFootPrintDecal_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FootPrintDecal.FootPrintDecal_C.Timeline_0__FinishedFunc
// (NetRequest, Exec, Event, NetResponse, NetMulticast, NetServer, HasDefaults, NetClient, BlueprintPure)

void AFootPrintDecal_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function FootPrintDecal.FootPrintDecal_C.Timeline_0__FinishedFunc");

	AFootPrintDecal_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FootPrintDecal.FootPrintDecal_C.Timeline_0__UpdateFunc
// (Net, NetRequest, Exec, Event, NetResponse, NetMulticast, NetServer, HasDefaults, NetClient, BlueprintPure)

void AFootPrintDecal_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function FootPrintDecal.FootPrintDecal_C.Timeline_0__UpdateFunc");

	AFootPrintDecal_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FootPrintDecal.FootPrintDecal_C.ReceiveBeginPlay
// (NetRequest, Exec, Event, NetResponse, NetMulticast, NetServer, HasDefaults, NetClient, BlueprintPure)

void AFootPrintDecal_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function FootPrintDecal.FootPrintDecal_C.ReceiveBeginPlay");

	AFootPrintDecal_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FootPrintDecal.FootPrintDecal_C.ExecuteUbergraph_FootPrintDecal
// (Exec, Native, Static, MulticastDelegate, Public, Private, NetServer, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFootPrintDecal_C::STATIC_ExecuteUbergraph_FootPrintDecal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FootPrintDecal.FootPrintDecal_C.ExecuteUbergraph_FootPrintDecal");

	AFootPrintDecal_C_ExecuteUbergraph_FootPrintDecal_Params params;
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
