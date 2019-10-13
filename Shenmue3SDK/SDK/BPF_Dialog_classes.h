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

// BlueprintGeneratedClass BPF_Dialog.BPF_Dialog_C
// 0x0000 (0x0028 - 0x0028)
class UBPF_Dialog_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPF_Dialog.BPF_Dialog_C");
		return ptr;
	}


	void STATIC_GetPlatformCodeLabel(class UObject* __WorldContext, struct FName* Label);
	void STATIC_AllowRewardDialog(ES3PlayerBehavior ID, class UObject* __WorldContext, bool* Allow);
	void STATIC_CanShowDialog(class UObject* __WorldContext, bool* CAN);
	void STATIC_OverrideDialogButton(const struct FST_GeneralWindowParam& Param, const struct FName& DecideLabel, TEnumAsByte<EN_GeneralWindow_Button> DecideIcon, const struct FName& CancelLabel, TEnumAsByte<EN_GeneralWindow_Button> CancelIcon, class UObject* __WorldContext, struct FST_GeneralWindowParam* newParam);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
