
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

// Function BP_S3GameInstance.BP_S3GameInstance_C.InitMemoFlag
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
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
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_S3GameInstance_C::ResetTitle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3GameInstance.BP_S3GameInstance_C.ResetTitle");

	UBP_S3GameInstance_C_ResetTitle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3GameInstance.BP_S3GameInstance_C.DbgVerifyPlayerBehavior
// (Public, BlueprintCallable, BlueprintEvent)
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
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Allow                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_S3GameInstance_C::GetPlayerBehaviorAllowsControl(bool* Allow)
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
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EWeatherType                   NewWeather                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Force                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_S3GameInstance_C::SetGameWeather(EWeatherType NewWeather, bool Force)
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
// (Public, BlueprintCallable, BlueprintEvent)
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
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsUse                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_S3GameInstance_C::SetIsDetectIconAnimShort(bool IsUse)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3GameInstance.BP_S3GameInstance_C.SetIsDetectIconAnimShort");

	UBP_S3GameInstance_C_SetIsDetectIconAnimShort_Params params;
	params.IsUse = IsUse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3GameInstance.BP_S3GameInstance_C.GetIsDetectIconAnimShort
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           newParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_S3GameInstance_C::GetIsDetectIconAnimShort(bool* newParam)
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
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsPlaying                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_S3GameInstance_C::IsRecollectMoviePlaying(bool* IsPlaying)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3GameInstance.BP_S3GameInstance_C.IsRecollectMoviePlaying");

	UBP_S3GameInstance_C_IsRecollectMoviePlaying_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsPlaying != nullptr)
		*IsPlaying = params.IsPlaying;
}


// Function BP_S3GameInstance.BP_S3GameInstance_C.GetDevelopText
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FString                 Text                           (Parm, OutParm, ZeroConstructor)

void UBP_S3GameInstance_C::GetDevelopText(struct FString* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3GameInstance.BP_S3GameInstance_C.GetDevelopText");

	UBP_S3GameInstance_C_GetDevelopText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;
}


// Function BP_S3GameInstance.BP_S3GameInstance_C.SetDevelopText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Text                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBP_S3GameInstance_C::SetDevelopText(const struct FString& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3GameInstance.BP_S3GameInstance_C.SetDevelopText");

	UBP_S3GameInstance_C_SetDevelopText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3GameInstance.BP_S3GameInstance_C.toggleDbgHideCutsceneSubtitle
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_S3GameInstance_C::toggleDbgHideCutsceneSubtitle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3GameInstance.BP_S3GameInstance_C.toggleDbgHideCutsceneSubtitle");

	UBP_S3GameInstance_C_toggleDbgHideCutsceneSubtitle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3GameInstance.BP_S3GameInstance_C.IsDbgHideCutsceneSubtitle
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           flag                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_S3GameInstance_C::IsDbgHideCutsceneSubtitle(bool* flag)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3GameInstance.BP_S3GameInstance_C.IsDbgHideCutsceneSubtitle");

	UBP_S3GameInstance_C_IsDbgHideCutsceneSubtitle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (flag != nullptr)
		*flag = params.flag;
}


// Function BP_S3GameInstance.BP_S3GameInstance_C.IsSheFollow
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           flag                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_S3GameInstance_C::IsSheFollow(bool* flag)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3GameInstance.BP_S3GameInstance_C.IsSheFollow");

	UBP_S3GameInstance_C_IsSheFollow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (flag != nullptr)
		*flag = params.flag;
}


// Function BP_S3GameInstance.BP_S3GameInstance_C.IsSheLead
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           flag                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_S3GameInstance_C::IsSheLead(bool* flag)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3GameInstance.BP_S3GameInstance_C.IsSheLead");

	UBP_S3GameInstance_C_IsSheLead_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (flag != nullptr)
		*flag = params.flag;
}


// Function BP_S3GameInstance.BP_S3GameInstance_C.setSheFollowFlag
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           flag                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_S3GameInstance_C::setSheFollowFlag(bool flag)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3GameInstance.BP_S3GameInstance_C.setSheFollowFlag");

	UBP_S3GameInstance_C_setSheFollowFlag_Params params;
	params.flag = flag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3GameInstance.BP_S3GameInstance_C.setSheLeadFlag
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           flag                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_S3GameInstance_C::setSheLeadFlag(bool flag)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3GameInstance.BP_S3GameInstance_C.setSheLeadFlag");

	UBP_S3GameInstance_C_setSheLeadFlag_Params params;
	params.flag = flag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3GameInstance.BP_S3GameInstance_C.IsDbgMsgDisp
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           flag                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_S3GameInstance_C::IsDbgMsgDisp(bool* flag)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3GameInstance.BP_S3GameInstance_C.IsDbgMsgDisp");

	UBP_S3GameInstance_C_IsDbgMsgDisp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (flag != nullptr)
		*flag = params.flag;
}


// Function BP_S3GameInstance.BP_S3GameInstance_C.IsSearching
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsSearching                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_S3GameInstance_C::IsSearching(bool* IsSearching)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3GameInstance.BP_S3GameInstance_C.IsSearching");

	UBP_S3GameInstance_C_IsSearching_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsSearching != nullptr)
		*IsSearching = params.IsSearching;
}


// Function BP_S3GameInstance.BP_S3GameInstance_C.IsLoadStreaming
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           flag                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_S3GameInstance_C::IsLoadStreaming(bool* flag)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3GameInstance.BP_S3GameInstance_C.IsLoadStreaming");

	UBP_S3GameInstance_C_IsLoadStreaming_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (flag != nullptr)
		*flag = params.flag;
}


// Function BP_S3GameInstance.BP_S3GameInstance_C.endLoadstreamingMacro
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           loadFlag                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_S3GameInstance_C::endLoadstreamingMacro(bool loadFlag)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3GameInstance.BP_S3GameInstance_C.endLoadstreamingMacro");

	UBP_S3GameInstance_C_endLoadstreamingMacro_Params params;
	params.loadFlag = loadFlag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3GameInstance.BP_S3GameInstance_C.startLoadstreamingMacro
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_S3GameInstance_C::startLoadstreamingMacro()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3GameInstance.BP_S3GameInstance_C.startLoadstreamingMacro");

	UBP_S3GameInstance_C_startLoadstreamingMacro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3GameInstance.BP_S3GameInstance_C.isFreerun
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           isFreerun                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_S3GameInstance_C::isFreerun(bool* isFreerun)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3GameInstance.BP_S3GameInstance_C.isFreerun");

	UBP_S3GameInstance_C_isFreerun_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (isFreerun != nullptr)
		*isFreerun = params.isFreerun;
}


// Function BP_S3GameInstance.BP_S3GameInstance_C.isBattle
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           isBattle                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_S3GameInstance_C::isBattle(bool* isBattle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3GameInstance.BP_S3GameInstance_C.isBattle");

	UBP_S3GameInstance_C_isBattle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (isBattle != nullptr)
		*isBattle = params.isBattle;
}


// Function BP_S3GameInstance.BP_S3GameInstance_C.getPlayerBehaviorId
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ES3PlayerBehavior              PlayerBehaviorId               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_S3GameInstance_C::getPlayerBehaviorId(ES3PlayerBehavior* PlayerBehaviorId)
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
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ES3PlayerBehavior              PlayerBehaviorId               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_S3GameInstance_C::setPlayerBehaviorId(ES3PlayerBehavior PlayerBehaviorId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3GameInstance.BP_S3GameInstance_C.setPlayerBehaviorId");

	UBP_S3GameInstance_C_setPlayerBehaviorId_Params params;
	params.PlayerBehaviorId = PlayerBehaviorId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3GameInstance.BP_S3GameInstance_C.wrap_gametimeEvent(day)
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ES3DayTimeEvent                EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_S3GameInstance_C::wrap_gametimeEvent_day_(ES3DayTimeEvent EventType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3GameInstance.BP_S3GameInstance_C.wrap_gametimeEvent(day)");

	UBP_S3GameInstance_C_wrap_gametimeEvent_day__Params params;
	params.EventType = EventType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3GameInstance.BP_S3GameInstance_C.wrap_gametimeEvent(shop)
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ES3ShopTimeEvent               EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_S3GameInstance_C::wrap_gametimeEvent_shop_(ES3ShopTimeEvent EventType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3GameInstance.BP_S3GameInstance_C.wrap_gametimeEvent(shop)");

	UBP_S3GameInstance_C_wrap_gametimeEvent_shop__Params params;
	params.EventType = EventType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3GameInstance.BP_S3GameInstance_C.ReceiveInit
// (Event, Public, BlueprintEvent)

void UBP_S3GameInstance_C::ReceiveInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3GameInstance.BP_S3GameInstance_C.ReceiveInit");

	UBP_S3GameInstance_C_ReceiveInit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3GameInstance.BP_S3GameInstance_C.delayBeginPlay
// (BlueprintCallable, BlueprintEvent)

void UBP_S3GameInstance_C::delayBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3GameInstance.BP_S3GameInstance_C.delayBeginPlay");

	UBP_S3GameInstance_C_delayBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3GameInstance.BP_S3GameInstance_C.ReceiveShutdown
// (Event, Public, BlueprintEvent)

void UBP_S3GameInstance_C::ReceiveShutdown()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3GameInstance.BP_S3GameInstance_C.ReceiveShutdown");

	UBP_S3GameInstance_C_ReceiveShutdown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3GameInstance.BP_S3GameInstance_C.InitReward
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UBP_S3GameInstance_C::InitReward()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3GameInstance.BP_S3GameInstance_C.InitReward");

	UBP_S3GameInstance_C_InitReward_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3GameInstance.BP_S3GameInstance_C.ExecuteUbergraph_BP_S3GameInstance
// ()
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
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_S3GameInstance_C::OnGameShutdown__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3GameInstance.BP_S3GameInstance_C.OnGameShutdown__DelegateSignature");

	UBP_S3GameInstance_C_OnGameShutdown__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3GameInstance.BP_S3GameInstance_C.OnChangeWetRate__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Rate                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_S3GameInstance_C::OnChangeWetRate__DelegateSignature(float Rate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3GameInstance.BP_S3GameInstance_C.OnChangeWetRate__DelegateSignature");

	UBP_S3GameInstance_C_OnChangeWetRate__DelegateSignature_Params params;
	params.Rate = Rate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3GameInstance.BP_S3GameInstance_C.NotVisibleMinimap__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_S3GameInstance_C::NotVisibleMinimap__DelegateSignature(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3GameInstance.BP_S3GameInstance_C.NotVisibleMinimap__DelegateSignature");

	UBP_S3GameInstance_C_NotVisibleMinimap__DelegateSignature_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3GameInstance.BP_S3GameInstance_C.VisibleMinimap__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_S3GameInstance_C::VisibleMinimap__DelegateSignature(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3GameInstance.BP_S3GameInstance_C.VisibleMinimap__DelegateSignature");

	UBP_S3GameInstance_C_VisibleMinimap__DelegateSignature_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3GameInstance.BP_S3GameInstance_C.onQTEResult__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_S3GameInstance_C::onQTEResult__DelegateSignature(bool Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3GameInstance.BP_S3GameInstance_C.onQTEResult__DelegateSignature");

	UBP_S3GameInstance_C_onQTEResult__DelegateSignature_Params params;
	params.Success = Success;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3GameInstance.BP_S3GameInstance_C.StartCutsceneFromName__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   CutsceneName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_S3GameInstance_C::StartCutsceneFromName__DelegateSignature(const struct FName& CutsceneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3GameInstance.BP_S3GameInstance_C.StartCutsceneFromName__DelegateSignature");

	UBP_S3GameInstance_C_StartCutsceneFromName__DelegateSignature_Params params;
	params.CutsceneName = CutsceneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3GameInstance.BP_S3GameInstance_C.onEndLoadstreamingMacro__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           loadFlag                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_S3GameInstance_C::onEndLoadstreamingMacro__DelegateSignature(bool loadFlag)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3GameInstance.BP_S3GameInstance_C.onEndLoadstreamingMacro__DelegateSignature");

	UBP_S3GameInstance_C_onEndLoadstreamingMacro__DelegateSignature_Params params;
	params.loadFlag = loadFlag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3GameInstance.BP_S3GameInstance_C.DbgSetMoonPhaseDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_S3GameInstance_C::DbgSetMoonPhaseDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3GameInstance.BP_S3GameInstance_C.DbgSetMoonPhaseDispatcher__DelegateSignature");

	UBP_S3GameInstance_C_DbgSetMoonPhaseDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3GameInstance.BP_S3GameInstance_C.DbgSetCloudDensitytDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_S3GameInstance_C::DbgSetCloudDensitytDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3GameInstance.BP_S3GameInstance_C.DbgSetCloudDensitytDispatcher__DelegateSignature");

	UBP_S3GameInstance_C_DbgSetCloudDensitytDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3GameInstance.BP_S3GameInstance_C.DbgToggleCloudShadowDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_S3GameInstance_C::DbgToggleCloudShadowDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3GameInstance.BP_S3GameInstance_C.DbgToggleCloudShadowDispatcher__DelegateSignature");

	UBP_S3GameInstance_C_DbgToggleCloudShadowDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3GameInstance.BP_S3GameInstance_C.ForceWeatherChangeDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_S3GameInstance_C::ForceWeatherChangeDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3GameInstance.BP_S3GameInstance_C.ForceWeatherChangeDispatcher__DelegateSignature");

	UBP_S3GameInstance_C_ForceWeatherChangeDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
