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
	 * 		Name   -> PredefinedFunction UANavAnim_Spiderant_ClimbUp_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UANavAnim_Spiderant_ClimbUp_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ANavAnim_Spiderant_ClimbUp.ANavAnim_Spiderant_ClimbUp_C");
		return ptr;
	}

}


