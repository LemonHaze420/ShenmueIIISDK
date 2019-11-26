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

// BlueprintGeneratedClass BP_State_LookAtLead_Action.BP_State_LookAtLead_Action_C
// 0x0008 (0x0058 - 0x0050)
class UBP_State_LookAtLead_Action_C : public UBP_State_LookAtLead_C
{
public:
	class USplineComponent*                            SplineActor;                                              // 0x0050(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_State_LookAtLead_Action.BP_State_LookAtLead_Action_C");
		return ptr;
	}


	void SetSpline(class USplineComponent* spline);
	void LookAtSpline(bool bLookAt);
	void StateExit(float* Delta, bool* bProcessing);
	void StateEnter(float* Delta, bool* bProcessing);
	void StateUpdate(float* Delta, bool* bDummy);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
