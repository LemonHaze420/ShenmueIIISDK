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

// BlueprintGeneratedClass BPC_FishingCableEnd.BPC_FishingCableEnd_C
// 0x0008 (0x0248 - 0x0240)
class UBPC_FishingCableEnd_C : public USceneComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0240(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPC_FishingCableEnd.BPC_FishingCableEnd_C");
		return ptr;
	}


	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BPC_FishingCableEnd(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
