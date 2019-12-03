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

// BlueprintGeneratedClass BPF_UI.BPF_UI_C
// 0x0000 (0x0028 - 0x0028)
class UBPF_UI_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPF_UI.BPF_UI_C");
		return ptr;
	}


	void STATIC_SetHeelDrinkNum_dispWidget(class UTextBlock* TextWidget, class UObject* __WorldContext);
	struct FText FormatMoneyText_dispWidget(int Value, int Min, int Max, class UObject* __WorldContext);
	void STATIC_SetDayTime_dispWidget(class UTextBlock* Day, class UTextBlock* Time, class UObject* __WorldContext);
	void STATIC_SetCursorVisibility_dispWidget(bool Condition, class UImage* Down, class UImage* Right, class UImage* Left, class UImage* Up, ES3ItemListMenuType MenuType, bool IsDialog, class UObject* __WorldContext);
	void SetMoneyStatus_dispWidget(class UTextBlock* BetMoney, class UTextBlock* Money, class UTextBlock* Meter, class UTextBlock* HeelDrink, class UObject* __WorldContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
