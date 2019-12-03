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

// BlueprintGeneratedClass BPF_MemoMap.BPF_MemoMap_C
// 0x0000 (0x0028 - 0x0028)
class UBPF_MemoMap_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPF_MemoMap.BPF_MemoMap_C");
		return ptr;
	}


	void STATIC_IsVisible(int FlagIndex, int SubFlagIndex, class UObject* __WorldContext, bool* IsVisible);
	void STATIC_SetVisibility(class UWidget* TextBlock, int Index, int SubFlagIndex, class UObject* __WorldContext);
	struct FText GetText(const struct FName& Label, class UObject* __WorldContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
