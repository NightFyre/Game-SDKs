#pragma once

/**
 * Name: Borderlands_3
 * Version: 4.20.3
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass Init_Operative_DeathFollowsCloseModScalar.Init_Operative_DeathFollowsCloseModScalar_C
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UInit_Operative_DeathFollowsCloseModScalar_C : public UInit_Players_PassiveAbility_Parent_C
	{
	public:
		float CalculateAttributeInitialValue(class UObject* Context);
		void Get_Death_Follows_Close_Bonus(class UObject* Object, float* Ability_Mod_Bonus);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
