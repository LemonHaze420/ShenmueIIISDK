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

// BlueprintGeneratedClass BP_Fising_BiteFish.BP_Fising_BiteFish_C
// 0x004F (0x0418 - 0x03C9)
class ABP_Fising_BiteFish_C : public ABP_Fishing_FreeMoveFish_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x03C9(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03D0(0x0008) (Transient, DuplicateTransient)
	bool                                               bFristBite;                                               // 0x03D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x03D9(0x0003) MISSED OFFSET
	float                                              AdjustDistance;                                           // 0x03DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ImpulseDistance;                                          // 0x03E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                PerfectBiteCount;                                         // 0x03E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                BiteCount;                                                // 0x03E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x03EC(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnPerfectBiteDispacher;                                   // 0x03F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               InsideBiteArea;                                           // 0x0400(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0401(0x0003) MISSED OFFSET
	float                                              TestFloat;                                                // 0x0404(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MoveTimer;                                                // 0x0408(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ArriveTime;                                               // 0x040C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsDisableBite;                                            // 0x0410(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0411(0x0003) MISSED OFFSET
	float                                              DisableFishMoveSpeed;                                     // 0x0414(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Fising_BiteFish.BP_Fising_BiteFish_C");
		return ptr;
	}


	void STATIC_DisableBite();
	void MoveToTargetInTime();
	void STATIC_SetTargetLocation(const struct FVector& TargetLocation, struct FVector* Output_Get);
	void UpdateBite();
	void UserConstructionScript();
	void STATIC_ReceiveTick(float DeltaSeconds);
	void STATIC_Initialize();
	void STATIC_ReceiveBeginPlay();
	void STATIC_DestroyReady();
	void STATIC_ExecuteUbergraph_BP_Fising_BiteFish(int EntryPoint);
	void STATIC_OnPerfectBiteDispacher__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
