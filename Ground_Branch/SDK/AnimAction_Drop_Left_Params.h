﻿#pragma once

/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * Function AnimAction_Drop_Left.AnimAction_Drop_Left_C.OnMontageEndedEvent
	 */
	struct UAnimAction_Drop_Left_C_OnMontageEndedEvent_Params
	{
	public:
		bool                                                       bInterrupted;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AnimAction_Drop_Left.AnimAction_Drop_Left_C.Drop
	 */
	struct UAnimAction_Drop_Left_C_Drop_Params
	{	};

	/**
	 * Function AnimAction_Drop_Left.AnimAction_Drop_Left_C.TriggerAction
	 */
	struct UAnimAction_Drop_Left_C_TriggerAction_Params
	{	};

	/**
	 * Function AnimAction_Drop_Left.AnimAction_Drop_Left_C.ExecuteUbergraph_AnimAction_Drop_Left
	 */
	struct UAnimAction_Drop_Left_C_ExecuteUbergraph_AnimAction_Drop_Left_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
