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

// BlueprintGeneratedClass BP_ST_Arrow.BP_ST_Arrow_C
// 0x0088 (0x03B0 - 0x0328)
class ABP_ST_Arrow_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class US3WidgetToRenderTargetComponent*            RenderTargetGradation;                                    // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class US3WidgetToRenderTargetComponent*            RenderTargetArrowMask;                                    // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USplineComponent*                            Spline1;                                                  // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             Root;                                                     // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class USplineMeshComponent*>                SplineMeshList;                                           // 0x0350(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              SplineLength;                                             // 0x0360(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Velocity;                                                 // 0x0364(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              degree;                                                   // 0x0368(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Gravity;                                                  // 0x036C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FVector>                             SplinePosList;                                            // 0x0370(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                Accuracy;                                                 // 0x0380(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                SearchLength;                                             // 0x0384(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            MeshMaterialList;                                         // 0x0388(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              CurrentAddSpeed;                                          // 0x0398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPreVisible;                                              // 0x039C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bNextVisible;                                             // 0x039D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x039E(0x0002) MISSED OFFSET
	float                                              CurrentAlpha;                                             // 0x03A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxAlpha;                                                 // 0x03A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VisibleChangeSpeed;                                       // 0x03A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TestRate;                                                 // 0x03AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ST_Arrow.BP_ST_Arrow_C");
		return ptr;
	}


	void EnabledSplineMesh(bool Enabled);
	void SetArrowNumRate(float Value);
	void SetArrowMaskSize(const struct FVector2D& InSize);
	void SetHorizonTaperedScale(float Rate);
	void SetMaxAlpha(float MaxAlpha);
	void Reset(float Velocity, float degree, float Gravity);
	void SetReverseRate(float Rate);
	void SetArrowLength(float Length);
	void Initialize();
	void UpdateVisibleArrow(float DeltaSeconds);
	void SetVisibleArrow(bool Visible);
	void SetGradationPower(float Power);
	void SetGradationSpeed(float Speed);
	void SetSplinePos(float Velocity, float degree, float Gravity);
	void GetXYZ(float Time, struct FVector* Location);
	void GetHeight(float Time, float* Height);
	void getDistance(float Time, float* Distance);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void SetRenderTargetTickEnabled(bool bEnabled);
	void ExecuteUbergraph_BP_ST_Arrow(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
