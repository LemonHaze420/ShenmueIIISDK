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

// BlueprintGeneratedClass BP_TextDataManager.BP_TextDataManager_C
// 0x0008 (0x00C8 - 0x00C0)
class UBP_TextDataManager_C : public US3TextDataManagerBase
{
public:
	class US3ClipperOnlyDataAsset*                     ClipperDataAsset;                                         // 0x00C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_TextDataManager.BP_TextDataManager_C");
		return ptr;
	}


	void FindClipperOnlyData(const struct FName& Label, struct FString* Clipper);
	void GetTalkTextData(const struct FName& Label, ES3TextPathType FirstType, ES3TextDataType* TextType, struct FS3TextData* TextData);
	void STATIC_GetTextDataStringAbridged_(const struct FName& Label, ES3TextPathType Type, struct FString* OutString, struct FString* ClipperString);
	void STATIC_GetItemDataString(const struct FName& Label, struct FString* Name, struct FString* Description);
	void STATIC_CreateRubyInfo(const struct FString& Text, struct FST_RubyInfo* OutInfo);
	void STATIC_GetVoiceData(const struct FName& Label, ES3TextPathType Type, const struct FName& CharaName, class UObject** Voice);
	void GetTextDataString(const struct FName& Label, ES3TextPathType Type, struct FString* OutString, struct FString* ClipperString, TArray<struct FString>* TextArray, int* LinefeedCount, TArray<struct FST_RubyInfo>* RubyInfoArray);
	bool STATIC_Reimport(const struct FName& Label, const struct FString& RootAssetPath);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
