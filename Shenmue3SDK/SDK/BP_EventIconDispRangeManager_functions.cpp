
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

// Function BP_EventIconDispRangeManager.BP_EventIconDispRangeManager_C.SetEventIconDisp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 EventName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           Invalid                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EventIconDispRangeManager_C::SetEventIconDisp(const struct FString& EventName, bool Invalid)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventIconDispRangeManager.BP_EventIconDispRangeManager_C.SetEventIconDisp");

	ABP_EventIconDispRangeManager_C_SetEventIconDisp_Params params;
	params.EventName = EventName;
	params.Invalid = Invalid;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventIconDispRangeManager.BP_EventIconDispRangeManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_EventIconDispRangeManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventIconDispRangeManager.BP_EventIconDispRangeManager_C.UserConstructionScript");

	ABP_EventIconDispRangeManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventIconDispRangeManager.BP_EventIconDispRangeManager_C.CatchEventSign__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 EventName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_EventIconDispRangeManager_C::CatchEventSign__DelegateSignature(const struct FString& EventName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventIconDispRangeManager.BP_EventIconDispRangeManager_C.CatchEventSign__DelegateSignature");

	ABP_EventIconDispRangeManager_C_CatchEventSign__DelegateSignature_Params params;
	params.EventName = EventName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
