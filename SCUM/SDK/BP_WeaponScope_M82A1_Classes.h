#pragma once

/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * BlueprintGeneratedClass BP_WeaponScope_M82A1.BP_WeaponScope_M82A1_C
	 * Size -> 0x0008 (FullSize[0x0948] - InheritedSize[0x0940])
	 */
	class ABP_WeaponScope_M82A1_C : public AWeaponAttachmentScope
	{
	public:
		class UDummyCollisionCapsule*                              ScopeViewCollision;                                      // 0x0940(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
