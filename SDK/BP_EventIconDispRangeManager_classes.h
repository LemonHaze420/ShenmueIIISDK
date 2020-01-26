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

// BlueprintGeneratedClass BP_EventIconDispRangeManager.BP_EventIconDispRangeManager_C
// 0x0018 (0x0340 - 0x0328)
class ABP_EventIconDispRangeManager_C : public AS3EventIconManager
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0328(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FScriptMulticastDelegate                    CatchEventSign;                                           // 0x0330(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_EventIconDispRangeManager.BP_EventIconDispRangeManager_C");
		return ptr;
	}


	void SetEventIconDisp(const struct FString& EventName, bool Invalid);
	void UserConstructionScript();
	void CatchEventSign__DelegateSignature(const struct FString& EventName);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
