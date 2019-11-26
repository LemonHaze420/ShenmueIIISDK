#pragma once

// Name: S3Demo, Version: 0.90.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPF_Time.BPF_Time_C
// 0x0000 (0x0028 - 0x0028)
class UBPF_Time_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPF_Time.BPF_Time_C");
		return ptr;
	}


	void STATIC_toHMS_int_(float GameTime, class UObject* __WorldContext, int* Hour, int* Minute, int* Second);
	void STATIC_IsNight(ES3DayTimeEvent DayTime, class UObject* __WorldContext, bool* Night);
	void STATIC_timeToGametime(float time_s_, class UObject* __WorldContext, float* gameTime_h_);
	void STATIC_gametimeToTime(float gameTime_h_, class UObject* __WorldContext, float* time_s_);
	void STATIC_isLightOnTimezone_glowMatID__custom_(const struct FGlowMatID& GlowMatID, class UObject* __WorldContext, bool* lightOn);
	void STATIC_isLightOnTimezone_glowMatID__enum_(const struct FGlowMatID& GlowMatID, class UObject* __WorldContext, bool* lightOn);
	void STATIC_isLightOnTimezone_glowMatID_(const struct FGlowMatID& GlowMatID, bool useCustomTime, class UObject* __WorldContext, bool* lightOn);
	void STATIC_isLightOnTimezone(ES3GameTimeMode Mode, class UObject* __WorldContext, bool* lightOn);
	void STATIC_getDateNameString_meridian_(class UObject* __WorldContext, TArray<struct FText>* Result);
	void STATIC_getDateNameString_weekday_(class UObject* __WorldContext, TArray<struct FText>* Result);
	void STATIC_calcWeekday(const struct FDateTime& Date, class UObject* __WorldContext, int* weekday);
	void STATIC_length_UE_toMinute(float Length, float moveSpeed, class UObject* __WorldContext, float* S3_minute);
	void STATIC_length_UE_toMinute_S3Minute_(float Length, float moveSpeed, class UObject* __WorldContext, float* S3_minute);
	void STATIC_toHMS_float_(float GameTime, class UObject* __WorldContext, float* Hour, float* Minute, float* Second, float* milliSec);
	void STATIC_calcGameTimeHMS(class UObject* __WorldContext, float* Hour, float* Minute, float* Second, float* milliSec);
	void STATIC_CalcGameTime(float NowTime, float DeltaTime, float DeltaTimeBias, class UObject* __WorldContext, float* Time);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
