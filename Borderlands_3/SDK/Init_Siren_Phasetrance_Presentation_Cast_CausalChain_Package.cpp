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
	 * 		Name   -> PredefinedFunction UInit_Siren_Phasetrance_Presentation_Cast_CausalChain_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInit_Siren_Phasetrance_Presentation_Cast_CausalChain_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Init_Siren_Phasetrance_Presentation_Cast_CausalChain.Init_Siren_Phasetrance_Presentation_Cast_CausalChain_C");
		return ptr;
	}

}


