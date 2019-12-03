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

// BlueprintGeneratedClass BP_S3GameMode_Hakkason.BP_S3GameMode_Hakkason_C
// 0x0008 (0x0798 - 0x0790)
class ABP_S3GameMode_Hakkason_C : public ABP_S3GameMode_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0790(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_S3GameMode_Hakkason.BP_S3GameMode_Hakkason_C");
		return ptr;
	}


	void STATIC_UserConstructionScript();
	void STATIC_ReceiveBeginPlay();
	void ExecuteUbergraph_BP_S3GameMode_Hakkason(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
