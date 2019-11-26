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

// BlueprintGeneratedClass BPF_TextData.BPF_TextData_C
// 0x0000 (0x0028 - 0x0028)
class UBPF_TextData_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPF_TextData.BPF_TextData_C");
		return ptr;
	}


	void STATIC_GetS3TextItemName(const struct FString& ItemId, class UObject* __WorldContext, struct FText* ItemName);
	void STATIC_getS3TextDataManager(class UObject* __WorldContext, class UBP_TextDataManager_C** TextDataManager);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
