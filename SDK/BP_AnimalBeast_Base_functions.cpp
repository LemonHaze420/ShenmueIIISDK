
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

// Function BP_AnimalBeast_Base.BP_AnimalBeast_Base_C.UserConstructionScript
// (NetRequest, NetMulticast, MulticastDelegate, Public, Protected, Delegate, BlueprintEvent, NetValidate)

void ABP_AnimalBeast_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBeast_Base.BP_AnimalBeast_Base_C.UserConstructionScript");

	ABP_AnimalBeast_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AnimalBeast_Base.BP_AnimalBeast_Base_C.ReceiveBeginPlay
// (NetRequest, NetResponse, Static, Private, DLLImport, BlueprintEvent, NetValidate)

void ABP_AnimalBeast_Base_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBeast_Base.BP_AnimalBeast_Base_C.ReceiveBeginPlay");

	ABP_AnimalBeast_Base_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AnimalBeast_Base.BP_AnimalBeast_Base_C.ExecuteUbergraph_BP_AnimalBeast_Base
// (Net, Exec, Native, Public, Protected, NetServer, HasDefaults, NetClient, DLLImport, BlueprintCallable, NetValidate)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AnimalBeast_Base_C::ExecuteUbergraph_BP_AnimalBeast_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBeast_Base.BP_AnimalBeast_Base_C.ExecuteUbergraph_BP_AnimalBeast_Base");

	ABP_AnimalBeast_Base_C_ExecuteUbergraph_BP_AnimalBeast_Base_Params params;
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
