#pragma once

// Name: S3Demo, Version: 0.90.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPF_NPC.BPF_NPC_C
// 0x0000 (0x0028 - 0x0028)
class UBPF_NPC_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPF_NPC.BPF_NPC_C");
		return ptr;
	}


	void STATIC_BPF_TeleportFollowSHE(float Back, float Side, bool Rotate_to_players, class UObject* __WorldContext);
	bool STATIC_BPF_IsLeadActive(class UObject* __WorldContext);
	bool STATIC_BPF_IsLeadCompleted(class UObject* __WorldContext);
	void STATIC_BPF_StartNPCLeadEvent(const struct FDataTableRowHandle& TableRow, class UObject* __WorldContext, bool* Success);
	void STATIC_BPF_SpawnFollowSHE(float Back, float Side, bool Rotate_to_players, class UObject* __WorldContext);
	void STATIC_BPF_QueryTagCharaName2NpcActorNew(const struct FName& CharaName, class UObject* __WorldContext, class AS3Character** Character);
	void STATIC_BPF_QueryPlayerNearNpcNew(class UObject* __WorldContext, class AActor** NpcActorRef, float* Length);
	void STATIC_BPF_NPC_GetMiniGameIdsTable(int RowIndex, class UObject* __WorldContext, bool* bSuccess, struct FNPCMiniGameManagerIds* Out_Row);
	void STATIC_BPF_NPC_ConvertScriptStateIDFromName(int ID, class UObject* __WorldContext, struct FName* Name);
	void STATIC_BPF_NPC_GetVisibleTalkIconStates(class UObject* __WorldContext, TArray<TEnumAsByte<ELocomotionState>>* States);
	void STATIC_BPF_NPC_GetCanNotTalkTurnAcoundStates(class UObject* __WorldContext, TArray<TEnumAsByte<ELocomotionState>>* States);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
