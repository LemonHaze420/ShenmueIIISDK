#pragma once

// Name: Shenmue3SDK, Version: 1.4.1

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPC_CCBattleCabinet.BPC_CCBattleCabinet_C
// 0x00F8 (0x01E8 - 0x00F0)
class UBPC_CCBattleCabinet_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F0(0x0008) (Transient, DuplicateTransient)
	struct FScriptMulticastDelegate                    OnGameClear;                                              // 0x00F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnGameOver;                                               // 0x0108(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnGameShutdown;                                           // 0x0118(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	int                                                MaterialIndex;                                            // 0x0128(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x012C(0x0004) MISSED OFFSET
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0130(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               AutoFindMesh;                                             // 0x0138(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0139(0x0007) MISSED OFFSET
	class UTextureRenderTarget2D*                      CreatedRenderTexture;                                     // 0x0140(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          OriginalMaterial;                                         // 0x0148(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	int                                                ResolutionX;                                              // 0x0150(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ResolutionY;                                              // 0x0154(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextureRenderTarget2D*                      SharedRenderTexture;                                      // 0x0158(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class APlayerController*                           PlayerController;                                         // 0x0160(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData)
	struct FST_CCBattle_Set                            SET;                                                      // 0x0168(0x0038) (Edit, BlueprintVisible)
	class ABP_CCBattleProgramBase_C*                   Program;                                                  // 0x01A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x28];                                      // 0x01A8(0x0028) UNKNOWN PROPERTY: SoftClassProperty BPC_CCBattleCabinet.BPC_CCBattleCabinet_C.ProgramSoftClass
	bool                                               OnState;                                                  // 0x01D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x01D1(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnGameCritialError;                                       // 0x01D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPC_CCBattleCabinet.BPC_CCBattleCabinet_C");
		return ptr;
	}


	void InstantiateProgram(class UClass* Class);
	void FetchRenderTexture(class UTextureRenderTarget2D** Output_Get);
	void SwitchToStaticTexture();
	void SwitchToRenderTexture(class UTextureRenderTarget2D** RT);
	void OnLoaded_F996630945A905E3751F229F1698409F(class UClass* Loaded);
	void SetScreen(class UStaticMeshComponent* Mesh, int MatIndex);
	void ReceiveBeginPlay();
	void StartRetry();
	void OnGameEnd(TEnumAsByte<EBattleWinLoseResult> Result);
	void EndGame();
	void StartGame();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void DisableInput();
	void EnableInput(class APlayerController* PlayerController);
	void ExecuteUbergraph_BPC_CCBattleCabinet(int EntryPoint);
	void OnGameCritialError__DelegateSignature();
	void OnGameShutdown__DelegateSignature();
	void OnGameOver__DelegateSignature();
	void OnGameClear__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
