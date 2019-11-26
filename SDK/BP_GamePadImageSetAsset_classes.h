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

// BlueprintGeneratedClass BP_GamePadImageSetAsset.BP_GamePadImageSetAsset_C
// 0x0078 (0x00A8 - 0x0030)
class UBP_GamePadImageSetAsset_C : public UPrimaryDataAsset
{
public:
	class UBP_GamePadFaceButtonSetAsset_C*             Face_PlatformDefault;                                     // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBP_GamePadFaceButtonSetAsset_C*             Face_SmallColorful;                                       // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBP_GamePadFaceButtonSetAsset_C*             Face_Brush;                                               // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBP_GamePadFaceButtonSetAsset_C*             Face_BrushBorder;                                         // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBP_GamePadFaceButtonSetAsset_C*             Face_Pop;                                                 // 0x0050(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBP_GamePadFaceButtonSetAsset_C*             Face_Simon;                                               // 0x0058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBP_GamePadFaceButtonSetAsset_C*             Face_Blank;                                               // 0x0060(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBP_GamePadFaceButtonSetAsset_C*             Face_PopBack;                                             // 0x0068(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBP_GamePadShoulderSetAsset_C*               Shoulder_Default;                                         // 0x0070(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBP_GamePadShoulderSetAsset_C*               Shoulder_Brush;                                           // 0x0078(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBP_GamePadShoulderSetAsset_C*               Shoulder_BrushBorder;                                     // 0x0080(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBP_GamePadFaceButtonSetAsset_C*             Face_QTECommand;                                          // 0x0088(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBP_GamePadFaceButtonSetAsset_C*             Face_Symbol;                                              // 0x0090(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBP_GamePadFaceButtonSetAsset_C*             DPad_Default;                                             // 0x0098(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBP_GamePadFaceButtonSetAsset_C*             DPad_KS;                                                  // 0x00A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_GamePadImageSetAsset.BP_GamePadImageSetAsset_C");
		return ptr;
	}


	void GetFaceButtonImageSetNoDefault(TEnumAsByte<EFaceButtonImageStyle> Selection, class UBP_GamePadFaceButtonSetAsset_C** SET);
	class UBP_GamePadShoulderSetAsset_C* GetShoulderImageSet(TEnumAsByte<EShoulderButtonStyle> Selection);
	void GetDPadImageSet(TEnumAsByte<EDpadButtonImageStyle> Selection, class UBP_GamePadFaceButtonSetAsset_C** SET);
	void GetFaceButtonImageSet(TEnumAsByte<EFaceButtonImageStyle> Selection, class UBP_GamePadFaceButtonSetAsset_C** SET);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
