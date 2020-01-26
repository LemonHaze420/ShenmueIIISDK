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

// BlueprintGeneratedClass BPF_DebugMenu.BPF_DebugMenu_C
// 0x0000 (0x0028 - 0x0028)
class UBPF_DebugMenu_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPF_DebugMenu.BPF_DebugMenu_C");
		return ptr;
	}


	void STATIC_CheckPressButton(const struct FKeyEvent& InKeyEvent, class UPanelWidget* PanelWidget, class UObject* __WorldContext, bool* Press);
	void STATIC_GetDebugMenu(class UObject* __WorldContext, class UBW_DebugMenu_C** DebugMenu);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
