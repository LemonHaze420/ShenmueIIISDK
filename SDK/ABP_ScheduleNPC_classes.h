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

// AnimBlueprintGeneratedClass ABP_ScheduleNPC.ABP_ScheduleNPC_C
// 0xBC48 (0xC6E8 - 0x0AA0)
class UABP_ScheduleNPC_C : public US3NPCAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AA0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_F1548C3B4735622D0E13069E9E63ACBF;// 0x0AA8(0x0160)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_53E7F6BF43578B73DD9B21A5364E44C0;// 0x0C08(0x00E0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_59EFE4DB45998DD675C865A300AAD2FA;// 0x0CE8(0x00E0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_1614DBE94B4F11A5551310A931E15E10;      // 0x0DC8(0x0070)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_EF6E7B20472872CCCBF8B19555DF9939;// 0x0E38(0x00E0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_CCEBB48D44CC1450EBB5C69029E921AA;      // 0x0F18(0x0070)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_7CE58AD34E4AC1DAA7176995B695FF68;// 0x0F88(0x0050)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_834C5529474A09C1E3A6E0ADD3E74AA7;// 0x0FD8(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_D6EDDC8B49DFD75FBCE74E93C0574696;// 0x10B8(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_CE4D3BC54DA7227258E92A88C19304D3;// 0x1108(0x0050)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_7099BA5741002188322779B7E2ECBAA3;// 0x1158(0x00D0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_B4DBED3B44DD313CCFD2959763A9A989;// 0x1228(0x00E0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D9D1F02044B2C2AF2762C597AC45E9C7;// 0x1308(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9647C5A846FC8D2F29C07AA761B52B96;// 0x13B8(0x00B0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_514575954CB22B1CE8A99F88D787FB16;// 0x1468(0x00D0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_CBE35DEE40291D10C5216AAD9F2D596E;// 0x1538(0x00E0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_EE47A5AB445C576EEFD8778E031A6D76;// 0x1618(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_AD9549DD4B4827B1D6E2799892FFF8C1;// 0x16C8(0x00B0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_33CF785541E23031BDE8E08C60FCECEA;// 0x1778(0x00D0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_AE7F07E94D83BF1CB2386EAE6ED4E093;// 0x1848(0x0160)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_D9E15D664E8CEBDC37EDC08EAB70F676;// 0x19A8(0x00D0)
	unsigned char                                      UnknownData00[0x8];                                       // 0x1A78(0x0008) MISSED OFFSET
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_8150E465466DB0AF538FB6AF74AE509B; // 0x1A80(0x0270)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_4CAC9C534C0E3321A2E12C92E5183F2D;// 0x1CF0(0x00E0)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_925CDAC24C002BB3FCAD92BC9CC9429E;// 0x1DD0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_83A681144E25824598AFE28196CE552F;// 0x1E18(0x0048)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_173D7A724EFA1FF4A03285AB250CD34E;// 0x1E60(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7ACE7ADA46611D2068AE3BBE86D7D21C;// 0x1EA8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8A34205D4327756300827A8605BCA666;// 0x1EF0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3756360C4EC5CCFAADE60C8F66C3D771;// 0x1F38(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3484694B447641ADD6F3AE9A57858D03;// 0x1F80(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_22F2A2E345E2F40D4E76D4AEF2869DA6;// 0x1FC8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C7B4676B4BC1E11B9748E8AB18C8287A;// 0x2010(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0A231F4D4B99B3A88DC8A7B44B4E1A09;// 0x2058(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A4AC6E534A9623CA1BA2C69EDF97A1A0;// 0x20A0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5456B7194588E358B124D4BFDBAACD5D;// 0x20E8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7A1270E54E30BCCFAB0BD6A2FB930FD4;// 0x2130(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2350CAA5492868F4136730B3804BBCE4;// 0x2178(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_EF2BFF6C468B3AC31C977D983EAA323F;// 0x21C0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E3AECF7046745D7672483AB410F0A64B;// 0x2208(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6D8424454696550B31E48492C2D9FEB7;// 0x2250(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B3C504034A66F57C1E997886903A163B;// 0x2298(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_64F5CE88458E372A07FC5B8A15222F61;// 0x22E0(0x0048)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_E3D7F56948607C8A6A4BCCA576E04FB1;// 0x2328(0x0120)
	struct FAnimNode_TransitionPoseEvaluator           AnimGraphNode_TransitionPoseEvaluator_FFEF05054F281B43B9D356877B7B5B77;// 0x2448(0x0078)
	struct FAnimNode_TransitionPoseEvaluator           AnimGraphNode_TransitionPoseEvaluator_2B7CB1564B85F79F53FF058B3BD82061;// 0x24C0(0x0078)
	struct FAnimNode_Root                              AnimGraphNode_CustomTransitionResult_E450948045608D1B4971C686F712B8CC;// 0x2538(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_44F66E0A46FD89C1682819878AADFBDE;// 0x2580(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_84AB9572464DB33C13E9E2AF8432D924;// 0x25C8(0x0048)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_A615A2324BAED9C4B25124AEA459103F;// 0x2610(0x0120)
	struct FAnimNode_TransitionPoseEvaluator           AnimGraphNode_TransitionPoseEvaluator_6464B0584C22F497BC3AD98F60B25EE3;// 0x2730(0x0078)
	struct FAnimNode_TransitionPoseEvaluator           AnimGraphNode_TransitionPoseEvaluator_241164C146070777428342B350BACBA7;// 0x27A8(0x0078)
	struct FAnimNode_Root                              AnimGraphNode_CustomTransitionResult_58AE75C6462B8F538CBDF29A4BC2FA3B;// 0x2820(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_798A03A94F9BA9A5E19A27AA344B7FB8;// 0x2868(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5C00C5C94550E60AAE26A2A8A508C1EF;// 0x28B0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_03B0090C4A540F1921D63293D4E893E3;// 0x28F8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1613DCEF4C2DE64B9ADD0BB73D074966;// 0x2940(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_52C1C9D2409F39F24306A6823AE9017B;// 0x2988(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_FE5D0FCD411384E417876B9CB1243930;// 0x29D0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7EF29C2B475A281B4F242280D8FFC5ED;// 0x2A18(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_44182A144C616B0B1A2BE3A10C361698;// 0x2A60(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_48DBB16B41A73B77C9596EAA16C5FE0B;// 0x2AA8(0x0048)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_12E6E58C4207E63323561D95AF7DDA3E;// 0x2AF0(0x0120)
	struct FAnimNode_TransitionPoseEvaluator           AnimGraphNode_TransitionPoseEvaluator_D0F362EC4DAC11D10689489017E3F94F;// 0x2C10(0x0078)
	struct FAnimNode_TransitionPoseEvaluator           AnimGraphNode_TransitionPoseEvaluator_0958AC07417E592AF9B45D9D7ED3823E;// 0x2C88(0x0078)
	struct FAnimNode_Root                              AnimGraphNode_CustomTransitionResult_9D01CDF04B85D5D1D1067691982B78C5;// 0x2D00(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8B3399444013CB679D85BD9B4593C1E8;// 0x2D48(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_917F19C641B6F41FD676A7B7BCC73FC9;// 0x2D90(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_564B28984ADFB8A9DF7A0885773F04F5;// 0x2DD8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_76D82A1748AAEEDEE52C11A1A2AC8174;// 0x2E20(0x0048)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_1449FFAD428A462841486D8D13BCFE86;// 0x2E68(0x0120)
	struct FAnimNode_TransitionPoseEvaluator           AnimGraphNode_TransitionPoseEvaluator_E11AF2C146C86D51466AFFA9FA46DFCD;// 0x2F88(0x0078)
	struct FAnimNode_TransitionPoseEvaluator           AnimGraphNode_TransitionPoseEvaluator_3CBB34CA410C814A1AADDD8364E4CD94;// 0x3000(0x0078)
	struct FAnimNode_Root                              AnimGraphNode_CustomTransitionResult_1F93E80B40FD8684E839E38344199A37;// 0x3078(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7C799C4F48C7D9A8EC95CE8526CED6CB;// 0x30C0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9E353D784B4144792E8D8F97784778EE;// 0x3108(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1126457047F9DA3ECE442A86A4EFC6C0;// 0x3150(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4915215045FAE1F6F8F841801E69860F;// 0x3198(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E83E0A4A437233FFC1B37E836C186677;// 0x31E0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_99F386FF4AC39111F10226946A9118A4;// 0x3228(0x0048)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_CFF070E449B4BC9AC6DA378C221D2149;// 0x3270(0x0120)
	struct FAnimNode_TransitionPoseEvaluator           AnimGraphNode_TransitionPoseEvaluator_310006A747E0F4FA7EF15C8F51CBF28C;// 0x3390(0x0078)
	struct FAnimNode_TransitionPoseEvaluator           AnimGraphNode_TransitionPoseEvaluator_E99B14164D3E8C74BD03D6AE5965F9E4;// 0x3408(0x0078)
	struct FAnimNode_Root                              AnimGraphNode_CustomTransitionResult_61A153AA42E88BA85196ACA0AAEEFA8D;// 0x3480(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_114D159542777D76C190D1B33EB46148;// 0x34C8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1903FFE74975CA0F87B7ABB4A505F656;// 0x3510(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5E20F1824C5EE26405391CB030102853;// 0x3558(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_14346FE64F49A1952BA4EE8A1248292F;// 0x35A0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6ED5685649C9C7E8ECABFBB82EA96D71;// 0x35E8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_02507C7A4BDAD888D09291BD6BA22DBB;// 0x3630(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_FCE2E68345A5B2DBF66A0CA198263B7E;// 0x3678(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_CAF5147041184D6EDB40459B49E4DFF2;// 0x36C0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_CFA596E54093F582E5871CB03F41C753;// 0x3708(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_34CE7BBE48DF29E6C695A3BD9760508E;// 0x3750(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DD370C4E4E0303C0003EF794D51155C1;// 0x3798(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F7666C364640D7BE35E082954C629A61;// 0x37E0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_12EE296F4C46E4F5851EC4B19B971238;// 0x3828(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D0FC2F224B8742A7195F2A9E8844600F;// 0x3870(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8726994645E80F64DB68F992203A4F9B;// 0x38B8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6E35E1F340E02BF131ABFF9FEB258838;// 0x3900(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F800408E46804B34A079748B8B337C18;// 0x3948(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1CB2C6DE4A8E1A7A64382E84092B325B;// 0x3990(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D917932E40E8D9DB80A45781D7646601;// 0x39D8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E33A0803414DB32D92A18BA5B6D97AE4;// 0x3A20(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4BBF064F4E7E4EFF44828AA6054A7031;// 0x3A68(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B478BA7E4F0E049B7BDB7BA1F7A156E3;// 0x3AB0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_72CC4B3F47B9D6F8010B13916524713F;// 0x3AF8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_CD368F1642E9C0AB2962DA9C79EDCFC1;// 0x3B40(0x0048)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_8EEEBC86451917651712ED8F0048F0D8;// 0x3B88(0x0120)
	struct FAnimNode_TransitionPoseEvaluator           AnimGraphNode_TransitionPoseEvaluator_7D8E00BC4B391F2D4C0DBE8A7FFA0EA7;// 0x3CA8(0x0078)
	struct FAnimNode_TransitionPoseEvaluator           AnimGraphNode_TransitionPoseEvaluator_AC2F2DB745A5B831F3B90098D0A8C53A;// 0x3D20(0x0078)
	struct FAnimNode_Root                              AnimGraphNode_CustomTransitionResult_7EF52D0148DFFF50AA6433AB4B53EE58;// 0x3D98(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B5A312F542E29F69C7C0A08528DD4CC7;// 0x3DE0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_394C59BA429F988B4112F58CE5FD4431;// 0x3E28(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D7EFBE324AA0719D81B05582B8D9FA9A;// 0x3E70(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A61665494FE610172ACE4EA40C2A6AA7;// 0x3EB8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_89CE402D4B3848AF4EEDD9812EDB6B2D;// 0x3F00(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_AF4967AE46587B87947BF8B6A98CE6A8;// 0x3F48(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8E0438494310FDCC4FECA19C394C61A6;// 0x3F90(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2526EFF046332D7B38DB4C82DF1CBB9B;// 0x3FD8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0CFA1C6F4CC26443725010AB0F28C3F3;// 0x4020(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_9E70F57E4EFBC014669DE4B1031E80BD;// 0x40D0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_60D3616B485A93E0A37025A6ECBB76D0;// 0x4118(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_3664970541BC63E507E2AC95C1BD6692;// 0x41C8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F350C42F433C89C4E54B6586FBBDE73F;// 0x4210(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_AF653E7B4E587AAB5F927AB451400CB8;// 0x42C0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9859549E43330D995EA14090E3AC61ED;// 0x4308(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_ACAD19BA41A5E0BAFDB687A8A39E965A;// 0x4350(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_7B77C3D84CF48BD83A86D28C863DDACF;// 0x4400(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_13B586BA45EAA7F0432380ABD9EBB6B6;// 0x4448(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_E97FB93F41CA700D0DAB508BF352280B;// 0x44F8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_22429C134DC7CDC9F2EE0F9C1E073C46;// 0x4540(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_432138A14FADF34EDA69DAA64E92DE1A;// 0x45F0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_94EB3E9149B56B3A1FB0CFBF12180938;// 0x4638(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_62FC080E4E1836A5A42DEF8FC22941C5;// 0x46E8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8E5356EE44063B41A86AE3B12C46263A;// 0x4730(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_2A8596FF4F8893951EC0AFA1F6B3AC62;// 0x47E0(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_61CB37644DF89CEB95A0CC95FDB8550F;// 0x4828(0x0128)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_B9EBD2974AF2C60DBB6EC59178C45B50;// 0x4950(0x0048)
	struct FAnimNode_BlendListByInt                    AnimGraphNode_BlendListByInt_7920B6F74CE8C7350DA8FBB58EA5986A;// 0x4998(0x00D0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_04BA807E45D116BF249B87967B9B5DAE;// 0x4A68(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6A37992346BB38D8976B2E912F031619;// 0x4B38(0x00B0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_3605F52F4028E46BE792BE93BBBE9370;// 0x4BE8(0x0048)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_56AA24BD4F69FD2A8BA5CDBDC371B94D; // 0x4C30(0x0270)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_1002D9F64320EC4AA9C03A8CE5A8B251; // 0x4EA0(0x0270)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_5383FA244AAAD254E3517A83E28FE5ED;// 0x5110(0x0048)
	struct FAnimNode_S3ScaleRootMotion                 AnimGraphNode_S3ScaleRootMotion_1563317E4CFEB90B46476181DBD173DB;// 0x5158(0x0050)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_483169F54EB668AE08E4588B9560B844;// 0x51A8(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_280D8FB5435F8121D51E39A756E9B87C;// 0x5258(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_C4CDD1C042BF44F06D6461A578950422;// 0x5308(0x0048)
	struct FAnimNode_BlendListByInt                    AnimGraphNode_BlendListByInt_A9A985484AD0D45BE2E06FBF1711EAB3;// 0x5350(0x00D0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_CB7ED50040A585F92A762EAC3840AC41;// 0x5420(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6E71E48743B0CF5C1840709709340B0F;// 0x54F0(0x00B0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_382879B2429E9CB8599770AF55E89B93;// 0x55A0(0x0048)
	unsigned char                                      UnknownData01[0x8];                                       // 0x55E8(0x0008) MISSED OFFSET
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_EB1A3DFC455E192BAE8A28B0BDA5F83B; // 0x55F0(0x0270)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_F1D28F484A9A97DF6A83948EB79CE247; // 0x5860(0x0270)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_DA5DDA7547385E3CF861158CDB21CDE0;// 0x5AD0(0x0048)
	struct FAnimNode_S3ScaleRootMotion                 AnimGraphNode_S3ScaleRootMotion_5A198FC84B2C46F93294DEA731355EC7;// 0x5B18(0x0050)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8AFA97604801D3CC81BD3E9D33609C6F;// 0x5B68(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_00D6A69F41EAE80B163CB89B203B3A16;// 0x5C18(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D2F154CC425A343817D3D19E7E3337D1;// 0x5CC8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F9D8DE7042F1D66936C8AEA2B31532BD;// 0x5D10(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_C4139569449506A3EA9538BB053BA4C1;// 0x5DC0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_AFC5BD284DFD4F07197E95A0A22316A0;// 0x5E08(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_82E824D54BEB2AF9283F0D9B0547541F;// 0x5EB8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_ACA1A4BF4F57257C1C6509939628C137;// 0x5F00(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_29DAC26E4185D5F8CD261FB2EC1E49DF;// 0x5FB0(0x0048)
	unsigned char                                      UnknownData02[0x8];                                       // 0x5FF8(0x0008) MISSED OFFSET
	struct FAnimNode_S3DistanceDriver                  AnimGraphNode_S3DistanceDriver_3AD9C26B4D8C4E8708159E8511ABF11F;// 0x6000(0x00F0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_DB779DDB4BA1DCD5A81C32AADE697EAB;// 0x60F0(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0AE5AEB541D261089750CAA4C58874C7;// 0x61C0(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_A7CBB6BB4479A4B2DE78409BCBDD813C;// 0x6270(0x0048)
	struct FAnimNode_BlendListByInt                    AnimGraphNode_BlendListByInt_8D7A39B443CC8B0DD50A24BDDEBAC3E9;// 0x62B8(0x00D0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_DDD4FE2C4C7CECA554680290FA63BCEB;// 0x6388(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C70AD1E044F267922AEF3AA7D1D3DBAF;// 0x6458(0x00B0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_B47ED6EB44D6613D8037239B64277CEF;// 0x6508(0x0048)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_AB2D7F3742D1EED8A01EFEA2F1E1DE4B; // 0x6550(0x0270)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_C4E950654F95D4346523F88C7A56EDBD; // 0x67C0(0x0270)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_BED931ED46925823E1BE938F94B2C743;// 0x6A30(0x0048)
	struct FAnimNode_S3ScaleRootMotion                 AnimGraphNode_S3ScaleRootMotion_C262CEF845CA9D2EB617A3B7A7EFFA8A;// 0x6A78(0x0050)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C34CB99D4D3481B320C4CBB056713CD0;// 0x6AC8(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_085512F4483D0BB0C606BE8D2BA834BF;// 0x6B78(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_F26BC88B4F17AED9494B75BAB9D6DC37;// 0x6C28(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E73072DF432239B9F25427A80736DAAC;// 0x6C70(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_9A3BB8AB41AF802F1151F4864650FDC0;// 0x6D20(0x0048)
	struct FAnimNode_BlendListByInt                    AnimGraphNode_BlendListByInt_7784EE5D488C421F9F7337A9536783AA;// 0x6D68(0x00D0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_CB955F364FAEEAF6B49481B910A6A7BE;// 0x6E38(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5AFB553F4C938EFEEA88D2AC2F111221;// 0x6F08(0x00B0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_75B3565A421FB90412725D9E8C3E6B3B;// 0x6FB8(0x0048)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_1567493943A9CDD55E422E85578FC6ED; // 0x7000(0x0270)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_4AD7030A4F8D4545A442DBBA912237B3; // 0x7270(0x0270)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_4618EFD5499682CEC93ECB96DAE125F9;// 0x74E0(0x0048)
	struct FAnimNode_S3ScaleRootMotion                 AnimGraphNode_S3ScaleRootMotion_E2DAE1C7421507D662F22B997B658925;// 0x7528(0x0050)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_063676594DA61FC2B144A7876149FA51;// 0x7578(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_521525D54F1C46EA081204904C3C12C8;// 0x7628(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_5D21860F4CD0216BCA14229A3605F48C;// 0x76D8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_86977DB4489EFB22A764FDB81D5EC094;// 0x7720(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_62E1B9344D161FB72600E496C11FFA99;// 0x77D0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_97B5234E4415E8E367104193C1440C1B;// 0x7818(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_5922F98B475685EE1D266C825D05920C;// 0x78C8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8C8DBD024E7AD93CD1ECE68E1700765B;// 0x7910(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_1FFD6B7D4184C82A0069E995048EE184;// 0x79C0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_DEF2574E47607B68CE54A4B225E55E52;// 0x7A08(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_B70FD0AF4ECC192844CB39BCB022F216;// 0x7AB8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_EDE881874B52CB1BA02B7AA2E7BE3F08;// 0x7B00(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_1C40E03D494DEE19F000ACAAE7F63EED;// 0x7BB0(0x0048)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_8DD454B446DBABB531AD89AB1275A224;// 0x7BF8(0x00E0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_271FCD5B45C563F009BCD0B74B2FAB6C;// 0x7CD8(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_47200A9141517BA369E04291E30755B9;// 0x7D88(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_C3352D2441A8CC5AF08CA5B2E2140C09;// 0x7E38(0x0048)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_CB57D54F4DFA32AAE657F6A2DFED4860;// 0x7E80(0x00E0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_549A06F74FF15EC1D99290BD335C1D2D;// 0x7F60(0x00B0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_66BA47854FE6CE10F71727BF5A58295C;// 0x8010(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_7873189841C944198480A7AF203B2EBD;// 0x8058(0x0048)
	struct FAnimNode_S3SpeedWarping                    AnimGraphNode_S3SpeedWarping_ACC3A39B4B99E297D757AE9E4845D786;// 0x80A0(0x0180)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_05D7EDD6444B8CC57FD40C8AF4D8B5E7;// 0x8220(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_06A2A5A64A2F858F16A1FDB431C25A37;// 0x82D0(0x0048)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_55CCBBF84BC40378A8F0F9B82E58B4B7;// 0x8318(0x00E0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_009C361448C2D160D5CFE48D97853B43;// 0x83F8(0x00B0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_3C8CB0A3438E94891D858EBBB2DA75FC;// 0x84A8(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_B6F66F9F4C25965F3721CC877E11C2E8;// 0x84F0(0x0048)
	struct FAnimNode_S3SpeedWarping                    AnimGraphNode_S3SpeedWarping_F23F7C924E6EC52EEBAAD18B2912C576;// 0x8538(0x0180)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8333FE2041458757386E3CACEE8B028E;// 0x86B8(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_02CDE93741D4954B26C0D8BD31406ADE;// 0x8768(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0120BDE14367C98809292485BA016C7D;// 0x87B0(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_B352E60D4778E63885175A8EC6F2568A;// 0x8860(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_A467C22E42C29531AED65EB1D5950DC6;// 0x88A8(0x00E0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_1CD4D2214531C57588038FAFA5491AB9;// 0x8988(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_FDAA293645B0C985B3136EB3EC5C3CF1;// 0x89D0(0x00E0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_7D6FF50C41FCA539342693BA90B2A1BA;// 0x8AB0(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_30FDBDB449FFD0250318D19EA9F11E5A;// 0x8B90(0x0050)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_638CE01C42E496182A5D318D94428BC0;// 0x8BE0(0x00E0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_D298CF81482C671523ABF9A78E882358;// 0x8CC0(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_D03B749F497482B5EB2E4DB85EC243F8;// 0x8DA0(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_19D4FCAF43BC2B85309B059448558738;// 0x8DF0(0x0050)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_782F97E0490C24F6F2FC5DA071E21978;// 0x8E40(0x00D0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_B3E1CCD64D43F85C599FCD97430C0FEE;// 0x8F10(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_243B1A1A4D696DDC6CF9E78EE7DDE81D;// 0x8FE0(0x00B0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_54D167364D998615B1C571A2D52F2CDA;// 0x9090(0x0128)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_BB81008740726C00442D28927BBE8032;// 0x91B8(0x0128)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_3976625D458EFC6AA22B979D6C9BA116;// 0x92E0(0x00D0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_4295DA1B40BE0D8EC6AE43A3C93D4C00;// 0x93B0(0x0128)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_7E9DE8184C10E663A219D8AECFA9DD97;// 0x94D8(0x00D0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_0887491D40ACF823E06EFA9C4BF26AE5;// 0x95A8(0x00D0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_CF2DBFB5409C873C465818B0D498285C;// 0x9678(0x0128)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_1FC366774F3FD8F559313A9D48ED26D2;// 0x97A0(0x00E0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_2079582E4210FBBE75521BB513E84AF3;// 0x9880(0x00D0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_31BEAF4546249011F02716AF0A614915;// 0x9950(0x00D0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_8FCCE0EC41A5A1B20E0A459D19E1E706;// 0x9A20(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_51EED3844F2919FA457F229F1CDAC1C2;// 0x9B00(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_B30A4BEC409F7F38426192A2C9FB76CF;// 0x9B50(0x0050)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_428429344CA4A25D37EC62AA6D43E8F5;// 0x9BA0(0x00D0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_DB927FAD41D5F31470A35D8F15143413;// 0x9C70(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_064152874A50A8C2670322AE7577DD0C;// 0x9CC0(0x0050)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_58DE38E24BAFDB5F6C54DBAF49FBB927;// 0x9D10(0x00D0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_9ACD0E084DBA55A6AA1B5783880573A9;// 0x9DE0(0x0050)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_0C24566E4F3FCA0762231B97C684DF7D;// 0x9E30(0x00D0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_1DAECF10435D10C6404ED781575E2BEC;// 0x9F00(0x0128)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_A8AEC546471111BE0B4AFEAA3CFBE5FF;// 0xA028(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_8EE297FF4D882E1BB58E4B8E8C4416FA;// 0xA108(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_FB43CA6D452F5869D9B63F8663F9DC5E;// 0xA158(0x0050)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_497B70CD4CAC9359ED3BC79A5F80EED6;// 0xA1A8(0x0160)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_7A29547244D58172D2CC0A92FC705795;// 0xA308(0x0048)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_D779631B45FC084512A298AC2FD3A8C7;// 0xA350(0x00D0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_A247427946C3DA3C244271AEEE15CEE9;// 0xA420(0x0048)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_A6097A82402A0C9F66A4EE817953D6DA;// 0xA468(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_F8E3D1BA49328CAACA24158372BFFDE9;// 0xA548(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_4C376A684426E5A0323168A8276ADBC5;// 0xA598(0x0050)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_B3C0EA7A4FB769B0F8A334A9341BDEA8;// 0xA5E8(0x00D0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_CAE9098B49D6CD5B36B6E2B7D2FB9045;// 0xA6B8(0x0050)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_97591BFD420FA65DD1AA56B98ABFB929;// 0xA708(0x0160)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_0114C0CC431B2959FBCE62AC39588BE4;// 0xA868(0x0048)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_BBA583564FA05F3EBBE95D930B16BDAB;// 0xA8B0(0x00E0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_C94D0B6D43F144C50C42109BC4BBA7C7;// 0xA990(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_85EEEB884FE03F7B2A7194AE37F078FB;// 0xAAF0(0x0160)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_EE41FA104D7705E55D4F229992A57FED;// 0xAC50(0x00D0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_9506549443D84E5E726F9AA4B404C82A;// 0xAD20(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_15D1B2FD42BB886C9F23F6892EA20698;// 0xAD68(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_780F7B9B47A000929F736C87F4EC0727;// 0xAEC8(0x0160)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_CEACD47B45C3F94A3A191298E79F95F9;// 0xB028(0x00E0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_DEA0F99144866417D66DA995E5542708;// 0xB108(0x0160)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_DFE400A4429361A4F7F458B9C2567D29;// 0xB268(0x00E0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_D782D16647BE78E06A73A8ABCA61BF4C;// 0xB348(0x00D0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_E2E98CAA41AF058A7DD3BAAADF25CD2D;// 0xB418(0x0050)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_CC3CC1CC4444AF0FA618DCA5A649B44A;// 0xB468(0x0160)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_43363199465EA03FFF89A589EA1CC10B;// 0xB5C8(0x00E0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_4098D51E455F8AA225E2DCB8FC9E816A;// 0xB6A8(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_013BA6794E179E6EF1C6B082BBD4B32D;// 0xB6F0(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_594964454B323F6FEB7C71AB05D79594;// 0xB738(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_9EA89A904F02DFCAE86C2F814BB1E5F2;// 0xB780(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_91D2DD8F4AEFC5BD6D93989F2688A1DF;// 0xB7C8(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_576853754609C9C8B2C0F38FB0D05D40;// 0xB810(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_CCF31C2C45D4978C9428EB869452E639;// 0xB860(0x0050)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_C7B8F0AB485C9F2F6D2DD7B05908955B;// 0xB8B0(0x0160)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_28007BB84F66D3223DF61181F6FFE988;// 0xBA10(0x00B0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_D5893D844ACA84030DFF938C1CC874A6;// 0xBAC0(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_BAEBB00D494824852642EB92E581335F;// 0xBBA0(0x0050)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_091783424BE1E2C05001948DCCC92F07;// 0xBBF0(0x0128)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_338EF5D44B3B188DA37CA38DE9FCD4E9;// 0xBD18(0x0128)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_14615E8B4786EB5451424DA6DC8A0BFA;// 0xBE40(0x00E0)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_E77B5ADD4E265C9BF2C05493628147E1; // 0xBF20(0x0270)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_2880E0D84CBD5E5E5DAEA0BA3D866EC4;// 0xC190(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_F09CC1344045AD7EEC74D8A6ABF938C8;// 0xC1D8(0x0048)
	struct FAnimNode_SubInstance                       AnimGraphNode_SubInstance_E7F2D4DB4827A89D0593A1BB1D7ECC87;// 0xC220(0x00C8)
	struct FAnimNode_Root                              AnimGraphNode_Root_5FCB56C44FF5910A64AB038EF200BABE;      // 0xC2E8(0x0048)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_9D5F72FE48B111702B37FCB958CE4D02;// 0xC330(0x00E0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_E9B5C1594F1915D508B8FDB1580B8D48;// 0xC410(0x00E0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_70E05D1E434895704A7A69806DB95781;// 0xC4F0(0x00B0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_C1045FF6475432D6BEA4D380F614BCAA;// 0xC5A0(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_53F7E9414082B7F2B8B226A9F41C5546;// 0xC5F0(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_2732759D45B556FA84C37AA740A759AD;// 0xC640(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_105AA4CF465B70E926BF0BB13A497BB9;// 0xC690(0x0050)
	bool                                               UseFootPlanting;                                          // 0xC6E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0xC6E1(0x0003) MISSED OFFSET
	float                                              TalkBlendTime;                                            // 0xC6E4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_ScheduleNPC.ABP_ScheduleNPC_C");
		return ptr;
	}


	float GetTalkBlendTime();
	void BeginOpenDoor();
	void RequestAttachActionName(const struct FName& ActionName, const struct FGameplayTag& AttachmentTag);
	void RequestAttachAnimationName(const struct FName& AnimationName, const struct FGameplayTag& AttachmentTag);
	bool IsLookAtBody();
	void Attach_DefinitionFromHaveItem(struct FHaveItemAttachSetting* HaveItem);
	void DetachAll();
	void Attach_AnimNotify(class UBP_AnimNotify_Attach_C* AnimNotify);
	void GetAttachInfo(class UStaticMesh** StaticMesh, class USkeletalMesh** SkeletalMesh, struct FNPCAttachInfo* Info);
	void AttachAnimObject(class AActor* Actor, class USkeletalMeshComponent* SkMeshComp, const struct FName& SocketName, bool IsSpawn);
	void NewFunction_1();
	void DetachAnim();
	void AttachStaticObject(class AActor* Actor, class UStaticMeshComponent* MeshComp, const struct FName& SocketName, bool IsSpawn, bool IsCollision);
	void Attach(struct FNPCAttachSetting* Setting);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_TransitionResult_89CE402D4B3848AF4EEDD9812EDB6B2D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_TransitionResult_AF4967AE46587B87947BF8B6A98CE6A8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_TransitionResult_E83E0A4A437233FFC1B37E836C186677();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_TransitionResult_2526EFF046332D7B38DB4C82DF1CBB9B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_SequencePlayer_0CFA1C6F4CC26443725010AB0F28C3F3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_TransitionResult_4915215045FAE1F6F8F841801E69860F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_SequencePlayer_60D3616B485A93E0A37025A6ECBB76D0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_TransitionResult_1126457047F9DA3ECE442A86A4EFC6C0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_SequencePlayer_F350C42F433C89C4E54B6586FBBDE73F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_TransitionResult_9E353D784B4144792E8D8F97784778EE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_SequencePlayer_ACAD19BA41A5E0BAFDB687A8A39E965A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_SequencePlayer_13B586BA45EAA7F0432380ABD9EBB6B6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_TransitionResult_7C799C4F48C7D9A8EC95CE8526CED6CB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_SequencePlayer_22429C134DC7CDC9F2EE0F9C1E073C46();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_SequencePlayer_94EB3E9149B56B3A1FB0CFBF12180938();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_SequencePlayer_8E5356EE44063B41A86AE3B12C46263A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_BlendSpacePlayer_61CB37644DF89CEB95A0CC95FDB8550F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_TwoWayBlend_1449FFAD428A462841486D8D13BCFE86();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_BlendListByInt_7920B6F74CE8C7350DA8FBB58EA5986A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_BlendListByBool_04BA807E45D116BF249B87967B9B5DAE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_SequencePlayer_6A37992346BB38D8976B2E912F031619();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_TwoBoneIK_56AA24BD4F69FD2A8BA5CDBDC371B94D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_TwoBoneIK_1002D9F64320EC4AA9C03A8CE5A8B251();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_SequencePlayer_483169F54EB668AE08E4588B9560B844();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_SequencePlayer_280D8FB5435F8121D51E39A756E9B87C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_TransitionResult_76D82A1748AAEEDEE52C11A1A2AC8174();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_TransitionResult_A61665494FE610172ACE4EA40C2A6AA7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_TransitionResult_D7EFBE324AA0719D81B05582B8D9FA9A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_TransitionResult_99F386FF4AC39111F10226946A9118A4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_BlendListByInt_A9A985484AD0D45BE2E06FBF1711EAB3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_BlendListByBool_CB7ED50040A585F92A762EAC3840AC41();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_SequencePlayer_6E71E48743B0CF5C1840709709340B0F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_TwoBoneIK_EB1A3DFC455E192BAE8A28B0BDA5F83B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_TwoBoneIK_F1D28F484A9A97DF6A83948EB79CE247();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_SequencePlayer_8AFA97604801D3CC81BD3E9D33609C6F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_SequencePlayer_00D6A69F41EAE80B163CB89B203B3A16();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_TransitionResult_564B28984ADFB8A9DF7A0885773F04F5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_TransitionResult_917F19C641B6F41FD676A7B7BCC73FC9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_TransitionResult_8B3399444013CB679D85BD9B4593C1E8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_TransitionResult_394C59BA429F988B4112F58CE5FD4431();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_TransitionResult_B5A312F542E29F69C7C0A08528DD4CC7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_SequencePlayer_F9D8DE7042F1D66936C8AEA2B31532BD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_SequencePlayer_AFC5BD284DFD4F07197E95A0A22316A0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_TwoWayBlend_12E6E58C4207E63323561D95AF7DDA3E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_SequencePlayer_ACA1A4BF4F57257C1C6509939628C137();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_S3DistanceDriver_3AD9C26B4D8C4E8708159E8511ABF11F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_BlendListByBool_DB779DDB4BA1DCD5A81C32AADE697EAB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_SequencePlayer_0AE5AEB541D261089750CAA4C58874C7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_BlendListByInt_8D7A39B443CC8B0DD50A24BDDEBAC3E9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_BlendListByBool_DDD4FE2C4C7CECA554680290FA63BCEB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_SequencePlayer_C70AD1E044F267922AEF3AA7D1D3DBAF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_TwoBoneIK_AB2D7F3742D1EED8A01EFEA2F1E1DE4B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_TwoBoneIK_C4E950654F95D4346523F88C7A56EDBD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_SequencePlayer_C34CB99D4D3481B320C4CBB056713CD0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_SequencePlayer_085512F4483D0BB0C606BE8D2BA834BF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_TwoWayBlend_CFF070E449B4BC9AC6DA378C221D2149();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_TransitionResult_48DBB16B41A73B77C9596EAA16C5FE0B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_TransitionResult_44182A144C616B0B1A2BE3A10C361698();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_TwoWayBlend_8EEEBC86451917651712ED8F0048F0D8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_TransitionResult_7EF29C2B475A281B4F242280D8FFC5ED();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_TransitionResult_CD368F1642E9C0AB2962DA9C79EDCFC1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_TransitionResult_72CC4B3F47B9D6F8010B13916524713F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_SequencePlayer_E73072DF432239B9F25427A80736DAAC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_TransitionResult_FE5D0FCD411384E417876B9CB1243930();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_BlendListByInt_7784EE5D488C421F9F7337A9536783AA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_BlendListByBool_CB955F364FAEEAF6B49481B910A6A7BE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_SequencePlayer_5AFB553F4C938EFEEA88D2AC2F111221();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_TwoBoneIK_1567493943A9CDD55E422E85578FC6ED();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_TwoBoneIK_4AD7030A4F8D4545A442DBBA912237B3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_SequencePlayer_063676594DA61FC2B144A7876149FA51();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_SequencePlayer_521525D54F1C46EA081204904C3C12C8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_TransitionResult_52C1C9D2409F39F24306A6823AE9017B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_TransitionResult_B478BA7E4F0E049B7BDB7BA1F7A156E3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_TransitionResult_4BBF064F4E7E4EFF44828AA6054A7031();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_TransitionResult_E33A0803414DB32D92A18BA5B6D97AE4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_TransitionResult_D917932E40E8D9DB80A45781D7646601();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_TransitionResult_1CB2C6DE4A8E1A7A64382E84092B325B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_SequencePlayer_86977DB4489EFB22A764FDB81D5EC094();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_TransitionResult_03B0090C4A540F1921D63293D4E893E3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_SequencePlayer_97B5234E4415E8E367104193C1440C1B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_SequencePlayer_8C8DBD024E7AD93CD1ECE68E1700765B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_TransitionResult_5C00C5C94550E60AAE26A2A8A508C1EF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_SequencePlayer_DEF2574E47607B68CE54A4B225E55E52();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_SequencePlayer_EDE881874B52CB1BA02B7AA2E7BE3F08();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_TransitionResult_798A03A94F9BA9A5E19A27AA344B7FB8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_LayeredBoneBlend_8DD454B446DBABB531AD89AB1275A224();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_SequencePlayer_271FCD5B45C563F009BCD0B74B2FAB6C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_SequencePlayer_47200A9141517BA369E04291E30755B9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_LayeredBoneBlend_CB57D54F4DFA32AAE657F6A2DFED4860();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_SequencePlayer_549A06F74FF15EC1D99290BD335C1D2D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_S3SpeedWarping_ACC3A39B4B99E297D757AE9E4845D786();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_SequencePlayer_05D7EDD6444B8CC57FD40C8AF4D8B5E7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_TwoWayBlend_A615A2324BAED9C4B25124AEA459103F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_TransitionResult_84AB9572464DB33C13E9E2AF8432D924();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_LayeredBoneBlend_55CCBBF84BC40378A8F0F9B82E58B4B7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_SequencePlayer_009C361448C2D160D5CFE48D97853B43();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_S3SpeedWarping_F23F7C924E6EC52EEBAAD18B2912C576();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_SequencePlayer_8333FE2041458757386E3CACEE8B028E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_TransitionResult_44F66E0A46FD89C1682819878AADFBDE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_SequencePlayer_0120BDE14367C98809292485BA016C7D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_BlendListByBool_782F97E0490C24F6F2FC5DA071E21978();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_BlendListByBool_B3E1CCD64D43F85C599FCD97430C0FEE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_BlendSpacePlayer_54D167364D998615B1C571A2D52F2CDA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_BlendSpacePlayer_BB81008740726C00442D28927BBE8032();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_BlendListByBool_3976625D458EFC6AA22B979D6C9BA116();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_BlendSpacePlayer_4295DA1B40BE0D8EC6AE43A3C93D4C00();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_BlendListByBool_7E9DE8184C10E663A219D8AECFA9DD97();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_BlendListByBool_0887491D40ACF823E06EFA9C4BF26AE5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_BlendSpacePlayer_CF2DBFB5409C873C465818B0D498285C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_BlendListByBool_2079582E4210FBBE75521BB513E84AF3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_BlendListByBool_31BEAF4546249011F02716AF0A614915();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_BlendListByBool_428429344CA4A25D37EC62AA6D43E8F5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_BlendListByBool_58DE38E24BAFDB5F6C54DBAF49FBB927();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_BlendListByBool_0C24566E4F3FCA0762231B97C684DF7D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_BlendSpacePlayer_1DAECF10435D10C6404ED781575E2BEC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_ModifyBone_497B70CD4CAC9359ED3BC79A5F80EED6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_BlendListByBool_D779631B45FC084512A298AC2FD3A8C7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_BlendListByBool_B3C0EA7A4FB769B0F8A334A9341BDEA8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_ModifyBone_97591BFD420FA65DD1AA56B98ABFB929();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_ModifyBone_C94D0B6D43F144C50C42109BC4BBA7C7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_ModifyBone_85EEEB884FE03F7B2A7194AE37F078FB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_BlendListByBool_EE41FA104D7705E55D4F229992A57FED();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_ModifyBone_15D1B2FD42BB886C9F23F6892EA20698();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_ModifyBone_780F7B9B47A000929F736C87F4EC0727();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_ModifyBone_DEA0F99144866417D66DA995E5542708();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_LayeredBoneBlend_DFE400A4429361A4F7F458B9C2567D29();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_BlendListByBool_D782D16647BE78E06A73A8ABCA61BF4C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_ModifyBone_CC3CC1CC4444AF0FA618DCA5A649B44A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_ModifyBone_C7B8F0AB485C9F2F6D2DD7B05908955B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_BlendSpacePlayer_091783424BE1E2C05001948DCCC92F07();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_BlendSpacePlayer_338EF5D44B3B188DA37CA38DE9FCD4E9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_TwoBoneIK_E77B5ADD4E265C9BF2C05493628147E1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_SequencePlayer_70E05D1E434895704A7A69806DB95781();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_TwoWayBlend_E3D7F56948607C8A6A4BCCA576E04FB1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_TransitionResult_114D159542777D76C190D1B33EB46148();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_TransitionResult_F800408E46804B34A079748B8B337C18();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_TransitionResult_E3AECF7046745D7672483AB410F0A64B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_TransitionResult_EF2BFF6C468B3AC31C977D983EAA323F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_TransitionResult_2350CAA5492868F4136730B3804BBCE4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_TransitionResult_7A1270E54E30BCCFAB0BD6A2FB930FD4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_TransitionResult_5456B7194588E358B124D4BFDBAACD5D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_TransitionResult_A4AC6E534A9623CA1BA2C69EDF97A1A0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_TransitionResult_6E35E1F340E02BF131ABFF9FEB258838();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_TransitionResult_0A231F4D4B99B3A88DC8A7B44B4E1A09();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_TransitionResult_22F2A2E345E2F40D4E76D4AEF2869DA6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_TransitionResult_3484694B447641ADD6F3AE9A57858D03();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_TransitionResult_3756360C4EC5CCFAADE60C8F66C3D771();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_TransitionResult_7ACE7ADA46611D2068AE3BBE86D7D21C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_TransitionResult_83A681144E25824598AFE28196CE552F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_TwoBoneIK_8150E465466DB0AF538FB6AF74AE509B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_BlendListByBool_D9E15D664E8CEBDC37EDC08EAB70F676();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_ModifyBone_AE7F07E94D83BF1CB2386EAE6ED4E093();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_BlendListByBool_33CF785541E23031BDE8E08C60FCECEA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_LayeredBoneBlend_CBE35DEE40291D10C5216AAD9F2D596E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_TransitionResult_8726994645E80F64DB68F992203A4F9B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_TransitionResult_1903FFE74975CA0F87B7ABB4A505F656();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_TransitionResult_D0FC2F224B8742A7195F2A9E8844600F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_BlendListByBool_514575954CB22B1CE8A99F88D787FB16();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_LayeredBoneBlend_B4DBED3B44DD313CCFD2959763A9A989();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_TransitionResult_12EE296F4C46E4F5851EC4B19B971238();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_BlendListByBool_7099BA5741002188322779B7E2ECBAA3();
	void AnimNotify_EnterAdjusting();
	void AnimNotify_EnterAnimating();
	void AnimNotify_EnterIdle();
	void AnimNotify_EnterIdleToWalking();
	void AnimNotify_EnterOpenDoor();
	void AnimNotify_EnterRunning();
	void AnimNotify_EnterSitting();
	void AnimNotify_EnterSittingAnimating();
	void AnimNotify_EnterSittingToWalking();
	void AnimNotify_EnterStairs();
	void AnimNotify_EnterTalking();
	void AnimNotify_EnterTurningInPlace();
	void AnimNotify_EnterWalking();
	void AnimNotify_EnterWalkingInterruption();
	void AnimNotify_EnterWalkingToIdle();
	void AnimNotify_EnterWalkingToIdleOnTheWay();
	void AnimNotify_EnterWalkingToSit();
	void AnimNotify_EnterWalkingTurn();
	void AnimNotify_EnterSittingTurn();
	void AnimNotify_EnterSittingToIdle();
	void AnimNotify_EnterCoupleBench();
	void AnimNotify_CoupleBenchActionTranEnd();
	void AnimNotify_CoupleBenchActionEnd();
	void AnimNotify_RightFootDominant();
	void AnimNotify_LeftFootDominant();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_TransitionResult_5E20F1824C5EE26405391CB030102853();
	void AnimNotify_EndAnimating();
	void AnimNotify_AdjustComplete();
	void AnimNotify_DisableFootIK();
	void AnimNotify_EnableFootIK();
	void AnimNotify_LeftStepBack();
	void AnimNotify_EnableBreathIK();
	void AnimNotify_DisableBreathIK();
	void AnimNotify_StartFingerPointing();
	void AnimNotify_EndFingerPointing();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_TransitionResult_14346FE64F49A1952BA4EE8A1248292F();
	void AnimNotify_BeginSitting();
	void AnimNotify_BeginTransitionSittingToWalking();
	void AnimNotify_BeginWalkingToSitting();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_TransitionResult_FCE2E68345A5B2DBF66A0CA198263B7E();
	void AnimNotify_BeginTransitionStairs();
	void AnimNotify_EndTransitionStairs();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_ModifyBone_F1548C3B4735622D0E13069E9E63ACBF();
	void AnimNotify_AnimationACompleteBegin();
	void AnimNotify_AnimationBCompleteBegin();
	void AnimNotify_AnimationACompleteEnd();
	void AnimNotify_AnimationBCompleteEnd();
	void AnimNotify_PreEndAnimating();
	void AnimNotify_BeginTransitionSittingToIdle();
	void Attach_HaveItem(const struct FHaveItemAttachSetting& HaveItemSetting);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_TransitionResult_02507C7A4BDAD888D09291BD6BA22DBB();
	void SetLookAtBody(bool Enable);
	void AnimNotify_EndTransitionStairsLast();
	void AnimNotify_EndTurningInPlace();
	void BeginOpenDoorBP();
	void SetNamePlate(bool bShow);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScheduleNPC_AnimGraphNode_TransitionResult_6ED5685649C9C7E8ECABFBB82EA96D71();
	void ExecuteUbergraph_ABP_ScheduleNPC(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
