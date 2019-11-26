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

// AnimBlueprintGeneratedClass SubABP_Grab.SubABP_Grab_C
// 0x20DD (0x243D - 0x0360)
class USubABP_Grab_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_3C072A0542F29746C5FE6EA16D6804EB;      // 0x0368(0x0048)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_19377CE5462D9DB570DD7D96A6186A21;// 0x03B0(0x0070)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_B337E4D348BE74F44C0E7D8CB1321634;// 0x0420(0x00E0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_570CC54C42C450B278B744BF6744CBB2;// 0x0500(0x00E0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_0E6F143B443BE0C7021BD79570F1F31C;// 0x05E0(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_150FD8FA4208760CCCE565A2BBC0B4B8;// 0x06C0(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_D4C7C48843932F295DFE759E467BD2FF;// 0x0710(0x0050)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_567DDB6D4C775863F5CD8EB548C0EBD9;// 0x0760(0x0070)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_4DDD6A7E48790121ECAB2C8985CD437C;// 0x07D0(0x00E0)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_C2AAAF0F4C89BCDA2DC109B3AE999D61;// 0x08B0(0x0070)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_61AB94F24B1967C1C691A3B007301DC7;// 0x0920(0x00E0)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_E280B4D9423985EC885D41813644F934;// 0x0A00(0x0070)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_84A26C8E42103621557E1FB1E8D10861;// 0x0A70(0x00E0)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_0482EB604FA09D8849ECDDA4769202DF;// 0x0B50(0x0070)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_622F0B154886EC6A3CED7F9F33569FD0;// 0x0BC0(0x00E0)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_565AEAA548298064ADEBF89D438C15B4;// 0x0CA0(0x0070)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_C2D4C1534F1EE92C29AA409655A833B0;// 0x0D10(0x00E0)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_C536418B48231CA1EE5A54B8B78CA8CE;// 0x0DF0(0x0070)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_1C72BE2A40A3DBE3664C2683C739A663;// 0x0E60(0x00E0)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_54D261244689807764D374B77605F380;// 0x0F40(0x0070)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_F17F8C73491AD1C7F542C39EC792A388;// 0x0FB0(0x00E0)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_E3E8D9614ACCBDB72FA13DBA0F20D37B;// 0x1090(0x0070)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_008D42534447E08BB49560B3AD5EF8BE;// 0x1100(0x00E0)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_04749C2E4C7B0768CFF67E99193FC80D;// 0x11E0(0x0070)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_6D6B634C46EDCF43D8288AB26D28D0E3;// 0x1250(0x00E0)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_5CD85EA6404AC9DCE458448E07B8B996;// 0x1330(0x0070)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_96D7A08A4B536A03C48E178DE5A69B37;// 0x13A0(0x00E0)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_E40701264EE04C4F663E9E87EDF4E57F;// 0x1480(0x0070)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_74EA87B4451FCD238B99548EF13541DD;// 0x14F0(0x00E0)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_3BE61BA4451508B644ED258BF555C675;// 0x15D0(0x0070)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_B7E8114C41EA3316001CACBC0FDE796E;// 0x1640(0x00E0)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_C69A9BEB4E358F6131F2FB80B41A331C;// 0x1720(0x0070)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_81A83D6246C1BA4DEAFBF6B0CAF5CE06;// 0x1790(0x00E0)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_D8C019CC49B97D5028C652A52B1A3F2C;// 0x1870(0x0070)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_AEDFF5A94F73B25CB25FC388600BC374;// 0x18E0(0x00E0)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_1276F4B048DD1630457E27B438428FBA;// 0x19C0(0x0070)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_AB53D1B140339DBF6545EC9668D68369;// 0x1A30(0x00E0)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_B13BBE6A49F6900AE246258DDB000001;// 0x1B10(0x0070)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_B2C77B634AB5631DE006E3BBF25916E5;// 0x1B80(0x00E0)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_0B44694445C9783F77151492820F553E;// 0x1C60(0x0070)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_7786D5DD49E81C9F38783988D5D39B8E;// 0x1CD0(0x00E0)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_5894D8074E0C904E0024EF8EF2EA9460;// 0x1DB0(0x0070)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_FA68E6A94AAEE84330F775835ED733B0;// 0x1E20(0x00E0)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_2DF7C37A4F123FF85B0EC7AE5E4A0AAF;// 0x1F00(0x0070)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_9C010BAB49423F414A3ACDA18C2507F1;// 0x1F70(0x00E0)
	struct FAnimNode_SubInput                          AnimGraphNode_SubInput_1C41187D44CCA7BF33670D82A446C9AB;  // 0x2050(0x0068)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_A712509C492F4FADAF125C8B44D31F3F;// 0x20B8(0x00D0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_85572A4242F415EBF6EA1F9D1E02A329;// 0x2188(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_A3E77EF94E10E49AACEC97BCC260CA42;// 0x2268(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_5457AB6B40907EC709FB048873775E49;// 0x22B8(0x0050)
	float                                              HandBoneAnimationTime;                                    // 0x2308(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x230C(0x0004) MISSED OFFSET
	TMap<struct FName, float>                          FingerBoneAnimationTimes;                                 // 0x2310(0x0050) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance)
	class UAnimSequence*                               GrabSequence;                                             // 0x2360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               ThumbBones;                                               // 0x2368(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance)
	TArray<struct FName>                               IndexBones;                                               // 0x2378(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance)
	TArray<struct FName>                               MiddleBones;                                              // 0x2388(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance)
	TArray<struct FName>                               RingBones;                                                // 0x2398(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance)
	TArray<struct FName>                               PinkyBones;                                               // 0x23A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance)
	TArray<struct FName>                               AllFingerBones;                                           // 0x23B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x50];                                      // 0x23C8(0x0050) UNKNOWN PROPERTY: SetProperty SubABP_Grab.SubABP_Grab_C.FingerBonesFinishedAnimation
	bool                                               Playing;                                                  // 0x2418(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x2419(0x0007) MISSED OFFSET
	TArray<class AActor*>                              OverlappedActors;                                         // 0x2420(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               DrawDebug;                                                // 0x2430(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x2431(0x0003) MISSED OFFSET
	float                                              BlendInTime;                                              // 0x2434(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BlendOutTime;                                             // 0x2438(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Blend;                                                    // 0x243C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass SubABP_Grab.SubABP_Grab_C");
		return ptr;
	}


	void RewindBoneAnimTime(const struct FName& SocketName);
	void IsPlaying(bool* Finished);
	void StartBlendIn();
	void StartBlendOut();
	void GetOverlappedActors(TArray<class AActor*>* Actors);
	void IsFinished(bool* Finished);
	void ResetAnimation(float ResetTime);
	void InitColliders(TArray<class UPrimitiveComponent*>* Primitives);
	void PauseBoneAndParents(const struct FName& Bone);
	void StartAnimation(float StartTime);
	void GetBoneAnimTime(const struct FName& BoneName, float* Time);
	void GetParentFingerBones(const struct FName& Bone, TArray<struct FName>* Bones);
	void SetBoneAnimTime(const struct FName& SocketName, float Time);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SubABP_Grab_AnimGraphNode_SequenceEvaluator_19377CE5462D9DB570DD7D96A6186A21();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SubABP_Grab_AnimGraphNode_SequenceEvaluator_567DDB6D4C775863F5CD8EB548C0EBD9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SubABP_Grab_AnimGraphNode_SequenceEvaluator_C2AAAF0F4C89BCDA2DC109B3AE999D61();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SubABP_Grab_AnimGraphNode_SequenceEvaluator_E280B4D9423985EC885D41813644F934();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SubABP_Grab_AnimGraphNode_SequenceEvaluator_0482EB604FA09D8849ECDDA4769202DF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SubABP_Grab_AnimGraphNode_SequenceEvaluator_565AEAA548298064ADEBF89D438C15B4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SubABP_Grab_AnimGraphNode_SequenceEvaluator_C536418B48231CA1EE5A54B8B78CA8CE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SubABP_Grab_AnimGraphNode_SequenceEvaluator_54D261244689807764D374B77605F380();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SubABP_Grab_AnimGraphNode_SequenceEvaluator_E3E8D9614ACCBDB72FA13DBA0F20D37B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SubABP_Grab_AnimGraphNode_SequenceEvaluator_04749C2E4C7B0768CFF67E99193FC80D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SubABP_Grab_AnimGraphNode_SequenceEvaluator_5CD85EA6404AC9DCE458448E07B8B996();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SubABP_Grab_AnimGraphNode_SequenceEvaluator_E40701264EE04C4F663E9E87EDF4E57F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SubABP_Grab_AnimGraphNode_SequenceEvaluator_3BE61BA4451508B644ED258BF555C675();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SubABP_Grab_AnimGraphNode_SequenceEvaluator_C69A9BEB4E358F6131F2FB80B41A331C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SubABP_Grab_AnimGraphNode_SequenceEvaluator_D8C019CC49B97D5028C652A52B1A3F2C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SubABP_Grab_AnimGraphNode_SequenceEvaluator_1276F4B048DD1630457E27B438428FBA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SubABP_Grab_AnimGraphNode_SequenceEvaluator_B13BBE6A49F6900AE246258DDB000001();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SubABP_Grab_AnimGraphNode_SequenceEvaluator_0B44694445C9783F77151492820F553E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SubABP_Grab_AnimGraphNode_SequenceEvaluator_5894D8074E0C904E0024EF8EF2EA9460();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SubABP_Grab_AnimGraphNode_SequenceEvaluator_2DF7C37A4F123FF85B0EC7AE5E4A0AAF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SubABP_Grab_AnimGraphNode_BlendListByBool_A712509C492F4FADAF125C8B44D31F3F();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void BlueprintInitializeAnimation();
	void OnBoneOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ExecuteUbergraph_SubABP_Grab(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
