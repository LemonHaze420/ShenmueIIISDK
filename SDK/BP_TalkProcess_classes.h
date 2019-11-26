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

// BlueprintGeneratedClass BP_TalkProcess.BP_TalkProcess_C
// 0x0000 (0x0038 - 0x0038)
class UBP_TalkProcess_C : public UTalkEventProcessBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_TalkProcess.BP_TalkProcess_C");
		return ptr;
	}


	void GetCameraManager(class ABP_TalkCameraManager_C** TalkCameraManager, bool* bSuccess);
	void GetManager(class ABP_TalkEventManager_C** TalkEventManager, bool* bSuccess);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
