/**
 * Name: Sea_of_Thieves
 * Version: 9505844
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
	 * 		Name   -> PredefinedFunction UTitle_DestroyerOfTheDamned_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTitle_DestroyerOfTheDamned_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Title_DestroyerOfTheDamned.Title_DestroyerOfTheDamned_C");
		return ptr;
	}

}


