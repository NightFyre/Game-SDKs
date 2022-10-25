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
	 * Class OceanCrawlersAnimation.OceanCrawlerAnimationData
	 * Size -> 0x0090 (FullSize[0x00B8] - InheritedSize[0x0028])
	 */
	class UOceanCrawlerAnimationData : public UAnimationData
	{
	public:
		struct FOceanCrawlerAnimationDataStructure                 OceanCrawlerAnimationDataStructure;                      // 0x0028(0x0090) Edit, DisableEditOnInstance

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OceanCrawlersAnimation.OceanCrawlerAnimationInstance
	 * Size -> 0x02E0 (FullSize[0x0720] - InheritedSize[0x0440])
	 */
	class UOceanCrawlerAnimationInstance : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_8OX7[0x18];                                  // 0x0440(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FOceanCrawlerAnimationDataStructure                 LoadedAnimations;                                        // 0x0458(0x0090) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance
		struct FActorVelocityData                                  MovementData;                                            // 0x04E8(0x0018) BlueprintVisible, BlueprintReadOnly
		float                                                      CurrentDirection;                                        // 0x0500(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_Q7SD[0x4];                                   // 0x0504(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAthenaAnimationWeapon                              AttackAnims;                                             // 0x0508(0x00B8) BlueprintVisible, BlueprintReadOnly
		bool                                                       UseDefaultAnimations;                                    // 0x05C0(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       AnimationsLoaded;                                        // 0x05C1(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       SporeBreathActive;                                       // 0x05C2(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_1U0U[0x1];                                   // 0x05C3(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                PropAttachmentSocket;                                    // 0x05C4(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_HK8S[0x4];                                   // 0x05CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCustomAnimationMontageStateMachine                 MontagePlayer;                                           // 0x05D0(0x00D8)
		struct FHitReactionAnimationState                          HitReacts;                                               // 0x06A8(0x0028) BlueprintVisible
		unsigned char                                              UnknownData_BKAM[0x50];                                  // 0x06D0(0x0050) MISSED OFFSET (PADDING)

	public:
		void ClearActiveAttack();
		void BeginNewAttack();
		static UClass* StaticClass();
	};

	/**
	 * Class OceanCrawlersAnimation.OceanCrawlerAnimationServerData
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UOceanCrawlerAnimationServerData : public UAnimationServerData
	{
	public:
		unsigned char                                              UnknownData_LMQ7[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              AnimInstanceType;                                        // 0x0030(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		float                                                      MaxSpawnAnimDuration;                                    // 0x0038(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxSpawnOnShipAnimDuration;                              // 0x003C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxSpawnBoardingAnimDuration;                            // 0x0040(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_S06R[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
