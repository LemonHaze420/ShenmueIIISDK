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

// BlueprintGeneratedClass BPF_RequestCounter.BPF_RequestCounter_C
// 0x0000 (0x0028 - 0x0028)
class UBPF_RequestCounter_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPF_RequestCounter.BPF_RequestCounter_C");
		return ptr;
	}


	void STATIC_BPF_CreateRequestCounter(class UObject* __WorldContext, class URequestCounter_C** Reference);
	void STATIC_BPF_RemoveRequest(class UObject* RequestingObject, class UObject* __WorldContext, class URequestCounter_C** RequestCounterReference, bool* NewlyRemoved);
	void STATIC_BPF_AddRequest(class UObject* RequestingObject, class URequestCounter_C* RequestCounter, class UObject* __WorldContext, class URequestCounter_C** Reference, bool* NewlyRequested);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
