﻿#pragma once

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
	 * BlueprintGeneratedClass Condition_PetWithinDistanceFromOwner.Condition_PetWithinDistanceFromOwner_C
	 * Size -> 0x0004 (FullSize[0x008C] - InheritedSize[0x0088])
	 */
	class UCondition_PetWithinDistanceFromOwner_C : public UGbxCondition_Blueprint
	{
	public:
		float                                                      MaxDistance;                                             // 0x0088(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		bool EvaluateCondition(class UObject* Context, class UObject* OptionalContext);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif