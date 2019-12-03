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

// BlueprintGeneratedClass BTL_Launch_NPC.BTL_Launch_NPC_C
// 0x00A8 (0x00D0 - 0x0028)
class UBTL_Launch_NPC_C : public UObject
{
public:
	struct FName                                       Identifier;                                               // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  SpawnTransform;                                           // 0x0030(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	class UDataTable*                                  AttackTable;                                              // 0x0060(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBTL_NPCDataAsset*                           DataAssetHard;                                            // 0x0068(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0070(0x0028) UNKNOWN PROPERTY: SoftObjectProperty BTL_Launch_NPC.BTL_Launch_NPC_C.DataAsset
	struct FDataTableRowHandle                         OverrideParams;                                           // 0x0098(0x0010) (Edit, BlueprintVisible)
	struct FScriptMulticastDelegate                    FinishedLoading;                                          // 0x00A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	TEnumAsByte<EGlobalTeamCategory>                   Team;                                                     // 0x00B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00B9(0x0007) MISSED OFFSET
	TArray<struct FDataTableRowHandle>                 OtherParams;                                              // 0x00C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BTL_Launch_NPC.BTL_Launch_NPC_C");
		return ptr;
	}


	void STATIC_GetDataFromAsset(class UBTL_NPCDataAsset* Asset);
	void SetDefaultAsNeccessary(class UBTL_NPCDataAsset* DefaultDataAsset);
	void STATIC_SetHardDataAsset(class UBTL_NPCDataAsset* Asset);
	void FinishedLoading__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
