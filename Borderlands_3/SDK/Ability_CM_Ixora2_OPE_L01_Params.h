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
	 * Function Ability_CM_Ixora2_OPE_L01.Ability_CM_Ixora2_OPE_L01_C.OnActivated
	 */
	struct UAbility_CM_Ixora2_OPE_L01_C_OnActivated_Params
	{	};

	/**
	 * Function Ability_CM_Ixora2_OPE_L01.Ability_CM_Ixora2_OPE_L01_C.CSM_OPE_Ixora2_OnCausedDeath
	 */
	struct UAbility_CM_Ixora2_OPE_L01_C_CSM_OPE_Ixora2_OnCausedDeath_Params
	{
	public:
		class UDamageComponent*                                    Damaged;                                                 // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCausedDeathDetails                                 Details;                                                 // 0x0008(0x0068)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Ability_CM_Ixora2_OPE_L01.Ability_CM_Ixora2_OPE_L01_C.ExecuteUbergraph_Ability_CM_Ixora2_OPE_L01
	 */
	struct UAbility_CM_Ixora2_OPE_L01_C_ExecuteUbergraph_Ability_CM_Ixora2_OPE_L01_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4B7Z[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif