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

// BlueprintGeneratedClass BPF_MiniMap.BPF_MiniMap_C
// 0x0000 (0x0028 - 0x0028)
class UBPF_MiniMap_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPF_MiniMap.BPF_MiniMap_C");
		return ptr;
	}


	void STATIC_GetS3MinimapManager(class UObject* __WorldContext, class ABP_MiniMap2DManager_C** MinimapManager);
	void STATIC_GetS3MinimapWidget(class UObject* __WorldContext, class UWBP_MiniMap2D_C** MiniMap);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
