
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

// Function BP_HakkasonFood.BP_HakkasonFood_C.InitSet
// (Native, Event, NetResponse, Static, Public, NetServer, HasOutParms, NetClient, DLLImport)

void ABP_HakkasonFood_C::STATIC_InitSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HakkasonFood.BP_HakkasonFood_C.InitSet");

	ABP_HakkasonFood_C_InitSet_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HakkasonFood.BP_HakkasonFood_C.UserConstructionScript
// (Exec, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Protected, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_HakkasonFood_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HakkasonFood.BP_HakkasonFood_C.UserConstructionScript");

	ABP_HakkasonFood_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
