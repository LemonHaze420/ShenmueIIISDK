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

// BlueprintGeneratedClass BP_AnimalBeast_Base.BP_AnimalBeast_Base_C
// 0x0018 (0x0980 - 0x0968)
class ABP_AnimalBeast_Base_C : public ABP_AnimalBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0968(0x0008) (Transient, DuplicateTransient)
	class AActor*                                      Querier;                                                  // 0x0970(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class AVolume*                                     AreaVolume;                                               // 0x0978(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AnimalBeast_Base.BP_AnimalBeast_Base_C");
		return ptr;
	}


	void UserConstructionScript();
	void STATIC_ReceiveBeginPlay();
	void ExecuteUbergraph_BP_AnimalBeast_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
