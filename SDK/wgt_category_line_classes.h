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

// WidgetBlueprintGeneratedClass wgt_category_line.wgt_category_line_C
// 0x0000 (0x0208 - 0x0208)
class Uwgt_category_line_C : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass wgt_category_line.wgt_category_line_C");
		return ptr;
	}


	void SetName(const struct FString& name_jp, const struct FString& name_eng);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
