#pragma once

#include "../SDK.h"

// Name: S3Demo, Version: 0.90.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BP_Chara_WorldTel2.BP_Chara_WorldTel2_C.GetTalkComponent
struct ABP_Chara_WorldTel2_C_GetTalkComponent_Params
{
	class UBPC_S3_TalkComponent_C*                     BPC_S3_TalkComponent;                                     // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_Chara_WorldTel2.BP_Chara_WorldTel2_C.UserConstructionScript
struct ABP_Chara_WorldTel2_C_UserConstructionScript_Params
{
};

// Function BP_Chara_WorldTel2.BP_Chara_WorldTel2_C.TelStart
struct ABP_Chara_WorldTel2_C_TelStart_Params
{
};

// Function BP_Chara_WorldTel2.BP_Chara_WorldTel2_C.TelEnd
struct ABP_Chara_WorldTel2_C_TelEnd_Params
{
};

// Function BP_Chara_WorldTel2.BP_Chara_WorldTel2_C.TalkStart
struct ABP_Chara_WorldTel2_C_TalkStart_Params
{
};

// Function BP_Chara_WorldTel2.BP_Chara_WorldTel2_C.CallStart
struct ABP_Chara_WorldTel2_C_CallStart_Params
{
};

// Function BP_Chara_WorldTel2.BP_Chara_WorldTel2_C.CallEnd
struct ABP_Chara_WorldTel2_C_CallEnd_Params
{
};

// Function BP_Chara_WorldTel2.BP_Chara_WorldTel2_C.OnTalkFinished
struct ABP_Chara_WorldTel2_C_OnTalkFinished_Params
{
	class US3TalkComponent**                           TalkComponent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool*                                              interrupted;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Chara_WorldTel2.BP_Chara_WorldTel2_C.ExecuteUbergraph_BP_Chara_WorldTel2
struct ABP_Chara_WorldTel2_C_ExecuteUbergraph_BP_Chara_WorldTel2_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Chara_WorldTel2.BP_Chara_WorldTel2_C.ED_ButtonPush__DelegateSignature
struct ABP_Chara_WorldTel2_C_ED_ButtonPush__DelegateSignature_Params
{
};

// Function BP_Chara_WorldTel2.BP_Chara_WorldTel2_C.ED_CallEnd__DelegateSignature
struct ABP_Chara_WorldTel2_C_ED_CallEnd__DelegateSignature_Params
{
};

// Function BP_Chara_WorldTel2.BP_Chara_WorldTel2_C.ED_CallStart__DelegateSignature
struct ABP_Chara_WorldTel2_C_ED_CallStart__DelegateSignature_Params
{
};

// Function BP_Chara_WorldTel2.BP_Chara_WorldTel2_C.ED_TalkFinish__DelegateSignature
struct ABP_Chara_WorldTel2_C_ED_TalkFinish__DelegateSignature_Params
{
};

// Function BP_Chara_WorldTel2.BP_Chara_WorldTel2_C.ED_TalkStart__DelegateSignature
struct ABP_Chara_WorldTel2_C_ED_TalkStart__DelegateSignature_Params
{
};

// Function BP_Chara_WorldTel2.BP_Chara_WorldTel2_C.ED_TelEnd__DelegateSignature
struct ABP_Chara_WorldTel2_C_ED_TelEnd__DelegateSignature_Params
{
};

// Function BP_Chara_WorldTel2.BP_Chara_WorldTel2_C.ED_TelStart__DelegateSignature
struct ABP_Chara_WorldTel2_C_ED_TelStart__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
