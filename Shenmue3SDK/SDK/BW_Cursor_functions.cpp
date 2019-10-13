
#include "../SDK.h"

// Name: S3Demo, Version: 0.90.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BW_Cursor.BW_Cursor_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBW_Cursor_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Cursor.BW_Cursor_C.Construct");

	UBW_Cursor_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_Cursor.BW_Cursor_C.ExecuteUbergraph_BW_Cursor
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_Cursor_C::ExecuteUbergraph_BW_Cursor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Cursor.BW_Cursor_C.ExecuteUbergraph_BW_Cursor");

	UBW_Cursor_C_ExecuteUbergraph_BW_Cursor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
