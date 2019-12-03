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

// BlueprintGeneratedClass BP_S3HUD_Base.BP_S3HUD_Base_C
// 0x009C (0x057C - 0x04E0)
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
	int                                                Z_ORDER_FADE;                                             // 0x0578(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_S3HUD_Base.BP_S3HUD_Base_C");
		return ptr;
	}


	int STATIC_GetScreenFadeZOrder();
	void MakeCustomDialogParam(class AActor* Executor, int FontSize, float WindowWidth, ES3DialogType Type, TEnumAsByte<ETextJustify> Justify, TArray<struct FName>* Labels, TArray<struct FST_GeneralWindow_Image>* Images, struct FST_GeneralWindowParam* Param);
	void STATIC_ShowSaveMessage(TEnumAsByte<ESaveMessageType> Type);
	void STATIC_IsVisibleLongLoading(bool* Visible);
	void HideLongLoading();
	void ShowLongLoading(ES3LoadingType Type);
	bool STATIC_IsVisibleDialog();
	void GetMenuManagerActor(class AActor** Actor);
	void STATIC_RemovePersistantWidget(class UUserWidget* Widget);
	void STATIC_AddPersistantWidget(class UUserWidget* Widget, int ZOrder);
	void STATIC_CleanUpOnHUDChange();
	void MakeCommonDialogParam(class AActor* Executor, int FontSize, float WindowWidth, ES3DialogType Type, TEnumAsByte<ETextJustify> Justify, TArray<struct FName>* Labels, struct FST_GeneralWindowParam* Param);
	void ForbidDetectAction_Impl(class AActor* Actor, bool* dummy);
	void PermitDetectAction_Impl(class AActor* Actor, bool* dummy);
	void STATIC_CloseDialog_Impl(class AActor* Actor);
	void STATIC_OpenCommonDialog_Impl(class AActor* Executor, ES3DialogType Type, TEnumAsByte<ETextJustify> Justify, TArray<struct FName>* Labels);
	void STATIC_ForbidWindowUI_Impl(class AActor* Actor, bool* dummy);
	void PermitWindowUI_Impl(class AActor* Actor, bool* dummy);
	void STATIC_OpenCustomDialog(const struct FST_GeneralWindowParam& Param);
	bool STATIC_HideLoading(class AActor* Executor);
	bool STATIC_ShowLoading(class AActor* Executor);
	bool STATIC_ScreenFadeOut(float FadeTime, const struct FLinearColor& FadeColor);
	bool STATIC_ScreenFadeInAutoColor(float FadeTime);
	bool ScreenFadeIn(float FadeTime, const struct FLinearColor& FadeColor);
	void STATIC_DisableAutoFadeIn();
	void STATIC_IsHiddenFade(bool* Hidden);
	void GetFadeColor(bool bIgnoreOpacity, struct FLinearColor* ColorAndOpacity);
	void InitOnHUDChange(const struct FLinearColor& InitialColor, bool EnableAutoFadeIn, TArray<struct FST_WidgetZOrder>* ReceieveWidgets);
	void STATIC_CastChildActor();
	void STATIC_GetEyecatch(class ABP_eyecatch_C** BP_eyecatch);
	void STATIC_DrawCameraLocation();
	void IsFinishedFadeOut(bool* Finished);
	void STATIC_IsScreenFading(bool* Fading);
	void STATIC_UserConstructionScript();
	void STATIC_TL_ScreenFade__FinishedFunc();
	void STATIC_TL_ScreenFade__UpdateFunc();
	void STATIC_BindSaveMessage();
	void STATIC_StartAutoSave(bool bSystem);
	void STATIC_FinishAutoSave(bool bSuccess);
	void STATIC_FinishSystemSave(bool bSuccess);
	void STATIC_UnbindSaveMessage();
	void STATIC_BeginScreenFade(bool Visible, float FadeTime, const struct FLinearColor& FadeColor);
	void STATIC_ReceiveBeginPlay();
	void STATIC_ReceiveDestroyed();
	void ReceiveDrawHUD(int SizeX, int SizeY);
	void STATIC_FinishedLoadLevel();
	void STATIC_PermitWindowUI(class AActor* Actor);
	void STATIC_ForbidWindowUI(class AActor* Actor);
	void OpenCommonDialog(class AActor* Executor, TArray<struct FName> Labels, ES3DialogType Type, TEnumAsByte<ETextJustify> Justify);
	void STATIC_CloseDialog(class AActor* Executor);
	void STATIC_PermitDetectAction(class AActor* Actor);
	void STATIC_ForbidDetectAction(class AActor* Actor);
	void STATIC_DestroyLoading();
	void STATIC_DestroySaveMessage();
	void STATIC_ExecuteUbergraph_BP_S3HUD_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
