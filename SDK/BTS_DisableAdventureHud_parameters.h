#pragma once

#include "../SDK.h"

// Name: Shenmue3SDK, Version: 1.4.1

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BTS_DisableAdventureHud.BTS_DisableAdventureHud_C.ReceiveDeactivationAI
struct UBTS_DisableAdventureHud_C_ReceiveDeactivationAI_Params
{
	class AAIController*                               OwnerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       ControlledPawn;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTS_DisableAdventureHud.BTS_DisableAdventureHud_C.ReceiveActivationAI
struct UBTS_DisableAdventureHud_C_ReceiveActivationAI_Params
{
	class AAIController*                               OwnerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       ControlledPawn;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTS_DisableAdventureHud.BTS_DisableAdventureHud_C.ExecuteUbergraph_BTS_DisableAdventureHud
struct UBTS_DisableAdventureHud_C_ExecuteUbergraph_BTS_DisableAdventureHud_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
