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
	 * 		Name   -> PredefinedFunction UPassiveSkill_Operative_ReallyExpensiveJacket_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPassiveSkill_Operative_ReallyExpensiveJacket_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PassiveSkill_Operative_ReallyExpensiveJacket.PassiveSkill_Operative_ReallyExpensiveJacket_C");
		return ptr;
	}

}


