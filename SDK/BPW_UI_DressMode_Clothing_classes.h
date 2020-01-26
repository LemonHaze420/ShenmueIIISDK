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

// WidgetBlueprintGeneratedClass BPW_UI_DressMode_Clothing.BPW_UI_DressMode_Clothing_C
// 0x0018 (0x0220 - 0x0208)
class UBPW_UI_DressMode_Clothing_C : public UUserWidget
{
public:
	class UVerticalBox*                                VerticalBox_51;                                           // 0x0208(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<class UBPW_UI_DressMode_Clothing_OneLine_C*> ClothingLineList;                                         // 0x0210(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_UI_DressMode_Clothing.BPW_UI_DressMode_Clothing_C");
		return ptr;
	}


	void ChangeRow(int RowIndex);
	void InitClothingLine(const struct FName& MeshName, const struct FST_ClothingCategory& Category, TMap<EClothPartsType, struct FS3ClothPartsArray> PartsArray, TArray<int>* SelectIndex);
	void InitIconButton();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
