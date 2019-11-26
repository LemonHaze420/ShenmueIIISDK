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

// BlueprintGeneratedClass BPF_UserWidget.BPF_UserWidget_C
// 0x0000 (0x0028 - 0x0028)
class UBPF_UserWidget_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPF_UserWidget.BPF_UserWidget_C");
		return ptr;
	}


	void STATIC_BPF_SafeRemoveWidget(class UObject* __WorldContext, class UWidget** Widget);
	void STATIC_BPF_ReaddWidgetToHorizontalBox(class UHorizontalBox* Target, class UWidget* Content, class UObject* __WorldContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
