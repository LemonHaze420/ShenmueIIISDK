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

// BlueprintGeneratedClass RequestCounter.RequestCounter_C
// 0x0030 (0x0058 - 0x0028)
class URequestCounter_C : public UObject
{
public:
	TArray<class UObject*>                             Requesters;                                               // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnFirstRequestAdd;                                        // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnLastRequestRemove;                                      // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass RequestCounter.RequestCounter_C");
		return ptr;
	}


	struct FString CreateDebugString();
	void Clean();
	void HasRequestsFast(bool* bHasRequests);
	void HasRequests(bool* bHasRequests);
	void RemoveRequester(class UObject* Requester, bool* bNewlyRemoved);
	void AddRequester(class UObject* Requester, bool* bnewlyAdded);
	void OnLastRequestRemove__DelegateSignature();
	void OnFirstRequestAdd__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
