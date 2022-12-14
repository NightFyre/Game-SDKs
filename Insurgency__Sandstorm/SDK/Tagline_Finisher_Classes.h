#pragma once

/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
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
	 * DynamicClass Tagline_Finisher.Tagline_Finisher_C
	 * Size -> 0x0060 (FullSize[0x0140] - InheritedSize[0x00E0])
	 */
	class UTagline_Finisher_C : public UTagline
	{
	public:
		class FScriptDelegate                                      K2Node_CreateDelegate_OutputDelegate;                    // 0x00E0(0x0010) ZeroConstructor, Transient, InstancedReference, DuplicateTransient, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    Temp_int_Array_Index_Variable;                           // 0x00F0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F7BS[0x4];                                   // 0x00F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AINSGameMode*                                        K2Node_Event_GameMode;                                   // 0x00F8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AObjectiveDestructible*                              K2Node_CustomEvent_Objective;                            // 0x0100(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              K2Node_CustomEvent_OldOwners;                            // 0x0108(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              K2Node_CustomEvent_NewOwners;                            // 0x0109(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3YHO[0x6];                                   // 0x010A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AINSPlayerState*>                             K2Node_CustomEvent_Attackers;                            // 0x0110(0x0010) ZeroConstructor, Transient, DuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AINSPushGameMode*                                    K2Node_DynamicCast_AsINSPush_Game_Mode;                  // 0x0120(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_DynamicCast_bSuccess;                             // 0x0128(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DVDV[0x7];                                   // 0x0129(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AINSPlayerState*                                     CallFunc_Array_Get_Item;                                 // 0x0130(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Temp_int_Loop_Counter_Variable;                          // 0x0138(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5EEE[0x4];                                   // 0x013C(0x0004) MISSED OFFSET (PADDING)

	public:
		void OnDestroyed(class AObjectiveDestructible* bpp__Objective__pf, unsigned char bpp__OldOwners__pf, unsigned char bpp__NewOwners__pf, TArray<class AINSPlayerState*> bpp__Attackers__pf__const);
		void BlueprintInit(class AINSGameMode* bpp__GameMode__pf);
		void ObjectiveDestroyedEventDelegate__DelegateSignature(class AObjectiveDestructible* bpp__Objective__pf, unsigned char bpp__OldOwners__pf, unsigned char bpp__NewOwners__pf, TArray<class AINSPlayerState*> bpp__Attackers__pf);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
