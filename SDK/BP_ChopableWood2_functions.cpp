
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

// Function BP_ChopableWood2.BP_ChopableWood2_C.ChopActionFromRot
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                Rot                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_ChopableWood2_C::ChopActionFromRot(const struct FRotator& Rot)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChopableWood2.BP_ChopableWood2_C.ChopActionFromRot");

	ABP_ChopableWood2_C_ChopActionFromRot_Params params;
	params.Rot = Rot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ChopableWood2.BP_ChopableWood2_C.MakeRandomVector
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          x_max                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          x_min                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          y_max                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          y_min                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Z_Max                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Z_min                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 RandomtVector                  (Parm, OutParm, IsPlainOldData)

void ABP_ChopableWood2_C::MakeRandomVector(float x_max, float x_min, float y_max, float y_min, float Z_Max, float Z_min, struct FVector* RandomtVector)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChopableWood2.BP_ChopableWood2_C.MakeRandomVector");

	ABP_ChopableWood2_C_MakeRandomVector_Params params;
	params.x_max = x_max;
	params.x_min = x_min;
	params.y_max = y_max;
	params.y_min = y_min;
	params.Z_Max = Z_Max;
	params.Z_min = Z_min;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RandomtVector != nullptr)
		*RandomtVector = params.RandomtVector;
}


// Function BP_ChopableWood2.BP_ChopableWood2_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ChopableWood2_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChopableWood2.BP_ChopableWood2_C.UserConstructionScript");

	ABP_ChopableWood2_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ChopableWood2.BP_ChopableWood2_C.ChopAction
// (BlueprintCallable, BlueprintEvent)

void ABP_ChopableWood2_C::ChopAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChopableWood2.BP_ChopableWood2_C.ChopAction");

	ABP_ChopableWood2_C_ChopAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ChopableWood2.BP_ChopableWood2_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ChopableWood2_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChopableWood2.BP_ChopableWood2_C.ReceiveBeginPlay");

	ABP_ChopableWood2_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ChopableWood2.BP_ChopableWood2_C.DelayDestroy
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DelayTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ChopableWood2_C::DelayDestroy(float DelayTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChopableWood2.BP_ChopableWood2_C.DelayDestroy");

	ABP_ChopableWood2_C_DelayDestroy_Params params;
	params.DelayTime = DelayTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ChopableWood2.BP_ChopableWood2_C.ExecuteUbergraph_BP_ChopableWood2
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ChopableWood2_C::ExecuteUbergraph_BP_ChopableWood2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChopableWood2.BP_ChopableWood2_C.ExecuteUbergraph_BP_ChopableWood2");

	ABP_ChopableWood2_C_ExecuteUbergraph_BP_ChopableWood2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
