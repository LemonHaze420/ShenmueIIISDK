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

// BlueprintGeneratedClass BPC_MiniGameChooseSpawn.BPC_MiniGameChooseSpawn_C
// 0x0050 (0x0140 - 0x00F0)
class UBPC_MiniGameChooseSpawn_C : public UActorComponent
{
public:
	TMap<ES3MiniGameCategory, struct FST_MiniGameChooseInfo> ChooseInfoList;                                           // 0x00F0(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPC_MiniGameChooseSpawn.BPC_MiniGameChooseSpawn_C");
		return ptr;
	}


	class ABP_MiniGameChoose_C* SpawnMiniGameChooseActor(ES3MiniGameCategory Category, bool ManualCamera);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
