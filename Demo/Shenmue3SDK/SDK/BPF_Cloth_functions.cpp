
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

// Function BPF_Cloth.BPF_Cloth_C.LoadHandMesh
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FString                 CharaCode                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 HandShape                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           Right                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UStaticMesh*             Mesh                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_Cloth_C::STATIC_LoadHandMesh(const struct FString& CharaCode, const struct FString& HandShape, bool Right, class UObject* __WorldContext, class UStaticMesh** Mesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Cloth.BPF_Cloth_C.LoadHandMesh");

	UBPF_Cloth_C_LoadHandMesh_Params params;
	params.CharaCode = CharaCode;
	params.HandShape = HandShape;
	params.Right = Right;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Mesh != nullptr)
		*Mesh = params.Mesh;
}


// Function BPF_Cloth.BPF_Cloth_C.LoadBodyMesh
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FString                 CharaCode                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 ClothId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           Battle                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Light                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 SituationId                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMesh*           Mesh                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_Cloth_C::STATIC_LoadBodyMesh(const struct FString& CharaCode, const struct FString& ClothId, bool Battle, bool Light, const struct FString& SituationId, class UObject* __WorldContext, class USkeletalMesh** Mesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Cloth.BPF_Cloth_C.LoadBodyMesh");

	UBPF_Cloth_C_LoadBodyMesh_Params params;
	params.CharaCode = CharaCode;
	params.ClothId = ClothId;
	params.Battle = Battle;
	params.Light = Light;
	params.SituationId = SituationId;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Mesh != nullptr)
		*Mesh = params.Mesh;
}


// Function BPF_Cloth.BPF_Cloth_C.getS3ClothManager
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_ClothManager_C*      BP_ClothManager                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_Cloth_C::STATIC_getS3ClothManager(class UObject* __WorldContext, class ABP_ClothManager_C** BP_ClothManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Cloth.BPF_Cloth_C.getS3ClothManager");

	UBPF_Cloth_C_getS3ClothManager_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BP_ClothManager != nullptr)
		*BP_ClothManager = params.BP_ClothManager;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
