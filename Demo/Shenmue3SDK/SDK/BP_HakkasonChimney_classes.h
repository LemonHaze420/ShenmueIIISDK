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

// BlueprintGeneratedClass BP_HakkasonChimney.BP_HakkasonChimney_C
// 0x0008 (0x03A8 - 0x03A0)
class ABP_HakkasonChimney_C : public ABP_S3SmokeEffect_C
{
public:
	class UStaticMeshComponent*                        Entotsu_03;                                               // 0x03A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_HakkasonChimney.BP_HakkasonChimney_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
