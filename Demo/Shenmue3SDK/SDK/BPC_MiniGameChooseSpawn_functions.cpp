
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

// Function BPC_MiniGameChooseSpawn.BPC_MiniGameChooseSpawn_C.SpawnMiniGameChooseActor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ES3MiniGameCategory            Category                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ManualCamera                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_MiniGameChoose_C*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ABP_MiniGameChoose_C* UBPC_MiniGameChooseSpawn_C::SpawnMiniGameChooseActor(ES3MiniGameCategory Category, bool ManualCamera)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameChooseSpawn.BPC_MiniGameChooseSpawn_C.SpawnMiniGameChooseActor");

	UBPC_MiniGameChooseSpawn_C_SpawnMiniGameChooseActor_Params params;
	params.Category = Category;
	params.ManualCamera = ManualCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
