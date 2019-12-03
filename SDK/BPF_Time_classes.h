#pragma once

// Name: Shenmue3, Version: 1.0.2

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
	void gametimeToTime(float gameTime_h_, class UObject* __WorldContext, float* time_s_);
	void STATIC_isLightOnTimezone_glowMatID__custom_(const struct FGlowMatID& GlowMatID, class UObject* __WorldContext, bool* lightOn);
	void isLightOnTimezone_glowMatID__enum_(const struct FGlowMatID& GlowMatID, class UObject* __WorldContext, bool* lightOn);
	void STATIC_isLightOnTimezone_glowMatID_(const struct FGlowMatID& GlowMatID, bool useCustomTime, class UObject* __WorldContext, bool* lightOn);
	void isLightOnTimezone(ES3GameTimeMode Mode, class UObject* __WorldContext, bool* lightOn);
	void getDateNameString_meridian_(class UObject* __WorldContext, TArray<struct FText>* Result);
	void getDateNameString_weekday_(class UObject* __WorldContext, TArray<struct FText>* Result);
	void calcWeekday(const struct FDateTime& Date, class UObject* __WorldContext, int* weekday);
	void length_UE_toMinute(float Length, float moveSpeed, class UObject* __WorldContext, float* S3_minute);
	void length_UE_toMinute_S3Minute_(float Length, float moveSpeed, class UObject* __WorldContext, float* S3_minute);
	void toHMS_float_(float GameTime, class UObject* __WorldContext, float* Hour, float* Minute, float* Second, float* milliSec);
	void calcGameTimeHMS(class UObject* __WorldContext, float* Hour, float* Minute, float* Second, float* milliSec);
	void CalcGameTime(float NowTime, float DeltaTime, float DeltaTimeBias, class UObject* __WorldContext, float* Time);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
