﻿#pragma once

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
	 * Function Ability_EG_Generic_ConsecutiveHitsDmgStack.Ability_EG_Generic_ConsecutiveHitsDmgStack_C.OnActivated
	 */
	struct UAbility_EG_Generic_ConsecutiveHitsDmgStack_C_OnActivated_Params
	{	};

	/**
	 * Function Ability_EG_Generic_ConsecutiveHitsDmgStack.Ability_EG_Generic_ConsecutiveHitsDmgStack_C.CausedDamage
	 */
	struct UAbility_EG_Generic_ConsecutiveHitsDmgStack_C_CausedDamage_Params
	{
	public:
		class AActor*                                              DamageInstigator;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Damage;                                                  // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2F7N[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UGbxDamageType*                                      DamageType;                                              // 0x0010(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UDamageSource*                                       DamageSource;                                            // 0x0018(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              DamagedActor;                                            // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCausedDamageDetails                                Details;                                                 // 0x0028(0x0060)  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	};

	/**
	 * Function Ability_EG_Generic_ConsecutiveHitsDmgStack.Ability_EG_Generic_ConsecutiveHitsDmgStack_C.OnAbilityTimerEnded
	 */
	struct UAbility_EG_Generic_ConsecutiveHitsDmgStack_C_OnAbilityTimerEnded_Params
	{
	public:
		struct FOakAbilityTimerSpec                                Spec;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		struct FOakAbilityTimerResult                              Result;                                                  // 0x0018(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function Ability_EG_Generic_ConsecutiveHitsDmgStack.Ability_EG_Generic_ConsecutiveHitsDmgStack_C.OnDeactivated
	 */
	struct UAbility_EG_Generic_ConsecutiveHitsDmgStack_C_OnDeactivated_Params
	{	};

	/**
	 * Function Ability_EG_Generic_ConsecutiveHitsDmgStack.Ability_EG_Generic_ConsecutiveHitsDmgStack_C.ExecuteUbergraph_Ability_EG_Generic_ConsecutiveHitsDmgStack
	 */
	struct UAbility_EG_Generic_ConsecutiveHitsDmgStack_C_ExecuteUbergraph_Ability_EG_Generic_ConsecutiveHitsDmgStack_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif