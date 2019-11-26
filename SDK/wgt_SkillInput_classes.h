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

// WidgetBlueprintGeneratedClass wgt_SkillInput.wgt_SkillInput_C
// 0x0024 (0x022C - 0x0208)
class Uwgt_SkillInput_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0208(0x0008) (Transient, DuplicateTransient)
	class UImage*                                      Button;                                                   // 0x0210(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TEnumAsByte<EFaceButtonImageStyle>                 Style;                                                    // 0x0218(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0219(0x0003) MISSED OFFSET
	struct FVector2D                                   ShoulderScale;                                            // 0x021C(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   PadScale;                                                 // 0x0224(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass wgt_SkillInput.wgt_SkillInput_C");
		return ptr;
	}


	void GetShoulderInputImage(TEnumAsByte<EGamepadShoulder> Selection, class UTexture2D** Image);
	void SetInputByShoulderButton(TEnumAsByte<EGamepadShoulder> Modifier);
	TEnumAsByte<EShoulderButtonStyle> GetShoulderStyle();
	void GetModifierInputImage(EBTL_HoldInputType Selection, class UTexture2D** Image);
	void SetStyle(TEnumAsByte<EFaceButtonImageStyle> Style);
	void SetInputByModifierButton(EBTL_HoldInputType Modifier);
	void SetInputByActionName(const struct FName& Selection);
	void GetAttackInputImage(const struct FName& Selection, class UTexture2D** Graphic);
	void Construct();
	void ExecuteUbergraph_wgt_SkillInput(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
