
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

// Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.GetGachaID
// (NetReliable, NetResponse, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, Const)
// Parameters:
// struct FName                   GachaId                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_Gacha_C::GetGachaID(struct FName* GachaId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.GetGachaID");

	ABP_MiniGame_Gacha_C_GetGachaID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GachaId != nullptr)
		*GachaId = params.GachaId;
}


// Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.LotteryGacha
// (Net, NetReliable, Exec, Native, Static, Private, NetServer, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGame_Gacha_C::STATIC_LotteryGacha()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.LotteryGacha");

	ABP_MiniGame_Gacha_C_LotteryGacha_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.GetGachaMaterialByPrice
// (Net, NetReliable, Exec, Native, Static, MulticastDelegate, Public, Protected, NetServer, HasOutParms, HasDefaults, NetClient, Const)
// Parameters:
// class UMaterialInterface*      Material                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_Gacha_C::STATIC_GetGachaMaterialByPrice(class UMaterialInterface** Material)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.GetGachaMaterialByPrice");

	ABP_MiniGame_Gacha_C_GetGachaMaterialByPrice_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Material != nullptr)
		*Material = params.Material;
}


// Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.IsTalking
// (NetReliable, NetRequest, Exec, Native, Event, Static, Public, Private, Delegate, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_MiniGame_Gacha_C::STATIC_IsTalking()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.IsTalking");

	ABP_MiniGame_Gacha_C_IsTalking_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.SettingPlayerShowObject
// (Net, NetReliable, Event, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, Const)
// Parameters:
// bool                           ArgIsNext                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_Gacha_C::SettingPlayerShowObject(bool ArgIsNext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.SettingPlayerShowObject");

	ABP_MiniGame_Gacha_C_SettingPlayerShowObject_Params params;
	params.ArgIsNext = ArgIsNext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.DispCSCapsuleMass
// (Net, NetReliable, NetRequest, Exec, Event, Static, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, Const)
// Parameters:
// bool                           ArgDisp                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_Gacha_C::STATIC_DispCSCapsuleMass(bool ArgDisp)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.DispCSCapsuleMass");

	ABP_MiniGame_Gacha_C_DispCSCapsuleMass_Params params;
	params.ArgDisp = ArgDisp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.DispCapsuleMass
// (Net, Exec, Native, Event, NetResponse, NetMulticast, Private, Protected, HasOutParms, Const)
// Parameters:
// bool                           ArgDisp                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_Gacha_C::DispCapsuleMass(bool ArgDisp)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.DispCapsuleMass");

	ABP_MiniGame_Gacha_C_DispCapsuleMass_Params params;
	params.ArgDisp = ArgDisp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.DestroyReplaceActors
// (NetReliable, Static, Public, Protected, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ABP_MiniGame_Gacha_C::STATIC_DestroyReplaceActors()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.DestroyReplaceActors");

	ABP_MiniGame_Gacha_C_DestroyReplaceActors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.SpawnReplaceActors
// (Native, NetResponse, MulticastDelegate, Public, Private, Protected, Delegate, HasOutParms, HasDefaults, NetClient, Const)

void ABP_MiniGame_Gacha_C::SpawnReplaceActors()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.SpawnReplaceActors");

	ABP_MiniGame_Gacha_C_SpawnReplaceActors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.SetupRandomCapsuleMaterial
// (Exec, Event, NetResponse, MulticastDelegate, Private, Protected, HasOutParms, HasDefaults, NetClient, Const)

void ABP_MiniGame_Gacha_C::SetupRandomCapsuleMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.SetupRandomCapsuleMaterial");

	ABP_MiniGame_Gacha_C_SetupRandomCapsuleMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.RemoveAllSceneActors
// (Net, NetReliable, Exec, Native, NetResponse, Static, Private, Protected, NetServer, HasOutParms, NetClient, Const)

void ABP_MiniGame_Gacha_C::STATIC_RemoveAllSceneActors()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.RemoveAllSceneActors");

	ABP_MiniGame_Gacha_C_RemoveAllSceneActors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.AllStopScenePlayer
// (Net, NetReliable, NetRequest, Exec, NetResponse, MulticastDelegate, Public, Private, Protected, NetServer, HasOutParms, NetClient, Const)

void ABP_MiniGame_Gacha_C::AllStopScenePlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.AllStopScenePlayer");

	ABP_MiniGame_Gacha_C_AllStopScenePlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.CreateSequenceActors
// (Net, NetMulticast, MulticastDelegate, Public, Private, Protected, NetServer, HasDefaults, NetClient, Const)

void ABP_MiniGame_Gacha_C::CreateSequenceActors()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.CreateSequenceActors");

	ABP_MiniGame_Gacha_C_CreateSequenceActors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.SpawnSequenceActor
// (Net, NetRequest, Exec, Event, NetResponse, Static, NetMulticast, Public, Protected, Delegate, HasDefaults, NetClient, Const)
// Parameters:
// class ULevelSequence*          InSequence                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  AttachParentActor              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   AttachSocketName               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_SpawnableSequenceActor_C* SpawnObj                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_Gacha_C::STATIC_SpawnSequenceActor(class ULevelSequence* InSequence, class AActor* AttachParentActor, const struct FName& AttachSocketName, class ABP_SpawnableSequenceActor_C** SpawnObj)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.SpawnSequenceActor");

	ABP_MiniGame_Gacha_C_SpawnSequenceActor_Params params;
	params.InSequence = InSequence;
	params.AttachParentActor = AttachParentActor;
	params.AttachSocketName = AttachSocketName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SpawnObj != nullptr)
		*SpawnObj = params.SpawnObj;
}


// Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.SpawnInputControlActor
// (Net, NetReliable, Exec, Native, Static, Protected, Delegate, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ABP_MiniGameInputBase_C* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ABP_MiniGameInputBase_C* ABP_MiniGame_Gacha_C::STATIC_SpawnInputControlActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.SpawnInputControlActor");

	ABP_MiniGame_Gacha_C_SpawnInputControlActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.UserConstructionScript
// (Exec, Event, Static, NetMulticast, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGame_Gacha_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.UserConstructionScript");

	ABP_MiniGame_Gacha_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.OnNotifyEnd_0EE0A467474F13C67ED75B980A09A9AB
// (Net, NetRequest, Exec, Event, Static, MulticastDelegate, Public, NetServer, HasOutParms, HasDefaults, NetClient, Const)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_Gacha_C::STATIC_OnNotifyEnd_0EE0A467474F13C67ED75B980A09A9AB(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.OnNotifyEnd_0EE0A467474F13C67ED75B980A09A9AB");

	ABP_MiniGame_Gacha_C_OnNotifyEnd_0EE0A467474F13C67ED75B980A09A9AB_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.OnNotifyBegin_0EE0A467474F13C67ED75B980A09A9AB
// (NetRequest, Exec, Event, Static, MulticastDelegate, Public, NetServer, HasOutParms, HasDefaults, NetClient, Const)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_Gacha_C::STATIC_OnNotifyBegin_0EE0A467474F13C67ED75B980A09A9AB(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.OnNotifyBegin_0EE0A467474F13C67ED75B980A09A9AB");

	ABP_MiniGame_Gacha_C_OnNotifyBegin_0EE0A467474F13C67ED75B980A09A9AB_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.OnInterrupted_0EE0A467474F13C67ED75B980A09A9AB
// (Net, Native, Event, Static, MulticastDelegate, Public, NetServer, HasOutParms, HasDefaults, NetClient, Const)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_Gacha_C::STATIC_OnInterrupted_0EE0A467474F13C67ED75B980A09A9AB(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.OnInterrupted_0EE0A467474F13C67ED75B980A09A9AB");

	ABP_MiniGame_Gacha_C_OnInterrupted_0EE0A467474F13C67ED75B980A09A9AB_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.OnBlendOut_0EE0A467474F13C67ED75B980A09A9AB
// (Native, Event, Static, MulticastDelegate, Public, NetServer, HasOutParms, HasDefaults, NetClient, Const)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_Gacha_C::STATIC_OnBlendOut_0EE0A467474F13C67ED75B980A09A9AB(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.OnBlendOut_0EE0A467474F13C67ED75B980A09A9AB");

	ABP_MiniGame_Gacha_C_OnBlendOut_0EE0A467474F13C67ED75B980A09A9AB_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.OnCompleted_0EE0A467474F13C67ED75B980A09A9AB
// (Net, NetReliable, NetRequest, Exec, Event, Static, MulticastDelegate, Public, NetServer, HasOutParms, HasDefaults, NetClient, Const)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_Gacha_C::STATIC_OnCompleted_0EE0A467474F13C67ED75B980A09A9AB(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.OnCompleted_0EE0A467474F13C67ED75B980A09A9AB");

	ABP_MiniGame_Gacha_C_OnCompleted_0EE0A467474F13C67ED75B980A09A9AB_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.OnLoaded_FFFA5DCD4EBEA9EE7B67F491D7F3128F
// (NetReliable, NetRequest, Exec, Event, Static, MulticastDelegate, Public, NetServer, HasOutParms, HasDefaults, NetClient, Const)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_Gacha_C::STATIC_OnLoaded_FFFA5DCD4EBEA9EE7B67F491D7F3128F(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.OnLoaded_FFFA5DCD4EBEA9EE7B67F491D7F3128F");

	ABP_MiniGame_Gacha_C_OnLoaded_FFFA5DCD4EBEA9EE7B67F491D7F3128F_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.OnStoped_Intro
// (Net, NetReliable, NetRequest, NetResponse, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, Const)

void ABP_MiniGame_Gacha_C::OnStoped_Intro()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.OnStoped_Intro");

	ABP_MiniGame_Gacha_C_OnStoped_Intro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.FinalizeTalk
// (NetRequest, Event, NetResponse, NetMulticast, Public, Private, Protected, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintPure, Const)

void ABP_MiniGame_Gacha_C::FinalizeTalk()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.FinalizeTalk");

	ABP_MiniGame_Gacha_C_FinalizeTalk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.OnTalkStart
// (NetRequest, Native, MulticastDelegate, Protected, NetServer, HasDefaults, NetClient, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class US3TalkComponent*        TalkComponent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_MiniGame_Gacha_C::OnTalkStart(class US3TalkComponent* TalkComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.OnTalkStart");

	ABP_MiniGame_Gacha_C_OnTalkStart_Params params;
	params.TalkComponent = TalkComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.OnTalkFinished
// (Net, NetResponse, Static, Public, Private, Delegate, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// class US3TalkComponent*        TalkComponent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           interrupted                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_Gacha_C::STATIC_OnTalkFinished(class US3TalkComponent* TalkComponent, bool interrupted)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.OnTalkFinished");

	ABP_MiniGame_Gacha_C_OnTalkFinished_Params params;
	params.TalkComponent = TalkComponent;
	params.interrupted = interrupted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.Screen_Player
// (Net, NetReliable, Event, NetResponse, NetMulticast, Public, Private, Protected, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintPure, Const)

void ABP_MiniGame_Gacha_C::Screen_Player()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.Screen_Player");

	ABP_MiniGame_Gacha_C_Screen_Player_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.Screen_NPC
// (NetReliable, Event, NetResponse, NetMulticast, Public, Private, Protected, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintPure, Const)

void ABP_MiniGame_Gacha_C::Screen_NPC()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.Screen_NPC");

	ABP_MiniGame_Gacha_C_Screen_NPC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.GachaThinkingGameContinue
// (Net, NetReliable, NetRequest, NetResponse, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, Const)

void ABP_MiniGame_Gacha_C::GachaThinkingGameContinue()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.GachaThinkingGameContinue");

	ABP_MiniGame_Gacha_C_GachaThinkingGameContinue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.GachaAction
// (NetReliable, NetRequest, NetResponse, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, Const)

void ABP_MiniGame_Gacha_C::GachaAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.GachaAction");

	ABP_MiniGame_Gacha_C_GachaAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.OnTalkScriptEvent
// (NetRequest, Native, MulticastDelegate, Protected, NetServer, HasDefaults, NetClient, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            EventNumber                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_Gacha_C::OnTalkScriptEvent(int EventNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.OnTalkScriptEvent");

	ABP_MiniGame_Gacha_C_OnTalkScriptEvent_Params params;
	params.EventNumber = EventNumber;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.ResumeMiniGame
// (Net, NetReliable, Native, MulticastDelegate, Protected, NetServer, HasDefaults, NetClient, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FString                 ResumeKeyword                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_MiniGame_Gacha_C::ResumeMiniGame(const struct FString& ResumeKeyword)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.ResumeMiniGame");

	ABP_MiniGame_Gacha_C_ResumeMiniGame_Params params;
	params.ResumeKeyword = ResumeKeyword;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.OnStopedPreAction
// (NetReliable, NetRequest, NetResponse, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, Const)

void ABP_MiniGame_Gacha_C::OnStopedPreAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.OnStopedPreAction");

	ABP_MiniGame_Gacha_C_OnStopedPreAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.OnStoped_Action
// (Net, NetRequest, NetResponse, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, Const)

void ABP_MiniGame_Gacha_C::OnStoped_Action()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.OnStoped_Action");

	ABP_MiniGame_Gacha_C_OnStoped_Action_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.ConsumeMoney
// (NetReliable, Native, Event, Static, MulticastDelegate, Public, NetServer, HasOutParms, HasDefaults, NetClient, Const)
// Parameters:
// float                          WaitTime                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_Gacha_C::STATIC_ConsumeMoney(float WaitTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.ConsumeMoney");

	ABP_MiniGame_Gacha_C_ConsumeMoney_Params params;
	params.WaitTime = WaitTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.GachaRewardWathing
// (Net, NetReliable, Exec, NetResponse, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, Const)

void ABP_MiniGame_Gacha_C::GachaRewardWathing()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.GachaRewardWathing");

	ABP_MiniGame_Gacha_C_GachaRewardWathing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.EnterMiniGame
// (NetReliable, Native, MulticastDelegate, Protected, NetServer, HasDefaults, NetClient, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          EnterTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_Gacha_C::EnterMiniGame(float EnterTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.EnterMiniGame");

	ABP_MiniGame_Gacha_C_EnterMiniGame_Params params;
	params.EnterTime = EnterTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.GachaGameContinue
// (NetReliable, Exec, NetResponse, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, Const)

void ABP_MiniGame_Gacha_C::GachaGameContinue()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.GachaGameContinue");

	ABP_MiniGame_Gacha_C_GachaGameContinue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.DrawMiniGame
// (Event, NetResponse, NetMulticast, Public, Private, Protected, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintPure, Const)

void ABP_MiniGame_Gacha_C::DrawMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.DrawMiniGame");

	ABP_MiniGame_Gacha_C_DrawMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.ReceiveBeginPlay
// (NetReliable, NetRequest, Exec, Native, NetResponse, NetMulticast, Public, Private, Protected, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintPure, Const)

void ABP_MiniGame_Gacha_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.ReceiveBeginPlay");

	ABP_MiniGame_Gacha_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.LoseMiniGame
// (Event, NetResponse, NetMulticast, Public, Private, Protected, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintPure, Const)

void ABP_MiniGame_Gacha_C::LoseMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.LoseMiniGame");

	ABP_MiniGame_Gacha_C_LoseMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.WinMiniGame
// (Net, NetReliable, NetRequest, Exec, Native, NetResponse, NetMulticast, Public, Private, Protected, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintPure, Const)

void ABP_MiniGame_Gacha_C::WinMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.WinMiniGame");

	ABP_MiniGame_Gacha_C_WinMiniGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.EndMiniGame
// (Net, NetRequest, Event, NetResponse, NetMulticast, Public, Private, Protected, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintPure, Const)

void ABP_MiniGame_Gacha_C::EndMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.EndMiniGame");

	ABP_MiniGame_Gacha_C_EndMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.StartMiniGame
// (Net, NetRequest, Event, NetResponse, NetMulticast, Public, Private, Protected, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintPure, Const)

void ABP_MiniGame_Gacha_C::StartMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.StartMiniGame");

	ABP_MiniGame_Gacha_C_StartMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.OnFinishedPopup
// (Native, Event, Static, MulticastDelegate, Public, NetServer, HasOutParms, HasDefaults, NetClient, Const)
// Parameters:
// int                            PopupId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_Gacha_C::STATIC_OnFinishedPopup(int PopupId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.OnFinishedPopup");

	ABP_MiniGame_Gacha_C_OnFinishedPopup_Params params;
	params.PopupId = PopupId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.DecideDetectAction
// (NetReliable, NetRequest, Exec, MulticastDelegate, Protected, NetServer, HasDefaults, NetClient, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// ES3ActionIconType              Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_Gacha_C::DecideDetectAction(ES3ActionIconType Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.DecideDetectAction");

	ABP_MiniGame_Gacha_C_DecideDetectAction_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.LoadMesh
// (Net, Exec, NetResponse, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, Const)

void ABP_MiniGame_Gacha_C::LoadMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.LoadMesh");

	ABP_MiniGame_Gacha_C_LoadMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.SuspendMiniGame
// (NetRequest, Exec, Native, NetResponse, NetMulticast, Public, Private, Protected, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintPure, Const)

void ABP_MiniGame_Gacha_C::SuspendMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.SuspendMiniGame");

	ABP_MiniGame_Gacha_C_SuspendMiniGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.ExecuteUbergraph_BP_MiniGame_Gacha
// (Static, NetMulticast, Public, Private, Protected, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_Gacha_C::STATIC_ExecuteUbergraph_BP_MiniGame_Gacha(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.ExecuteUbergraph_BP_MiniGame_Gacha");

	ABP_MiniGame_Gacha_C_ExecuteUbergraph_BP_MiniGame_Gacha_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.OnEndMiniGameForLinkDispacher__DelegateSignature
// (Net, Event, NetMulticast, Private, Protected, NetServer, HasOutParms, HasDefaults, NetClient, Const)

void ABP_MiniGame_Gacha_C::OnEndMiniGameForLinkDispacher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.OnEndMiniGameForLinkDispacher__DelegateSignature");

	ABP_MiniGame_Gacha_C_OnEndMiniGameForLinkDispacher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
