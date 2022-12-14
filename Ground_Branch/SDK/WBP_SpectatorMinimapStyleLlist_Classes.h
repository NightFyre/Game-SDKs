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
	 * WidgetBlueprintGeneratedClass WBP_SpectatorMinimapStyleLlist.WBP_SpectatorMinimapStyleLlist_C
	 * Size -> 0x0040 (FullSize[0x02A0] - InheritedSize[0x0260])
	 */
	class UWBP_SpectatorMinimapStyleLlist_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UButton*                                             Button_Panning;                                          // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Button_Rotating;                                         // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Button_Static;                                           // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<class FName>                                        CameraStyles;                                            // 0x0280(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance
		class FScriptMulticastDelegate                             OnMinimapStyleChanged;                                   // 0x0290(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void BndEvt__Button_OverTheShoulder_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__Button_ThirdPerson_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__Button_Static_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
		void ExecuteUbergraph_WBP_SpectatorMinimapStyleLlist(int32_t EntryPoint);
		void OnMinimapStyleChanged__DelegateSignature(const class FName& MinimapStyle);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
