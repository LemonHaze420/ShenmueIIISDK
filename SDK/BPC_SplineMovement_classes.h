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

// BlueprintGeneratedClass BPC_SplineMovement.BPC_SplineMovement_C
// 0x0031 (0x0121 - 0x00F0)
class UBPC_SplineMovement_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F0(0x0008) (Transient, DuplicateTransient)
	float                                              SplineSpeed;                                              // 0x00F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MoveDistance;                                             // 0x00FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bLoopSpline;                                              // 0x0100(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bReturnSpline;                                            // 0x0101(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bReverse;                                                 // 0x0102(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0103(0x0005) MISSED OFFSET
	struct FScriptMulticastDelegate                    ArrivedEvent;                                             // 0x0108(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class USplineComponent*                            RefSpline;                                                // 0x0118(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               bUpdating;                                                // 0x0120(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPC_SplineMovement.BPC_SplineMovement_C");
		return ptr;
	}


	void UpdateSpline(float Delta, bool* bArrived);
	void GetSplineCurrentLocationAndRotation(float Length, bool Loop, struct FVector* Location, struct FVector* Direction, struct FRotator* Rotation);
	void ForceMoveSpline();
	void SetSpline(class USplineComponent* RefSpline, float Speed, bool StartForceMove);
	void PauseSpline(bool IsPause);
	void SplineMovingProcess(bool* Result);
	void AddSplineMoveDistance(float AddDistance);
	void SetSplineMoveDistance(float NewDistance);
	void GetSplineLength(float* Length);
	void IsArrivedSpline(bool* IsArrived);
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BPC_SplineMovement(int EntryPoint);
	void ArrivedEvent__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
