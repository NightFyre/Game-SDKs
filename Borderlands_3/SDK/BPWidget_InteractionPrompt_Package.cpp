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
	 * 		Name   -> PredefinedFunction UBPWidget_InteractionPrompt_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPWidget_InteractionPrompt_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPWidget_InteractionPrompt.BPWidget_InteractionPrompt_C");
		return ptr;
	}

}


