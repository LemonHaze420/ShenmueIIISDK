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

// BlueprintGeneratedClass BP_CutsceneSubtitleStaticMeshActor.BP_CutsceneSubtitleStaticMeshActor_C
// 0x0011 (0x0349 - 0x0338)
class ABP_CutsceneSubtitleStaticMeshActor_C : public AStaticMeshActor
{
public:
	class UWidgetComponent*                            SubtitleWidget;                                           // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       SubtitleCharaName;                                        // 0x0340(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bTestUseReplaceString;                                    // 0x0348(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_CutsceneSubtitleStaticMeshActor.BP_CutsceneSubtitleStaticMeshActor_C");
		return ptr;
	}


	void GetSubtitleCharaName(struct FName* newParam);
	void UpdateSubtitleWidget(TArray<struct FName>* Labels);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
