/**
 * Name: SCUM
 * Version: 0.7.162
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Survival_Tutorial_CraftWoodenSpearObjective_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Survival_Tutorial_CraftWoodenSpearObjective_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Survival_Tutorial_CraftWoodenSpearObjective.BP_Survival_Tutorial_CraftWoodenSpearObjective_C");
		return ptr;
	}

}


