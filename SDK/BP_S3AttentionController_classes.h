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

// BlueprintGeneratedClass BP_S3AttentionController.BP_S3AttentionController_C
// 0x0290 (0x05B8 - 0x0328)
class ABP_S3AttentionController_C : public AS3AttentionController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class UCameraComponent*                            Camera;                                                   // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class US3AttentionComponent*                       AttentionComponent;                                       // 0x0340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // 0x0348(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0354(0x0004) MISSED OFFSET
	class ABP_SubtitlePlayer_C*                        SubtitlePlayer;                                           // 0x0358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              BLEND_TIME;                                               // 0x0360(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ButtonEnable;                                             // 0x0364(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0365(0x0003) MISSED OFFSET
	float                                              CAPSULE_RAD;                                              // 0x0368(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TRACE_RADIUS;                                             // 0x036C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TMap<struct FName, class US3AttentionComponent*>   NeighbourComponents;                                      // 0x0370(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class US3AttentionComponent*                       NextComponent;                                            // 0x03C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              CAMERA_SPEED;                                             // 0x03C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x03CC(0x0004) MISSED OFFSET
	struct FString                                     PlayingScript;                                            // 0x03D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     CurrentComponentScript;                                   // 0x03E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FName>                               PlayedLabels;                                             // 0x03F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              FREE_MOVE_SPEED;                                          // 0x0400(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ARROW_DISTANCE;                                           // 0x0404(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     MovingCameraLocation;                                     // 0x0408(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              MoveAlpha;                                                // 0x0414(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PrevCameraLocation;                                       // 0x0418(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LookNormal;                                               // 0x0424(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              MoveForward;                                              // 0x0430(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MoveRight;                                                // 0x0434(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FreeMoving;                                               // 0x0438(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0439(0x0003) MISSED OFFSET
	float                                              CameraDistance;                                           // 0x043C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NoInputTime;                                              // 0x0440(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0444(0x0004) MISSED OFFSET
	class UShapeComponent*                             SearchingComponent;                                       // 0x0448(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              AttentionTime;                                            // 0x0450(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0454(0x0004) MISSED OFFSET
	class ABP_ScheduleNPC_C*                           NPCCharacter;                                             // 0x0458(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class US3SearchComponent*                          SearchComponent;                                          // 0x0460(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               RegisterDetect;                                           // 0x0468(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0469(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnAccordCondition;                                        // 0x0470(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	float                                              CameraZoomOffset;                                         // 0x0480(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                EventStepMin;                                             // 0x0484(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                EventStepMax;                                             // 0x0488(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DISTANCE_RATE;                                            // 0x048C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraZoomRate;                                           // 0x0490(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CameraZoomFlag;                                           // 0x0494(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CAMERA_ZOOM_SPEED;                                        // 0x0498(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x049C(0x0004) MISSED OFFSET
	TArray<class ABP_AttentionEffect_C*>               EffectRef;                                                // 0x04A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               EffectEndFlag;                                            // 0x04B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x04B1(0x0003) MISSED OFFSET
	struct FVector                                     CursorPosition;                                           // 0x04B4(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               CursorDraw;                                               // 0x04C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x7];                                       // 0x04C1(0x0007) MISSED OFFSET
	class UBP_Carousel_C*                              Carousel;                                                 // 0x04C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               RotateFlag;                                               // 0x04D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               EventButtonFlag;                                          // 0x04D1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bInputActionEnabled;                                      // 0x04D2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x5];                                       // 0x04D3(0x0005) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnFindNPC;                                                // 0x04D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class UWBP_EventAttention_C*                       RefEventAttentionWidget;                                  // 0x04E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               bDrawArrowCursor;                                         // 0x04F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x7];                                       // 0x04F1(0x0007) MISSED OFFSET
	class UTalkScript*                                 CurrentACScriptEvent;                                     // 0x04F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  BackupPlayerTransform;                                    // 0x0500(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPlayingCutscene;                                         // 0x0530(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsStopGameTime;                                           // 0x0531(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsFinishedActionEvent;                                    // 0x0532(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsBackerAC;                                               // 0x0533(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentTimerEventTime;                                    // 0x0534(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                TimerEventStep;                                           // 0x0538(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsButtonWaitActionEvent;                                  // 0x053C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsForceAction;                                            // 0x053D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x2];                                       // 0x053E(0x0002) MISSED OFFSET
	struct FName                                       BGM_ID;                                                   // 0x0540(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnStartAttention;                                         // 0x0548(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	float                                              CurrentCameraBlendTime;                                   // 0x0558(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FadeTime;                                                 // 0x055C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ABP_SecondarySubtitlePlayer_C*               EmaSubtitlesPlayer;                                       // 0x0560(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsAttention;                                              // 0x0568(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x7];                                       // 0x0569(0x0007) MISSED OFFSET
	class ABP_ActorVisibleControl_C*                   RefActorVisibleController;                                // 0x0570(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnEndAttention;                                           // 0x0578(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	float                                              TimerEventWaitTime;                                       // 0x0588(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14[0x4];                                       // 0x058C(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnExitAttentin;                                           // 0x0590(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	int                                                AttentionLevelState;                                      // 0x05A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ATTENTION_LEVEL_STATE_END;                                // 0x05A4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ATTENTION_LEVEL_STATE_START;                              // 0x05A8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ATTENTION_LEVEL_STATE_WAIT_UNLOAD;                        // 0x05AC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UnloadSafetyTimer;                                        // 0x05B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WAIT_UNLOAD_MAX_TIME;                                     // 0x05B4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_S3AttentionController.BP_S3AttentionController_C");
		return ptr;
	}


	int GetPriority();
	TArray<struct FS3DetectActionParam> GetDetectAction();
	void STATIC_UpdateButton();
	void STATIC_ResetLevelState();
	void IsStartAC(bool* StartAC);
	void OnAttentionLevelUnloaded(bool* NeetFade);
	void STATIC_UpdateVisibleActorControl();
	void SetActorVisibleControl(bool Condition);
	void STATIC_CheckCameraHit(const struct FVector& MoveVec, bool* bHit);
	void STATIC_CheckDirection(class US3AttentionComponent* Component, bool* bFind);
	void ClearEmaSubtitles();
	void DrawEmaSubtitles();
	bool IsEnabledAttention(class US3AttentionComponent* Target);
	void PlayBGMwithManager(class USoundAtomCue* Cue, class ABP_S3AttentionManager_C* Manager);
	void SetEnabledTimerEvent(bool Enabled);
	void UpdateTimerEvent();
	void ForceExecConditionEvent();
	void ExecConditionEvent();
	bool IsStepEvent();
	void StopGameTime(bool Stop);
	bool IsDisableAttentionState();
	void STATIC_SetSearchStateEnabled(bool Enabled);
	void STATIC_IsBackerACEvent(bool* Return);
	bool STATIC_IsInputActionEnabled();
	bool STATIC_IsEffectEnd();
	void STATIC_EndAttention();
	void STATIC_SetInputActionEnabled(bool Enabled);
	void NotificationEvent(struct FString* ScriptLabel);
	void STATIC_CalcFrontVector(struct FVector* FrontVec);
	void STATIC_SetAdjacentComponent(class US3AttentionComponent* AdjacentComponent);
	void STATIC_TraceRotateTarget(TEnumAsByte<ECarouselRotate> Direction);
	void STATIC_SetAttentionComponent(class US3AttentionComponent* AttentionComponent, class US3AttentionComponent** Output);
	void STATIC_UpdateCursor();
	void STATIC_ResetEffectEndFlag();
	void STATIC_DrawAttentionEffect();
	void STATIC_SetPlayerVisibility(bool Visibility);
	void STATIC_UpdateZoomRate(float* CameraZoomOffset);
	bool MultiCapsuleTrace(const struct FVector& Start, const struct FVector& End, float Radius, float HalfHeight, bool DEBUG, TArray<class AActor*>* ignoreActors, class UPrimitiveComponent** HitComponent, struct FVector* MoveVec);
	bool STATIC_CapsuleTrace(const struct FVector& Start, const struct FVector& End, float Radius, float HalfHeight, TArray<class AActor*>* ignoreActors, class UPrimitiveComponent** HitComponent);
	void ResetCamera(float BlendTime);
	void STATIC_ExitAttentionRequest();
	void ExitAttention();
	void PlayGetSE();
	void InputAction(ES3ActionIconType Type);
	void STATIC_IsLookActor(const struct FVector& StartTrace, const struct FVector& EndTrace, bool* Look);
	void STATIC_SearchReset();
	void STATIC_StartAttention(class US3AttentionComponent* InAttentionComponent, const struct FVector& InHitLocation);
	void SearchTarget();
	void FreeMove();
	void STATIC_CheckNeighbourTarget(class US3AttentionComponent* Component);
	void STATIC_DrawArrow(const struct FVector& Vec);
	void STATIC_DrawNextDirection();
	void STATIC_InputKey(const struct FName& KeyName);
	void CheckCondition(int* Result);
	void STATIC_CameraSetting();
	void STATIC_MoveCamera();
	void ChangeTarget();
	void STATIC_CalcNormal(class US3AttentionComponent* Component, const struct FVector& HitLocation, struct FVector* Normal);
	void STATIC_TraceNextTarget(class US3AttentionComponent* Component, const struct FName& KeyName, bool Add, class US3AttentionComponent** NextComponent);
	void STATIC_PlayScript(const struct FString& ScriptLabel, bool DisableButton, bool Once, bool* Playing);
	void STATIC_UserConstructionScript();
	void InpActEvt_SearchUpSelect_K2Node_InputActionEvent_8(const struct FKey& Key);
	void InpActEvt_SearchDownSelect_K2Node_InputActionEvent_7(const struct FKey& Key);
	void InpActEvt_SearchRightSelect_K2Node_InputActionEvent_6(const struct FKey& Key);
	void InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_5(const struct FKey& Key);
	void STATIC_ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void InpAxisEvt_MoveForward_K2Node_InputAxisEvent_80(float AxisValue);
	void InpAxisEvt_MoveRight_K2Node_InputAxisEvent_91(float AxisValue);
	void STATIC_DelayStartAttention();
	void STATIC_DelayEndAttention();
	void STATIC_AxisToDirection();
	void InpAxisEvt_ZoomAxis_K2Node_InputAxisEvent_61(float AxisValue);
	void DecideDetectAction(ES3ActionIconType Type);
	void StartACEvent(class UTalkScript* ACEventScript);
	void Event_CameraZoomAxis(float Axis, bool Force);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ExecuteUbergraph_BP_S3AttentionController(int EntryPoint);
	void STATIC_OnExitAttentin__DelegateSignature();
	void STATIC_OnEndAttention__DelegateSignature();
	void STATIC_OnStartAttention__DelegateSignature();
	void STATIC_OnFindNPC__DelegateSignature(class ABP_ScheduleNPC_C* NPC);
	void STATIC_OnAccordCondition__DelegateSignature(const struct FString& EventId);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
