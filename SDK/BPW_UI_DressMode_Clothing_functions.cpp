
#include "../SDK.h"

// Name: Shenmue3SDK, Version: 1.4.1

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BPW_UI_DressMode_Clothing.BPW_UI_DressMode_Clothing_C.ChangeRow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            RowIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_DressMode_Clothing_C::ChangeRow(int RowIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_DressMode_Clothing.BPW_UI_DressMode_Clothing_C.ChangeRow");

	UBPW_UI_DressMode_Clothing_C_ChangeRow_Params params;
	params.RowIndex = RowIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_DressMode_Clothing.BPW_UI_DressMode_Clothing_C.InitClothingLine
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int>                    SelectIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FName                   MeshName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FST_ClothingCategory    Category                       (BlueprintVisible, BlueprintReadOnly, Parm)
// TMap<EClothPartsType, struct FS3ClothPartsArray> PartsArray                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBPW_UI_DressMode_Clothing_C::InitClothingLine(const struct FName& MeshName, const struct FST_ClothingCategory& Category, TMap<EClothPartsType, struct FS3ClothPartsArray> PartsArray, TArray<int>* SelectIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_DressMode_Clothing.BPW_UI_DressMode_Clothing_C.InitClothingLine");

	UBPW_UI_DressMode_Clothing_C_InitClothingLine_Params params;
	params.MeshName = MeshName;
	params.Category = Category;
	params.PartsArray = PartsArray;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SelectIndex != nullptr)
		*SelectIndex = params.SelectIndex;
}


// Function BPW_UI_DressMode_Clothing.BPW_UI_DressMode_Clothing_C.InitIconButton
// (Public, BlueprintCallable, BlueprintEvent)

void UBPW_UI_DressMode_Clothing_C::InitIconButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_DressMode_Clothing.BPW_UI_DressMode_Clothing_C.InitIconButton");

	UBPW_UI_DressMode_Clothing_C_InitIconButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
