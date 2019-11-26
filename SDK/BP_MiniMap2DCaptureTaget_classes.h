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

// BlueprintGeneratedClass BP_MiniMap2DCaptureTaget.BP_MiniMap2DCaptureTaget_C
// 0x000E (0x0336 - 0x0328)
class ABP_MiniMap2DCaptureTaget_C : public ATargetPoint
{
public:
	class UStaticMeshComponent*                        CaptureArea;                                              // 0x0328(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              CaptureSize_Half;                                         // 0x0330(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AreaVisible;                                              // 0x0334(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bPerspectiveProjection;                                   // 0x0335(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MiniMap2DCaptureTaget.BP_MiniMap2DCaptureTaget_C");
		return ptr;
	}


	void GetCaptureSize_2DVector_(struct FVector2D* Center, struct FVector2D* half_size);
	void GetCaptureSize(float* CenterX, float* CenterY, float* HalfSize);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
