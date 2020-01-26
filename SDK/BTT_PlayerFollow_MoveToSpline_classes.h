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

// BlueprintGeneratedClass BTT_PlayerFollow_MoveToSpline.BTT_PlayerFollow_MoveToSpline_C
// 0x0038 (0x0100 - 0x00C8)
class UBTT_PlayerFollow_MoveToSpline_C : public UBTT_PlayerFollow_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00C8(0x0008) (Transient, DuplicateTransient)
	class ANPC_SplineMoveActor_C*                      spline;                                                   // 0x00D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ClosestPointOnSpline;                                     // 0x00D8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              ClosestDistanceOnSpline;                                  // 0x00E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class APawn*                                       PathingPawn;                                              // 0x00E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               CheckPathLength;                                          // 0x00F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00F1(0x0007) MISSED OFFSET
	class AActor*                                      PathingTarget;                                            // 0x00F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BTT_PlayerFollow_MoveToSpline.BTT_PlayerFollow_MoveToSpline_C");
		return ptr;
	}


	void UpdateClosestSplinePoint();
	void UpdateClosestSplineDistance();
	void StopPathing();
	void Finish(bool Success);
	bool IsPlayerInSpline(float Buffer);
	void OnFail_227D29014046C8BB113903BF06DFD651(TEnumAsByte<EPathFollowingResult> MovementResult);
	void OnSuccess_227D29014046C8BB113903BF06DFD651(TEnumAsByte<EPathFollowingResult> MovementResult);
	void ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void WaitAndRepath();
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_BTT_PlayerFollow_MoveToSpline(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
