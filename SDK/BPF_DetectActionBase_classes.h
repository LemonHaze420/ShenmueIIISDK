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

// BlueprintGeneratedClass BPF_DetectActionBase.BPF_DetectActionBase_C
// 0x0000 (0x0028 - 0x0028)
class UBPF_DetectActionBase_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPF_DetectActionBase.BPF_DetectActionBase_C");
		return ptr;
	}


	void STATIC_ForbidAllDetectAction(class AActor* Actor, class UObject* __WorldContext);
	void STATIC_PermitAllDetectAction(class AActor* Actor, class UObject* __WorldContext);
	void STATIC_ForbidWindowUI(class AActor* Actor, class UObject* __WorldContext);
	void STATIC_PermitWindowUI(class AActor* Actor, class UObject* __WorldContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
