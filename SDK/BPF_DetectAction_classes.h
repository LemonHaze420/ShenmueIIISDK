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

// BlueprintGeneratedClass BPF_DetectAction.BPF_DetectAction_C
// 0x0000 (0x0028 - 0x0028)
class UBPF_DetectAction_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPF_DetectAction.BPF_DetectAction_C");
		return ptr;
	}


	void ForbidAllDetectAction(class AActor* Actor, class UObject* __WorldContext);
	void PermitAllDetectAction(class AActor* Actor, class UObject* __WorldContext);
	void STATIC_ForbidWindowUI(class AActor* Actor, class UObject* __WorldContext);
	void STATIC_PermitWindowUI(class AActor* Actor, class UObject* __WorldContext);
	void getS3DetectAction(class UObject* __WorldContext, class ABP_S3DetectAction_C** BP_S3DetectAction);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
