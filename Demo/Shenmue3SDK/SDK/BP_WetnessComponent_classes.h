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

// BlueprintGeneratedClass BP_WetnessComponent.BP_WetnessComponent_C
// 0x0008 (0x01A0 - 0x0198)
class UBP_WetnessComponent_C : public US3WetnessComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0198(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_WetnessComponent.BP_WetnessComponent_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_WetnessComponent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
