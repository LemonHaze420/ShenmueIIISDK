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

// Class S3CableComponent.S3CableActor
// 0x0008 (0x0330 - 0x0328)
class AS3CableActor : public AActor
{
public:
	class US3CableComponent*                           CableComponent;                                           // 0x0328(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class S3CableComponent.S3CableActor");
		return ptr;
	}

};


// Class S3CableComponent.S3CableComponent
// 0x0070 (0x0600 - 0x0590)
class US3CableComponent : public UMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0590(0x0010) MISSED OFFSET
	struct FVector                                     EndLocation;                                              // 0x05A0(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              CableLength;                                              // 0x05AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                NumSegments;                                              // 0x05B0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SubstepTime;                                              // 0x05B4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                SolverIterations;                                         // 0x05B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CableWidth;                                               // 0x05BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                NumSides;                                                 // 0x05C0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TileMaterial;                                             // 0x05C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bFreeze;                                                  // 0x05C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x05C9(0x0007) MISSED OFFSET
	TArray<struct FCableSocket>                        Sockets;                                                  // 0x05D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData02[0x20];                                      // 0x05E0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class S3CableComponent.S3CableComponent");
		return ptr;
	}


	void SetAttachEndTo(class AActor* Actor, const struct FName& ComponentProperty);
	bool GetTransformAlongCable(float Distance, struct FTransform* Transform);
	bool GetPointLocation(int Point, struct FVector* Location);
	class USceneComponent* GetAttachedComponent();
	class AActor* GetAttachedActor();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
