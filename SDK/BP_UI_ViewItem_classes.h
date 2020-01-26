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

// BlueprintGeneratedClass BP_UI_ViewItem.BP_UI_ViewItem_C
// 0x00B0 (0x03D8 - 0x0328)
class ABP_UI_ViewItem_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              BaseSize;                                                 // 0x0340(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              baseCalcedSize;                                           // 0x0344(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0348(0x0028) UNKNOWN PROPERTY: SoftObjectProperty BP_UI_ViewItem.BP_UI_ViewItem_C.Mesh
	bool                                               bLock;                                                    // 0x0370(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0371(0x0003) MISSED OFFSET
	struct FRotator                                    Rotation;                                                 // 0x0374(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x0380(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x038C(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    ED_FinishMeshLoad;                                        // 0x0390(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	unsigned char                                      UnknownData03[0x28];                                      // 0x03A0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty BP_UI_ViewItem.BP_UI_ViewItem_C.StackMesh
	int                                                StockCount;                                               // 0x03C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    StockRotation;                                            // 0x03CC(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_UI_ViewItem.BP_UI_ViewItem_C");
		return ptr;
	}


	void ResetRotation();
	void SetLocation(const struct FVector& NewLocation);
	void SetItemData(class UStaticMesh* NewMesh, const struct FRotator& Rotation);
	void UserConstructionScript();
	void OnLoaded_218B594649E9FBD554432E8844E18A3C(class UObject* Loaded);
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_UI_ViewItem(int EntryPoint);
	void ED_FinishMeshLoad__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
