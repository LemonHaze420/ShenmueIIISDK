
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

// Function BP_S3_ACCharacter.BP_S3_ACCharacter_C.LoadSkeletalMesh
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMesh*           Mesh                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3_ACCharacter_C::LoadSkeletalMesh(class USkeletalMesh** Mesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3_ACCharacter.BP_S3_ACCharacter_C.LoadSkeletalMesh");

	ABP_S3_ACCharacter_C_LoadSkeletalMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Mesh != nullptr)
		*Mesh = params.Mesh;
}


// Function BP_S3_ACCharacter.BP_S3_ACCharacter_C.GetNPCMesh
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   CharacterName                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class US3NPCDefinition*        Definition                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class USkeletalMesh*           Mesh                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3_ACCharacter_C::GetNPCMesh(const struct FName& CharacterName, class US3NPCDefinition* Definition, bool* Success, class USkeletalMesh** Mesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3_ACCharacter.BP_S3_ACCharacter_C.GetNPCMesh");

	ABP_S3_ACCharacter_C_GetNPCMesh_Params params;
	params.CharacterName = CharacterName;
	params.Definition = Definition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (Mesh != nullptr)
		*Mesh = params.Mesh;
}


// Function BP_S3_ACCharacter.BP_S3_ACCharacter_C.Detach
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_S3_ACCharacter_C::Detach()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3_ACCharacter.BP_S3_ACCharacter_C.Detach");

	ABP_S3_ACCharacter_C_Detach_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3_ACCharacter.BP_S3_ACCharacter_C.AttachSetting
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class US3NPCDefinition*        Definition                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void ABP_S3_ACCharacter_C::AttachSetting(class US3NPCDefinition** Definition)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3_ACCharacter.BP_S3_ACCharacter_C.AttachSetting");

	ABP_S3_ACCharacter_C_AttachSetting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Definition != nullptr)
		*Definition = params.Definition;
}


// Function BP_S3_ACCharacter.BP_S3_ACCharacter_C.IsTalking
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_S3_ACCharacter_C::IsTalking()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3_ACCharacter.BP_S3_ACCharacter_C.IsTalking");

	ABP_S3_ACCharacter_C_IsTalking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3_ACCharacter.BP_S3_ACCharacter_C.InitCharacter
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   CharaName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3_ACCharacter_C::InitCharacter(const struct FName& CharaName, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3_ACCharacter.BP_S3_ACCharacter_C.InitCharacter");

	ABP_S3_ACCharacter_C_InitCharacter_Params params;
	params.CharaName = CharaName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function BP_S3_ACCharacter.BP_S3_ACCharacter_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_S3_ACCharacter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3_ACCharacter.BP_S3_ACCharacter_C.UserConstructionScript");

	ABP_S3_ACCharacter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3_ACCharacter.BP_S3_ACCharacter_C.Init
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3_ACCharacter_C::Init(const struct FName& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3_ACCharacter.BP_S3_ACCharacter_C.Init");

	ABP_S3_ACCharacter_C_Init_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3_ACCharacter.BP_S3_ACCharacter_C.Finalize
// (BlueprintCallable, BlueprintEvent)

void ABP_S3_ACCharacter_C::Finalize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3_ACCharacter.BP_S3_ACCharacter_C.Finalize");

	ABP_S3_ACCharacter_C_Finalize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3_ACCharacter.BP_S3_ACCharacter_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_S3_ACCharacter_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3_ACCharacter.BP_S3_ACCharacter_C.ReceiveBeginPlay");

	ABP_S3_ACCharacter_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3_ACCharacter.BP_S3_ACCharacter_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3_ACCharacter_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3_ACCharacter.BP_S3_ACCharacter_C.ReceiveTick");

	ABP_S3_ACCharacter_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3_ACCharacter.BP_S3_ACCharacter_C.OnTalkStart
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class US3TalkComponent**       TalkComponent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_S3_ACCharacter_C::OnTalkStart(class US3TalkComponent** TalkComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3_ACCharacter.BP_S3_ACCharacter_C.OnTalkStart");

	ABP_S3_ACCharacter_C_OnTalkStart_Params params;
	params.TalkComponent = TalkComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3_ACCharacter.BP_S3_ACCharacter_C.OnTalkFinished
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class US3TalkComponent**       TalkComponent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool*                          interrupted                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3_ACCharacter_C::OnTalkFinished(class US3TalkComponent** TalkComponent, bool* interrupted)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3_ACCharacter.BP_S3_ACCharacter_C.OnTalkFinished");

	ABP_S3_ACCharacter_C_OnTalkFinished_Params params;
	params.TalkComponent = TalkComponent;
	params.interrupted = interrupted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3_ACCharacter.BP_S3_ACCharacter_C.Screen_Player
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_S3_ACCharacter_C::Screen_Player()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3_ACCharacter.BP_S3_ACCharacter_C.Screen_Player");

	ABP_S3_ACCharacter_C_Screen_Player_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3_ACCharacter.BP_S3_ACCharacter_C.Screen_NPC
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_S3_ACCharacter_C::Screen_NPC()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3_ACCharacter.BP_S3_ACCharacter_C.Screen_NPC");

	ABP_S3_ACCharacter_C_Screen_NPC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3_ACCharacter.BP_S3_ACCharacter_C.ExecuteUbergraph_BP_S3_ACCharacter
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3_ACCharacter_C::ExecuteUbergraph_BP_S3_ACCharacter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3_ACCharacter.BP_S3_ACCharacter_C.ExecuteUbergraph_BP_S3_ACCharacter");

	ABP_S3_ACCharacter_C_ExecuteUbergraph_BP_S3_ACCharacter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
