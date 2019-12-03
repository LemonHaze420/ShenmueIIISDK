
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

// Function BP_S3GameInstance.BP_S3GameInstance_C.InitMemoFlag
// (NetReliable, NetRequest, Exec, Event, NetResponse, NetMulticast, MulticastDelegate, Delegate, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Length                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_S3GameInstance_C::InitMemoFlag(int Length)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3GameInstance.BP_S3GameInstance_C.InitMemoFlag");

	UBP_S3GameInstance_C_InitMemoFlag_Params params;
	params.Length = Length;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3GameInstance.BP_S3GameInstance_C.ResetTitle
// (NetRequest, Exec, Event, NetResponse, Static, MulticastDelegate, Private, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable)

void UBP_S3GameInstance_C::STATIC_ResetTitle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3GameInstance.BP_S3GameInstance_C.ResetTitle");

	UBP_S3GameInstance_C_ResetTitle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3GameInstance.BP_S3GameInstance_C.DbgVerifyPlayerBehavior
// (Net, NetRequest, NetResponse, NetMulticast, MulticastDelegate, Private, Delegate, NetServer, NetClient)
// Parameters:
// ES3PlayerBehavior              Expected                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_S3GameInstance_C::DbgVerifyPlayerBehavior(ES3PlayerBehavior Expected)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3GameInstance.BP_S3GameInstance_C.DbgVerifyPlayerBehavior");

	UBP_S3GameInstance_C_DbgVerifyPlayerBehavior_Params params;
	params.Expected = Expected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3GameInstance.BP_S3GameInstance_C.GetPlayerBehaviorAllowsControl
// (NetReliable, Static, NetMulticast, MulticastDelegate, Protected, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable)
// Parameters:
// bool                           Allow                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_S3GameInstance_C::STATIC_GetPlayerBehaviorAllowsControl(bool* Allow)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3GameInstance.BP_S3GameInstance_C.GetPlayerBehaviorAllowsControl");

	UBP_S3GameInstance_C_GetPlayerBehaviorAllowsControl_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Allow != nullptr)
		*Allow = params.Allow;
}


// Function BP_S3GameInstance.BP_S3GameInstance_C.SetGameWeather
// (Net, NetRequest, Static, NetMulticast, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// EWeatherType                   NewWeather                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Force                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_S3GameInstance_C::STATIC_SetGameWeather(EWeatherType NewWeather, bool Force)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3GameInstance.BP_S3GameInstance_C.SetGameWeather");

	UBP_S3GameInstance_C_SetGameWeather_Params params;
	params.NewWeather = NewWeather;
	params.Force = Force;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3GameInstance.BP_S3GameInstance_C.SetVisibleMinimap
// (NetResponse, MulticastDelegate, Public, Protected, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable)
// Parameters:
// bool                           IsVisible                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_S3GameInstance_C::SetVisibleMinimap(bool IsVisible, class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3GameInstance.BP_S3GameInstance_C.SetVisibleMinimap");

	UBP_S3GameInstance_C_SetVisibleMinimap_Params params;
	params.IsVisible = IsVisible;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3GameInstance.BP_S3GameInstance_C.SetIsDetectIconAnimShort
// (Net, NetRequest, Native, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, NetClient, DLLImport)
// Parameters:
// bool                           IsUse                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_S3GameInstance_C::STATIC_SetIsDetectIconAnimShort(bool IsUse)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3GameInstance.BP_S3GameInstance_C.SetIsDetectIconAnimShort");

	UBP_S3GameInstance_C_SetIsDetectIconAnimShort_Params params;
	params.IsUse = IsUse;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3GameInstance.BP_S3GameInstance_C.GetIsDetectIconAnimShort
// (Event, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, NetClient, DLLImport)
// Parameters:
// bool                           newParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_S3GameInstance_C::STATIC_GetIsDetectIconAnimShort(bool* newParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3GameInstance.BP_S3GameInstance_C.GetIsDetectIconAnimShort");

	UBP_S3GameInstance_C_GetIsDetectIconAnimShort_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (newParam != nullptr)
		*newParam = params.newParam;
}


// Function BP_S3GameInstance.BP_S3GameInstance_C.IsRecollectMoviePlaying
// (Net, NetReliable, NetRequest, Exec, Native, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, NetClient, DLLImport)
// Parameters:
// bool                           IsPlaying                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_S3GameInstance_C::STATIC_IsRecollectMoviePlaying(bool* IsPlaying)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3GameInstance.BP_S3GameInstance_C.IsRecollectMoviePlaying");

	UBP_S3GameInstance_C_IsRecollectMoviePlaying_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsPlaying != nullptr)
		*IsPlaying = params.IsPlaying;
}


// Function BP_S3GameInstance.BP_S3GameInstance_C.GetDevelopText
// (NetReliable, NetRequest, Exec, Native, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, NetClient, DLLImport)
// Parameters:
// struct FString                 Text                           (Parm, OutParm, ZeroConstructor)

void UBP_S3GameInstance_C::STATIC_GetDevelopText(struct FString* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3GameInstance.BP_S3GameInstance_C.GetDevelopText");

	UBP_S3GameInstance_C_GetDevelopText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;
}


// Function BP_S3GameInstance.BP_S3GameInstance_C.SetDevelopText
// (Net, NetRequest, Exec, Native, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, NetClient, DLLImport)
// Parameters:
// struct FString                 Text                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBP_S3GameInstance_C::STATIC_SetDevelopText(const struct FString& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3GameInstance.BP_S3GameInstance_C.SetDevelopText");

	UBP_S3GameInstance_C_SetDevelopText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3GameInstance.BP_S3GameInstance_C.toggleDbgHideCutsceneSubtitle
// (Net, NetRequest, Exec, Native, Static, NetMulticast, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)

void UBP_S3GameInstance_C::STATIC_toggleDbgHideCutsceneSubtitle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3GameInstance.BP_S3GameInstance_C.toggleDbgHideCutsceneSubtitle");

	UBP_S3GameInstance_C_toggleDbgHideCutsceneSubtitle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3GameInstance.BP_S3GameInstance_C.IsDbgHideCutsceneSubtitle
// (Net, NetReliable, Exec, Native, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, NetClient, DLLImport)
// Parameters:
// bool                           flag                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_S3GameInstance_C::STATIC_IsDbgHideCutsceneSubtitle(bool* flag)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3GameInstance.BP_S3GameInstance_C.IsDbgHideCutsceneSubtitle");

	UBP_S3GameInstance_C_IsDbgHideCutsceneSubtitle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (flag != nullptr)
		*flag = params.flag;
}


// Function BP_S3GameInstance.BP_S3GameInstance_C.IsSheFollow
// (NetReliable, Exec, Native, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, NetClient, DLLImport)
// Parameters:
// bool                           flag                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_S3GameInstance_C::STATIC_IsSheFollow(bool* flag)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3GameInstance.BP_S3GameInstance_C.IsSheFollow");

	UBP_S3GameInstance_C_IsSheFollow_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (flag != nullptr)
		*flag = params.flag;
}


// Function BP_S3GameInstance.BP_S3GameInstance_C.IsSheLead
// (Net, Exec, Native, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, NetClient, DLLImport)
// Parameters:
// bool                           flag                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_S3GameInstance_C::STATIC_IsSheLead(bool* flag)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3GameInstance.BP_S3GameInstance_C.IsSheLead");

	UBP_S3GameInstance_C_IsSheLead_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (flag != nullptr)
		*flag = params.flag;
}


// Function BP_S3GameInstance.BP_S3GameInstance_C.setSheFollowFlag
// (Exec, Native, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, NetClient, DLLImport)
// Parameters:
// bool                           flag                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_S3GameInstance_C::STATIC_setSheFollowFlag(bool flag)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3GameInstance.BP_S3GameInstance_C.setSheFollowFlag");

	UBP_S3GameInstance_C_setSheFollowFlag_Params params;
	params.flag = flag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3GameInstance.BP_S3GameInstance_C.setSheLeadFlag
// (Net, NetReliable, NetRequest, Native, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, NetClient, DLLImport)
// Parameters:
// bool                           flag                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_S3GameInstance_C::STATIC_setSheLeadFlag(bool flag)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3GameInstance.BP_S3GameInstance_C.setSheLeadFlag");

	UBP_S3GameInstance_C_setSheLeadFlag_Params params;
	params.flag = flag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3GameInstance.BP_S3GameInstance_C.IsDbgMsgDisp
// (NetReliable, NetRequest, Exec, Native, Static, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           flag                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_S3GameInstance_C::STATIC_IsDbgMsgDisp(bool* flag)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3GameInstance.BP_S3GameInstance_C.IsDbgMsgDisp");

	UBP_S3GameInstance_C_IsDbgMsgDisp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (flag != nullptr)
		*flag = params.flag;
}


// Function BP_S3GameInstance.BP_S3GameInstance_C.IsSearching
// (Net, NetReliable, NetRequest, Exec, Native, Static, NetMulticast, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsSearching                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_S3GameInstance_C::STATIC_IsSearching(bool* IsSearching)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3GameInstance.BP_S3GameInstance_C.IsSearching");

	UBP_S3GameInstance_C_IsSearching_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsSearching != nullptr)
		*IsSearching = params.IsSearching;
}


// Function BP_S3GameInstance.BP_S3GameInstance_C.IsLoadStreaming
// (Net, NetReliable, Native, NetResponse, NetMulticast, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           flag                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_S3GameInstance_C::IsLoadStreaming(bool* flag)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3GameInstance.BP_S3GameInstance_C.IsLoadStreaming");

	UBP_S3GameInstance_C_IsLoadStreaming_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (flag != nullptr)
		*flag = params.flag;
}


// Function BP_S3GameInstance.BP_S3GameInstance_C.endLoadstreamingMacro
// (NetReliable, NetRequest, Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, NetClient)
// Parameters:
// bool                           loadFlag                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_S3GameInstance_C::STATIC_endLoadstreamingMacro(bool loadFlag)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3GameInstance.BP_S3GameInstance_C.endLoadstreamingMacro");

	UBP_S3GameInstance_C_endLoadstreamingMacro_Params params;
	params.loadFlag = loadFlag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3GameInstance.BP_S3GameInstance_C.startLoadstreamingMacro
// (Net, NetRequest, Event, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, NetClient, DLLImport)

void UBP_S3GameInstance_C::STATIC_startLoadstreamingMacro()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3GameInstance.BP_S3GameInstance_C.startLoadstreamingMacro");

	UBP_S3GameInstance_C_startLoadstreamingMacro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3GameInstance.BP_S3GameInstance_C.isFreerun
// (Net, NetReliable, NetRequest, Exec, Native, Static, NetMulticast, Public, Delegate, HasOutParms, NetClient)
// Parameters:
// bool                           isFreerun                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_S3GameInstance_C::STATIC_isFreerun(bool* isFreerun)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3GameInstance.BP_S3GameInstance_C.isFreerun");

	UBP_S3GameInstance_C_isFreerun_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (isFreerun != nullptr)
		*isFreerun = params.isFreerun;
}


// Function BP_S3GameInstance.BP_S3GameInstance_C.isBattle
// (NetRequest, Exec, Native, Static, NetMulticast, Public, Delegate, HasOutParms, NetClient)
// Parameters:
// bool                           isBattle                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_S3GameInstance_C::STATIC_isBattle(bool* isBattle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3GameInstance.BP_S3GameInstance_C.isBattle");

	UBP_S3GameInstance_C_isBattle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (isBattle != nullptr)
		*isBattle = params.isBattle;
}


// Function BP_S3GameInstance.BP_S3GameInstance_C.getPlayerBehaviorId
// (NetRequest, Event, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, NetClient, DLLImport)
// Parameters:
// ES3PlayerBehavior              PlayerBehaviorId               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_S3GameInstance_C::STATIC_getPlayerBehaviorId(ES3PlayerBehavior* PlayerBehaviorId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3GameInstance.BP_S3GameInstance_C.getPlayerBehaviorId");

	UBP_S3GameInstance_C_getPlayerBehaviorId_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerBehaviorId != nullptr)
		*PlayerBehaviorId = params.PlayerBehaviorId;
}


// Function BP_S3GameInstance.BP_S3GameInstance_C.setPlayerBehaviorId
// (Net, NetReliable, Event, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, NetClient, DLLImport)
// Parameters:
// ES3PlayerBehavior              PlayerBehaviorId               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_S3GameInstance_C::STATIC_setPlayerBehaviorId(ES3PlayerBehavior PlayerBehaviorId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3GameInstance.BP_S3GameInstance_C.setPlayerBehaviorId");

	UBP_S3GameInstance_C_setPlayerBehaviorId_Params params;
	params.PlayerBehaviorId = PlayerBehaviorId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3GameInstance.BP_S3GameInstance_C.wrap_gametimeEvent(day)
// (Net, NetRequest, Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, NetClient)
// Parameters:
// ES3DayTimeEvent                EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_S3GameInstance_C::STATIC_wrap_gametimeEvent_day_(ES3DayTimeEvent EventType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3GameInstance.BP_S3GameInstance_C.wrap_gametimeEvent(day)");

	UBP_S3GameInstance_C_wrap_gametimeEvent_day__Params params;
	params.EventType = EventType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3GameInstance.BP_S3GameInstance_C.wrap_gametimeEvent(shop)
// (Net, NetRequest, Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, NetClient)
// Parameters:
// ES3ShopTimeEvent               EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_S3GameInstance_C::STATIC_wrap_gametimeEvent_shop_(ES3ShopTimeEvent EventType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3GameInstance.BP_S3GameInstance_C.wrap_gametimeEvent(shop)");

	UBP_S3GameInstance_C_wrap_gametimeEvent_shop__Params params;
	params.EventType = EventType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3GameInstance.BP_S3GameInstance_C.ReceiveInit
// (Net, Event, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, NetClient, DLLImport)

void UBP_S3GameInstance_C::STATIC_ReceiveInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3GameInstance.BP_S3GameInstance_C.ReceiveInit");

	UBP_S3GameInstance_C_ReceiveInit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3GameInstance.BP_S3GameInstance_C.delayBeginPlay
// (Net, Event, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, NetClient, DLLImport)

void UBP_S3GameInstance_C::STATIC_delayBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3GameInstance.BP_S3GameInstance_C.delayBeginPlay");

	UBP_S3GameInstance_C_delayBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3GameInstance.BP_S3GameInstance_C.ReceiveShutdown
// (Net, NetReliable, NetRequest, Event, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, NetClient, DLLImport)

void UBP_S3GameInstance_C::STATIC_ReceiveShutdown()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3GameInstance.BP_S3GameInstance_C.ReceiveShutdown");

	UBP_S3GameInstance_C_ReceiveShutdown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3GameInstance.BP_S3GameInstance_C.InitReward
// (NetReliable, NetRequest, Event, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, NetClient, DLLImport)

void UBP_S3GameInstance_C::STATIC_InitReward()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3GameInstance.BP_S3GameInstance_C.InitReward");

	UBP_S3GameInstance_C_InitReward_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3GameInstance.BP_S3GameInstance_C.ExecuteUbergraph_BP_S3GameInstance
// (NetReliable, NetRequest, Exec, Event, NetMulticast, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_S3GameInstance_C::ExecuteUbergraph_BP_S3GameInstance(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3GameInstance.BP_S3GameInstance_C.ExecuteUbergraph_BP_S3GameInstance");

	UBP_S3GameInstance_C_ExecuteUbergraph_BP_S3GameInstance_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3GameInstance.BP_S3GameInstance_C.OnGameShutdown__DelegateSignature
// (Net, NetReliable, NetRequest, Event, Static, NetMulticast, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent)

void UBP_S3GameInstance_C::STATIC_OnGameShutdown__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3GameInstance.BP_S3GameInstance_C.OnGameShutdown__DelegateSignature");

	UBP_S3GameInstance_C_OnGameShutdown__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3GameInstance.BP_S3GameInstance_C.OnChangeWetRate__DelegateSignature
// (Net, NetReliable, NetRequest, Event, Static, NetMulticast, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Rate                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_S3GameInstance_C::STATIC_OnChangeWetRate__DelegateSignature(float Rate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3GameInstance.BP_S3GameInstance_C.OnChangeWetRate__DelegateSignature");

	UBP_S3GameInstance_C_OnChangeWetRate__DelegateSignature_Params params;
	params.Rate = Rate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3GameInstance.BP_S3GameInstance_C.NotVisibleMinimap__DelegateSignature
// (Net, NetReliable, NetRequest, Event, Static, NetMulticast, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_S3GameInstance_C::STATIC_NotVisibleMinimap__DelegateSignature(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3GameInstance.BP_S3GameInstance_C.NotVisibleMinimap__DelegateSignature");

	UBP_S3GameInstance_C_NotVisibleMinimap__DelegateSignature_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3GameInstance.BP_S3GameInstance_C.VisibleMinimap__DelegateSignature
// (Net, NetReliable, NetRequest, Event, Static, NetMulticast, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_S3GameInstance_C::STATIC_VisibleMinimap__DelegateSignature(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3GameInstance.BP_S3GameInstance_C.VisibleMinimap__DelegateSignature");

	UBP_S3GameInstance_C_VisibleMinimap__DelegateSignature_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3GameInstance.BP_S3GameInstance_C.onQTEResult__DelegateSignature
// (NetReliable, NetRequest, Event, Static, NetMulticast, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_S3GameInstance_C::STATIC_onQTEResult__DelegateSignature(bool Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3GameInstance.BP_S3GameInstance_C.onQTEResult__DelegateSignature");

	UBP_S3GameInstance_C_onQTEResult__DelegateSignature_Params params;
	params.Success = Success;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3GameInstance.BP_S3GameInstance_C.StartCutsceneFromName__DelegateSignature
// (Exec, Native, Static, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   CutsceneName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_S3GameInstance_C::STATIC_StartCutsceneFromName__DelegateSignature(const struct FName& CutsceneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3GameInstance.BP_S3GameInstance_C.StartCutsceneFromName__DelegateSignature");

	UBP_S3GameInstance_C_StartCutsceneFromName__DelegateSignature_Params params;
	params.CutsceneName = CutsceneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3GameInstance.BP_S3GameInstance_C.onEndLoadstreamingMacro__DelegateSignature
// (NetReliable, NetRequest, Event, Static, NetMulticast, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           loadFlag                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_S3GameInstance_C::STATIC_onEndLoadstreamingMacro__DelegateSignature(bool loadFlag)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3GameInstance.BP_S3GameInstance_C.onEndLoadstreamingMacro__DelegateSignature");

	UBP_S3GameInstance_C_onEndLoadstreamingMacro__DelegateSignature_Params params;
	params.loadFlag = loadFlag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3GameInstance.BP_S3GameInstance_C.DbgSetMoonPhaseDispatcher__DelegateSignature
// (Exec, Native, Static, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent)

void UBP_S3GameInstance_C::STATIC_DbgSetMoonPhaseDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3GameInstance.BP_S3GameInstance_C.DbgSetMoonPhaseDispatcher__DelegateSignature");

	UBP_S3GameInstance_C_DbgSetMoonPhaseDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3GameInstance.BP_S3GameInstance_C.DbgSetCloudDensitytDispatcher__DelegateSignature
// (Net, NetReliable, NetRequest, Exec, Native, Static, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent)

void UBP_S3GameInstance_C::STATIC_DbgSetCloudDensitytDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3GameInstance.BP_S3GameInstance_C.DbgSetCloudDensitytDispatcher__DelegateSignature");

	UBP_S3GameInstance_C_DbgSetCloudDensitytDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3GameInstance.BP_S3GameInstance_C.DbgToggleCloudShadowDispatcher__DelegateSignature
// (Net, NetReliable, NetRequest, Exec, Native, Static, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent)

void UBP_S3GameInstance_C::STATIC_DbgToggleCloudShadowDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3GameInstance.BP_S3GameInstance_C.DbgToggleCloudShadowDispatcher__DelegateSignature");

	UBP_S3GameInstance_C_DbgToggleCloudShadowDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3GameInstance.BP_S3GameInstance_C.ForceWeatherChangeDispatcher__DelegateSignature
// (NetReliable, Exec, Native, Static, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent)

void UBP_S3GameInstance_C::STATIC_ForceWeatherChangeDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3GameInstance.BP_S3GameInstance_C.ForceWeatherChangeDispatcher__DelegateSignature");

	UBP_S3GameInstance_C_ForceWeatherChangeDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
