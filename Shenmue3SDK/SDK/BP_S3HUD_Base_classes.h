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

// BlueprintGeneratedClass BP_S3HUD_Base.BP_S3HUD_Base_C
// 0x0098 (0x0578 - 0x04E0)
class ABP_S3HUD_Base_C : public AS3HUD
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04E0(0x0008) (Transient, DuplicateTransient)
	class UChildActorComponent*                        Eyecatch;                                                 // 0x04E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x04F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              TL_ScreenFade_CameraFadeValue_DB4D6FDA44A6819AC3E5F8AFF8964750;// 0x04F8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TL_ScreenFade__Direction_DB4D6FDA44A6819AC3E5F8AFF8964750;// 0x04FC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x04FD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          TL_ScreenFade;                                            // 0x0500(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBPW_ScreenFade_C*                           FadeWidget;                                               // 0x0508(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class APlayerController*                           PlayerController;                                         // 0x0510(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      DebugMenuClass;                                           // 0x0518(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DrawDebugTransform;                                       // 0x0520(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0521(0x0007) MISSED OFFSET
	class ABP_eyecatch_C*                              BP_eyecatch;                                              // 0x0528(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData)
	class UBPW_UI_Loading_Short_C*                     LoadingWidget;                                            // 0x0530(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               InitialLoading;                                           // 0x0538(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0539(0x0007) MISSED OFFSET
	class ABP_UI_GeneralWindowManager_C*               DialogManager;                                            // 0x0540(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FST_GeneralWindowParam>              DialogParams;                                             // 0x0548(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FST_WidgetZOrder>                    HUDChangePersistantWidgets;                               // 0x0558(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UBPW_UI_Loading_Long_C*                      LongLoadingWidget;                                        // 0x0568(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UBPW_SaveMessage_C*                          SaveMessageWidget;                                        // 0x0570(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_S3HUD_Base.BP_S3HUD_Base_C");
		return ptr;
	}


	void ShowSaveMessage(TEnumAsByte<ESaveMessageType> Type);
	void IsVisibleLongLoading(bool* Visible);
	void HideLongLoading();
	void ShowLongLoading(ES3LoadingType Type);
	bool IsVisibleDialog();
	void GetMenuManagerActor(class AActor** Actor);
	void RemovePersistantWidget(class UUserWidget* Widget);
	void AddPersistantWidget(class UUserWidget* Widget, int ZOrder);
	void CleanUpOnHUDChange();
	void MakeCommonDialogParam(class AActor* Executor, int FontSize, float WindowWidth, ES3DialogType Type, TEnumAsByte<ETextJustify> Justify, TArray<struct FName>* Labels, struct FST_GeneralWindowParam* Param);
	void ForbidDetectAction_Impl(class AActor* Actor, bool* dummy);
	void PermitDetectAction_Impl(class AActor* Actor, bool* dummy);
	void CloseDialog_Impl(class AActor* Actor);
	void OpenCommonDialog_Impl(class AActor* Executor, ES3DialogType Type, TEnumAsByte<ETextJustify> Justify, TArray<struct FName>* Labels);
	void ForbidWindowUI_Impl(class AActor* Actor, bool* dummy);
	void PermitWindowUI_Impl(class AActor* Actor, bool* dummy);
	void OpenCustomDialog(const struct FST_GeneralWindowParam& Param);
	bool HideLoading(class AActor** Executor);
	bool ShowLoading(class AActor** Executor);
	bool ScreenFadeOut(float* FadeTime, struct FLinearColor* FadeColor);
	bool ScreenFadeInAutoColor(float* FadeTime);
	bool ScreenFadeIn(float* FadeTime, struct FLinearColor* FadeColor);
	void DisableAutoFadeIn();
	void IsHiddenFade(bool* Hidden);
	void GetFadeColor(bool bIgnoreOpacity, struct FLinearColor* ColorAndOpacity);
	void InitOnHUDChange(const struct FLinearColor& InitialColor, bool EnableAutoFadeIn, TArray<struct FST_WidgetZOrder>* ReceieveWidgets);
	void CastChildActor();
	void GetEyecatch(class ABP_eyecatch_C** BP_eyecatch);
	void DrawCameraLocation();
	void IsFinishedFadeOut(bool* Finished);
	void IsScreenFading(bool* Fading);
	void UserConstructionScript();
	void TL_ScreenFade__FinishedFunc();
	void TL_ScreenFade__UpdateFunc();
	void BindSaveMessage();
	void StartAutoSave(bool bSystem);
	void FinishAutoSave(bool bSuccess);
	void FinishSystemSave(bool bSuccess);
	void UnbindSaveMessage();
	void BeginScreenFade(bool Visible, float FadeTime, const struct FLinearColor& FadeColor);
	void ReceiveBeginPlay();
	void ReceiveDestroyed();
	void ReceiveDrawHUD(int* SizeX, int* SizeY);
	void FinishedLoadLevel();
	void PermitWindowUI(class AActor** Actor);
	void ForbidWindowUI(class AActor** Actor);
	void OpenCommonDialog(class AActor** Executor, TArray<struct FName>* Labels, ES3DialogType* Type, TEnumAsByte<ETextJustify>* Justify);
	void CloseDialog(class AActor** Executor);
	void PermitDetectAction(class AActor** Actor);
	void ForbidDetectAction(class AActor** Actor);
	void DestroyLoading();
	void DestroySaveMessage();
	void ExecuteUbergraph_BP_S3HUD_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
