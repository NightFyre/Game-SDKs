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
	 * 		Name   -> PredefinedFunction UAmmoContainer_35mmCaselessHE_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAmmoContainer_35mmCaselessHE_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AmmoContainer_35mmCaselessHE.AmmoContainer_35mmCaselessHE_C");
		return ptr;
	}

}


