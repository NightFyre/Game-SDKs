/**
 * Name: Borderlands_3
 * Version: 4.20.3
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
	 * 		Name   -> PredefinedFunction UA_OpCannon_UnequipIdle_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UA_OpCannon_UnequipIdle_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass A_OpCannon_UnequipIdle.A_OpCannon_UnequipIdle_C");
		return ptr;
	}

}


