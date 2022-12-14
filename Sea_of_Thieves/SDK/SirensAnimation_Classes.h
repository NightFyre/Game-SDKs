#pragma once

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
	 * Class SirensAnimation.SirenAnimationData
	 * Size -> 0x0060 (FullSize[0x0088] - InheritedSize[0x0028])
	 */
	class USirenAnimationData : public UAnimationData
	{
	public:
		struct FSirenAnimationDataStructure                        SirenAnimationData;                                      // 0x0028(0x0060) Edit, DisableEditOnInstance

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SirensAnimation.SirenAnimationInstance
	 * Size -> 0x02D0 (FullSize[0x0710] - InheritedSize[0x0440])
	 */
	class USirenAnimationInstance : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_E6C5[0x10];                                  // 0x0440(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TWeakObjectPtr<class APawn>                                PawnOwner;                                               // 0x0450(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper
		class FName                                                PropAttachmentSocket;                                    // 0x0458(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FSirenAnimationDataStructure                        SirenAnimationData;                                      // 0x0460(0x0060) BlueprintVisible, BlueprintReadOnly
		struct FAthenaAnimationWeapon                              AttackAnimations;                                        // 0x04C0(0x00B8) BlueprintVisible, BlueprintReadOnly
		float                                                      ForwardSpeed;                                            // 0x0578(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_VKR0[0xC];                                   // 0x057C(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TiltDirectionAngleDegrees;                               // 0x0588(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TiltAngleAlpha;                                          // 0x058C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SpinAngleDegrees;                                        // 0x0590(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxTiltAngleRepresentedByAdditiveBendAnimations;         // 0x0594(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       UpperBodyOverlayActive;                                  // 0x0598(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       SwimmingLongways;                                        // 0x0599(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       UseAggressiveAnimations;                                 // 0x059A(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       UseAlternativeAggressiveAnimation;                       // 0x059B(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_BJJI[0x4];                                   // 0x059C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UClass*>                                      StrategiesForAggressiveAnimations;                       // 0x05A0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper
		struct FFloatRange                                         TimeBeforeAlternativeAggressiveAnimationToggleFlips;     // 0x05B0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_692X[0x8];                                   // 0x05C0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       AnimationsLoaded;                                        // 0x05C8(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7OAF[0x3];                                   // 0x05C9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AimUpAlpha;                                              // 0x05CC(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AimDownAlpha;                                            // 0x05D0(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_9S70[0x4];                                   // 0x05D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCustomAnimationMontageStateMachine                 FullBodyStateMachine;                                    // 0x05D8(0x00D8)
		struct FHitReactionAnimationState                          HitReacts;                                               // 0x06B0(0x0028) BlueprintVisible
		unsigned char                                              UnknownData_TBXB[0x38];                                  // 0x06D8(0x0038) MISSED OFFSET (PADDING)

	public:
		void ClearActiveAttack();
		void BeginNewAttack();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
