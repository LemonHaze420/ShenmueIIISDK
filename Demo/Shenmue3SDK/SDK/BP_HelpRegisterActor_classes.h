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

// BlueprintGeneratedClass BP_HelpRegisterActor.BP_HelpRegisterActor_C
// 0x0019 (0x0341 - 0x0328)
class ABP_HelpRegisterActor_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       HelpId;                                                   // 0x0338(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ES3HelpPriority                                    Priority;                                                 // 0x0340(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_HelpRegisterActor.BP_HelpRegisterActor_C");
		return ptr;
	}


	ES3HelpPriority GetHelpPriority();
	struct FName GetHelpName();
	bool IsActivateHelp();
	bool RegisterHelp(ES3HelpRegisterTiming Timing);
	bool UnregisterHelp(ES3HelpRegisterTiming Timing);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void ExecuteUbergraph_BP_HelpRegisterActor(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
