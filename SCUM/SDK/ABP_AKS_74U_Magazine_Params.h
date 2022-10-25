﻿#pragma once

/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * Function ABP_AKS_74U_Magazine.ABP_AKS_74U_Magazine_C.AnimGraph
	 */
	struct UABP_AKS_74U_Magazine_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function ABP_AKS_74U_Magazine.ABP_AKS_74U_Magazine_C.ExecuteUbergraph_ABP_AKS_74U_Magazine
	 */
	struct UABP_AKS_74U_Magazine_C_ExecuteUbergraph_ABP_AKS_74U_Magazine_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
