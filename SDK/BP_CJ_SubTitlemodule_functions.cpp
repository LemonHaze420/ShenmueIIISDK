
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

// Function BP_CJ_SubTitlemodule.BP_CJ_SubTitlemodule_C.isSubTitleDonw
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_CJ_SubTitlemodule_C::isSubTitleDonw()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CJ_SubTitlemodule.BP_CJ_SubTitlemodule_C.isSubTitleDonw");

	ABP_CJ_SubTitlemodule_C_isSubTitleDonw_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CJ_SubTitlemodule.BP_CJ_SubTitlemodule_C.SelectText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   TextID                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_CJ_SubTitlemodule_C::SelectText(struct FName* TextID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CJ_SubTitlemodule.BP_CJ_SubTitlemodule_C.SelectText");

	ABP_CJ_SubTitlemodule_C_SelectText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TextID != nullptr)
		*TextID = params.TextID;
}


// Function BP_CJ_SubTitlemodule.BP_CJ_SubTitlemodule_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_CJ_SubTitlemodule_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CJ_SubTitlemodule.BP_CJ_SubTitlemodule_C.UserConstructionScript");

	ABP_CJ_SubTitlemodule_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CJ_SubTitlemodule.BP_CJ_SubTitlemodule_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_CJ_SubTitlemodule_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CJ_SubTitlemodule.BP_CJ_SubTitlemodule_C.ReceiveBeginPlay");

	ABP_CJ_SubTitlemodule_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CJ_SubTitlemodule.BP_CJ_SubTitlemodule_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CJ_SubTitlemodule_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CJ_SubTitlemodule.BP_CJ_SubTitlemodule_C.ReceiveTick");

	ABP_CJ_SubTitlemodule_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CJ_SubTitlemodule.BP_CJ_SubTitlemodule_C.ExecuteUbergraph_BP_CJ_SubTitlemodule
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CJ_SubTitlemodule_C::ExecuteUbergraph_BP_CJ_SubTitlemodule(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CJ_SubTitlemodule.BP_CJ_SubTitlemodule_C.ExecuteUbergraph_BP_CJ_SubTitlemodule");

	ABP_CJ_SubTitlemodule_C_ExecuteUbergraph_BP_CJ_SubTitlemodule_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CJ_SubTitlemodule.BP_CJ_SubTitlemodule_C.SelectEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CJ_SubTitlemodule_C::SelectEnd__DelegateSignature(const struct FName& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CJ_SubTitlemodule.BP_CJ_SubTitlemodule_C.SelectEnd__DelegateSignature");

	ABP_CJ_SubTitlemodule_C_SelectEnd__DelegateSignature_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
