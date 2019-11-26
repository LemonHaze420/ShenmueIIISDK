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

// Function BPW_PasswordConsole.BPW_PasswordConsole_C.Construct
struct UBPW_PasswordConsole_C_Construct_Params
{
};

// Function BPW_PasswordConsole.BPW_PasswordConsole_C.Tick
struct UBPW_PasswordConsole_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_PasswordConsole.BPW_PasswordConsole_C.ExecuteUbergraph_BPW_PasswordConsole
struct UBPW_PasswordConsole_C_ExecuteUbergraph_BPW_PasswordConsole_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
