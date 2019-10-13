#pragma once

// Name: S3Demo, Version: 0.90.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct ItemListItemTable.ItemListItemTable
// 0x00C5
struct FItemListItemTable
{
	int                                                index_7_43A42D964EF676CC48A54C8486F933A7;                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                gachaCategory_5_C5A450664449808FAA8326AB2A139900;         // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     name_10_991E3B344CF95F7761827C91706853C0;                 // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FVector                                     posPivot_20_9973E3CF45982D858183119D91F3B635;             // 0x0018(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     rotPivot_18_6F760B04444223EB42FC8095925F26BB;             // 0x0024(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     defRot_30_F19FC01644EAECA454A37C84F5739DAC;               // 0x0030(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     rotAdd_33_DD42F56A49FA2619C917989E27108586;               // 0x003C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              lastRate_27_46A383274BA22F43B6595BBC1D45D4BF;             // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	unsigned char                                      UnknownData01[0x28];                                      // 0x004C(0x0028) UNKNOWN PROPERTY: SoftObjectProperty ItemListItemTable.ItemListItemTable.meshRef_50_E4D259EE4F640686D81446BA6AE8F865
	unsigned char                                      UnknownData02[0x28];                                      // 0x0078(0x0028) UNKNOWN PROPERTY: SoftObjectProperty ItemListItemTable.ItemListItemTable.skeltalMeshRef_51_DB1324BA42BB0D6A412525AB878D7F5D
	class UAnimSequence*                               anim_24_F0A409C0477DDB5B0D5191BD4245E9EC;                 // 0x00A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                num_36_A5799955434CFF9A27DE26A11D964655;                  // 0x00A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                item_id_39_A36C49C54A2E018BF58FD98DCA2C7E54;              // 0x00AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                sell_price_42_8A46CFAD45256FCFE04EB4B60BD94F2B;           // 0x00B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                value_45_4681C22E4B4F9776073BF7A32B08895E;                // 0x00B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                buy_price_49_E43EFDCC4B6F136340B693BEF4782CD2;            // 0x00B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               loaded_53_136644964D74C6FBD2479F9ECAEC4809;               // 0x00BC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x00BD(0x0003) MISSED OFFSET
	int                                                num_max_56_4AC8C3EF41DD0D06F29E41ACD4631DAA;              // 0x00C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ES3ItemDataRarity                                  rarity_59_5ACA883643499B50CCF0CCA2EF16BFB8;               // 0x00C4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
