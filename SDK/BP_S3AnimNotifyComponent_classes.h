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

// BlueprintGeneratedClass BP_S3AnimNotifyComponent.BP_S3AnimNotifyComponent_C
// 0x0060 (0x0150 - 0x00F0)
class UBP_S3AnimNotifyComponent_C : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x00F0(0x0050) UNKNOWN PROPERTY: SetProperty BP_S3AnimNotifyComponent.BP_S3AnimNotifyComponent_C.Notifies
	struct FScriptMulticastDelegate                    OnReceiveNotify;                                          // 0x0140(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_S3AnimNotifyComponent.BP_S3AnimNotifyComponent_C");
		return ptr;
	}


	void ReceiveNotify(const struct FName& Name);
	void ConsumeNotify(const struct FName& Name, bool* Exists);
	bool HasNotify(const struct FName& Name);
	void OnReceiveNotify__DelegateSignature(const struct FName& Name);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
