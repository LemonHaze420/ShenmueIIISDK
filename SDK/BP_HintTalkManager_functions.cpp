
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

// Function BP_HintTalkManager.BP_HintTalkManager_C.LengthToDistanceEnum
// (Net, NetRequest, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, Const)
// Parameters:
// float                          Length                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EN_HintTalkDistance> DistanceEnum                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_HintTalkManager_C::LengthToDistanceEnum(float Length, TEnumAsByte<EN_HintTalkDistance>* DistanceEnum)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HintTalkManager.BP_HintTalkManager_C.LengthToDistanceEnum");

	ABP_HintTalkManager_C_LengthToDistanceEnum_Params params;
	params.Length = Length;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DistanceEnum != nullptr)
		*DistanceEnum = params.DistanceEnum;
}


// Function BP_HintTalkManager.BP_HintTalkManager_C.GetPlaceMessage
// (NetReliable, Exec, NetResponse, Public, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, Const)
// Parameters:
// struct FString                 Message                        (Parm, OutParm, ZeroConstructor)

void ABP_HintTalkManager_C::GetPlaceMessage(struct FString* Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HintTalkManager.BP_HintTalkManager_C.GetPlaceMessage");

	ABP_HintTalkManager_C_GetPlaceMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Message != nullptr)
		*Message = params.Message;
}


// Function BP_HintTalkManager.BP_HintTalkManager_C.IsPlaceMessage
// (NetRequest, Native, Event, NetResponse, Static, Public, Private, Delegate, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FName                   TextID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_HintTalkManager_C::STATIC_IsPlaceMessage(const struct FName& TextID, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HintTalkManager.BP_HintTalkManager_C.IsPlaceMessage");

	ABP_HintTalkManager_C_IsPlaceMessage_Params params;
	params.TextID = TextID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_HintTalkManager.BP_HintTalkManager_C.GetTextDataStrings
// (Net, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, Const)
// Parameters:
// struct FName                   Label                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FString                 OutString                      (Parm, OutParm, ZeroConstructor)
// struct FString                 ClipperString                  (Parm, OutParm, ZeroConstructor)
// TArray<struct FString>         TextArray                      (Parm, OutParm, ZeroConstructor)
// int                            LinefeedCount                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<struct FST_RubyInfo>    RubyInfoArray                  (Parm, OutParm, ZeroConstructor)

void ABP_HintTalkManager_C::GetTextDataStrings(struct FName* Label, struct FString* OutString, struct FString* ClipperString, TArray<struct FString>* TextArray, int* LinefeedCount, TArray<struct FST_RubyInfo>* RubyInfoArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HintTalkManager.BP_HintTalkManager_C.GetTextDataStrings");

	ABP_HintTalkManager_C_GetTextDataStrings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Label != nullptr)
		*Label = params.Label;
	if (OutString != nullptr)
		*OutString = params.OutString;
	if (ClipperString != nullptr)
		*ClipperString = params.ClipperString;
	if (TextArray != nullptr)
		*TextArray = params.TextArray;
	if (LinefeedCount != nullptr)
		*LinefeedCount = params.LinefeedCount;
	if (RubyInfoArray != nullptr)
		*RubyInfoArray = params.RubyInfoArray;
}


// Function BP_HintTalkManager.BP_HintTalkManager_C.UserConstructionScript
// (Net, NetRequest, Native, Event, NetMulticast, Private, Protected, NetServer, HasOutParms, HasDefaults, NetClient, Const)

void ABP_HintTalkManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HintTalkManager.BP_HintTalkManager_C.UserConstructionScript");

	ABP_HintTalkManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HintTalkManager.BP_HintTalkManager_C.InpActEvt_Ctrl+Shift_H_K2Node_InputKeyEvent_2
// (Net, Exec, NetResponse, Static, MulticastDelegate, Public, NetServer, HasOutParms, HasDefaults, NetClient, Const)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_HintTalkManager_C::STATIC_InpActEvt_Ctrl_Shift_H_K2Node_InputKeyEvent_2(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HintTalkManager.BP_HintTalkManager_C.InpActEvt_Ctrl+Shift_H_K2Node_InputKeyEvent_2");

	ABP_HintTalkManager_C_InpActEvt_Ctrl_Shift_H_K2Node_InputKeyEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HintTalkManager.BP_HintTalkManager_C.ReceiveBeginPlay
// (Net, NetRequest, Native, NetMulticast, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, Const)

void ABP_HintTalkManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HintTalkManager.BP_HintTalkManager_C.ReceiveBeginPlay");

	ABP_HintTalkManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HintTalkManager.BP_HintTalkManager_C.ReceiveDestroyed
// (Net, NetRequest, Native, NetMulticast, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, Const)

void ABP_HintTalkManager_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HintTalkManager.BP_HintTalkManager_C.ReceiveDestroyed");

	ABP_HintTalkManager_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HintTalkManager.BP_HintTalkManager_C.ReceiveTick
// (Net, NetReliable, Exec, NetResponse, Static, MulticastDelegate, Public, NetServer, HasOutParms, HasDefaults, NetClient, Const)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HintTalkManager_C::STATIC_ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HintTalkManager.BP_HintTalkManager_C.ReceiveTick");

	ABP_HintTalkManager_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HintTalkManager.BP_HintTalkManager_C.ExecuteUbergraph_BP_HintTalkManager
// (Net, NetRequest, Event, Public, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HintTalkManager_C::ExecuteUbergraph_BP_HintTalkManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HintTalkManager.BP_HintTalkManager_C.ExecuteUbergraph_BP_HintTalkManager");

	ABP_HintTalkManager_C_ExecuteUbergraph_BP_HintTalkManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
