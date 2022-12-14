#pragma once

/**
 * Name: Sea_of_Thieves
 * Version: 9505844
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
	 * Function EnchantedCompass.PrototypeMultiTargetEnchantedCompass.GetFloatMax
	 */
	struct APrototypeMultiTargetEnchantedCompass_GetFloatMax_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EnchantedCompass.PrototypeMultiTargetEnchantedCompass.CalculateDesiredYaw
	 */
	struct APrototypeMultiTargetEnchantedCompass_CalculateDesiredYaw_Params
	{
	public:
		struct FRotator                                            CompassRotation;                                         // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		float                                                      ReturnValue;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EnchantedCompass.PrototypeMultiTargetEnchantedCompass.BP_GetTargetLocations
	 */
	struct APrototypeMultiTargetEnchantedCompass_BP_GetTargetLocations_Params
	{
	public:
		TArray<struct FVector>                                     ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
