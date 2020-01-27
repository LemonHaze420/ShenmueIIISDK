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

// BlueprintGeneratedClass BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C
// 0x075A (0x0D64 - 0x060A)
class ABP_Minigame_Fishing_Test_C : public ABP_MiniGameBase_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x060A(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0610(0x0008) (Transient, DuplicateTransient)
	class UBPC_FishingCableEnd_C*                      BPC_FishingCableEnd;                                      // 0x0618(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCableComponent*                             MainCable;                                                // 0x0620(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             RodTopPos;                                                // 0x0628(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        FishingCastAreaView;                                      // 0x0630(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               WaterBox;                                                 // 0x0638(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBPC_MiniGameText_C*                         BPC_MiniGameText;                                         // 0x0640(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        BP_Fishing_FishShadow;                                    // 0x0648(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    P_Fishing_Ring;                                           // 0x0650(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBPC_MiniGameStandaloneTalkScript_C*         BPC_MiniGameStandaloneTalkScript;                         // 0x0658(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        BP_Fishing_Ryo;                                           // 0x0660(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              QTEFailedAnimTimeline_AnimRate_33B6CEBD4943761E74B60FB16E11D654;// 0x0668(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    QTEFailedAnimTimeline__Direction_33B6CEBD4943761E74B60FB16E11D654;// 0x066C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x066D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          QTEFailedAnimTimeline;                                    // 0x0670(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              BlendRateOnHitTimeline_BlendRate_00AED3214BDEC725C0CCC787BEC576D4;// 0x0678(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    BlendRateOnHitTimeline__Direction_00AED3214BDEC725C0CCC787BEC576D4;// 0x067C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x067D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          BlendRateOnHitTimeline;                                   // 0x0680(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              QTEEndTimeline_MaxAnimBlendPower_0820F39D48DADF4760E9CA8432BCACFF;// 0x0688(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              QTEEndTimeline_ReelPower_0820F39D48DADF4760E9CA8432BCACFF;// 0x068C(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    QTEEndTimeline__Direction_0820F39D48DADF4760E9CA8432BCACFF;// 0x0690(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0691(0x0007) MISSED OFFSET
	class UTimelineComponent*                          QTEEndTimeline;                                           // 0x0698(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    ParticleRipple_Start_Timeline__Direction_231638C24F19C1AAC53BB283E06B949D;// 0x06A0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x06A1(0x0007) MISSED OFFSET
	class UTimelineComponent*                          ParticleRipple_Start_Timeline;                            // 0x06A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Particle_Start_Timeline__Direction_2E1CAACF42DF86ADBB1FF9A867059AF9;// 0x06B0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x06B1(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Particle_Start_Timeline;                                  // 0x06B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              _______0___Track_0_2095B74949F288C1966B6DBB4380FF0B;      // 0x06C0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    _______0__Direction_2095B74949F288C1966B6DBB4380FF0B;     // 0x06C4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x06C5(0x0003) MISSED OFFSET
	class UTimelineComponent* UnknownVar01;                                           // 0x06C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              qte_timeline_type2_move_rate_C741B8E845C9E4594DB8EFAF77E262A6;// 0x06D0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    qte_timeline_type2__Direction_C741B8E845C9E4594DB8EFAF77E262A6;// 0x06D4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x06D5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          qte_timeline_type2;                                       // 0x06D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              qte_timeline_type3_move_rate_641C9EF54547E3DC98117DA6F73869F2;// 0x06E0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    qte_timeline_type3__Direction_641C9EF54547E3DC98117DA6F73869F2;// 0x06E4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x06E5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          qte_timeline_type3;                                       // 0x06E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              qte_timeline_type1_move_rate_A7406CD8427006126E0A7CAF8F7D750A;// 0x06F0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    qte_timeline_type1__Direction_A7406CD8427006126E0A7CAF8F7D750A;// 0x06F4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x06F5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          qte_timeline_type1;                                       // 0x06F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWBP_Fishing_test_C*                         WBP_Fishing_test;                                         // 0x0700(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               is_swinged;                                               // 0x0708(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x0709(0x0003) MISSED OFFSET
	float                                              left_axis_x;                                              // 0x070C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              left_axis_y;                                              // 0x0710(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<E_FishingState_Test>                   game_state;                                               // 0x0714(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x0715(0x0003) MISSED OFFSET
	float                                              right_axis_x;                                             // 0x0718(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              right_axis_y;                                             // 0x071C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              old_left_rot;                                             // 0x0720(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                left_turn_count;                                          // 0x0724(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    old_rod_rotation;                                         // 0x0728(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x4];                                       // 0x0734(0x0004) MISSED OFFSET
	class UForceFeedbackEffect*                        ForceFeedBackRef;                                         // 0x0738(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  init_rod_transform;                                       // 0x0740(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  init_camera_transform;                                    // 0x0770(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	int                                                next_turn_count;                                          // 0x07A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     buoy_location;                                            // 0x07A4(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               is_landing;                                               // 0x07B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x3];                                       // 0x07B1(0x0003) MISSED OFFSET
	float                                              move_rate;                                                // 0x07B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                qte_dir;                                                  // 0x07B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               is_qte_moving;                                            // 0x07BC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14[0x3];                                       // 0x07BD(0x0003) MISSED OFFSET
	struct FVector                                     buoy_offset;                                              // 0x07C0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     buoy_move_dir;                                            // 0x07CC(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	int                                                input_dir;                                                // 0x07D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              game_over_distance;                                       // 0x07DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UParticleSystemComponent*>            particle_array1;                                          // 0x07E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UParticleSystemComponent*>            particle_array;                                           // 0x07F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               push_u;                                                   // 0x0800(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               push_d;                                                   // 0x0801(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               push_r;                                                   // 0x0802(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               push_l;                                                   // 0x0803(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    camera_rot;                                               // 0x0804(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               is_attach;                                                // 0x0810(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               is_swing_move;                                            // 0x0811(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData15[0x2];                                       // 0x0812(0x0002) MISSED OFFSET
	float                                              old_right_axis_y;                                         // 0x0814(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FST_MiniGame_ST_ArrowData                   MinArrowData;                                             // 0x0818(0x000C) (Edit, BlueprintVisible)
	struct FST_MiniGame_ST_ArrowData                   MaxArrowData;                                             // 0x0824(0x000C) (Edit, BlueprintVisible)
	class UCurveFloat*                                 SwingPower;                                               // 0x0830(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinScrollSpeed;                                           // 0x0838(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxScrollSpeed;                                           // 0x083C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              dummy_power;                                              // 0x0840(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               is_use_dummy_power;                                       // 0x0844(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData16[0x3];                                       // 0x0845(0x0003) MISSED OFFSET
	TArray<struct FName>                               landing_fish;                                             // 0x0848(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UDataTable*                                  FishData;                                                 // 0x0858(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FST_MG_FishData                             result_fish;                                              // 0x0860(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                hit_fish_scale;                                           // 0x0888(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugAlwaysDispGuide;                                     // 0x088C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData17[0x3];                                       // 0x088D(0x0003) MISSED OFFSET
	float                                              deg_divid_num;                                            // 0x0890(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                hit_index;                                                // 0x0894(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              limit_dist;                                               // 0x0898(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              limit_pow;                                                // 0x089C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              now_pow;                                                  // 0x08A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData18[0x4];                                       // 0x08A4(0x0004) MISSED OFFSET
	TArray<struct FST_MG_FishData>                     dummy_fishdata;                                           // 0x08A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              min_pow;                                                  // 0x08B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               is_escape;                                                // 0x08BC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData19[0x3];                                       // 0x08BD(0x0003) MISSED OFFSET
	float                                              state_delay_time;                                         // 0x08C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                sub_step;                                                 // 0x08C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              result_scale;                                             // 0x08C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugDispFishArea;                                        // 0x08CC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData20[0x3];                                       // 0x08CD(0x0003) MISSED OFFSET
	TArray<int>                                        hit_area_index;                                           // 0x08D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              limit_dir;                                                // 0x08E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              rod_base_time;                                            // 0x08E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugJustHit;                                             // 0x08E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData21[0x7];                                       // 0x08E9(0x0007) MISSED OFFSET
	struct FTransform                                  init_fishcamera_transform;                                // 0x08F0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugForceEnd;                                            // 0x0920(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData22[0x3];                                       // 0x0921(0x0003) MISSED OFFSET
	float                                              now_ry_axis;                                              // 0x0924(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DebugRodBendRatio;                                        // 0x0928(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DebugDispRangeLine;                                       // 0x092C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData23[0x3];                                       // 0x092D(0x0003) MISSED OFFSET
	float                                              rod_dizzy_time;                                           // 0x0930(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData24[0x4];                                       // 0x0934(0x0004) MISSED OFFSET
	class UCurveFloat*                                 rod_base_curve;                                           // 0x0938(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 rod_dizzy_curve;                                          // 0x0940(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               is_swing_input_start;                                     // 0x0948(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DispGuideArrow;                                           // 0x0949(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DispGuideWaterPos;                                        // 0x094A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData25[0x1];                                       // 0x094B(0x0001) MISSED OFFSET
	float                                              HitTime;                                                  // 0x094C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               is_qte_success;                                           // 0x0950(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData26[0x3];                                       // 0x0951(0x0003) MISSED OFFSET
	float                                              reel_rot_time;                                            // 0x0954(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              reel_play_rate;                                           // 0x0958(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              pull_left_axis_x;                                         // 0x095C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              pull_left_axis_y;                                         // 0x0960(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugDispFishTrail;                                       // 0x0964(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData27[0x3];                                       // 0x0965(0x0003) MISSED OFFSET
	float                                              WaterHeight;                                              // 0x0968(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData28[0x4];                                       // 0x096C(0x0004) MISSED OFFSET
	class UWBP_Fishing_Result_C*                       wbp_result;                                               // 0x0970(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UWBP_Fishing_QTE_Dir_C*                      wbp_qte_dir;                                              // 0x0978(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FString                                     qte_str;                                                  // 0x0980(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class ABP_MiniGame_QteTriangleSpawn_C*             QteTriangle;                                              // 0x0990(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugSwingTest;                                           // 0x0998(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData29[0x3];                                       // 0x0999(0x0003) MISSED OFFSET
	float                                              arrow_pow;                                                // 0x099C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DebugFishShadowNum;                                       // 0x09A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData30[0x4];                                       // 0x09A4(0x0004) MISSED OFFSET
	class ABP_Fishing_ResultFish_C*                    bp_result_fish;                                           // 0x09A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              CableWidth;                                               // 0x09B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsEnableTick;                                             // 0x09B4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData31[0x3];                                       // 0x09B5(0x0003) MISSED OFFSET
	TArray<struct FST_Fishing_ResultFishData>          result_fish_array;                                        // 0x09B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                DEF_BGM_NORMAL;                                           // 0x09C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData32[0x4];                                       // 0x09CC(0x0004) MISSED OFFSET
	struct FName                                       DEF_BGM_ID_NORMAL;                                        // 0x09D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ABP_S3SoundPlayer_C*                         se_reel_player;                                           // 0x09D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_S3SoundPlayer_C*                         se_reelhit_player;                                        // 0x09E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_S3SoundPlayer_C*                         se_splash_player;                                         // 0x09E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_S3SoundPlayer_C*                         se_swing_player;                                          // 0x09F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     SellPlace;                                                // 0x09F8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData33[0x4];                                       // 0x0A04(0x0004) MISSED OFFSET
	class ULevelSequence*                              LevelSeq_Action;                                          // 0x0A08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugRental;                                              // 0x0A10(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData34[0x3];                                       // 0x0A11(0x0003) MISSED OFFSET
	float                                              AfterResultWait;                                          // 0x0A14(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FST_Fising_DetailFishData                   ResultFishDetailData;                                     // 0x0A18(0x0078) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              PlayLimitTime;                                            // 0x0A90(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               is_timeup;                                                // 0x0A94(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData35[0x3];                                       // 0x0A95(0x0003) MISSED OFFSET
	struct FST_Fishing_ShopData                        NowShopData;                                              // 0x0A98(0x0014) (Edit, BlueprintVisible, DisableEditOnInstance)
	unsigned char                                      UnknownData36[0x4];                                       // 0x0AAC(0x0004) MISSED OFFSET
	struct FName                                       item_name;                                                // 0x0AB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HitFishGramValue;                                         // 0x0AB8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugTestDrawLog;                                         // 0x0ABC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData37[0x3];                                       // 0x0ABD(0x0003) MISSED OFFSET
	int                                                EnableFlagNumber;                                         // 0x0AC0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TargetDistance;                                           // 0x0AC4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SwingRotateSpeed;                                         // 0x0AC8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData38[0x4];                                       // 0x0ACC(0x0004) MISSED OFFSET
	class UWBP_Fishing_SubQuestInfo_C*                 RefSubQuestWidget;                                        // 0x0AD0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               bSubQuestCompetition;                                     // 0x0AD8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSubQuestStampRally;                                      // 0x0AD9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData39[0x2];                                       // 0x0ADA(0x0002) MISSED OFFSET
	float                                              WaterHeightOffset;                                        // 0x0ADC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class ABP_MiniGame_FishingArea_C*>          FishAreaList;                                             // 0x0AE0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	TArray<float>                                      LandingFishRareScale;                                     // 0x0AF0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              AroundFishTimer;                                          // 0x0B00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AroundFishApperTime;                                      // 0x0B04(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bBiteFishAppeared;                                        // 0x0B08(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData40[0x7];                                       // 0x0B09(0x0007) MISSED OFFSET
	class ABP_Fising_BiteFish_C*                       RefBiteFish;                                              // 0x0B10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<class ABP_Fishing_FreeMoveFish_C*>          AroundFishList;                                           // 0x0B18(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	struct FST_GeneralWindowParam                      QuitDialogData;                                           // 0x0B28(0x0060) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UCurveFloat*                                 FishWeightCurve;                                          // 0x0B88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 FishSizeCurve;                                            // 0x0B90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 RodPowerCurve;                                            // 0x0B98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ReelPowerBaseRate;                                        // 0x0BA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxAnimBlendPower;                                        // 0x0BA4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BaseAnimBlendPowerOnHit;                                  // 0x0BA8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PrePullLeftAxisX;                                         // 0x0BAC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PrePullLeftAxisY;                                         // 0x0BB0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HitWaitCableLength;                                       // 0x0BB4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HitWaitCableReelSpeed;                                    // 0x0BB8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     BeforeBuoyLocation;                                       // 0x0BBC(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              BuoyMovePower;                                            // 0x0BC8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FarCastMotionDistance;                                    // 0x0BCC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsVisibleActionButtonIcon;                                // 0x0BD0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData41[0x3];                                       // 0x0BD1(0x0003) MISSED OFFSET
	int                                                HitFishWeight;                                            // 0x0BD4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BuoyMoveValue;                                            // 0x0BD8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsInsideFishArea;                                         // 0x0BDC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData42[0x3];                                       // 0x0BDD(0x0003) MISSED OFFSET
	float                                              FishBiteMoveLength;                                       // 0x0BE0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AddHitWaitingValue;                                       // 0x0BE4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BuoyMoveValueByRod;                                       // 0x0BE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RodActionBonusValueRate;                                  // 0x0BEC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDataTable*                                  RodDataTable;                                             // 0x0BF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FST_Fishing_Rod                             RodData;                                                  // 0x0BF8(0x0068) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FName                                       RodObjectID;                                              // 0x0C60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       LureObjectID;                                             // 0x0C68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FST_Fishing_Lure                            LureData;                                                 // 0x0C70(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               IsQTEFailedProcess;                                       // 0x0CA0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData43[0x7];                                       // 0x0CA1(0x0007) MISSED OFFSET
	struct FName                                       RodMaterialObjectID;                                      // 0x0CA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinFishBiteValue;                                         // 0x0CB0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinRandomMaxBiteValue;                                    // 0x0CB4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxRandomMaxBiteValue;                                    // 0x0CB8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HorizontalPullPower;                                      // 0x0CBC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RyoDirectionChangeRateOnWait;                             // 0x0CC0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RyoDirectionChangeRateOnHit;                              // 0x0CC4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RyoDirectionChangeMinAngle;                               // 0x0CC8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CableLengthNormalRate;                                    // 0x0CCC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CableLengthHitRate;                                       // 0x0CD0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bLimitFishMoveArea;                                       // 0x0CD4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData44[0x3];                                       // 0x0CD5(0x0003) MISSED OFFSET
	struct FVector                                     FishAppearLocationOffset;                                 // 0x0CD8(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              HitWaitCableRate;                                         // 0x0CE4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AxisRodMoveLimitRate;                                     // 0x0CE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EndFadeTime;                                              // 0x0CEC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDisableEndGame;                                          // 0x0CF0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData45[0x3];                                       // 0x0CF1(0x0003) MISSED OFFSET
	int                                                CableLocationsLastIndex;                                  // 0x0CF4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ReelRotateAxisX;                                          // 0x0CF8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ReelRotateAxisY;                                          // 0x0CFC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       PlayCountKey;                                             // 0x0D00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsAdjustPlay;                                             // 0x0D08(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData46[0x3];                                       // 0x0D09(0x0003) MISSED OFFSET
	float                                              AddBuoyMoveOffsetRate;                                    // 0x0D0C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BuoyAttractSpeedOnWait;                                   // 0x0D10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BuoyAttractSpeedOnHit;                                    // 0x0D14(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxAdjustCount;                                           // 0x0D18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UIDistanceInterpSpeed;                                    // 0x0D1C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<TEnumAsByte<E_MiniGame_FishType>>           NotBiteOnFirstFishList;                                   // 0x0D20(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               IsFirstFish;                                              // 0x0D30(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData47[0x3];                                       // 0x0D31(0x0003) MISSED OFFSET
	float                                              AnimAddOffsetForwardValue;                                // 0x0D34(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     AnimHandOffsetPos;                                        // 0x0D38(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     AnimHandOffsetPosBacker;                                  // 0x0D44(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 HandOffsetBackerCurve;                                    // 0x0D50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AnimAddOffsetMoreForwardBacker;                           // 0x0D58(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AnimAddRightBackerValue;                                  // 0x0D5C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AnimAddOffsetUpValue;                                     // 0x0D60(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C");
		return ptr;
	}


	void SetAnimOffsetPos();
	void AddAdjustPlayCount();
	void CheckIsAdjustPlay(bool* IsAdjust);
	void GetRefractionRate(float* Rate);
	void SetBuoyPosOnSwing();
	void UpdateCableEndPos();
	void UpdateBiteFishTargetLocation();
	void UpdateRyoDirection();
	void UpdateLoadMeshData();
	void InitAsyncLoad(bool* dummy);
	void UpdateBuoyLocation();
	void SettingFishWeight();
	class UMeshComponent* GetClothMeshComponent();
	TArray<struct FS3DetectActionParam> GetDetectAction();
	void ClockVisibleChange(bool Visible);
	void UpdateAroundFish();
	void CheckSubQuestEnabled(bool* Enabled);
	void SetEnabledFishArea(bool Enabled);
	void CreateSubQuestWidget(int RyoValue);
	void IsSubQuestCompetition(bool* IsCompetition, int* EventFlagValue);
	void ResetWaterPlane();
	void SettingWaterPlane();
	void GetResultRank(int* Rank);
	void IsFailedFishing(bool* Failed);
	void CheckTimeup(bool* Timeup);
	void SettingTimeup();
	void SettingEscape();
	void SettingDetector(bool Enable);
	void IsEnableFishing(bool* Enable);
	void GetSellPosition(struct FVector* pos);
	void InitializeShopResult();
	void SpawnSequenceActor(class ULevelSequence* InSequence0, class AActor* AttachParentActor0, class ABP_SpawnableSequenceActor_C** SpawnObj);
	void SettingSEPlayer(bool IsDestroy);
	void StopFishingBGM();
	void PlayBGM();
	void PlayReelSE();
	void StopAllSE();
	void DebugSEPlay();
	void PlayResultSound();
	void GetResultFishMesh(class USkeletalMeshComponent** RetMesh);
	void FishHit();
	void HitSetting();
	void GetFishingBuoyMesh(class UStaticMeshComponent** BuoyMesh);
	void UpdateCapture();
	void RestartSwing();
	void SetQteTriangleRotation();
	void UpdateQte();
	void MakeQteTriangle();
	void RemoveQte();
	void CreateResultWindow();
	void SettingRod();
	void SetCableLength();
	void SettingWidgetText();
	void GetFishShadow(class ABP_Fishing_FishShadow_C** RetFishShadow);
	void SetPullPower(float ArgAxis, bool ArgIsX);
	void GetFishGram(int* ArgGram);
	void HitTimeRestart();
	void CalcReelSpeedRate();
	void CalcDistance(float ArgRate, struct FVector* RetLocation);
	void QTE_Finish();
	void CalcArrowPow(float ArgInputPow, float* RetPow);
	void CalcCastingRate(float* Rate);
	void StartCast();
	void GetFishingBuoyRoot(class UStaticMeshComponent** BuoyMesh);
	void DebugDrawRangeLine(float ArgSplitNum);
	void UpdateDebug();
	void CalcRodBone();
	void UpdateABPCastingRate();
	void GetCable(class UCableComponent** RetCable);
	void GetBuoyScene(class USceneComponent** newParam);
	void UpdateFishPos();
	void InputSwingRY(float ArgAxis);
	void SettingResultCamera();
	void CameraChange(bool ArgUseSceneCamera);
	void SettingFromBuoy();
	void CheckFishAreaCollision(bool* RetHit);
	void MakeLandingFishList(bool* RetHit);
	void SettingHitFish();
	void UpdateFish();
	void SettingFishScale();
	void UpdateDelayState();
	void UpdateDistance();
	void GetNowDistance(float* RetDist);
	void SetupResult(float ArgWait);
	void CalcLimitDistPer(float* RetLimitPow);
	void GetFishingArrow(class ABP_Fishing_Arrow_C** AsBP_Fishing_Ryo);
	void GetHitFishData(struct FST_MG_FishData* newParam);
	void GetFishingABP(class UABP_Fishing_re_C** AsABP_Fishing_Re);
	void GetFishingRyo(class ABP_Fishing_Ryo_C** AsBP_Fishing_Ryo);
	void getQTEDirection(int* qte_dir);
	void CheckLeftStickTurn(bool* is_turn);
	void GetFishingBuoy(class ABP_FishingBuoy_test_C** Buoy);
	void CreateWindow();
	class ABP_MiniGameInputBase_C* SpawnInputControlActor();
	void UserConstructionScript();
	void QTEEndTimeline__FinishedFunc();
	void QTEEndTimeline__UpdateFunc();
	void qte_timeline_type3__FinishedFunc();
	void qte_timeline_type3__UpdateFunc();
	void qte_timeline_type3__qte_show__EventFunc();
	void qte_timeline_type3__qte_wait_start__EventFunc();
	void qte_timeline_type3__qte_start__EventFunc();
	void qte_timeline_type2__FinishedFunc();
	void qte_timeline_type2__UpdateFunc();
	void qte_timeline_type2__qte_show__EventFunc();
	void qte_timeline_type2__qte_wait_start__EventFunc();
	void qte_timeline_type2__qte_start__EventFunc();
	void UnknownFunc01();
	void Particle_Start_Timeline__FinishedFunc();
	void Particle_Start_Timeline__UpdateFunc();
	void P();
	void qte_timeline_type1__FinishedFunc();
	void qte_timeline_type1__UpdateFunc();
	void qte_timeline_type1__qte_show__EventFunc();
	void qte_timeline_type1__qte_wait_start__EventFunc();
	void qte_timeline_type1__qte_start__EventFunc();
	void ParticleRipple_Start_Timeline__FinishedFunc();
	void ParticleRipple_Start_Timeline__UpdateFunc();
	void BlendRateOnHitTimeline__FinishedFunc();
	void BlendRateOnHitTimeline__UpdateFunc();
	void QTEFailedAnimTimeline__FinishedFunc();
	void QTEFailedAnimTimeline__UpdateFunc();
	void Create_QTE_Widget();
	void Swing_LStickX(float Axis);
	void Swing_RStickY(float Axis);
	void Wait_LStick_X(float A);
	void Wait_RStick_X(float Axis);
	void Wait_RStick_Y(float Axis);
	void Input_Update();
	void Wait_Input_Update();
	void Buoy_Attract(float Rate, bool Condition);
	void Hit_RStick_X(float Axis);
	void Hit_RStick_Y(float Axis);
	void Hit_InputUpdate();
	void Swing_Input_Update();
	void Push_HitCheck_R2();
	void QTE_Start();
	void QTE_Start_Type3();
	void QTE_Start_Type2();
	void Wait_And_Hit_PushR();
	void Wait_And_Hit_PushL();
	void Wait_And_Hit_PushU();
	void Wait_And_Hit_PushD();
	void Wait_And_Hit_Update();
	void Wait_And_Hit_ReleaseR();
	void Wait_And_Hit_ReleaseL();
	void Wait_And_Hit_ReleaseU();
	void Wait_And_Hit_ReleaseD();
	void Swing_Move_Start();
	void Swing_Move_Stop();
	void Set_Fishing_Arrow_Visible(bool Visible);
	void Swing_RStickX(float InputPin);
	void Wait_LStick_Y(float Axis);
	void QTE_Init();
	void StartMiniGame();
	void EndMiniGame();
	void RestartMiniGame();
	void Init();
	void Fin();
	void Event_DebugDelayFishHit();
	void BindHitEventToBite();
	void Event_BiteFish();
	void QTE_End();
	void Event_RestartFishing();
	void FinalizeTalk();
	void Event_StartMiniGame();
	void Event_StartGameAfterFadeOut();
	void OnEndBiteFish(class AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);
	void OnEndFadeOutFinished();
	void OnEndFadeInFinished();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void Swing_Finished();
	void Rod_Update();
	void Hit();
	void Finish_Check();
	void Swing_Release();
	void Swing();
	void FeedBack_Play();
	void FeedBackStop();
	void Update();
	void Particle_Update();
	void Set_Active_Object(bool is_active);
	void Show_Result();
	void GetFishFinished();
	void S_1();
	void Update_Arrow(float Power);
	void EventSwingRelease();
	void QTE_Update(float move_rate);
	void qte_flash_end();
	void Delete_Particle();
	void QTE_Start_Type1();
	void ShowCaptureWindow();
	void EventABPEventBind();
	void EventABPEventUnBind();
	void Particle_StartWaitRipple();
	void Particle_EndWaitRipple();
	void Particle_StartHitWater();
	void Particle_EndHitWater();
	void CancelMiniGame();
	void Event_AddFreeFish();
	void RemoveFishList(class AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);
	void Event_OnQuitDecide(class AActor* Actor);
	void Event_OnQuitCancel(class AActor* Actor);
	void Event_CreateQuitDialog();
	void QTEFailedAnim();
	void Event_ButtonBottom();
	void UpdateForCable();
	void ExecuteUbergraph_BP_Minigame_Fishing_Test(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
