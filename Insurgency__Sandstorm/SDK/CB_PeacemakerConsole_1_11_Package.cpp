/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
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
	 * 		Name   -> PredefinedFunction UCB_PeacemakerConsole_1_10_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCB_PeacemakerConsole_1_10_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass CB_PeacemakerConsole_1_11.CB_PeacemakerConsole_1_10_C");
		return ptr;
	}

}


