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

// BlueprintGeneratedClass BP_MemoTextureDataManager.BP_MemoTextureDataManager_C
// 0x0008 (0x0338 - 0x0330)
class ABP_MemoTextureDataManager_C : public AS3MemoTextureDataManagerBase
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MemoTextureDataManager.BP_MemoTextureDataManager_C");
		return ptr;
	}


	void STATIC_GetTextureData(const struct FName& Label, struct FVector2D* Offset, class UTexture** TextureReference);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
