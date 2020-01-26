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

// BlueprintGeneratedClass BP_ChobuBrazier.BP_ChobuBrazier_C
// 0x00C8 (0x0400 - 0x0338)
class ABP_ChobuBrazier_C : public AStaticMeshActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0338(0x0008) (Transient, DuplicateTransient)
	unsigned char                                      UnknownData00[0xC0];                                      // 0x0340(0x00C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ChobuBrazier.BP_ChobuBrazier_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ChangeTimeEvent(ES3DayTimeEvent EventType);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
