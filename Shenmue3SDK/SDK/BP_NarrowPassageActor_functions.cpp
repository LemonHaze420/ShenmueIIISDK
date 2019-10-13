
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

// Function BP_NarrowPassageActor.BP_NarrowPassageActor_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_NarrowPassageActor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NarrowPassageActor.BP_NarrowPassageActor_C.UserConstructionScript");

	ABP_NarrowPassageActor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NarrowPassageActor.BP_NarrowPassageActor_C.RequestIgnoreCollision
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AS3Character**           Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AS3Character**           Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         MinTime                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_NarrowPassageActor_C::RequestIgnoreCollision(class AS3Character** Player, class AS3Character** Target, float* MinTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NarrowPassageActor.BP_NarrowPassageActor_C.RequestIgnoreCollision");

	ABP_NarrowPassageActor_C_RequestIgnoreCollision_Params params;
	params.Player = Player;
	params.Target = Target;
	params.MinTime = MinTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NarrowPassageActor.BP_NarrowPassageActor_C.ExecuteUbergraph_BP_NarrowPassageActor
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_NarrowPassageActor_C::ExecuteUbergraph_BP_NarrowPassageActor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NarrowPassageActor.BP_NarrowPassageActor_C.ExecuteUbergraph_BP_NarrowPassageActor");

	ABP_NarrowPassageActor_C_ExecuteUbergraph_BP_NarrowPassageActor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
