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
	 * 		Name   -> PredefinedFunction UBPCamShake_Default_Explosion_L_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPCamShake_Default_Explosion_L_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPCamShake_Default_Explosion_L.BPCamShake_Default_Explosion_L_C");
		return ptr;
	}

}


