#pragma once

// Name: Shenmue3, Version: 1.0.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct ST_GeneralWindowParam.ST_GeneralWindowParam
// 0x0060
struct FST_GeneralWindowParam
{
	struct FVector2D                                   SIze_2_B715A4E746C323E1BDA175A529EA6A54;                  // 0x0000(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	TArray<struct FST_GeneralWindow_Text>              TextList_9_89850DF14E059A8E3489109AE48915C8;              // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FST_GeneralWindow_Image>             ImageList_10_C47C423A44B4AF93D40E28B73495DEF1;            // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FST_GeneralWindow_Button                    ButtonLeft_14_2F6E4E6E40D2ABFFECC1B9ADAD540008;           // 0x0028(0x0018) (Edit, BlueprintVisible)
	struct FST_GeneralWindow_Button                    ButtonRight_16_E1E21BD744997A59DDB2DB9E2743A5AB;          // 0x0040(0x0018) (Edit, BlueprintVisible)
	class AActor*                                      Executor_19_86E042664C662D3151FBDBABF85340B3;             // 0x0058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
