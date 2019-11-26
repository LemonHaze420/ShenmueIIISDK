
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

// Function wgt_S3HelpCategory.wgt_S3HelpCategory_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uwgt_S3HelpCategory_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3HelpCategory.wgt_S3HelpCategory_C.Construct");

	Uwgt_S3HelpCategory_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3HelpCategory.wgt_S3HelpCategory_C.ExecuteUbergraph_wgt_S3HelpCategory
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_S3HelpCategory_C::ExecuteUbergraph_wgt_S3HelpCategory(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3HelpCategory.wgt_S3HelpCategory_C.ExecuteUbergraph_wgt_S3HelpCategory");

	Uwgt_S3HelpCategory_C_ExecuteUbergraph_wgt_S3HelpCategory_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
