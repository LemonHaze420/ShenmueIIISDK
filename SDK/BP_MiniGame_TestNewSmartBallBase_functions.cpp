
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

// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.CreateDummyBalls
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bDummy                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_TestNewSmartBallBase_C::CreateDummyBalls(bool* bDummy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.CreateDummyBalls");

	ABP_MiniGame_TestNewSmartBallBase_C_CreateDummyBalls_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bDummy != nullptr)
		*bDummy = params.bDummy;
}


// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.OverlapOneSideCollision
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Object                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_TestNewSmartBallBase_C::OverlapOneSideCollision(class UObject* Object)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.OverlapOneSideCollision");

	ABP_MiniGame_TestNewSmartBallBase_C_OverlapOneSideCollision_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.SetGameCollisionEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_TestNewSmartBallBase_C::SetGameCollisionEnabled(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.SetGameCollisionEnabled");

	ABP_MiniGame_TestNewSmartBallBase_C_SetGameCollisionEnabled_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.GetSightCheckLocation
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector ABP_MiniGame_TestNewSmartBallBase_C::GetSightCheckLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.GetSightCheckLocation");

	ABP_MiniGame_TestNewSmartBallBase_C_GetSightCheckLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.SetVisibleDummyMesh
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bNewVisibility                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_TestNewSmartBallBase_C::SetVisibleDummyMesh(bool bNewVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.SetVisibleDummyMesh");

	ABP_MiniGame_TestNewSmartBallBase_C_SetVisibleDummyMesh_Params params;
	params.bNewVisibility = bNewVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.CreateDummyNails
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_TestNewSmartBallBase_C::CreateDummyNails()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.CreateDummyNails");

	ABP_MiniGame_TestNewSmartBallBase_C_CreateDummyNails_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.DestroyGameActors
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_TestNewSmartBallBase_C::DestroyGameActors()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.DestroyGameActors");

	ABP_MiniGame_TestNewSmartBallBase_C_DestroyGameActors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.CreateUnderPusher
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_TestNewSmartBallBase_C::CreateUnderPusher()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.CreateUnderPusher");

	ABP_MiniGame_TestNewSmartBallBase_C_CreateUnderPusher_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.CreateHoles
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_TestNewSmartBallBase_C::CreateHoles()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.CreateHoles");

	ABP_MiniGame_TestNewSmartBallBase_C_CreateHoles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.CreateNails
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_TestNewSmartBallBase_C::CreateNails()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.CreateNails");

	ABP_MiniGame_TestNewSmartBallBase_C_CreateNails_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.SetOverlapCollisionEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_TestNewSmartBallBase_C::SetOverlapCollisionEnabled(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.SetOverlapCollisionEnabled");

	ABP_MiniGame_TestNewSmartBallBase_C_SetOverlapCollisionEnabled_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.OutPutDebugData
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_TestNewSmartBallBase_C::OutPutDebugData()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.OutPutDebugData");

	ABP_MiniGame_TestNewSmartBallBase_C_OutPutDebugData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.InitializeValue
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_TestNewSmartBallBase_C::InitializeValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.InitializeValue");

	ABP_MiniGame_TestNewSmartBallBase_C_InitializeValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.SetHoleColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Bit                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          Intensity                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_TestNewSmartBallBase_C::SetHoleColor(int Bit, const struct FLinearColor& Color, float Intensity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.SetHoleColor");

	ABP_MiniGame_TestNewSmartBallBase_C_SetHoleColor_Params params;
	params.Bit = Bit;
	params.Color = Color;
	params.Intensity = Intensity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.GetMiniGameHelpName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 String                         (Parm, OutParm, ZeroConstructor)

void ABP_MiniGame_TestNewSmartBallBase_C::GetMiniGameHelpName(struct FString* String)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.GetMiniGameHelpName");

	ABP_MiniGame_TestNewSmartBallBase_C_GetMiniGameHelpName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (String != nullptr)
		*String = params.String;
}


// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.AddItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            GiftNum                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_TestNewSmartBallBase_C::AddItem(int* GiftNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.AddItem");

	ABP_MiniGame_TestNewSmartBallBase_C_AddItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GiftNum != nullptr)
		*GiftNum = params.GiftNum;
}


// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.TogglePusherSound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           toggle                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_TestNewSmartBallBase_C::TogglePusherSound(bool toggle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.TogglePusherSound");

	ABP_MiniGame_TestNewSmartBallBase_C_TogglePusherSound_Params params;
	params.toggle = toggle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.CheckThroughBall
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_TestNewSmartBallBase_C::CheckThroughBall()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.CheckThroughBall");

	ABP_MiniGame_TestNewSmartBallBase_C_CheckThroughBall_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.DebugOutputNailDataCsv
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_TestNewSmartBallBase_C::DebugOutputNailDataCsv()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.DebugOutputNailDataCsv");

	ABP_MiniGame_TestNewSmartBallBase_C_DebugOutputNailDataCsv_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.InitializeNailPos
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_TestNewSmartBallBase_C::InitializeNailPos()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.InitializeNailPos");

	ABP_MiniGame_TestNewSmartBallBase_C_InitializeNailPos_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.UpdateDebugNail
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_TestNewSmartBallBase_C::UpdateDebugNail()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.UpdateDebugNail");

	ABP_MiniGame_TestNewSmartBallBase_C_UpdateDebugNail_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.AddImpluseFromBall
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_SB_TestNewPinball_C* TargetBall                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Impluse                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_MiniGame_TestNewSmartBallBase_C::AddImpluseFromBall(class ABP_SB_TestNewPinball_C* TargetBall, const struct FVector& Impluse)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.AddImpluseFromBall");

	ABP_MiniGame_TestNewSmartBallBase_C_AddImpluseFromBall_Params params;
	params.TargetBall = TargetBall;
	params.Impluse = Impluse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.GetBallsFromDistance
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABP_SB_TestNewPinball_C* Ball                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class ABP_SB_TestNewPinball_C*> ReturnBalls                    (Parm, OutParm, ZeroConstructor)

void ABP_MiniGame_TestNewSmartBallBase_C::GetBallsFromDistance(class ABP_SB_TestNewPinball_C* Ball, TArray<class ABP_SB_TestNewPinball_C*>* ReturnBalls)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.GetBallsFromDistance");

	ABP_MiniGame_TestNewSmartBallBase_C_GetBallsFromDistance_Params params;
	params.Ball = Ball;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ReturnBalls != nullptr)
		*ReturnBalls = params.ReturnBalls;
}


// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.UpdateBallOrder
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_TestNewSmartBallBase_C::UpdateBallOrder()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.UpdateBallOrder");

	ABP_MiniGame_TestNewSmartBallBase_C_UpdateBallOrder_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.ItemGetCheck
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ItemCount                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_TestNewSmartBallBase_C::ItemGetCheck(int* ItemCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.ItemGetCheck");

	ABP_MiniGame_TestNewSmartBallBase_C_ItemGetCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemCount != nullptr)
		*ItemCount = params.ItemCount;
}


// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.CheckBingoBit
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Bit                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_MiniGame_TestNewSmartBallBase_C::CheckBingoBit(int Bit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.CheckBingoBit");

	ABP_MiniGame_TestNewSmartBallBase_C_CheckBingoBit_Params params;
	params.Bit = Bit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.CheckHoleInBit
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_TestNewSmartBallBase_C::CheckHoleInBit()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.CheckHoleInBit");

	ABP_MiniGame_TestNewSmartBallBase_C_CheckHoleInBit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.CheckBingo
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            BingoNum                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_TestNewSmartBallBase_C::CheckBingo(int* BingoNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.CheckBingo");

	ABP_MiniGame_TestNewSmartBallBase_C_CheckBingo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BingoNum != nullptr)
		*BingoNum = params.BingoNum;
}


// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.CheckEnd
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           End                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_TestNewSmartBallBase_C::CheckEnd(bool* End)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.CheckEnd");

	ABP_MiniGame_TestNewSmartBallBase_C_CheckEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (End != nullptr)
		*End = params.End;
}


// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.ForceGravityHole
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_TestNewSmartBallBase_C::ForceGravityHole(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.ForceGravityHole");

	ABP_MiniGame_TestNewSmartBallBase_C_ForceGravityHole_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.IsAllStoppedOutOfRangeBalls
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bStop                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_TestNewSmartBallBase_C::IsAllStoppedOutOfRangeBalls(bool* bStop)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.IsAllStoppedOutOfRangeBalls");

	ABP_MiniGame_TestNewSmartBallBase_C_IsAllStoppedOutOfRangeBalls_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bStop != nullptr)
		*bStop = params.bStop;
}


// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.IsAllGameAreaStoppedBalls
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bStop                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_TestNewSmartBallBase_C::IsAllGameAreaStoppedBalls(bool* bStop)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.IsAllGameAreaStoppedBalls");

	ABP_MiniGame_TestNewSmartBallBase_C_IsAllGameAreaStoppedBalls_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bStop != nullptr)
		*bStop = params.bStop;
}


// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.GetNotInHoleCount
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            bAllIn                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_TestNewSmartBallBase_C::GetNotInHoleCount(int* bAllIn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.GetNotInHoleCount");

	ABP_MiniGame_TestNewSmartBallBase_C_GetNotInHoleCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bAllIn != nullptr)
		*bAllIn = params.bAllIn;
}


// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.IsAllHoleIn
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bAllIn                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_TestNewSmartBallBase_C::IsAllHoleIn(bool* bAllIn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.IsAllHoleIn");

	ABP_MiniGame_TestNewSmartBallBase_C_IsAllHoleIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bAllIn != nullptr)
		*bAllIn = params.bAllIn;
}


// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.SpawnInputControlActor
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MiniGameInputBase_C* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ABP_MiniGameInputBase_C* ABP_MiniGame_TestNewSmartBallBase_C::SpawnInputControlActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.SpawnInputControlActor");

	ABP_MiniGame_TestNewSmartBallBase_C_SpawnInputControlActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_TestNewSmartBallBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.UserConstructionScript");

	ABP_MiniGame_TestNewSmartBallBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.PushFromUnderTimeline__FinishedFunc
// (BlueprintEvent)

void ABP_MiniGame_TestNewSmartBallBase_C::PushFromUnderTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.PushFromUnderTimeline__FinishedFunc");

	ABP_MiniGame_TestNewSmartBallBase_C_PushFromUnderTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.PushFromUnderTimeline__UpdateFunc
// (BlueprintEvent)

void ABP_MiniGame_TestNewSmartBallBase_C::PushFromUnderTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.PushFromUnderTimeline__UpdateFunc");

	ABP_MiniGame_TestNewSmartBallBase_C_PushFromUnderTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.BndEvt__BallDeleteCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_MiniGame_TestNewSmartBallBase_C::BndEvt__BallDeleteCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.BndEvt__BallDeleteCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_MiniGame_TestNewSmartBallBase_C_BndEvt__BallDeleteCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.BndEvt__Box_Pusher_K2Node_ComponentBoundEvent_5_ComponentHitSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     HitComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 NormalImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_MiniGame_TestNewSmartBallBase_C::BndEvt__Box_Pusher_K2Node_ComponentBoundEvent_5_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.BndEvt__Box_Pusher_K2Node_ComponentBoundEvent_5_ComponentHitSignature__DelegateSignature");

	ABP_MiniGame_TestNewSmartBallBase_C_BndEvt__Box_Pusher_K2Node_ComponentBoundEvent_5_ComponentHitSignature__DelegateSignature_Params params;
	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.BndEvt__Box_GameAreaCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_MiniGame_TestNewSmartBallBase_C::BndEvt__Box_GameAreaCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.BndEvt__Box_GameAreaCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_MiniGame_TestNewSmartBallBase_C_BndEvt__Box_GameAreaCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.BndEvt__Box_GameAreaCollision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_TestNewSmartBallBase_C::BndEvt__Box_GameAreaCollision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.BndEvt__Box_GameAreaCollision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	ABP_MiniGame_TestNewSmartBallBase_C_BndEvt__Box_GameAreaCollision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.BndEvt__Box_BallDeleteZone_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_TestNewSmartBallBase_C::BndEvt__Box_BallDeleteZone_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.BndEvt__Box_BallDeleteZone_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature");

	ABP_MiniGame_TestNewSmartBallBase_C_BndEvt__Box_BallDeleteZone_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.BndEvt__Box_ForceMoveArea_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_MiniGame_TestNewSmartBallBase_C::BndEvt__Box_ForceMoveArea_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.BndEvt__Box_ForceMoveArea_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_MiniGame_TestNewSmartBallBase_C_BndEvt__Box_ForceMoveArea_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.BndEvt__Box_ForceMoveArea_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_TestNewSmartBallBase_C::BndEvt__Box_ForceMoveArea_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.BndEvt__Box_ForceMoveArea_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	ABP_MiniGame_TestNewSmartBallBase_C_BndEvt__Box_ForceMoveArea_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.BndEvt__OneSideCollision_K2Node_ComponentBoundEvent_42_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_MiniGame_TestNewSmartBallBase_C::BndEvt__OneSideCollision_K2Node_ComponentBoundEvent_42_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.BndEvt__OneSideCollision_K2Node_ComponentBoundEvent_42_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_MiniGame_TestNewSmartBallBase_C_BndEvt__OneSideCollision_K2Node_ComponentBoundEvent_42_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.BndEvt__Box_RailArea_K2Node_ComponentBoundEvent_43_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_MiniGame_TestNewSmartBallBase_C::BndEvt__Box_RailArea_K2Node_ComponentBoundEvent_43_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.BndEvt__Box_RailArea_K2Node_ComponentBoundEvent_43_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_MiniGame_TestNewSmartBallBase_C_BndEvt__Box_RailArea_K2Node_ComponentBoundEvent_43_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.BndEvt__Box_RailArea_K2Node_ComponentBoundEvent_44_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_TestNewSmartBallBase_C::BndEvt__Box_RailArea_K2Node_ComponentBoundEvent_44_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.BndEvt__Box_RailArea_K2Node_ComponentBoundEvent_44_ComponentEndOverlapSignature__DelegateSignature");

	ABP_MiniGame_TestNewSmartBallBase_C_BndEvt__Box_RailArea_K2Node_ComponentBoundEvent_44_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.BndEvt__Box_WallHitArea1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_MiniGame_TestNewSmartBallBase_C::BndEvt__Box_WallHitArea1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.BndEvt__Box_WallHitArea1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_MiniGame_TestNewSmartBallBase_C_BndEvt__Box_WallHitArea1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.BndEvt__Box_WallHitArea2_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_MiniGame_TestNewSmartBallBase_C::BndEvt__Box_WallHitArea2_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.BndEvt__Box_WallHitArea2_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_MiniGame_TestNewSmartBallBase_C_BndEvt__Box_WallHitArea2_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.BndEvt__Box_WallHitArea3_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_MiniGame_TestNewSmartBallBase_C::BndEvt__Box_WallHitArea3_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.BndEvt__Box_WallHitArea3_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_MiniGame_TestNewSmartBallBase_C_BndEvt__Box_WallHitArea3_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.BndEvt__Box_WallHitArea1_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_TestNewSmartBallBase_C::BndEvt__Box_WallHitArea1_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.BndEvt__Box_WallHitArea1_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature");

	ABP_MiniGame_TestNewSmartBallBase_C_BndEvt__Box_WallHitArea1_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.BndEvt__Box_WallHitArea3_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_TestNewSmartBallBase_C::BndEvt__Box_WallHitArea3_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.BndEvt__Box_WallHitArea3_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature");

	ABP_MiniGame_TestNewSmartBallBase_C_BndEvt__Box_WallHitArea3_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.BndEvt__Box_WallHitArea2_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_TestNewSmartBallBase_C::BndEvt__Box_WallHitArea2_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.BndEvt__Box_WallHitArea2_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature");

	ABP_MiniGame_TestNewSmartBallBase_C_BndEvt__Box_WallHitArea2_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.BndEvt__Box_WallHitArea4_K2Node_ComponentBoundEvent_6_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_MiniGame_TestNewSmartBallBase_C::BndEvt__Box_WallHitArea4_K2Node_ComponentBoundEvent_6_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.BndEvt__Box_WallHitArea4_K2Node_ComponentBoundEvent_6_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_MiniGame_TestNewSmartBallBase_C_BndEvt__Box_WallHitArea4_K2Node_ComponentBoundEvent_6_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.BndEvt__Box_WallHitArea4_K2Node_ComponentBoundEvent_7_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_TestNewSmartBallBase_C::BndEvt__Box_WallHitArea4_K2Node_ComponentBoundEvent_7_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.BndEvt__Box_WallHitArea4_K2Node_ComponentBoundEvent_7_ComponentEndOverlapSignature__DelegateSignature");

	ABP_MiniGame_TestNewSmartBallBase_C_BndEvt__Box_WallHitArea4_K2Node_ComponentBoundEvent_7_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.BndEvt__GameArea_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_TestNewSmartBallBase_C::BndEvt__GameArea_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.BndEvt__GameArea_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature");

	ABP_MiniGame_TestNewSmartBallBase_C_BndEvt__GameArea_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.StartMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_TestNewSmartBallBase_C::StartMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.StartMiniGame");

	ABP_MiniGame_TestNewSmartBallBase_C_StartMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.EndMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_TestNewSmartBallBase_C::EndMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.EndMiniGame");

	ABP_MiniGame_TestNewSmartBallBase_C_EndMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.WinMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_TestNewSmartBallBase_C::WinMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.WinMiniGame");

	ABP_MiniGame_TestNewSmartBallBase_C_WinMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.LoseMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_TestNewSmartBallBase_C::LoseMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.LoseMiniGame");

	ABP_MiniGame_TestNewSmartBallBase_C_LoseMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.CallSubStartMiniGameEvents
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_TestNewSmartBallBase_C::CallSubStartMiniGameEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.CallSubStartMiniGameEvents");

	ABP_MiniGame_TestNewSmartBallBase_C_CallSubStartMiniGameEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.CallSubEndMiniGameEvents
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_TestNewSmartBallBase_C::CallSubEndMiniGameEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.CallSubEndMiniGameEvents");

	ABP_MiniGame_TestNewSmartBallBase_C_CallSubEndMiniGameEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.CallSubWinMiniGameEvents
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_TestNewSmartBallBase_C::CallSubWinMiniGameEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.CallSubWinMiniGameEvents");

	ABP_MiniGame_TestNewSmartBallBase_C_CallSubWinMiniGameEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.CallSubLoseMiniGameEvents
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_TestNewSmartBallBase_C::CallSubLoseMiniGameEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.CallSubLoseMiniGameEvents");

	ABP_MiniGame_TestNewSmartBallBase_C_CallSubLoseMiniGameEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.EnterMiniGame
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          EnterTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_TestNewSmartBallBase_C::EnterMiniGame(float EnterTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.EnterMiniGame");

	ABP_MiniGame_TestNewSmartBallBase_C_EnterMiniGame_Params params;
	params.EnterTime = EnterTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.RestartMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_TestNewSmartBallBase_C::RestartMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.RestartMiniGame");

	ABP_MiniGame_TestNewSmartBallBase_C_RestartMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.CallSubResatrtMiniGameEvents
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_TestNewSmartBallBase_C::CallSubResatrtMiniGameEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.CallSubResatrtMiniGameEvents");

	ABP_MiniGame_TestNewSmartBallBase_C_CallSubResatrtMiniGameEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.CallSubEnterMiniGameEvents
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_TestNewSmartBallBase_C::CallSubEnterMiniGameEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.CallSubEnterMiniGameEvents");

	ABP_MiniGame_TestNewSmartBallBase_C_CallSubEnterMiniGameEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.FinalizeTalk
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_TestNewSmartBallBase_C::FinalizeTalk()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.FinalizeTalk");

	ABP_MiniGame_TestNewSmartBallBase_C_FinalizeTalk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.CallSubFinalizeTalkMiniGameEvents
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_TestNewSmartBallBase_C::CallSubFinalizeTalkMiniGameEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.CallSubFinalizeTalkMiniGameEvents");

	ABP_MiniGame_TestNewSmartBallBase_C_CallSubFinalizeTalkMiniGameEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.OnFinishedFade
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_TestNewSmartBallBase_C::OnFinishedFade()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.OnFinishedFade");

	ABP_MiniGame_TestNewSmartBallBase_C_OnFinishedFade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.DownStopper
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_TestNewSmartBallBase_C::DownStopper()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.DownStopper");

	ABP_MiniGame_TestNewSmartBallBase_C_DownStopper_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.OnFinishedCoinSequence
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_TestNewSmartBallBase_C::OnFinishedCoinSequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.OnFinishedCoinSequence");

	ABP_MiniGame_TestNewSmartBallBase_C_OnFinishedCoinSequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.OnFinishedSequencePlayer
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_TestNewSmartBallBase_C::OnFinishedSequencePlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.OnFinishedSequencePlayer");

	ABP_MiniGame_TestNewSmartBallBase_C_OnFinishedSequencePlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.Event_DebugCheckStart
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_TestNewSmartBallBase_C::Event_DebugCheckStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.Event_DebugCheckStart");

	ABP_MiniGame_TestNewSmartBallBase_C_Event_DebugCheckStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.Event_DebugCheckRestrt
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MiniGameBase_C*      SelfMiniGame                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_TestNewSmartBallBase_C::Event_DebugCheckRestrt(class ABP_MiniGameBase_C* SelfMiniGame)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.Event_DebugCheckRestrt");

	ABP_MiniGame_TestNewSmartBallBase_C_Event_DebugCheckRestrt_Params params;
	params.SelfMiniGame = SelfMiniGame;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.BindInputControlEvents
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MiniGameInputBase_C* Input                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_TestNewSmartBallBase_C::BindInputControlEvents(class ABP_MiniGameInputBase_C* Input)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.BindInputControlEvents");

	ABP_MiniGame_TestNewSmartBallBase_C_BindInputControlEvents_Params params;
	params.Input = Input;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MiniGame_TestNewSmartBallBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.ReceiveBeginPlay");

	ABP_MiniGame_TestNewSmartBallBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.UpdatePusherLocation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_TestNewSmartBallBase_C::UpdatePusherLocation(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.UpdatePusherLocation");

	ABP_MiniGame_TestNewSmartBallBase_C_UpdatePusherLocation_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.SpawnBall
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 WorldLocation                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_MiniGame_TestNewSmartBallBase_C::SpawnBall(const struct FVector& WorldLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.SpawnBall");

	ABP_MiniGame_TestNewSmartBallBase_C_SpawnBall_Params params;
	params.WorldLocation = WorldLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.ResumeMiniGame
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ResumeKeyword                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_MiniGame_TestNewSmartBallBase_C::ResumeMiniGame(const struct FString& ResumeKeyword)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.ResumeMiniGame");

	ABP_MiniGame_TestNewSmartBallBase_C_ResumeMiniGame_Params params;
	params.ResumeKeyword = ResumeKeyword;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.SuspendMiniGame
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_TestNewSmartBallBase_C::SuspendMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.SuspendMiniGame");

	ABP_MiniGame_TestNewSmartBallBase_C_SuspendMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.OnTalkScriptEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            EventNumber                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_TestNewSmartBallBase_C::OnTalkScriptEvent(int EventNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.OnTalkScriptEvent");

	ABP_MiniGame_TestNewSmartBallBase_C_OnTalkScriptEvent_Params params;
	params.EventNumber = EventNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_TestNewSmartBallBase_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.ReceiveTick");

	ABP_MiniGame_TestNewSmartBallBase_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.PushFromUnder
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_TestNewSmartBallBase_C::PushFromUnder()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.PushFromUnder");

	ABP_MiniGame_TestNewSmartBallBase_C_PushFromUnder_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.ResetEndGame
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_TestNewSmartBallBase_C::ResetEndGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.ResetEndGame");

	ABP_MiniGame_TestNewSmartBallBase_C_ResetEndGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_42_OnGameContinueDispatcher__DelegateSignature
// (BlueprintEvent)

void ABP_MiniGame_TestNewSmartBallBase_C::BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_42_OnGameContinueDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_42_OnGameContinueDispatcher__DelegateSignature");

	ABP_MiniGame_TestNewSmartBallBase_C_BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_42_OnGameContinueDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_43_OnGameFinishedDispatcher__DelegateSignature
// (BlueprintEvent)

void ABP_MiniGame_TestNewSmartBallBase_C::BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_43_OnGameFinishedDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_43_OnGameFinishedDispatcher__DelegateSignature");

	ABP_MiniGame_TestNewSmartBallBase_C_BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_43_OnGameFinishedDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.EndGame
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_TestNewSmartBallBase_C::EndGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.EndGame");

	ABP_MiniGame_TestNewSmartBallBase_C_EndGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.SpawnAllBalls
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_TestNewSmartBallBase_C::SpawnAllBalls()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.SpawnAllBalls");

	ABP_MiniGame_TestNewSmartBallBase_C_SpawnAllBalls_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.OnEndKihudaFlow
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_TestNewSmartBallBase_C::OnEndKihudaFlow()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.OnEndKihudaFlow");

	ABP_MiniGame_TestNewSmartBallBase_C_OnEndKihudaFlow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.BindHoleInToCheckBingEvent
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_TestNewSmartBallBase_C::BindHoleInToCheckBingEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.BindHoleInToCheckBingEvent");

	ABP_MiniGame_TestNewSmartBallBase_C_BindHoleInToCheckBingEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.Event_CheckBingo
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_TestNewSmartBallBase_C::Event_CheckBingo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.Event_CheckBingo");

	ABP_MiniGame_TestNewSmartBallBase_C_Event_CheckBingo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.Event_EndMiniGame
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_TestNewSmartBallBase_C::Event_EndMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.Event_EndMiniGame");

	ABP_MiniGame_TestNewSmartBallBase_C_Event_EndMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_TestNewSmartBallBase_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.ReceiveEndPlay");

	ABP_MiniGame_TestNewSmartBallBase_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.CancelMiniGame
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_TestNewSmartBallBase_C::CancelMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.CancelMiniGame");

	ABP_MiniGame_TestNewSmartBallBase_C_CancelMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.StopPushUnderMove
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_TestNewSmartBallBase_C::StopPushUnderMove()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.StopPushUnderMove");

	ABP_MiniGame_TestNewSmartBallBase_C_StopPushUnderMove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.ExecuteUbergraph_BP_MiniGame_TestNewSmartBallBase
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_TestNewSmartBallBase_C::ExecuteUbergraph_BP_MiniGame_TestNewSmartBallBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.ExecuteUbergraph_BP_MiniGame_TestNewSmartBallBase");

	ABP_MiniGame_TestNewSmartBallBase_C_ExecuteUbergraph_BP_MiniGame_TestNewSmartBallBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
