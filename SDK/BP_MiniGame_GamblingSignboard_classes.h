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

// BlueprintGeneratedClass BP_MiniGame_GamblingSignboard.BP_MiniGame_GamblingSignboard_C
// 0x00C0 (0x03E8 - 0x0328)
class ABP_MiniGame_GamblingSignboard_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class UBPC_MiniGameBoardNum_C*                     BPC_CenterMark;                                           // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBPC_MiniGameBoardNum_C*                     BPC_OddsNum;                                              // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBPC_MiniGameBoardNum_C*                     BPC_MaxBetNum;                                            // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBPC_MiniGameBoardNum_C*                     BPC_MinBetNum;                                            // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBPC_ObjectLoader_C*                         BPC_ObjectLoader;                                         // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             OnePlayKihudaPricePos;                                    // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             OnePlayPricePos;                                          // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             Scene;                                                    // 0x0368(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Board;                                                    // 0x0370(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0378(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     MaterialID;                                               // 0x0380(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0390(0x0050) UNKNOWN PROPERTY: MapProperty BP_MiniGame_GamblingSignboard.BP_MiniGame_GamblingSignboard_C.TextureMap
	class UMaterialInstanceDynamic*                    BoardMaterial;                                            // 0x03E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MiniGame_GamblingSignboard.BP_MiniGame_GamblingSignboard_C");
		return ptr;
	}


	void InitializeViewMeshComponent(int ViewMeshNum, class UBPC_MiniGameBoardNum_C* Component);
	void OnObjectLoaded(const struct FString& LoadId, class UObject* LoadedObject);
	void SetNumberPos();
	void SetBoardInfoOnePlay(TEnumAsByte<E_MiniGameGambleType> Index, int OnePlayPrice, bool IsKihuda);
	void SetBoardInfo(TEnumAsByte<E_MiniGameGambleType> Index, int MinNum, int MaxNum, int OddNum);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_MiniGame_GamblingSignboard(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
