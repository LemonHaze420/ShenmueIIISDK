
#include "../SDK.h"

// Name: Shenmue3SDK, Version: 1.4.1

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BP_SubtitlePlayer_DebugTextData.BP_SubtitlePlayer_DebugTextData_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_SubtitlePlayer_DebugTextData_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubtitlePlayer_DebugTextData.BP_SubtitlePlayer_DebugTextData_C.UserConstructionScript");

	ABP_SubtitlePlayer_DebugTextData_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SubtitlePlayer_DebugTextData.BP_SubtitlePlayer_DebugTextData_C.Play
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Label                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ES3TextPathType                Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   CharaName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsAutoStop                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SubtitlePlayer_DebugTextData_C::Play(const struct FName& Label, ES3TextPathType Type, const struct FName& CharaName, bool IsAutoStop)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubtitlePlayer_DebugTextData.BP_SubtitlePlayer_DebugTextData_C.Play");

	ABP_SubtitlePlayer_DebugTextData_C_Play_Params params;
	params.Label = Label;
	params.Type = Type;
	params.CharaName = CharaName;
	params.IsAutoStop = IsAutoStop;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SubtitlePlayer_DebugTextData.BP_SubtitlePlayer_DebugTextData_C.ExecuteUbergraph_BP_SubtitlePlayer_DebugTextData
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SubtitlePlayer_DebugTextData_C::ExecuteUbergraph_BP_SubtitlePlayer_DebugTextData(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubtitlePlayer_DebugTextData.BP_SubtitlePlayer_DebugTextData_C.ExecuteUbergraph_BP_SubtitlePlayer_DebugTextData");

	ABP_SubtitlePlayer_DebugTextData_C_ExecuteUbergraph_BP_SubtitlePlayer_DebugTextData_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
