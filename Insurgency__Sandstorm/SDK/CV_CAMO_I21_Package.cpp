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
	 * 		Name   -> PredefinedFunction UCV_CAMO_I21_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCV_CAMO_I21_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass CV_CAMO_I21.CV_CAMO_I21_C");
		return ptr;
	}

}


