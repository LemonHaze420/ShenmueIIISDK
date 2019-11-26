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

// BlueprintGeneratedClass BPC_EventLevelStreaming.BPC_EventLevelStreaming_C
// 0x0058 (0x0148 - 0x00F0)
class UBPC_EventLevelStreaming_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F0(0x0008) (Transient, DuplicateTransient)
	struct FName                                       DataLevel;                                                // 0x00F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnFinishDataLoad;                                         // 0x0100(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFinishUnload;                                           // 0x0110(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFinishListLoad;                                         // 0x0120(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	TArray<struct FName>                               LevelList;                                                // 0x0130(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class AActor*                                      StreamingRequestOwner;                                    // 0x0140(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPC_EventLevelStreaming.BPC_EventLevelStreaming_C");
		return ptr;
	}


	void SetRequestOwner(class AActor* Actor);
	class AActor* GetRequestOwner();
	bool IsDataLevelSet();
	void StartListLevelLoad(TArray<struct FName>* NeedLevels);
	void FinishLevelStreaming(const struct FName& ID);
	void StreamDataLevel(const struct FName& Level);
	void UnloadLevels();
	void FinishedUnloadLevel();
	void UnloadDataLevelOnly();
	void StartStreaming(TArray<struct FName>* NeedLevels);
	void ExecuteUbergraph_BPC_EventLevelStreaming(int EntryPoint);
	void OnFinishListLoad__DelegateSignature();
	void OnFinishUnload__DelegateSignature();
	void OnFinishDataLoad__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
