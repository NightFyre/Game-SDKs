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
	 * 		Name   -> PredefinedFunction UHitReactionLayer_CoverFlinch_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHitReactionLayer_CoverFlinch_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass HitReactionLayer_CoverFlinch.HitReactionLayer_CoverFlinch_C");
		return ptr;
	}

}


