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

// BlueprintGeneratedClass BPF_Memo.BPF_Memo_C
// 0x0000 (0x0028 - 0x0028)
class UBPF_Memo_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPF_Memo.BPF_Memo_C");
		return ptr;
	}


	void STATIC_GetS3MemoTextureDataManager(class UObject* __WorldContext, class ABP_MemoTextureDataManager_C** BP_MemoTextureDataManager);
	void STATIC_getS3MemopadManager(class UObject* __WorldContext, class ABP_S3MemopadManager_C** BPS3MemopadManager);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
