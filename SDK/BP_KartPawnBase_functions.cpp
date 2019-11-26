
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

// Function BP_KartPawnBase.BP_KartPawnBase_C.InitializeSound
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_KartPawnBase_C::InitializeSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KartPawnBase.BP_KartPawnBase_C.InitializeSound");

	ABP_KartPawnBase_C_InitializeSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KartPawnBase.BP_KartPawnBase_C.UpdateAcceleration
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_KartPawnBase_C::UpdateAcceleration()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KartPawnBase.BP_KartPawnBase_C.UpdateAcceleration");

	ABP_KartPawnBase_C_UpdateAcceleration_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KartPawnBase.BP_KartPawnBase_C.StopMotorSE
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_KartPawnBase_C::StopMotorSE()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KartPawnBase.BP_KartPawnBase_C.StopMotorSE");

	ABP_KartPawnBase_C_StopMotorSE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KartPawnBase.BP_KartPawnBase_C.PlayMotorSE
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_KartPawnBase_C::PlayMotorSE()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KartPawnBase.BP_KartPawnBase_C.PlayMotorSE");

	ABP_KartPawnBase_C_PlayMotorSE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KartPawnBase.BP_KartPawnBase_C.Set Meshes Visibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           New_Visibility                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_KartPawnBase_C::Set_Meshes_Visibility(bool New_Visibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KartPawnBase.BP_KartPawnBase_C.Set Meshes Visibility");

	ABP_KartPawnBase_C_Set_Meshes_Visibility_Params params;
	params.New_Visibility = New_Visibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KartPawnBase.BP_KartPawnBase_C.Draw Debug Info
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_KartPawnBase_C::Draw_Debug_Info()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KartPawnBase.BP_KartPawnBase_C.Draw Debug Info");

	ABP_KartPawnBase_C_Draw_Debug_Info_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KartPawnBase.BP_KartPawnBase_C.Update Game HUD
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_KartPawnBase_C::Update_Game_HUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KartPawnBase.BP_KartPawnBase_C.Update Game HUD");

	ABP_KartPawnBase_C_Update_Game_HUD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KartPawnBase.BP_KartPawnBase_C.Update Engine Sound
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_KartPawnBase_C::Update_Engine_Sound()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KartPawnBase.BP_KartPawnBase_C.Update Engine Sound");

	ABP_KartPawnBase_C_Update_Engine_Sound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KartPawnBase.BP_KartPawnBase_C.Update Front Wheels Rotation (Steering)
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           is_handle_front                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_KartPawnBase_C::Update_Front_Wheels_Rotation__Steering_(bool is_handle_front)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KartPawnBase.BP_KartPawnBase_C.Update Front Wheels Rotation (Steering)");

	ABP_KartPawnBase_C_Update_Front_Wheels_Rotation__Steering__Params params;
	params.is_handle_front = is_handle_front;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KartPawnBase.BP_KartPawnBase_C.Update Wheels Rotation (Movement)
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_KartPawnBase_C::Update_Wheels_Rotation__Movement_()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KartPawnBase.BP_KartPawnBase_C.Update Wheels Rotation (Movement)");

	ABP_KartPawnBase_C_Update_Wheels_Rotation__Movement__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KartPawnBase.BP_KartPawnBase_C.Update Wheels Position
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_KartPawnBase_C::Update_Wheels_Position()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KartPawnBase.BP_KartPawnBase_C.Update Wheels Position");

	ABP_KartPawnBase_C_Update_Wheels_Position_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KartPawnBase.BP_KartPawnBase_C.Apply Suspension Forces
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Grounded_Wheels_Count          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_KartPawnBase_C::Apply_Suspension_Forces(int* Grounded_Wheels_Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KartPawnBase.BP_KartPawnBase_C.Apply Suspension Forces");

	ABP_KartPawnBase_C_Apply_Suspension_Forces_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Grounded_Wheels_Count != nullptr)
		*Grounded_Wheels_Count = params.Grounded_Wheels_Count;
}


// Function BP_KartPawnBase.BP_KartPawnBase_C.Perform Suspension Raycasting
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Suspension_Point_World_Location (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 Suspension_Point_Relative_Location (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 Suspension_Point_World_Offset  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// TEnumAsByte<EDrawDebugTrace>   DrawDebugType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Ground_Hited__                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Ratio                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Apply_Force_Location           (Parm, OutParm, IsPlainOldData)

void ABP_KartPawnBase_C::Perform_Suspension_Raycasting(const struct FVector& Suspension_Point_World_Location, const struct FVector& Suspension_Point_Relative_Location, const struct FVector& Suspension_Point_World_Offset, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool* Ground_Hited__, float* Ratio, struct FVector* Apply_Force_Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KartPawnBase.BP_KartPawnBase_C.Perform Suspension Raycasting");

	ABP_KartPawnBase_C_Perform_Suspension_Raycasting_Params params;
	params.Suspension_Point_World_Location = Suspension_Point_World_Location;
	params.Suspension_Point_Relative_Location = Suspension_Point_Relative_Location;
	params.Suspension_Point_World_Offset = Suspension_Point_World_Offset;
	params.DrawDebugType = DrawDebugType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ground_Hited__ != nullptr)
		*Ground_Hited__ = params.Ground_Hited__;
	if (Ratio != nullptr)
		*Ratio = params.Ratio;
	if (Apply_Force_Location != nullptr)
		*Apply_Force_Location = params.Apply_Force_Location;
}


// Function BP_KartPawnBase.BP_KartPawnBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_KartPawnBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KartPawnBase.BP_KartPawnBase_C.UserConstructionScript");

	ABP_KartPawnBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KartPawnBase.BP_KartPawnBase_C.Suspention Initialization Timeline__FinishedFunc
// (BlueprintEvent)

void ABP_KartPawnBase_C::Suspention_Initialization_Timeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KartPawnBase.BP_KartPawnBase_C.Suspention Initialization Timeline__FinishedFunc");

	ABP_KartPawnBase_C_Suspention_Initialization_Timeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KartPawnBase.BP_KartPawnBase_C.Suspention Initialization Timeline__UpdateFunc
// (BlueprintEvent)

void ABP_KartPawnBase_C::Suspention_Initialization_Timeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KartPawnBase.BP_KartPawnBase_C.Suspention Initialization Timeline__UpdateFunc");

	ABP_KartPawnBase_C_Suspention_Initialization_Timeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KartPawnBase.BP_KartPawnBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_KartPawnBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KartPawnBase.BP_KartPawnBase_C.ReceiveBeginPlay");

	ABP_KartPawnBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KartPawnBase.BP_KartPawnBase_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_KartPawnBase_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KartPawnBase.BP_KartPawnBase_C.ReceiveTick");

	ABP_KartPawnBase_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KartPawnBase.BP_KartPawnBase_C.Apply Gravity And Anti Sliding Forces
// (BlueprintCallable, BlueprintEvent)

void ABP_KartPawnBase_C::Apply_Gravity_And_Anti_Sliding_Forces()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KartPawnBase.BP_KartPawnBase_C.Apply Gravity And Anti Sliding Forces");

	ABP_KartPawnBase_C_Apply_Gravity_And_Anti_Sliding_Forces_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KartPawnBase.BP_KartPawnBase_C.Start debugging
// (BlueprintCallable, BlueprintEvent)

void ABP_KartPawnBase_C::Start_debugging()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KartPawnBase.BP_KartPawnBase_C.Start debugging");

	ABP_KartPawnBase_C_Start_debugging_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KartPawnBase.BP_KartPawnBase_C.Stop debugging
// (BlueprintCallable, BlueprintEvent)

void ABP_KartPawnBase_C::Stop_debugging()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KartPawnBase.BP_KartPawnBase_C.Stop debugging");

	ABP_KartPawnBase_C_Stop_debugging_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KartPawnBase.BP_KartPawnBase_C.Update Center of Mass Offset
// (BlueprintCallable, BlueprintEvent)

void ABP_KartPawnBase_C::Update_Center_of_Mass_Offset()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KartPawnBase.BP_KartPawnBase_C.Update Center of Mass Offset");

	ABP_KartPawnBase_C_Update_Center_of_Mass_Offset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KartPawnBase.BP_KartPawnBase_C.ReceivePossessed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController*             NewController                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_KartPawnBase_C::ReceivePossessed(class AController* NewController)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KartPawnBase.BP_KartPawnBase_C.ReceivePossessed");

	ABP_KartPawnBase_C_ReceivePossessed_Params params;
	params.NewController = NewController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KartPawnBase.BP_KartPawnBase_C.ReceiveUnpossessed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController*             OldController                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_KartPawnBase_C::ReceiveUnpossessed(class AController* OldController)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KartPawnBase.BP_KartPawnBase_C.ReceiveUnpossessed");

	ABP_KartPawnBase_C_ReceiveUnpossessed_Params params;
	params.OldController = OldController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KartPawnBase.BP_KartPawnBase_C.On Bomb Hit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Bomb_location                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_KartPawnBase_C::On_Bomb_Hit(const struct FVector& Bomb_location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KartPawnBase.BP_KartPawnBase_C.On Bomb Hit");

	ABP_KartPawnBase_C_On_Bomb_Hit_Params params;
	params.Bomb_location = Bomb_location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KartPawnBase.BP_KartPawnBase_C.Set Throttle Input
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Throttle_Axis                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_KartPawnBase_C::Set_Throttle_Input(float Throttle_Axis)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KartPawnBase.BP_KartPawnBase_C.Set Throttle Input");

	ABP_KartPawnBase_C_Set_Throttle_Input_Params params;
	params.Throttle_Axis = Throttle_Axis;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KartPawnBase.BP_KartPawnBase_C.Set Steering Input
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Steering_Axis                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_KartPawnBase_C::Set_Steering_Input(float Steering_Axis)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KartPawnBase.BP_KartPawnBase_C.Set Steering Input");

	ABP_KartPawnBase_C_Set_Steering_Input_Params params;
	params.Steering_Axis = Steering_Axis;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KartPawnBase.BP_KartPawnBase_C.Toggle Debug Mode
// (BlueprintCallable, BlueprintEvent)

void ABP_KartPawnBase_C::Toggle_Debug_Mode()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KartPawnBase.BP_KartPawnBase_C.Toggle Debug Mode");

	ABP_KartPawnBase_C_Toggle_Debug_Mode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KartPawnBase.BP_KartPawnBase_C.On Speed Boost Begin
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Auto_Stop_Speed_Boost__        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Boost_Duration                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_KartPawnBase_C::On_Speed_Boost_Begin(bool Auto_Stop_Speed_Boost__, float Boost_Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KartPawnBase.BP_KartPawnBase_C.On Speed Boost Begin");

	ABP_KartPawnBase_C_On_Speed_Boost_Begin_Params params;
	params.Auto_Stop_Speed_Boost__ = Auto_Stop_Speed_Boost__;
	params.Boost_Duration = Boost_Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KartPawnBase.BP_KartPawnBase_C.On Speed Boost End
// (BlueprintCallable, BlueprintEvent)

void ABP_KartPawnBase_C::On_Speed_Boost_End()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KartPawnBase.BP_KartPawnBase_C.On Speed Boost End");

	ABP_KartPawnBase_C_On_Speed_Boost_End_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KartPawnBase.BP_KartPawnBase_C.On Speed Boost Update
// (BlueprintCallable, BlueprintEvent)

void ABP_KartPawnBase_C::On_Speed_Boost_Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KartPawnBase.BP_KartPawnBase_C.On Speed Boost Update");

	ABP_KartPawnBase_C_On_Speed_Boost_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KartPawnBase.BP_KartPawnBase_C.On Respawn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 NewLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FRotator                NewRotation                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_KartPawnBase_C::On_Respawn(const struct FVector& NewLocation, const struct FRotator& NewRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KartPawnBase.BP_KartPawnBase_C.On Respawn");

	ABP_KartPawnBase_C_On_Respawn_Params params;
	params.NewLocation = NewLocation;
	params.NewRotation = NewRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KartPawnBase.BP_KartPawnBase_C.SetTickEnable
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bEnabled                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_KartPawnBase_C::SetTickEnable(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KartPawnBase.BP_KartPawnBase_C.SetTickEnable");

	ABP_KartPawnBase_C_SetTickEnable_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KartPawnBase.BP_KartPawnBase_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_KartPawnBase_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KartPawnBase.BP_KartPawnBase_C.ReceiveEndPlay");

	ABP_KartPawnBase_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KartPawnBase.BP_KartPawnBase_C.ExecuteUbergraph_BP_KartPawnBase
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_KartPawnBase_C::ExecuteUbergraph_BP_KartPawnBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KartPawnBase.BP_KartPawnBase_C.ExecuteUbergraph_BP_KartPawnBase");

	ABP_KartPawnBase_C_ExecuteUbergraph_BP_KartPawnBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
