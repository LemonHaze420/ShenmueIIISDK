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

// BlueprintGeneratedClass AdobeMudWall_Spline.AdobeMudWall_Spline_C
// 0x0120 (0x0448 - 0x0328)
class AAdobeMudWall_Spline_C : public AActor
{
public:
	class USplineComponent*                            spline;                                                   // 0x0328(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             Scene;                                                    // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMesh*                                 StartMesh_01;                                             // 0x0338(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 StartMesh_02;                                             // 0x0340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 StartMesh_03;                                             // 0x0348(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 StartMesh_04;                                             // 0x0350(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 EndMesh_01;                                               // 0x0358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 EndMesh_02;                                               // 0x0360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 EndMesh_03;                                               // 0x0368(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               RandomSplineMeshes_;                                      // 0x0370(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bClosedLoop;                                              // 0x0371(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0372(0x0002) MISSED OFFSET
	struct FRandomStream                               Random_Seed;                                              // 0x0374(0x0008) (Edit, BlueprintVisible)
	float                                              Spacing;                                                  // 0x037C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 Middle_Mesh01;                                            // 0x0380(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 MiddleMesh02;                                             // 0x0388(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 MiddleMesh03;                                             // 0x0390(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 MiddleMesh04;                                             // 0x0398(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TangentScale;                                             // 0x03A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionEnabled>                     Collision_For_SplineMeshes_;                              // 0x03A4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               StartMeshesOn_;                                           // 0x03A5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               StartMesh_2;                                              // 0x03A6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               StartMesh_3;                                              // 0x03A7(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               StartMesh_4;                                              // 0x03A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               StartMesh_5;                                              // 0x03A9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               StartMesh_None;                                           // 0x03AA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x03AB(0x0001) MISSED OFFSET
	int                                                StartMeshIndex;                                           // 0x03AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UStaticMesh*                                 EndMesh_04;                                               // 0x03B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               EndMeshOn_;                                               // 0x03B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               EndMesh_2;                                                // 0x03B9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               EndMesh_3;                                                // 0x03BA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               EndMesh_4;                                                // 0x03BB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               EndMesh_5;                                                // 0x03BC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               EndMesh_None;                                             // 0x03BD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x03BE(0x0002) MISSED OFFSET
	int                                                EndMeshIndex;                                             // 0x03C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x03C4(0x0004) MISSED OFFSET
	class USplineMeshComponent*                        NewVar;                                                   // 0x03C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	int                                                CurrentSplineIndex;                                       // 0x03D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                NumberOfSplinePoints;                                     // 0x03D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                NextSplineIndex;                                          // 0x03D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     StartLocation;                                            // 0x03DC(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     StartTangent;                                             // 0x03E8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     EndLocation;                                              // 0x03F4(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     EndTangent;                                               // 0x0400(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ECollisionEnabled>                     CollisionsStartEndMeshes_;                                // 0x040C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x040D(0x0003) MISSED OFFSET
	int                                                Use_Mesh_012_or_3;                                        // 0x0410(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRandomStream                               Random_Seed_Not_Broken;                                   // 0x0414(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              YMultiplier;                                              // 0x041C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ZMultiplier;                                              // 0x0420(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0424(0x0004) MISSED OFFSET
	struct FName                                       CollisionProfileName;                                     // 0x0428(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FCollisionProfileName                       CollisionProfile;                                         // 0x0430(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FSTRUCT_SplineMeshSetting>           SplineMeshOverrides;                                      // 0x0438(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AdobeMudWall_Spline.AdobeMudWall_Spline_C");
		return ptr;
	}


	void CheckForAssignedMesh(int Index, bool* IndexIsAssigned, class UStaticMesh** Mesh);
	class UStaticMesh* RandomSplineMesh();
	void EndMeshSelection();
	void StartMeshSelection();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
