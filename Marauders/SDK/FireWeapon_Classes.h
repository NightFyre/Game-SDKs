#pragma once

/**
 * Name: Marauders
 * Version: 642675-attempt2
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
	 * BlueprintGeneratedClass FireWeapon.FireWeapon_C
	 * Size -> 0x0008 (FullSize[0x01B0] - InheritedSize[0x01A8])
	 */
	class UFireWeapon_C : public UGOAPAction
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x01A8(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void CleanupAction(class ARaidGOAPController* P);
		bool checkProceduralPrecondition(class ARaidGOAPController* P);
		void StartAction();
		void ExecuteUbergraph_FireWeapon(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
