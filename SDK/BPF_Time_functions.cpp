
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

// Function BPF_Time.BPF_Time_C.toHMS(int)
// (Exec, Native, Event, NetResponse, Static, Private, Protected, HasOutParms, HasDefaults, NetClient, BlueprintPure)
// Parameters:
// float                          GameTime                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Hour                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Minute                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Second                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_Time_C::STATIC_toHMS_int_(float GameTime, class UObject* __WorldContext, int* Hour, int* Minute, int* Second)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Time.BPF_Time_C.toHMS(int)");

	UBPF_Time_C_toHMS_int__Params params;
	params.GameTime = GameTime;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Hour != nullptr)
		*Hour = params.Hour;
	if (Minute != nullptr)
		*Minute = params.Minute;
	if (Second != nullptr)
		*Second = params.Second;
}


// Function BPF_Time.BPF_Time_C.IsNight
// (Native, Event, Static, MulticastDelegate, Public, Protected, NetServer, NetClient, BlueprintPure)
// Parameters:
// ES3DayTimeEvent                DayTime                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Night                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_Time_C::STATIC_IsNight(ES3DayTimeEvent DayTime, class UObject* __WorldContext, bool* Night)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Time.BPF_Time_C.IsNight");

	UBPF_Time_C_IsNight_Params params;
	params.DayTime = DayTime;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Night != nullptr)
		*Night = params.Night;
}


// Function BPF_Time.BPF_Time_C.timeToGametime
// (NetReliable, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Private, Protected, HasOutParms, NetClient, BlueprintPure)
// Parameters:
// float                          time_s_                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          gameTime_h_                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_Time_C::STATIC_timeToGametime(float time_s_, class UObject* __WorldContext, float* gameTime_h_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Time.BPF_Time_C.timeToGametime");

	UBPF_Time_C_timeToGametime_Params params;
	params.time_s_ = time_s_;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (gameTime_h_ != nullptr)
		*gameTime_h_ = params.gameTime_h_;
}


// Function BPF_Time.BPF_Time_C.gametimeToTime
// (NetRequest, NetMulticast, Private, Protected, HasOutParms, HasDefaults, NetClient, BlueprintPure)
// Parameters:
// float                          gameTime_h_                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          time_s_                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_Time_C::gametimeToTime(float gameTime_h_, class UObject* __WorldContext, float* time_s_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Time.BPF_Time_C.gametimeToTime");

	UBPF_Time_C_gametimeToTime_Params params;
	params.gameTime_h_ = gameTime_h_;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (time_s_ != nullptr)
		*time_s_ = params.time_s_;
}


// Function BPF_Time.BPF_Time_C.isLightOnTimezone(glowMatID)(custom)
// (NetRequest, Exec, Native, NetResponse, Static, MulticastDelegate, Private, Protected, NetServer, BlueprintCallable)
// Parameters:
// struct FGlowMatID              GlowMatID                      (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           lightOn                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_Time_C::STATIC_isLightOnTimezone_glowMatID__custom_(const struct FGlowMatID& GlowMatID, class UObject* __WorldContext, bool* lightOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Time.BPF_Time_C.isLightOnTimezone(glowMatID)(custom)");

	UBPF_Time_C_isLightOnTimezone_glowMatID__custom__Params params;
	params.GlowMatID = GlowMatID;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (lightOn != nullptr)
		*lightOn = params.lightOn;
}


// Function BPF_Time.BPF_Time_C.isLightOnTimezone(glowMatID)(enum)
// (Net, NetReliable, Exec, Native, Event, NetResponse, MulticastDelegate, Private, Protected, NetServer, BlueprintCallable)
// Parameters:
// struct FGlowMatID              GlowMatID                      (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           lightOn                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_Time_C::isLightOnTimezone_glowMatID__enum_(const struct FGlowMatID& GlowMatID, class UObject* __WorldContext, bool* lightOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Time.BPF_Time_C.isLightOnTimezone(glowMatID)(enum)");

	UBPF_Time_C_isLightOnTimezone_glowMatID__enum__Params params;
	params.GlowMatID = GlowMatID;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (lightOn != nullptr)
		*lightOn = params.lightOn;
}


// Function BPF_Time.BPF_Time_C.isLightOnTimezone(glowMatID)
// (Native, NetResponse, Static, NetMulticast, MulticastDelegate, Private, NetServer, HasOutParms, HasDefaults, DLLImport)
// Parameters:
// struct FGlowMatID              GlowMatID                      (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           useCustomTime                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           lightOn                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_Time_C::STATIC_isLightOnTimezone_glowMatID_(const struct FGlowMatID& GlowMatID, bool useCustomTime, class UObject* __WorldContext, bool* lightOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Time.BPF_Time_C.isLightOnTimezone(glowMatID)");

	UBPF_Time_C_isLightOnTimezone_glowMatID__Params params;
	params.GlowMatID = GlowMatID;
	params.useCustomTime = useCustomTime;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (lightOn != nullptr)
		*lightOn = params.lightOn;
}


// Function BPF_Time.BPF_Time_C.isLightOnTimezone
// (Net, Exec, Native, Event, NetMulticast, MulticastDelegate, Private, Delegate, HasOutParms, NetClient, BlueprintPure)
// Parameters:
// ES3GameTimeMode                Mode                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           lightOn                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_Time_C::isLightOnTimezone(ES3GameTimeMode Mode, class UObject* __WorldContext, bool* lightOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Time.BPF_Time_C.isLightOnTimezone");

	UBPF_Time_C_isLightOnTimezone_Params params;
	params.Mode = Mode;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (lightOn != nullptr)
		*lightOn = params.lightOn;
}


// Function BPF_Time.BPF_Time_C.getDateNameString(meridian)
// (Native, Event, NetMulticast, MulticastDelegate, Private, Delegate, HasOutParms, NetClient, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FText>           Result                         (Parm, OutParm, ZeroConstructor)

void UBPF_Time_C::getDateNameString_meridian_(class UObject* __WorldContext, TArray<struct FText>* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Time.BPF_Time_C.getDateNameString(meridian)");

	UBPF_Time_C_getDateNameString_meridian__Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BPF_Time.BPF_Time_C.getDateNameString(weekday)
// (NetRequest, Public, Private, Protected, Delegate, NetServer, HasOutParms, NetClient, DLLImport)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FText>           Result                         (Parm, OutParm, ZeroConstructor)

void UBPF_Time_C::getDateNameString_weekday_(class UObject* __WorldContext, TArray<struct FText>* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Time.BPF_Time_C.getDateNameString(weekday)");

	UBPF_Time_C_getDateNameString_weekday__Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BPF_Time.BPF_Time_C.calcWeekday
// (NetRequest, Protected, Delegate, NetServer, HasOutParms, NetClient, BlueprintPure)
// Parameters:
// struct FDateTime               Date                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            weekday                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_Time_C::calcWeekday(const struct FDateTime& Date, class UObject* __WorldContext, int* weekday)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Time.BPF_Time_C.calcWeekday");

	UBPF_Time_C_calcWeekday_Params params;
	params.Date = Date;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (weekday != nullptr)
		*weekday = params.weekday;
}


// Function BPF_Time.BPF_Time_C.length(UE)toMinute
// (Exec, Native, NetMulticast, MulticastDelegate, Public, Protected, NetServer, NetClient, BlueprintPure)
// Parameters:
// float                          Length                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          moveSpeed                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          S3_minute                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_Time_C::length_UE_toMinute(float Length, float moveSpeed, class UObject* __WorldContext, float* S3_minute)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Time.BPF_Time_C.length(UE)toMinute");

	UBPF_Time_C_length_UE_toMinute_Params params;
	params.Length = Length;
	params.moveSpeed = moveSpeed;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (S3_minute != nullptr)
		*S3_minute = params.S3_minute;
}


// Function BPF_Time.BPF_Time_C.length(UE)toMinute(S3Minute)
// (NetRequest, Native, NetMulticast, MulticastDelegate, Public, Protected, NetServer, NetClient, BlueprintPure)
// Parameters:
// float                          Length                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          moveSpeed                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          S3_minute                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_Time_C::length_UE_toMinute_S3Minute_(float Length, float moveSpeed, class UObject* __WorldContext, float* S3_minute)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Time.BPF_Time_C.length(UE)toMinute(S3Minute)");

	UBPF_Time_C_length_UE_toMinute_S3Minute__Params params;
	params.Length = Length;
	params.moveSpeed = moveSpeed;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (S3_minute != nullptr)
		*S3_minute = params.S3_minute;
}


// Function BPF_Time.BPF_Time_C.toHMS(float)
// (Net, NetReliable, NetRequest, Event, NetMulticast, MulticastDelegate, Private, Delegate, HasOutParms, NetClient, BlueprintPure)
// Parameters:
// float                          GameTime                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Hour                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Minute                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Second                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          milliSec                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_Time_C::toHMS_float_(float GameTime, class UObject* __WorldContext, float* Hour, float* Minute, float* Second, float* milliSec)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Time.BPF_Time_C.toHMS(float)");

	UBPF_Time_C_toHMS_float__Params params;
	params.GameTime = GameTime;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Hour != nullptr)
		*Hour = params.Hour;
	if (Minute != nullptr)
		*Minute = params.Minute;
	if (Second != nullptr)
		*Second = params.Second;
	if (milliSec != nullptr)
		*milliSec = params.milliSec;
}


// Function BPF_Time.BPF_Time_C.calcGameTimeHMS
// (Event, NetMulticast, MulticastDelegate, Public, Protected, NetServer, NetClient, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Hour                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Minute                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Second                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          milliSec                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_Time_C::calcGameTimeHMS(class UObject* __WorldContext, float* Hour, float* Minute, float* Second, float* milliSec)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Time.BPF_Time_C.calcGameTimeHMS");

	UBPF_Time_C_calcGameTimeHMS_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Hour != nullptr)
		*Hour = params.Hour;
	if (Minute != nullptr)
		*Minute = params.Minute;
	if (Second != nullptr)
		*Second = params.Second;
	if (milliSec != nullptr)
		*milliSec = params.milliSec;
}


// Function BPF_Time.BPF_Time_C.CalcGameTime
// (NetReliable, Exec, NetMulticast, Private, Protected, HasOutParms, HasDefaults, NetClient, BlueprintPure)
// Parameters:
// float                          NowTime                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          DeltaTimeBias                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Time                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_Time_C::CalcGameTime(float NowTime, float DeltaTime, float DeltaTimeBias, class UObject* __WorldContext, float* Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Time.BPF_Time_C.CalcGameTime");

	UBPF_Time_C_CalcGameTime_Params params;
	params.NowTime = NowTime;
	params.DeltaTime = DeltaTime;
	params.DeltaTimeBias = DeltaTimeBias;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Time != nullptr)
		*Time = params.Time;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
