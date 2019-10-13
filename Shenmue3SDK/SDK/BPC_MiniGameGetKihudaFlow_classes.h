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

// BlueprintGeneratedClass BPC_MiniGameGetKihudaFlow.BPC_MiniGameGetKihudaFlow_C
// 0x0071 (0x0161 - 0x00F0)
class UBPC_MiniGameGetKihudaFlow_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F0(0x0008) (Transient, DuplicateTransient)
	struct FScriptMulticastDelegate                    OnEndComponentFlow;                                       // 0x00F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class ABP_MiniGameGetKihudaFlow_C*                 RefFlowActor;                                             // 0x0108(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0110(0x0028) UNKNOWN PROPERTY: SoftObjectProperty BPC_MiniGameGetKihudaFlow.BPC_MiniGameGetKihudaFlow_C.TestSequence1
	unsigned char                                      UnknownData01[0x28];                                      // 0x0138(0x0028) UNKNOWN PROPERTY: SoftObjectProperty BPC_MiniGameGetKihudaFlow.BPC_MiniGameGetKihudaFlow_C.TestSequence2
	TEnumAsByte<E_MiniGameBigWheelType>                BigWheelType;                                             // 0x0160(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPC_MiniGameGetKihudaFlow.BPC_MiniGameGetKihudaFlow_C");
		return ptr;
	}


	void GetSequence(class ABP_MiniGameBase_C* MiniGame, class ULevelSequence** GetSequence, class ULevelSequence** LookSequence);
	void StartGetKihudaFlow(const struct FTransform& OffsetRelativeTrans, bool IsGetMoreTicket);
	void OnFinishedActorFlow();
	void ExecuteUbergraph_BPC_MiniGameGetKihudaFlow(int EntryPoint);
	void OnEndComponentFlow__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
