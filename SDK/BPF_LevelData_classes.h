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

// BlueprintGeneratedClass BPF_LevelData.BPF_LevelData_C
// 0x0000 (0x0028 - 0x0028)
class UBPF_LevelData_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPF_LevelData.BPF_LevelData_C");
		return ptr;
	}


	void STATIC_GetACLevelName(class UObject* __WorldContext, struct FName* LevelName);
	void STATIC_IsInChobuRyosya(class UObject* __WorldContext, bool* In);
	void STATIC_GetBPLevelName(class UObject* __WorldContext, struct FName* LevelName);
	void STATIC_GetLookAtLevelName(class UObject* __WorldContext, struct FName* LevelName);
	void STATIC_GetLandscapeLevelNames(class UObject* __WorldContext, TArray<struct FName>* LevelNames);
	void STATIC_GetMinimapLevelName(class UObject* __WorldContext, struct FName* LevelName);
	void STATIC_GetNaviMeshLevelName(class UObject* __WorldContext, struct FName* LevelName);
	void STATIC_GetNPCLevelName(class UObject* __WorldContext, struct FName* LevelName);
	void STATIC_GetChobuLevelName(class UObject* __WorldContext, struct FName* LevelName);
	void STATIC_getLevelNameAndEnum(const struct FString& PersistentLevelName, bool Detail, class UObject* __WorldContext, struct FString* nameStr, ES3Where* enWhere);
	void STATIC_getLevelData(class UObject* __WorldContext, class US3LevelDataAsset** LevelData);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
