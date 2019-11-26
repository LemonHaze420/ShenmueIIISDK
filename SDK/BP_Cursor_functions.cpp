
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

// Function BP_Cursor.BP_Cursor_C.PlaySelectAnim
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AnimTime                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Cursor_C::PlaySelectAnim(float* AnimTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Cursor.BP_Cursor_C.PlaySelectAnim");

	ABP_Cursor_C_PlaySelectAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimTime != nullptr)
		*AnimTime = params.AnimTime;
}


// Function BP_Cursor.BP_Cursor_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Cursor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Cursor.BP_Cursor_C.UserConstructionScript");

	ABP_Cursor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
