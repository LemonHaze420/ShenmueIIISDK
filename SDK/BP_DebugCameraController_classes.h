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

// BlueprintGeneratedClass BP_DebugCameraController.BP_DebugCameraController_C
// 0x0008 (0x0810 - 0x0808)
class ABP_DebugCameraController_C : public AS3DebugCameraController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0808(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_DebugCameraController.BP_DebugCameraController_C");
		return ptr;
	}


	void UserConstructionScript();
	void STATIC_ReceiveTick(float DeltaSeconds);
	void STATIC_ExecuteUbergraph_BP_DebugCameraController(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
