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

// UserDefinedStruct ST_PlayerPawnTableRow.ST_PlayerPawnTableRow
// 0x0050
struct FST_PlayerPawnTableRow
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty ST_PlayerPawnTableRow.ST_PlayerPawnTableRow.SoftAssetRef_12_09947B2344D1E6AA3F72728328ECE38B
	unsigned char                                      UnknownData01[0x28];                                      // 0x0028(0x0028) UNKNOWN PROPERTY: SoftObjectProperty ST_PlayerPawnTableRow.ST_PlayerPawnTableRow.SkillDisplayMesh_11_86C7DB84456679D8BA82EBB2F4BD878E
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
