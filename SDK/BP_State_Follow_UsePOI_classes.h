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

// BlueprintGeneratedClass BP_State_Follow_UsePOI.BP_State_Follow_UsePOI_C
// 0x0008 (0x0050 - 0x0048)
class UBP_State_Follow_UsePOI_C : public UBP_State_Follow_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0048(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_State_Follow_UsePOI.BP_State_Follow_UsePOI_C");
		return ptr;
	}


	void StateEnter(float Delta, bool* bProcessing);
	void StateUpdate(float Delta, bool* bDummy);
	void UpdateTransitions(float DeltaSeconds);
	void ExecuteUbergraph_BP_State_Follow_UsePOI(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
