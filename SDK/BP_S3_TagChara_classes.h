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

// BlueprintGeneratedClass BP_S3_TagChara.BP_S3_TagChara_C
// 0x0008 (0x01D8 - 0x01D0)
class UBP_S3_TagChara_C : public US3TagCharaComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01D0(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_S3_TagChara.BP_S3_TagChara_C");
		return ptr;
	}


	void SetProfileFromTable();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_S3_TagChara(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
