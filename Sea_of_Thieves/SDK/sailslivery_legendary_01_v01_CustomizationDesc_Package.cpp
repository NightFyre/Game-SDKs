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
	 * 		Name   -> PredefinedFunction Usailslivery_legendary_01_v01_CustomizationDesc_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* Usailslivery_legendary_01_v01_CustomizationDesc_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass sailslivery_legendary_01_v01_CustomizationDesc.sailslivery_legendary_01_v01_CustomizationDesc_C");
		return ptr;
	}

}


