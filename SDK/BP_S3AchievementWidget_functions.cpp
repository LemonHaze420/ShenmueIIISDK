
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

// Function BP_S3AchievementWidget.BP_S3AchievementWidget_C.SetAchievementName
// (NetRequest, Exec, Native, NetMulticast, Public, Private, HasOutParms, HasDefaults, NetClient, BlueprintCallable)
// Parameters:
// struct FString                 AchievementName                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBP_S3AchievementWidget_C::SetAchievementName(const struct FString& AchievementName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AchievementWidget.BP_S3AchievementWidget_C.SetAchievementName");

	UBP_S3AchievementWidget_C_SetAchievementName_Params params;
	params.AchievementName = AchievementName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AchievementWidget.BP_S3AchievementWidget_C.Construct
// (Net, NetReliable, Native, Event, NetResponse, Public, Private, HasDefaults, DLLImport, BlueprintEvent)

void UBP_S3AchievementWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AchievementWidget.BP_S3AchievementWidget_C.Construct");

	UBP_S3AchievementWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AchievementWidget.BP_S3AchievementWidget_C.ExecuteUbergraph_BP_S3AchievementWidget
// (NetReliable, Event, NetResponse, Static, MulticastDelegate, Public, HasDefaults, DLLImport, BlueprintEvent)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_S3AchievementWidget_C::STATIC_ExecuteUbergraph_BP_S3AchievementWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AchievementWidget.BP_S3AchievementWidget_C.ExecuteUbergraph_BP_S3AchievementWidget");

	UBP_S3AchievementWidget_C_ExecuteUbergraph_BP_S3AchievementWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
