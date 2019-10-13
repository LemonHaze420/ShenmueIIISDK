
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

// Function SL_Hakkason_Minimap2D.SL_Hakkason_Minimap2D_C.BndEvt__TriggerBox_Sunflowerfield_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor*                  OverlappedActor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASL_Hakkason_Minimap2D_C::BndEvt__TriggerBox_Sunflowerfield_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_Minimap2D.SL_Hakkason_Minimap2D_C.BndEvt__TriggerBox_Sunflowerfield_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature");

	ASL_Hakkason_Minimap2D_C_BndEvt__TriggerBox_Sunflowerfield_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedActor = OverlappedActor;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Hakkason_Minimap2D.SL_Hakkason_Minimap2D_C.BndEvt__TriggerBox_Sunflowerfield_K2Node_ActorBoundEvent_1_ActorEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor*                  OverlappedActor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASL_Hakkason_Minimap2D_C::BndEvt__TriggerBox_Sunflowerfield_K2Node_ActorBoundEvent_1_ActorEndOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_Minimap2D.SL_Hakkason_Minimap2D_C.BndEvt__TriggerBox_Sunflowerfield_K2Node_ActorBoundEvent_1_ActorEndOverlapSignature__DelegateSignature");

	ASL_Hakkason_Minimap2D_C_BndEvt__TriggerBox_Sunflowerfield_K2Node_ActorBoundEvent_1_ActorEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedActor = OverlappedActor;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Hakkason_Minimap2D.SL_Hakkason_Minimap2D_C.ExecuteUbergraph_SL_Hakkason_Minimap2D
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASL_Hakkason_Minimap2D_C::ExecuteUbergraph_SL_Hakkason_Minimap2D(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_Minimap2D.SL_Hakkason_Minimap2D_C.ExecuteUbergraph_SL_Hakkason_Minimap2D");

	ASL_Hakkason_Minimap2D_C_ExecuteUbergraph_SL_Hakkason_Minimap2D_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
