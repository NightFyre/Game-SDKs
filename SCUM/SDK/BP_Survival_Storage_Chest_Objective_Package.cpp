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
	 * 		Name   -> PredefinedFunction ABP_Survival_Storage_Chest_Objective_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Survival_Storage_Chest_Objective_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Survival_Storage_Chest_Objective.BP_Survival_Storage_Chest_Objective_C");
		return ptr;
	}

}


