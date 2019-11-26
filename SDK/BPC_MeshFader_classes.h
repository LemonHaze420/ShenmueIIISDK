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

// BlueprintGeneratedClass BPC_MeshFader.BPC_MeshFader_C
// 0x0000 (0x0188 - 0x0188)
class UBPC_MeshFader_C : public UBTL_MeshFaderComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPC_MeshFader.BPC_MeshFader_C");
		return ptr;
	}


	void RegisterSiblingMeshes();
	void RegisterSiblingSkeletalMeshes();
	class UMaterialInterface* CreateFadeMaterial(class UMaterialInterface* SourceMaterial);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
