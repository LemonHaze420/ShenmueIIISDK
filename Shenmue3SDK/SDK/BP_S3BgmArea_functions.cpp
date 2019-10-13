
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

// Function BP_S3BgmArea.BP_S3BgmArea_C.GetBGM
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USoundAtomCue*           BGM                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3BgmArea_C::GetBGM(class USoundAtomCue** BGM)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BgmArea.BP_S3BgmArea_C.GetBGM");

	ABP_S3BgmArea_C_GetBGM_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BGM != nullptr)
		*BGM = params.BGM;
}


// Function BP_S3BgmArea.BP_S3BgmArea_C.InitCue
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_S3BgmArea_C::InitCue()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BgmArea.BP_S3BgmArea_C.InitCue");

	ABP_S3BgmArea_C_InitCue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BgmArea.BP_S3BgmArea_C.GetSourceInfo
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FS3BgmAreaSourceInfo    ReturnValue                    (Parm, OutParm, ReturnParm)

struct FS3BgmAreaSourceInfo ABP_S3BgmArea_C::GetSourceInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BgmArea.BP_S3BgmArea_C.GetSourceInfo");

	ABP_S3BgmArea_C_GetSourceInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3BgmArea.BP_S3BgmArea_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_S3BgmArea_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BgmArea.BP_S3BgmArea_C.UserConstructionScript");

	ABP_S3BgmArea_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BgmArea.BP_S3BgmArea_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_S3BgmArea_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BgmArea.BP_S3BgmArea_C.ReceiveBeginPlay");

	ABP_S3BgmArea_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BgmArea.BP_S3BgmArea_C.ExecuteUbergraph_BP_S3BgmArea
// ()
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
