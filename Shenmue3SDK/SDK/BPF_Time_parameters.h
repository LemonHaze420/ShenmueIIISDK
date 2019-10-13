#pragma once

#include "../SDK.h"

// Name: S3Demo, Version: 0.90.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BPF_Time.BPF_Time_C.toHMS(int)
struct UBPF_Time_C_toHMS_int__Params
{
	float                                              GameTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Hour;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Minute;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Second;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_Time.BPF_Time_C.IsNight
struct UBPF_Time_C_IsNight_Params
{
	ES3DayTimeEvent                                    DayTime;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Night;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_Time.BPF_Time_C.timeToGametime
struct UBPF_Time_C_timeToGametime_Params
{
	float                                              time_s_;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              gameTime_h_;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_Time.BPF_Time_C.gametimeToTime
struct UBPF_Time_C_gametimeToTime_Params
{
	float                                              gameTime_h_;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              time_s_;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_Time.BPF_Time_C.isLightOnTimezone(glowMatID)(custom)
struct UBPF_Time_C_isLightOnTimezone_glowMatID__custom__Params
{
	struct FGlowMatID                                  GlowMatID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               lightOn;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_Time.BPF_Time_C.isLightOnTimezone(glowMatID)(enum)
struct UBPF_Time_C_isLightOnTimezone_glowMatID__enum__Params
{
	struct FGlowMatID                                  GlowMatID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               lightOn;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_Time.BPF_Time_C.isLightOnTimezone(glowMatID)
struct UBPF_Time_C_isLightOnTimezone_glowMatID__Params
{
	struct FGlowMatID                                  GlowMatID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               useCustomTime;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               lightOn;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_Time.BPF_Time_C.isLightOnTimezone
struct UBPF_Time_C_isLightOnTimezone_Params
{
	ES3GameTimeMode                                    Mode;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               lightOn;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_Time.BPF_Time_C.getDateNameString(meridian)
struct UBPF_Time_C_getDateNameString_meridian__Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FText>                               Result;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function BPF_Time.BPF_Time_C.getDateNameString(weekday)
struct UBPF_Time_C_getDateNameString_weekday__Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FText>                               Result;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function BPF_Time.BPF_Time_C.calcWeekday
struct UBPF_Time_C_calcWeekday_Params
{
	struct FDateTime                                   Date;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                weekday;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_Time.BPF_Time_C.length(UE)toMinute
struct UBPF_Time_C_length_UE_toMinute_Params
{
	float                                              Length;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              moveSpeed;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              S3_minute;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_Time.BPF_Time_C.length(UE)toMinute(S3Minute)
struct UBPF_Time_C_length_UE_toMinute_S3Minute__Params
{
	float                                              Length;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              moveSpeed;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              S3_minute;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_Time.BPF_Time_C.toHMS(float)
struct UBPF_Time_C_toHMS_float__Params
{
	float                                              GameTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Hour;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Minute;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Second;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              milliSec;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_Time.BPF_Time_C.calcGameTimeHMS
struct UBPF_Time_C_calcGameTimeHMS_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Hour;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Minute;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Second;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              milliSec;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_Time.BPF_Time_C.CalcGameTime
struct UBPF_Time_C_CalcGameTime_Params
{
	float                                              NowTime;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaTimeBias;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
