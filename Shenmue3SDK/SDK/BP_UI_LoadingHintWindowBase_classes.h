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

// BlueprintGeneratedClass BP_UI_LoadingHintWindowBase.BP_UI_LoadingHintWindowBase_C
// 0x0018 (0x0340 - 0x0328)
class ABP_UI_LoadingHintWindowBase_C : public AActor
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0328(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnWindowClose;                                            // 0x0330(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_UI_LoadingHintWindowBase.BP_UI_LoadingHintWindowBase_C");
		return ptr;
	}


	void ShowHP(int Type);
	void ShowHint(const struct FST_LoadingHintWindowParam& Params);
	void NotifyLoadingDone();
	void UserConstructionScript();
	void OnWindowClose__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
