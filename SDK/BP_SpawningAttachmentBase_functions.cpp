
#include "../SDK.h"

// Name: Shenmue3SDK, Version: 1.4.1

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BP_SpawningAttachmentBase.BP_SpawningAttachmentBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_SpawningAttachmentBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpawningAttachmentBase.BP_SpawningAttachmentBase_C.UserConstructionScript");

	ABP_SpawningAttachmentBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpawningAttachmentBase.BP_SpawningAttachmentBase_C.RequestActionName
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ActionName                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SpawningAttachmentBase_C::RequestActionName(const struct FName& ActionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpawningAttachmentBase.BP_SpawningAttachmentBase_C.RequestActionName");

	ABP_SpawningAttachmentBase_C_RequestActionName_Params params;
	params.ActionName = ActionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpawningAttachmentBase.BP_SpawningAttachmentBase_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SpawningAttachmentBase_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpawningAttachmentBase.BP_SpawningAttachmentBase_C.ReceiveTick");

	ABP_SpawningAttachmentBase_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpawningAttachmentBase.BP_SpawningAttachmentBase_C.ExecuteUbergraph_BP_SpawningAttachmentBase
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SpawningAttachmentBase_C::ExecuteUbergraph_BP_SpawningAttachmentBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpawningAttachmentBase.BP_SpawningAttachmentBase_C.ExecuteUbergraph_BP_SpawningAttachmentBase");

	ABP_SpawningAttachmentBase_C_ExecuteUbergraph_BP_SpawningAttachmentBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
