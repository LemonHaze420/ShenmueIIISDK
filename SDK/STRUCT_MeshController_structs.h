#pragma once

// Name: Shenmue3, Version: 1.0.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct STRUCT_MeshController.STRUCT_MeshController
// 0x0040
struct FSTRUCT_MeshController
{
	struct FTransform                                  MeshTransform_7_84FDF1A54E43E57C4FDEC59CC7CDE8E0;         // 0x0000(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	class UStaticMesh*                                 Mesh_8_DCF20EB645297F69A019F69E9A65365F;                  // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EmissiveMaterialID_6_88E6537F43539926532AB1BC584667AB;    // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MeshScale_13_9A9DBBCE45C50B912508BC96FED2F30B;            // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
