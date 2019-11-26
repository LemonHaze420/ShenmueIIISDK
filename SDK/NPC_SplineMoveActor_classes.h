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

// BlueprintGeneratedClass NPC_SplineMoveActor.NPC_SplineMoveActor_C
// 0x0031 (0x03B9 - 0x0388)
class ANPC_SplineMoveActor_C : public AS3SplineMoveActor
{
public:
	class UTextRenderComponent*                        TextRender;                                               // 0x0388(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class AActor*>                              WaitActors;                                               // 0x0390(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	TArray<float>                                      WaitActorDistances;                                       // 0x03A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class ABP_NPCLeadWaitPointEvent_C*                 FinalWaitEvent;                                           // 0x03B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               bCachedData;                                              // 0x03B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass NPC_SplineMoveActor.NPC_SplineMoveActor_C");
		return ptr;
	}


	int GetNextAvailableWaitPointIndex(int StartSearch);
	int GetFirstAvailableWaitPointIndex();
	void GetStartLocationAndRotation(struct FVector* Location, struct FRotator* Rotation);
	void TryStartWaitPointEvent(int Index, bool* Success);
	void GetWaitPointActor(int Index, class ABP_NPCLeadWaitPointEvent_C** Actor);
	void GetWidthAtSplineDistance(float Distance, float* Width);
	void GetWaitPointSplineDistance(int PointIndex, float* Next);
	void GetLocationAtDistance(float InDistance, struct FVector* OutLocation);
	void FindDistanceClosestToLocation(const struct FVector& InLocation, float* OutDistance);
	void GetNearLength(const struct FVector& pos, struct FVector* NearPos, float* NearLength);
	void InitSplinePoint();
	void GetCurrentLocationAndRotation(float NowLength, struct FVector* Location, float* MaxLength, float* RotZ);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
