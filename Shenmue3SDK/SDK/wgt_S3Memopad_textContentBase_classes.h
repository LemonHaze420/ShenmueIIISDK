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

// WidgetBlueprintGeneratedClass wgt_S3Memopad_textContentBase.wgt_S3Memopad_textContentBase_C
// 0x0008 (0x0210 - 0x0208)
class Uwgt_S3Memopad_textContentBase_C : public US3MemopadTextWidget
{
public:
	struct FVector2D                                   DrawSize;                                                 // 0x0208(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass wgt_S3Memopad_textContentBase.wgt_S3Memopad_textContentBase_C");
		return ptr;
	}


	void UpdateDisplay(const struct FString& Body, const struct FST_RubyInfo& RubyInfo, int MemoId, bool* newParam);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
