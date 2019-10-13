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

// BlueprintGeneratedClass BP_MiniGame_Sunken_3DUI.BP_MiniGame_Sunken_3DUI_C
// 0x010A (0x0432 - 0x0328)
class ABP_MiniGame_Sunken_3DUI_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        ScaleChangeBack;                                          // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        BarBack2;                                                 // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        BarBack1;                                                 // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        CenterBarBack;                                            // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        MoveBar2;                                                 // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        MoveBar1;                                                 // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        CenterBar;                                                // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0368(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_ActionTiming__Direction_AC3A270D43E693CD64EC1C86D5B8EFC4;// 0x0370(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0371(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Timeline_ActionTiming;                                    // 0x0378(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_ScaleChangeBack_BackScaleY_D95330E84E6C2DCC71A72089BE4BFEE2;// 0x0380(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Timeline_ScaleChangeBack_BackScaleX_D95330E84E6C2DCC71A72089BE4BFEE2;// 0x0384(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Timeline_ScaleChangeBack_Intensity_D95330E84E6C2DCC71A72089BE4BFEE2;// 0x0388(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Timeline_ScaleChangeBack_Alpha_D95330E84E6C2DCC71A72089BE4BFEE2;// 0x038C(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_ScaleChangeBack__Direction_D95330E84E6C2DCC71A72089BE4BFEE2;// 0x0390(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0391(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Timeline_ScaleChangeBack;                                 // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              TimeLine_SideBar_Alpha_267FB2654D9F08D9E72BACABEA87A8A0;  // 0x03A0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TimeLine_SideBar__Direction_267FB2654D9F08D9E72BACABEA87A8A0;// 0x03A4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x03A5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          TimeLine_SideBar;                                         // 0x03A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_FlashCenterBar_Intensity_CD711EA54E4DEEC413A92896A505EFE8;// 0x03B0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Timeline_FlashCenterBar_Alpha_CD711EA54E4DEEC413A92896A505EFE8;// 0x03B4(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_FlashCenterBar__Direction_CD711EA54E4DEEC413A92896A505EFE8;// 0x03B8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x03B9(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Timeline_FlashCenterBar;                                  // 0x03C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              MaxDistanceFromCenter;                                    // 0x03C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentRate;                                              // 0x03CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            CenterBarMaterial;                                        // 0x03D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>            SideBarMaterialList;                                      // 0x03E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              SideBarBaseAlpha;                                         // 0x03F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsPlayingFlashCenterBar;                                  // 0x03F4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsEnabled;                                                // 0x03F5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x03F6(0x0002) MISSED OFFSET
	TArray<class UStaticMeshComponent*>                SideBarList;                                              // 0x03F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              MaxSideBarIntensity;                                      // 0x0408(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     BaseBackEffectScale;                                      // 0x040C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    BackMaterial;                                             // 0x0418(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsJustTiming;                                             // 0x0420(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0421(0x0003) MISSED OFFSET
	struct FVector                                     CenterBarJustScale;                                       // 0x0424(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsJustRange;                                              // 0x0430(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsExRange;                                                // 0x0431(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MiniGame_Sunken_3DUI.BP_MiniGame_Sunken_3DUI_C");
		return ptr;
	}


	void CheckTiming(bool* IsJust, bool* IsEx);
	void SetJustTiming(bool IsJustTiming);
	void UpdateToMaxDistance();
	void UpdateBar(float Rate);
	void UserConstructionScript();
	void Timeline_FlashCenterBar__FinishedFunc();
	void Timeline_FlashCenterBar__UpdateFunc();
	void TimeLine_SideBar__FinishedFunc();
	void TimeLine_SideBar__UpdateFunc();
	void Timeline_ScaleChangeBack__FinishedFunc();
	void Timeline_ScaleChangeBack__UpdateFunc();
	void Timeline_ActionTiming__FinishedFunc();
	void Timeline_ActionTiming__UpdateFunc();
	void Timeline_ActionTiming__EndJust__EventFunc();
	void Timeline_ActionTiming__EndEx__EventFunc();
	void Timeline_ActionTiming__StartEx__EventFunc();
	void Timeline_ActionTiming__StartJust__EventFunc();
	void ReceiveBeginPlay();
	void Event_FlashCenterBar();
	void Event_EnabledSideBar(bool Enabled);
	void Event_ForceSideBarEnabled(bool Visible);
	void StartActionTiming();
	void ExecuteUbergraph_BP_MiniGame_Sunken_3DUI(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
