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
	 * 		Name   -> PredefinedFunction UThirst_Moderate_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UThirst_Moderate_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Thirst_Moderate.Thirst_Moderate_C");
		return ptr;
	}

}


