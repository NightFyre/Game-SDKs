#pragma once

/**
 * Name: Borderlands_3
 * Version: 4.20.3
 */

#include "../SDK.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function Challenge_BloodyHarvest_12_HauntedLegendaries.Challenge_BloodyHarvest_12_HauntedLegendaries_C.CheckInvSlotFromLeague
	 */
	struct UChallenge_BloodyHarvest_12_HauntedLegendaries_C_CheckInvSlotFromLeague_Params
	{
	public:
		class UInventorySlotData*                                  InventorySlot;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsBHAnointedGear;                                        // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZYK8[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Challenge_BloodyHarvest_12_HauntedLegendaries.Challenge_BloodyHarvest_12_HauntedLegendaries_C.CheckAllSlots
	 */
	struct UChallenge_BloodyHarvest_12_HauntedLegendaries_C_CheckAllSlots_Params
	{
	public:
		class AActor*                                              Equipped_Actor;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UInventorySlotData*                                  Slot_Data;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Challenge_BloodyHarvest_12_HauntedLegendaries.Challenge_BloodyHarvest_12_HauntedLegendaries_C.OnInitChallengeInstance
	 */
	struct UChallenge_BloodyHarvest_12_HauntedLegendaries_C_OnInitChallengeInstance_Params
	{
	public:
		class UChallengesComponent*                                OwningChallenges;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AGbxCharacter*                                       AssociatedCharacter;                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Challenge_BloodyHarvest_12_HauntedLegendaries.Challenge_BloodyHarvest_12_HauntedLegendaries_C.CompletedChallenge
	 */
	struct UChallenge_BloodyHarvest_12_HauntedLegendaries_C_CompletedChallenge_Params
	{
	public:
		class AGbxPlayerController*                                CompletedPlayer;                                         // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Challenge_BloodyHarvest_12_HauntedLegendaries.Challenge_BloodyHarvest_12_HauntedLegendaries_C.ExecuteUbergraph_Challenge_BloodyHarvest_12_HauntedLegendaries
	 */
	struct UChallenge_BloodyHarvest_12_HauntedLegendaries_C_ExecuteUbergraph_Challenge_BloodyHarvest_12_HauntedLegendaries_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3IPX[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
