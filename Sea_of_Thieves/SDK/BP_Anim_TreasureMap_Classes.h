﻿#pragma once

/**
 * Name: Sea_of_Thieves
 * Version: 9505844
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
	 * AnimBlueprintGeneratedClass BP_Anim_TreasureMap.BP_Anim_TreasureMap_C
	 * Size -> 0x0101 (FullSize[0x0731] - InheritedSize[0x0630])
	 */
	class UBP_Anim_TreasureMap_C : public UWieldableItemAnimationInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0630(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root_667F3EDC42EB32D9D7A19E894D19591E;     // 0x0638(0x0048)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_040CD025499C9070540FEB8FA7C91FFA;     // 0x0680(0x0060)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_BA293D36463FC656319A29828C9B119D; // 0x06E0(0x0050)
		EObjectAnimationState                                      ObjectAnimationState;                                    // 0x0730(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void OnUseStarted(class UClass* InputID, const struct FWieldableItemActionVisuals& ActionVisuals);
		void OnUseStopped(class UClass* InputID);
		void ExecuteUbergraph_BP_Anim_TreasureMap(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
