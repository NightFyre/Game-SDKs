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
	 * BlueprintGeneratedClass BP_audio_prem_shop.BP_audio_prem_shop_C
	 * Size -> 0x0028 (FullSize[0x03F0] - InheritedSize[0x03C8])
	 */
	class ABP_audio_prem_shop_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03C8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAudioPortalComponent*                               AudioPortal;                                             // 0x03D0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UWwiseEmitterComponent*                              WwiseEmitter1;                                           // 0x03D8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UAudioSpaceComponent*                                AudioSpace;                                              // 0x03E0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class USceneComponent*                                     Scene;                                                   // 0x03E8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor

	public:
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void ExecuteUbergraph_BP_audio_prem_shop(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
