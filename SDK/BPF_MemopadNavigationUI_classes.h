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

// BlueprintGeneratedClass BPF_MemopadNavigationUI.BPF_MemopadNavigationUI_C
// 0x0000 (0x0028 - 0x0028)
class UBPF_MemopadNavigationUI_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPF_MemopadNavigationUI.BPF_MemopadNavigationUI_C");
		return ptr;
	}


	void STATIC_BPF_UpdateMemopadShoulderUIGlow2(class UMaterialInstanceDynamic* Material, float Alpha, bool bInteractable, class UObject* __WorldContext);
	void STATIC_BPF_UpdateMemopadShoulderUIGlow(class UMaterialInstanceDynamic* Material, class UImage* AlphaSource, bool bInteractable, class UObject* __WorldContext);
	void STATIC_BPF_InitMemopadShoulderUI(class UImage* Right, class UImage* Left, class UObject* __WorldContext, class UMaterialInstanceDynamic** RightMaterial, class UMaterialInstanceDynamic** LeftMaterial);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
