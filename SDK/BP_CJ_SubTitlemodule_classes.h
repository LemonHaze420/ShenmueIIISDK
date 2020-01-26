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

// BlueprintGeneratedClass BP_CJ_SubTitlemodule.BP_CJ_SubTitlemodule_C
// 0x0041 (0x0369 - 0x0328)
class ABP_CJ_SubTitlemodule_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FScriptMulticastDelegate                    SelectEnd;                                                // 0x0338(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	TArray<struct FST_CJ_SubTitleInfo>                 TextIDtable;                                              // 0x0348(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FName                                       SelectTextID;                                             // 0x0358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bWaitSubTitle;                                            // 0x0360(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0361(0x0003) MISSED OFFSET
	float                                              MessageTime;                                              // 0x0364(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ES3TextPathType                                    TextPathType;                                             // 0x0368(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_CJ_SubTitlemodule.BP_CJ_SubTitlemodule_C");
		return ptr;
	}


	bool isSubTitleDonw();
	void SelectText(struct FName* TextID);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_CJ_SubTitlemodule(int EntryPoint);
	void SelectEnd__DelegateSignature(const struct FName& Key);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
