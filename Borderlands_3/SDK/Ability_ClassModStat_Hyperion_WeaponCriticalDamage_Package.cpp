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
	 * 		Name   -> PredefinedFunction UAbility_ClassModStat_Hyperion_WeaponCriticalDamage_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbility_ClassModStat_Hyperion_WeaponCriticalDamage_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ability_ClassModStat_Hyperion_WeaponCriticalDamage.Ability_ClassModStat_Hyperion_WeaponCriticalDamage_C");
		return ptr;
	}

}


