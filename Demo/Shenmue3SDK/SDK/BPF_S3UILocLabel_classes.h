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

// BlueprintGeneratedClass BPF_S3UILocLabel.BPF_S3UILocLabel_C
// 0x0000 (0x0028 - 0x0028)
class UBPF_S3UILocLabel_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPF_S3UILocLabel.BPF_S3UILocLabel_C");
		return ptr;
	}


	struct FText STATIC_BPF_GetLocalizedUIText(bool IsDesignTime, const struct FST_S3UILocLabel& LocLabel, class UObject* __WorldContext);
	void STATIC_BPF_InitLocalizedTextWidget(bool IsDesignTime, class UTextBlock* Widget, const struct FST_S3UILocLabel& LocLabel, class UObject* __WorldContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
