#pragma once

/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * BlueprintGeneratedClass AnimAction_Handgun_Reload_NoMag_Compressed.AnimAction_Handgun_Reload_NoMag_Compressed_C
	 * Size -> 0x001C (FullSize[0x0148] - InheritedSize[0x012C])
	 */
	class UAnimAction_Handgun_Reload_NoMag_Compressed_C : public UAnimAction_Reload_Master_C
	{
	public:
		unsigned char                                              UnknownData_RTG0[0x4];                                   // 0x012C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0130(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class FName                                                ProactiveSection;                                        // 0x0138(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                ReactiveSection;                                         // 0x0140(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void TriggerAction();
		void ExecuteUbergraph_AnimAction_Handgun_Reload_NoMag_Compressed(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
