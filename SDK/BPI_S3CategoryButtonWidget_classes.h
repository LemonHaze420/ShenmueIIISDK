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

// BlueprintGeneratedClass BPI_S3CategoryButtonWidget.BPI_S3CategoryButtonWidget_C
// 0x0000 (0x0028 - 0x0028)
class UBPI_S3CategoryButtonWidget_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_S3CategoryButtonWidget.BPI_S3CategoryButtonWidget_C");
		return ptr;
	}


	void STATIC_SetButtonSelected(bool bSelected);
	void STATIC_SetCursorEnabled(bool bEnabled);
	void STATIC_SetText(const struct FText& Text);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
