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

// BlueprintGeneratedClass BP_TalkMeshCollisionEnabler.BP_TalkMeshCollisionEnabler_C
// 0x0028 (0x0050 - 0x0028)
class UBP_TalkMeshCollisionEnabler_C : public UObject
{
public:
	TArray<TEnumAsByte<ECollisionEnabled>>             DefaultCollision;                                         // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance)
	TArray<class UPrimitiveComponent*>                 ModifiedMeshes;                                           // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance)
	struct FName                                       IgnoreCheckTag;                                           // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_TalkMeshCollisionEnabler.BP_TalkMeshCollisionEnabler_C");
		return ptr;
	}


	void EnableQueryCollisionOnActorsWithIgnore(TArray<class AActor*>* Actors, TArray<class AActor*>* ignoreActors);
	void EnableQueryCollisionForTalk(TArray<class AActor*>* Actors, TArray<class UPrimitiveComponent*>* BackupComponents);
	void EnableQueryCollisionOnActors(TArray<class AActor*>* Actors);
	void RestoreQueryCollision();
	void EnableQueryCollision(class UPrimitiveComponent* Primitives);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
