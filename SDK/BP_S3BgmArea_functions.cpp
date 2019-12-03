
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

// Function BP_S3BgmArea.BP_S3BgmArea_C.GetBGM
// (NetReliable, Exec, Native, Event, Static, MulticastDelegate, Delegate, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// class USoundAtomCue*           BGM                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3BgmArea_C::STATIC_GetBGM(class USoundAtomCue** BGM)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BgmArea.BP_S3BgmArea_C.GetBGM");

	ABP_S3BgmArea_C_GetBGM_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BGM != nullptr)
		*BGM = params.BGM;
}


// Function BP_S3BgmArea.BP_S3BgmArea_C.InitCue
// (NetRequest, Exec, Native, Event, Static, MulticastDelegate, Delegate, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure)

void ABP_S3BgmArea_C::STATIC_InitCue()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BgmArea.BP_S3BgmArea_C.InitCue");

	ABP_S3BgmArea_C_InitCue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BgmArea.BP_S3BgmArea_C.GetSourceInfo
// (NetReliable, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, HasDefaults, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FS3BgmAreaSourceInfo    ReturnValue                    (Parm, OutParm, ReturnParm)

struct FS3BgmAreaSourceInfo ABP_S3BgmArea_C::STATIC_GetSourceInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BgmArea.BP_S3BgmArea_C.GetSourceInfo");

	ABP_S3BgmArea_C_GetSourceInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3BgmArea.BP_S3BgmArea_C.UserConstructionScript
// (NetRequest, Event, NetResponse, NetMulticast, Public, Protected, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)

void ABP_S3BgmArea_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BgmArea.BP_S3BgmArea_C.UserConstructionScript");

	ABP_S3BgmArea_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BgmArea.BP_S3BgmArea_C.ReceiveBeginPlay
// (Net, NetResponse, Static, MulticastDelegate, Delegate, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure)

void ABP_S3BgmArea_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BgmArea.BP_S3BgmArea_C.ReceiveBeginPlay");

	ABP_S3BgmArea_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BgmArea.BP_S3BgmArea_C.ExecuteUbergraph_BP_S3BgmArea
// (Net, NetRequest, Exec, NetResponse, Public, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3BgmArea_C::ExecuteUbergraph_BP_S3BgmArea(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BgmArea.BP_S3BgmArea_C.ExecuteUbergraph_BP_S3BgmArea");

	ABP_S3BgmArea_C_ExecuteUbergraph_BP_S3BgmArea_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
