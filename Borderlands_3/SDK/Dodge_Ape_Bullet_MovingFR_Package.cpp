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
	 * 		Name   -> PredefinedFunction UDodge_Ape_Bullet_MovingFR_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDodge_Ape_Bullet_MovingFR_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Dodge_Ape_Bullet_MovingFR.Dodge_Ape_Bullet_MovingFR_C");
		return ptr;
	}

}


