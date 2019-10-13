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

// BlueprintGeneratedClass BPC_MiniGameBoardNum.BPC_MiniGameBoardNum_C
// 0x0034 (0x0274 - 0x0240)
class UBPC_MiniGameBoardNum_C : public USceneComponent
{
public:
	TArray<class UMaterialInstanceDynamic*>            MaterialList;                                             // 0x0240(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                Number;                                                   // 0x0250(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsMultiMark;                                              // 0x0254(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0255(0x0003) MISSED OFFSET
	float                                              SpaceValue;                                               // 0x0258(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsCenterMark;                                             // 0x025C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x025D(0x0003) MISSED OFFSET
	TArray<class UStaticMeshComponent*>                MeshList;                                                 // 0x0260(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              SquareSize;                                               // 0x0270(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPC_MiniGameBoardNum.BPC_MiniGameBoardNum_C");
		return ptr;
	}


	void Update();
	void SetNumber(int Number);
	void SetList(TArray<class UStaticMeshComponent*>* MeshList, TArray<class UMaterialInstanceDynamic*>* MaterialList);
	void InitializeMesh();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
