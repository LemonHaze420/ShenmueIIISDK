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

// BlueprintGeneratedClass BPC_ObjectLoader.BPC_ObjectLoader_C
// 0x002A (0x011A - 0x00F0)
class UBPC_ObjectLoader_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F0(0x0008) (Transient, DuplicateTransient)
	TArray<struct FST_ObjectLoadInfo>                  ObjectLoadingList;                                        // 0x00F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnLoadedObjectDispatcher;                                 // 0x0108(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               bLoadingObject;                                           // 0x0118(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAscendingOrder;                                          // 0x0119(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPC_ObjectLoader.BPC_ObjectLoader_C");
		return ptr;
	}


	void AssetLoadObject(struct FST_ObjectLoadInfo* LoadInfo);
	void RemoveLoadingList(const struct FString& LoadId);
	void AddLoadingList(const struct FString& LoadId);
	void OnLoaded_066D0130431550B75D2FBDB198B97FBC(class UObject* Loaded);
	void RequestLoadObject(const struct FString& LoadId);
	void StartLoadObject(const struct FST_ObjectLoadInfo& LoadObjInfo);
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BPC_ObjectLoader(int EntryPoint);
	void OnLoadedObjectDispatcher__DelegateSignature(const struct FString& LoadId, class UObject* LoadedObject);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
