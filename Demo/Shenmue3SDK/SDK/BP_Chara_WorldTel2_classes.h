#pragma once

// Name: S3Demo, Version: 0.90.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Chara_WorldTel2.BP_Chara_WorldTel2_C
// 0x0094 (0x09D0 - 0x093C)
class ABP_Chara_WorldTel2_C : public ABP_S3Character_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x093C(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0940(0x0008) (Transient, DuplicateTransient)
	class UBPC_S3_TalkComponent_C*                     BPC_S3_TalkComponent;                                     // 0x0948(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SM_BG_PublicTelephone_03;                                 // 0x0950(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FScriptMulticastDelegate                    ED_TelStart;                                              // 0x0958(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ED_TelEnd;                                                // 0x0968(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ED_TalkStart;                                             // 0x0978(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ED_TalkFinish;                                            // 0x0988(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               TelEndFlag;                                               // 0x0998(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0999(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    ED_CallStart;                                             // 0x09A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ED_CallEnd;                                               // 0x09B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ED_ButtonPush;                                            // 0x09C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Chara_WorldTel2.BP_Chara_WorldTel2_C");
		return ptr;
	}


	void GetTalkComponent(class UBPC_S3_TalkComponent_C** BPC_S3_TalkComponent);
	void UserConstructionScript();
	void TelStart();
	void TelEnd();
	void TalkStart();
	void CallStart();
	void CallEnd();
	void OnTalkFinished(class US3TalkComponent** TalkComponent, bool* interrupted);
	void ExecuteUbergraph_BP_Chara_WorldTel2(int EntryPoint);
	void ED_ButtonPush__DelegateSignature();
	void ED_CallEnd__DelegateSignature();
	void ED_CallStart__DelegateSignature();
	void ED_TalkFinish__DelegateSignature();
	void ED_TalkStart__DelegateSignature();
	void ED_TelEnd__DelegateSignature();
	void ED_TelStart__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
