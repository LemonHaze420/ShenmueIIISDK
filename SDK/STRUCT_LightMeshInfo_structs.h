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

// UserDefinedStruct STRUCT_LightMeshInfo.STRUCT_LightMeshInfo
// 0x0018
struct FSTRUCT_LightMeshInfo
{
	class UStaticMesh*                                 Mesh_19_3E1040EE4832CD377D3C75844D315D10;                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                GlowMaterialID_21_9F9A59E84549EC56FCEF50B2419B39A4;       // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    DynamicMaterialInstance_23_1AD49D1C47C8F35C79978F8A95283F7B;// 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
