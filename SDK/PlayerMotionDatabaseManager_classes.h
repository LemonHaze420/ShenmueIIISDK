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

// BlueprintGeneratedClass PlayerMotionDatabaseManager.PlayerMotionDatabaseManager_C
// 0x0011 (0x0039 - 0x0028)
class UPlayerMotionDatabaseManager_C : public UObject
{
public:
	TArray<class APlayerMotionDatabase_C*>             MotionDatabases;                                          // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TEnumAsByte<EPC_EN_PlayerMotionDatabase>           CurrentDatabase;                                          // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PlayerMotionDatabaseManager.PlayerMotionDatabaseManager_C");
		return ptr;
	}


	void GetSelectedDatabase(TEnumAsByte<EPC_EN_PlayerMotionDatabase> DatabaseType, class APlayerMotionDatabase_C** Database);
	void GetDatabase(class APlayerMotionDatabase_C** Datagbase);
	void Initialize();
	void SwitchDatabase(TEnumAsByte<EPC_EN_PlayerMotionDatabase> DatabaseType);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
