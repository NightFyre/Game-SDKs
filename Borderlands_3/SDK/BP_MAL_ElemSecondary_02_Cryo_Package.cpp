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
	 * 		Name   -> PredefinedFunction UBP_MAL_ElemSecondary_02_Cryo_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_MAL_ElemSecondary_02_Cryo_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_MAL_ElemSecondary_02_Cryo.BP_MAL_ElemSecondary_02_Cryo_C");
		return ptr;
	}

}


