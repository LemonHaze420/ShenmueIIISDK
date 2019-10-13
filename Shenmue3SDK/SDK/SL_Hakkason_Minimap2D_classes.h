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

// BlueprintGeneratedClass SL_Hakkason_Minimap2D.SL_Hakkason_Minimap2D_C
// 0x0008 (0x0338 - 0x0330)
class ASL_Hakkason_Minimap2D_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0330(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SL_Hakkason_Minimap2D.SL_Hakkason_Minimap2D_C");
		return ptr;
	}


	void BndEvt__TriggerBox_Sunflowerfield_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void BndEvt__TriggerBox_Sunflowerfield_K2Node_ActorBoundEvent_1_ActorEndOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void ExecuteUbergraph_SL_Hakkason_Minimap2D(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
