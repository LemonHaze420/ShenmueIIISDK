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

// BlueprintGeneratedClass Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C
// 0x0371 (0x0699 - 0x0328)
class AUltra_Dynamic_Sky_BP_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class UArrowComponent*                             Sun_Root;                                                 // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Ultra_Dynamic_Sky_Sphere;                                 // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ADirectionalLight*                           Direction_Light__Sun_;                                    // 0x0348(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UMaterialInstanceDynamic*                    CurrentUDM_mat;                                           // 0x0350(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Refresh_Settings;                                         // 0x0358(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0359(0x0003) MISSED OFFSET
	float                                              Cloud_Speed;                                              // 0x035C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Cloud_Density;                                            // 0x0360(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Cloud_Wisps_Opacity;                                      // 0x0364(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveLinearColor*                           Horizon_Base_Color_Curve;                                 // 0x0368(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveLinearColor*                           Zenith_Base_Color_Curve;                                  // 0x0370(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveLinearColor*                           Cloud_Light_Color_Curve;                                  // 0x0378(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveLinearColor*                           Cloud_Dark_Color_Curve;                                   // 0x0380(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Time_of_Day;                                              // 0x0388(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x038C(0x0004) MISSED OFFSET
	class UCurveLinearColor*                           Sun_Color_Curve;                                          // 0x0390(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveLinearColor*                           Sun_Color_Curve_24hour;                                   // 0x0398(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 Shine_Intensity_Curve;                                    // 0x03A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Saturation;                                               // 0x03A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x03AC(0x0004) MISSED OFFSET
	class UCurveLinearColor*                           Sun_Cloudy_Color_Curve;                                   // 0x03B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AExponentialHeightFog*                       Exponential_Height_Fog;                                   // 0x03B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UCurveFloat*                                 Stars_Intensity_Curve;                                    // 0x03C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Cloud_Phase;                                              // 0x03C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Moon_Scale;                                               // 0x03CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Moon_Inclination;                                         // 0x03D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Moon_Phase;                                               // 0x03D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Automatically_Set_Advanced_Settings_using_Time_of_Day;    // 0x03D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x03D9(0x0003) MISSED OFFSET
	float                                              Stars_Visibility;                                         // 0x03DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Moon_Intensity;                                           // 0x03E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Moon_Position;                                            // 0x03E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Sun_Angle;                                                // 0x03E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Horizon_Base_Color;                                       // 0x03EC(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                Zenith_Base_Color;                                        // 0x03FC(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                Cloud_Light_Color;                                        // 0x040C(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                Cloud_Dark_Color;                                         // 0x041C(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                Sun_Color;                                                // 0x042C(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              Cloud_Shine_Intensity;                                    // 0x043C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Sun_Light_Color;                                          // 0x0440(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	class UCurveFloat*                                 Moon_Position_Curve;                                      // 0x0450(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Night_Cycle;                                              // 0x0458(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Simulate_Cloud_Density_Changes;                           // 0x0459(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x045A(0x0002) MISSED OFFSET
	float                                              Cloud_Density_Shift_Frequency__min_;                      // 0x045C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Cloud_Density_Shift_Frequency__max_;                      // 0x0460(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Cloud_Density_target;                                     // 0x0464(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Cloud_Density_Change__Smoothing_;                         // 0x0468(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Cloud_Density_base;                                       // 0x046C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Cloud_Opacity;                                            // 0x0470(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Overall_Intensity;                                        // 0x0474(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Sun_Pitch_Offset;                                         // 0x0478(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Sun_Brightness;                                           // 0x047C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Moon_Color;                                               // 0x0480(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              Shine_Variation;                                          // 0x0490(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Sun_Lighting_Intensity;                                   // 0x0494(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 Sun_Highlight_Radius_curve;                               // 0x0498(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Sun_Highlight_Radius;                                     // 0x04A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               First_Day;                                                // 0x04A4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Simulate_Moon_Phase_Changes;                              // 0x04A5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x04A6(0x0002) MISSED OFFSET
	float                                              Stars_Intensity;                                          // 0x04A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Stars_Color;                                              // 0x04AC(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              Moon_Orbit_Offset;                                        // 0x04BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Sun_Rotation;                                             // 0x04C0(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              Sun_Radius;                                               // 0x04CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Cloud_Shadows_MID;                                        // 0x04D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Use_Cloud_Shadows;                                        // 0x04D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x04D9(0x0003) MISSED OFFSET
	float                                              Cloud_Shadows_Scale;                                      // 0x04DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Cloud_Shadows_Intensity;                                  // 0x04E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x04E4(0x0004) MISSED OFFSET
	class ADirectionalLight*                           Moon_Light;                                               // 0x04E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               Manually_Select_Sun_Color;                                // 0x04F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x04F1(0x0003) MISSED OFFSET
	float                                              Force_Moon_Orbit;                                         // 0x04F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Automatically_Set_Moon_Light_Rotation;                    // 0x04F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Automatically_Set_Sun_Light_Rotation;                     // 0x04F9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x2];                                       // 0x04FA(0x0002) MISSED OFFSET
	float                                              Moonlight_Intensity;                                      // 0x04FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Stars_Speed;                                              // 0x0500(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Sun_Inclination;                                          // 0x0504(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Sun_Yaw;                                                  // 0x0508(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Moon_Rotation;                                            // 0x050C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Custom_Moon_Texture;                                      // 0x0510(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Use_Custom_Moon_Texture;                                  // 0x0518(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x0519(0x0003) MISSED OFFSET
	struct FVector                                     WorldZUp;                                                 // 0x051C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class ASkyLight*                                   SkyLight;                                                 // 0x0528(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class APostProcessVolume*                          Post_Process_Volume;                                      // 0x0530(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UCurveFloat*                                 Skylight_Intensity_Curve;                                 // 0x0538(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveLinearColor*                           Skylight_Color_Curve;                                     // 0x0540(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Skylight_Intensity;                                       // 0x0548(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Skylight_Color;                                           // 0x054C(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData11[0x4];                                       // 0x055C(0x0004) MISSED OFFSET
	class UCurveFloat*                                 GlobalTimeCurve;                                          // 0x0560(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SkyLightIntensityTest;                                    // 0x0568(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseTimedCapture;                                         // 0x056C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x056D(0x0003) MISSED OFFSET
	float                                              SkylightCaptureDelta;                                     // 0x0570(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SkylightCaptureTimer;                                     // 0x0574(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LastTime;                                                 // 0x0578(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x4];                                       // 0x057C(0x0004) MISSED OFFSET
	class UCurveFloat*                                 SunRadiusCurve;                                           // 0x0580(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 Sunlight_Intensity_Curve;                                 // 0x0588(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 Moonlight_Intensity_Curve;                                // 0x0590(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Sunlight_Intensity;                                       // 0x0598(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData14[0x4];                                       // 0x059C(0x0004) MISSED OFFSET
	class UCurveFloat*                                 Moon_Phase_Intensity_Curve;                               // 0x05A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 Cloud_Shadow_Intensity_Curve;                             // 0x05A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseEffects;                                              // 0x05B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData15[0x7];                                       // 0x05B1(0x0007) MISSED OFFSET
	class UCurveFloat*                                 PP_Exposure_MinBrightness;                                // 0x05B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 Cloud_Dencity_Curve;                                      // 0x05C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Cloud_Density_Change_Time;                                // 0x05C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Cloud_Simulate_Time;                                      // 0x05CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 Cloud_Dark_Multiplier_Curve;                              // 0x05D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CLOUD_MAX;                                                // 0x05D8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData16[0x4];                                       // 0x05DC(0x0004) MISSED OFFSET
	class ABP_FlareObject_C*                           SunLensFlare;                                             // 0x05E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UCurveFloat*                                 PP_Contrast;                                              // 0x05E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Moon_Radial_Gradient_Density;                             // 0x05F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Moon_Radial_Gradient_Size;                                // 0x05F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RAINY_CLOUD_RATE_MIN;                                     // 0x05F8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FogDensity;                                               // 0x05FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TargetFogDensity;                                         // 0x0600(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeltaSeconds;                                             // 0x0604(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ADirectionalLight*                           Moon_Light2;                                              // 0x0608(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UCurveFloat*                                 Moonlight2_Intensity_Curve;                               // 0x0610(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Moonlight2_Intensity;                                     // 0x0618(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Cloud_Direction;                                          // 0x061C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Cloud_Direction_target;                                   // 0x0620(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CLOUD_SPEED_ADJUST_VALUE;                                 // 0x0624(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               NotifyCloudDensity;                                       // 0x0628(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData17[0x7];                                       // 0x0629(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnReadyCloud;                                             // 0x0630(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnUpdateWind;                                             // 0x0640(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	float                                              CLOUDY_DENSITY_MIN;                                       // 0x0650(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MoonLightAdjustYaw;                                       // 0x0654(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Cloud_Rotation;                                           // 0x0658(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData18[0x4];                                       // 0x065C(0x0004) MISSED OFFSET
	class UCurveFloat*                                 Sun_Angle_Curve;                                          // 0x0660(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bLegacySunLight;                                          // 0x0668(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData19[0x7];                                       // 0x0669(0x0007) MISSED OFFSET
	class UMaterialInstanceDynamic*                    DayUDM_mat;                                               // 0x0670(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    NightUDM_mat;                                             // 0x0678(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    DayUDMLow_mat;                                            // 0x0680(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    NightUDMLow_mat;                                          // 0x0688(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 MoonLight_Angle_Curve;                                    // 0x0690(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bForbidGlobalChanges;                                     // 0x0698(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C");
		return ptr;
	}


	void SetSunAndMoonMovement(bool Enable);
	void GetCurrentUDMMat(class UMaterialInstanceDynamic** newParam);
	void ForceMoonPosition(float Yaw);
	void ForceUpdateSkylight();
	void IsCloudy(bool* Cloudy);
	void ResetCloudSimulateTime();
	void SetWindSpeed(float Speed);
	void UpdateFogDensity(float DeltaSeconds);
	void AnmateCloudDensity();
	void UpdateWind(struct FVector* WindVector);
	void SetGameTime(float InGameTime, bool bJump);
	void GetCloudRatio(float* Ratio);
	void GetSunLocation(struct FVector* Location);
	void SetFogDensity(float Value, bool Force);
	void CanRain(bool* Rain);
	void UpdateCloudDensity(float NewDencity, bool Force);
	void SetCloudChangeSpeed(bool Quick, bool TransitionTest);
	void GetSkyParamater(struct FRotator* Direction, float* Intensity, struct FLinearColor* LightColor);
	void Update_Skylight(bool bAutoTimeOfDay);
	void Set_Material_Variables();
	void Set_Solar_Angle();
	void UserConstructionScript();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Ultra_Dynamic_Sky_BP(int EntryPoint);
	void OnUpdateWind__DelegateSignature(const struct FVector& WindDirection);
	void OnReadyCloud__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
