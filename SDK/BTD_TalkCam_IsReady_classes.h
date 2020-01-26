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

// BlueprintGeneratedClass BTD_TalkCam_IsReady.BTD_TalkCam_IsReady_C
// 0x0008 (0x00A8 - 0x00A0)
class UBTD_TalkCam_IsReady_C : public UBTDecorator_BlueprintBase
{
public:
	class ABP_AutoTalkCameraDirector_C*                OwnerRef;                                                 // 0x00A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BTD_TalkCam_IsReady.BTD_TalkCam_IsReady_C");
		return ptr;
	}


	bool PerformConditionCheck(class AActor* OwnerActor);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
