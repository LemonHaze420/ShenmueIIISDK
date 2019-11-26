
#include "../SDK.h"

// Name: Shenmue3, Version: 1.0.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BP_GamePadShoulderSetAsset.BP_GamePadShoulderSetAsset_C.GetImage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TEnumAsByte<EGamepadShoulder>  Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTexture2D* UBP_GamePadShoulderSetAsset_C::GetImage(TEnumAsByte<EGamepadShoulder> Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GamePadShoulderSetAsset.BP_GamePadShoulderSetAsset_C.GetImage");

	UBP_GamePadShoulderSetAsset_C_GetImage_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
