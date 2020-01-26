#pragma once

// Name: Shenmue3SDK, Version: 1.4.1

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_KartPawnBase.BP_KartPawnBase_C
// 0x027D (0x060D - 0x0390)
class ABP_KartPawnBase_C : public AS3KartPawnBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0390(0x0008) (Transient, DuplicateTransient)
	class UBoxComponent*                               CrushSoundCollision;                                      // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        ChildActor;                                               // 0x03A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCameraComponent*                            Main_Camera;                                              // 0x03A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpringArmComponent*                         SpringArm;                                                // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        RRW_Mesh;                                                 // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        RLW_Mesh;                                                 // 0x03C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        FRW_Mesh;                                                 // 0x03C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        FLW_Mesh;                                                 // 0x03D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             RRW_Scene;                                                // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             RLW_Scene;                                                // 0x03E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             FRW_Scene;                                                // 0x03E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             FLW_Scene;                                                // 0x03F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        body_mesh;                                                // 0x03F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Kart_Collision;                                           // 0x0400(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Suspention_Initialization_Timeline_Alpha_B054524E4852231AA3F6EDB932FF198A;// 0x0408(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Suspention_Initialization_Timeline__Direction_B054524E4852231AA3F6EDB932FF198A;// 0x040C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x040D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Suspention_Initialization_Timeline;                       // 0x0410(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // 0x0418(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              Wheel_Radius;                                             // 0x0428(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Suspension_Height;                                        // 0x042C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Max_Speed;                                                // 0x0430(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Acceleration;                                             // 0x0434(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Min_Grounded_Wheels_To_Move;                              // 0x0438(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Min_Speed_To_Steer;                                       // 0x043C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Gravity;                                                  // 0x0440(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Steering_Torque;                                          // 0x0444(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Max_Steer_Angle;                                          // 0x0448(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Speed_Boost_Acceleration_Mutiplier;                       // 0x044C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Max_Boost_Speed;                                          // 0x0450(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Anti_Slide;                                               // 0x0454(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Suspension_Stiffness;                                     // 0x0458(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Suspension_Damping;                                       // 0x045C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Linear_Damping;                                           // 0x0460(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Angular_Damping;                                          // 0x0464(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Mass_In_Kg;                                               // 0x0468(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Center_Of_Mass_Offset_When_Moving;                        // 0x046C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     Center_Of_Mass_Offset_When_Falling;                       // 0x0478(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               Trace_Complex__;                                          // 0x0484(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0485(0x0003) MISSED OFFSET
	TArray<TEnumAsByte<EObjectTypeQuery>>              Walkable_Object_Types;                                    // 0x0488(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class USceneComponent*>                     Wheel_Scenes_List;                                        // 0x0498(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UStaticMeshComponent*>                Wheel_Meshes_List;                                        // 0x04A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVector>                             Local_Suspension_Points_List;                             // 0x04B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      Last_Frame_Ratios;                                        // 0x04C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               Is_Moving_On_Ground_;                                     // 0x04D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Is_Speed_Boost_Enabled__;                                 // 0x04D9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x04DA(0x0002) MISSED OFFSET
	float                                              Delta_Seconds;                                            // 0x04DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Show_Meshes_When_Debugging__;                             // 0x04E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x04E1(0x0003) MISSED OFFSET
	struct FLinearColor                                Collision_Box_Color;                                      // 0x04E4(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              Collision_Box_Thikness;                                   // 0x04F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Is_Debug_Mode_Enabled__;                                  // 0x04F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x04F9(0x0003) MISSED OFFSET
	struct FLinearColor                                Trace_Color;                                              // 0x04FC(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                Trace_Hit_Color;                                          // 0x050C(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              Current_Suspension_Stiffness;                             // 0x051C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Current_Suspension_Damping;                               // 0x0520(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Current_Horizontal_Speed;                                 // 0x0524(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Current_Moving_Direction__Fake_;                          // 0x0528(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Current_Horizontal_Velocity;                              // 0x052C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              Current_Horizontal_Movement_Direction;                    // 0x0538(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Current_Sliding_Speed;                                    // 0x053C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Contact_Point_Sphere_Radius;                              // 0x0540(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Contact_point_Sphere_Color;                               // 0x0544(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0554(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    Kart_Material_Instance;                                   // 0x0558(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Falling_Time;                                             // 0x0560(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Center_Of_Mass_Sphere_Radius;                             // 0x0564(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                Center_Of_Mass_Sphere_Color;                              // 0x0568(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class UObject*                                     Game_HUD_Widget;                                          // 0x0578(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Current_Steering_Axis;                                    // 0x0580(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Current_Throttle_Axis;                                    // 0x0584(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                Speed_Boost_Timer_Handle;                                 // 0x0588(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               is_front_handle;                                          // 0x0590(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               is_enable_input;                                          // 0x0591(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               is_wheel_visible;                                         // 0x0592(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x1];                                       // 0x0593(0x0001) MISSED OFFSET
	float                                              scaled_box_extent_z;                                      // 0x0594(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     actor_up_vector;                                          // 0x0598(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x05A4(0x0004) MISSED OFFSET
	class ABP_S3SoundPlayer_C*                         sound_obj_motor;                                          // 0x05A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentWheelAxis;                                         // 0x05B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsWheelsRollRotate;                                       // 0x05B4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x05B5(0x0003) MISSED OFFSET
	class UCurveFloat*                                 SteeringCurve;                                            // 0x05B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WheelInterpSpeed;                                         // 0x05C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CurrentAcceleration;                                      // 0x05C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundAtomCue*                               SEMoterSound;                                             // 0x05C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     SEMotorControlName;                                       // 0x05D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class USoundAtomCue*                               SEMotorStop;                                              // 0x05E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ABP_S3SoundPlayer_C*                         SE_EngineStartPlayer;                                     // 0x05E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_S3SoundPlayer_C*                         SE_EngineBackPlayer;                                      // 0x05F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<class ABP_S3SoundPlayer_C*>                 SEList;                                                   // 0x05F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	float                                              BaseMaxSpeed;                                             // 0x0608(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bInitializedSound;                                        // 0x060C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_KartPawnBase.BP_KartPawnBase_C");
		return ptr;
	}


	void InitializeSound();
	void UpdateAcceleration();
	void StopMotorSE();
	void PlayMotorSE();
	void Set_Meshes_Visibility(bool New_Visibility);
	void Draw_Debug_Info();
	void Update_Game_HUD();
	void Update_Engine_Sound();
	void Update_Front_Wheels_Rotation__Steering_(bool is_handle_front);
	void Update_Wheels_Rotation__Movement_();
	void Update_Wheels_Position();
	void Apply_Suspension_Forces(int* Grounded_Wheels_Count);
	void Perform_Suspension_Raycasting(const struct FVector& Suspension_Point_World_Location, const struct FVector& Suspension_Point_Relative_Location, const struct FVector& Suspension_Point_World_Offset, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool* Ground_Hited__, float* Ratio, struct FVector* Apply_Force_Location);
	void UserConstructionScript();
	void Suspention_Initialization_Timeline__FinishedFunc();
	void Suspention_Initialization_Timeline__UpdateFunc();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void Apply_Gravity_And_Anti_Sliding_Forces();
	void Start_debugging();
	void Stop_debugging();
	void Update_Center_of_Mass_Offset();
	void ReceivePossessed(class AController* NewController);
	void ReceiveUnpossessed(class AController* OldController);
	void On_Bomb_Hit(const struct FVector& Bomb_location);
	void Set_Throttle_Input(float Throttle_Axis);
	void Set_Steering_Input(float Steering_Axis);
	void Toggle_Debug_Mode();
	void On_Speed_Boost_Begin(bool Auto_Stop_Speed_Boost__, float Boost_Duration);
	void On_Speed_Boost_End();
	void On_Speed_Boost_Update();
	void On_Respawn(const struct FVector& NewLocation, const struct FRotator& NewRotation);
	void SetTickEnable(bool bEnabled);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ExecuteUbergraph_BP_KartPawnBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
