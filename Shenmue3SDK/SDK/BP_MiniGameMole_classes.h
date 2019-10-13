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

// BlueprintGeneratedClass BP_MiniGameMole.BP_MiniGameMole_C
// 0x0150 (0x0478 - 0x0328)
class ABP_MiniGameMole_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class UBPC_ObjectLoader_C*                         BPC_ObjectLoader;                                         // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<E_MiniGameMoleState>                   State;                                                    // 0x0348(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<E_MiniGameMoleState>                   PreState;                                                 // 0x0349(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<E_MiniGameMoleState>                   NextState;                                                // 0x034A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x034B(0x0001) MISSED OFFSET
	int                                                LocalStep;                                                // 0x034C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UpValue;                                                  // 0x0350(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentUpValue;                                           // 0x0354(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentTime;                                              // 0x0358(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UpSpeed;                                                  // 0x035C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DownSpeed;                                                // 0x0360(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AppearWaitTime;                                           // 0x0364(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BaseActorHeight;                                          // 0x0368(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<E_MiniGameWhackMoleCommand>            WhackCommand;                                             // 0x036C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x036D(0x0003) MISSED OFFSET
	int                                                AddScorePointValue;                                       // 0x0370(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0374(0x0004) MISSED OFFSET
	class ABP_WhackMoleMiniGame_C*                     RefMiniGame;                                              // 0x0378(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              AWTurnTime;                                               // 0x0380(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                AWCount;                                                  // 0x0384(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                AWMaxCount;                                               // 0x0388(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    AWRotateValue;                                            // 0x038C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              AWCurrentZRotate;                                         // 0x0398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BaseActorZRotate;                                         // 0x039C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WhackReactTime;                                           // 0x03A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WhackReactSpeed;                                          // 0x03A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WhackReactWaitTime;                                       // 0x03A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bBigMole;                                                 // 0x03AC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x03AD(0x0003) MISSED OFFSET
	int                                                WhackLife;                                                // 0x03B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                BaseWhackLife;                                            // 0x03B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bWhackReactUpDown;                                        // 0x03B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x03B9(0x0003) MISSED OFFSET
	float                                              WhackUpDownTime;                                          // 0x03BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ChangeElementIndex;                                       // 0x03C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x03C4(0x0004) MISSED OFFSET
	unsigned char                                      UnknownData06[0x50];                                      // 0x03C4(0x0050) UNKNOWN PROPERTY: MapProperty BP_MiniGameMole.BP_MiniGameMole_C.PS4MaterialMap
	unsigned char                                      UnknownData07[0x50];                                      // 0x0418(0x0050) UNKNOWN PROPERTY: MapProperty BP_MiniGameMole.BP_MiniGameMole_C.PCMaterialMap
	struct FScriptMulticastDelegate                    MissDispacher;                                            // 0x0468(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MiniGameMole.BP_MiniGameMole_C");
		return ptr;
	}


	void SetAppearWaitTime(float Time);
	void Initialize();
	void UpdateAppearWait(float DeltaSeconds);
	void CheckWhack(bool* Hit);
	void ChangeToNextState();
	void ClearValue();
	void UpdateWhacked(float DeltaSeconds);
	void UpdateReverse(float DeltaSeconds);
	void UpdateAppear(float DeltaSeconds);
	void UpDown(float DeltaSeconds, float moveSpeed, float DownLimit, bool* Reached);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void Appear();
	void OnEndLoad(const struct FString& LoadId, class UObject* LoadedObject);
	void ExecuteUbergraph_BP_MiniGameMole(int EntryPoint);
	void MissDispacher__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
