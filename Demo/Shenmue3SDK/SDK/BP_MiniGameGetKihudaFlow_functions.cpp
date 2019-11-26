
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

// Function BP_MiniGameGetKihudaFlow.BP_MiniGameGetKihudaFlow_C.AddTicketItem
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGameGetKihudaFlow_C::AddTicketItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameGetKihudaFlow.BP_MiniGameGetKihudaFlow_C.AddTicketItem");

	ABP_MiniGameGetKihudaFlow_C_AddTicketItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameGetKihudaFlow.BP_MiniGameGetKihudaFlow_C.GetTicketItemID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<E_MiniGameBigWheelType> Type                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FName                   Name                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameGetKihudaFlow_C::GetTicketItemID(TEnumAsByte<E_MiniGameBigWheelType> Type, struct FName* Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameGetKihudaFlow.BP_MiniGameGetKihudaFlow_C.GetTicketItemID");

	ABP_MiniGameGetKihudaFlow_C_GetTicketItemID_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Name != nullptr)
		*Name = params.Name;
}


// Function BP_MiniGameGetKihudaFlow.BP_MiniGameGetKihudaFlow_C.GetMaterial
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<E_MiniGameBigWheelType> Type                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UMaterial*               Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameGetKihudaFlow_C::GetMaterial(TEnumAsByte<E_MiniGameBigWheelType> Type, class UMaterial** Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameGetKihudaFlow.BP_MiniGameGetKihudaFlow_C.GetMaterial");

	ABP_MiniGameGetKihudaFlow_C_GetMaterial_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
}


// Function BP_MiniGameGetKihudaFlow.BP_MiniGameGetKihudaFlow_C.UpdateTicketFlag
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGameGetKihudaFlow_C::UpdateTicketFlag()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameGetKihudaFlow.BP_MiniGameGetKihudaFlow_C.UpdateTicketFlag");

	ABP_MiniGameGetKihudaFlow_C_UpdateTicketFlag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameGetKihudaFlow.BP_MiniGameGetKihudaFlow_C.SpawnSecuencePlayer
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULevelSequence*          InSequence                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  AttachActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_SpawnableSequenceActor_C* SpawnObj                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameGetKihudaFlow_C::SpawnSecuencePlayer(class ULevelSequence* InSequence, class AActor* AttachActor, class ABP_SpawnableSequenceActor_C** SpawnObj)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameGetKihudaFlow.BP_MiniGameGetKihudaFlow_C.SpawnSecuencePlayer");

	ABP_MiniGameGetKihudaFlow_C_SpawnSecuencePlayer_Params params;
	params.InSequence = InSequence;
	params.AttachActor = AttachActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SpawnObj != nullptr)
		*SpawnObj = params.SpawnObj;
}


// Function BP_MiniGameGetKihudaFlow.BP_MiniGameGetKihudaFlow_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGameGetKihudaFlow_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameGetKihudaFlow.BP_MiniGameGetKihudaFlow_C.UserConstructionScript");

	ABP_MiniGameGetKihudaFlow_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameGetKihudaFlow.BP_MiniGameGetKihudaFlow_C.StartGetKihudaFlow
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              OffsetRelativeTrans            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_MiniGameGetKihudaFlow_C::StartGetKihudaFlow(const struct FTransform& OffsetRelativeTrans)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameGetKihudaFlow.BP_MiniGameGetKihudaFlow_C.StartGetKihudaFlow");

	ABP_MiniGameGetKihudaFlow_C_StartGetKihudaFlow_Params params;
	params.OffsetRelativeTrans = OffsetRelativeTrans;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameGetKihudaFlow.BP_MiniGameGetKihudaFlow_C.OnFinishedGetKihuda
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULevelSequencePlayer*    LevelSequencePlayer            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameGetKihudaFlow_C::OnFinishedGetKihuda(class ULevelSequencePlayer* LevelSequencePlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameGetKihudaFlow.BP_MiniGameGetKihudaFlow_C.OnFinishedGetKihuda");

	ABP_MiniGameGetKihudaFlow_C_OnFinishedGetKihuda_Params params;
	params.LevelSequencePlayer = LevelSequencePlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameGetKihudaFlow.BP_MiniGameGetKihudaFlow_C.OnStoppedPlayer
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGameGetKihudaFlow_C::OnStoppedPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameGetKihudaFlow.BP_MiniGameGetKihudaFlow_C.OnStoppedPlayer");

	ABP_MiniGameGetKihudaFlow_C_OnStoppedPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameGetKihudaFlow.BP_MiniGameGetKihudaFlow_C.ExecuteUbergraph_BP_MiniGameGetKihudaFlow
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameGetKihudaFlow_C::ExecuteUbergraph_BP_MiniGameGetKihudaFlow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameGetKihudaFlow.BP_MiniGameGetKihudaFlow_C.ExecuteUbergraph_BP_MiniGameGetKihudaFlow");

	ABP_MiniGameGetKihudaFlow_C_ExecuteUbergraph_BP_MiniGameGetKihudaFlow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameGetKihudaFlow.BP_MiniGameGetKihudaFlow_C.OnEndActorFlow__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_MiniGameGetKihudaFlow_C::OnEndActorFlow__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameGetKihudaFlow.BP_MiniGameGetKihudaFlow_C.OnEndActorFlow__DelegateSignature");

	ABP_MiniGameGetKihudaFlow_C_OnEndActorFlow__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
