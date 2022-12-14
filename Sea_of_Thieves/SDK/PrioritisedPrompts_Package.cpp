/**
 * Name: Sea_of_Thieves
 * Version: 9505844
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x039CDD30
	 * 		Name   -> Function PrioritisedPrompts.BasePromptCoordinator.UpdateVisiblePrompt
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UBasePromptCoordinator::UpdateVisiblePrompt()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrioritisedPrompts.BasePromptCoordinator.UpdateVisiblePrompt");
		
		UBasePromptCoordinator_UpdateVisiblePrompt_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function PrioritisedPrompts.BasePromptCoordinator.UnregisterOtherEvents_Implementable
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBasePromptCoordinator::UnregisterOtherEvents_Implementable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrioritisedPrompts.BasePromptCoordinator.UnregisterOtherEvents_Implementable");
		
		UBasePromptCoordinator_UnregisterOtherEvents_Implementable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function PrioritisedPrompts.BasePromptCoordinator.UnregisterCharacterEvents_Implementable
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FObjectMessagingDispatcherHandle            CharacterDispatcher                                        (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	void UBasePromptCoordinator::UnregisterCharacterEvents_Implementable(const struct FObjectMessagingDispatcherHandle& CharacterDispatcher)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrioritisedPrompts.BasePromptCoordinator.UnregisterCharacterEvents_Implementable");
		
		UBasePromptCoordinator_UnregisterCharacterEvents_Implementable_Params params {};
		params.CharacterDispatcher = CharacterDispatcher;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function PrioritisedPrompts.BasePromptCoordinator.Uninitialize_Implementable
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBasePromptCoordinator::Uninitialize_Implementable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrioritisedPrompts.BasePromptCoordinator.Uninitialize_Implementable");
		
		UBasePromptCoordinator_Uninitialize_Implementable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x039CDD10
	 * 		Name   -> Function PrioritisedPrompts.BasePromptCoordinator.Uninitialize
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UBasePromptCoordinator::Uninitialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrioritisedPrompts.BasePromptCoordinator.Uninitialize");
		
		UBasePromptCoordinator_Uninitialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x039CDCF0
	 * 		Name   -> Function PrioritisedPrompts.BasePromptCoordinator.Start
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBasePromptCoordinator::Start()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrioritisedPrompts.BasePromptCoordinator.Start");
		
		UBasePromptCoordinator_Start_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x039CDC00
	 * 		Name   -> Function PrioritisedPrompts.BasePromptCoordinator.SetPromptAs
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FPrioritisedPromptWithHandle                Prompt                                                     (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	void UBasePromptCoordinator::SetPromptAs(const struct FPrioritisedPromptWithHandle& Prompt)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrioritisedPrompts.BasePromptCoordinator.SetPromptAs");
		
		UBasePromptCoordinator_SetPromptAs_Params params {};
		params.Prompt = Prompt;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function PrioritisedPrompts.BasePromptCoordinator.RegisterOtherEvents_Implementable
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBasePromptCoordinator::RegisterOtherEvents_Implementable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrioritisedPrompts.BasePromptCoordinator.RegisterOtherEvents_Implementable");
		
		UBasePromptCoordinator_RegisterOtherEvents_Implementable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function PrioritisedPrompts.BasePromptCoordinator.RegisterCharacterEvents_Implementable
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FObjectMessagingDispatcherHandle            CharacterDispatcher                                        (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	void UBasePromptCoordinator::RegisterCharacterEvents_Implementable(const struct FObjectMessagingDispatcherHandle& CharacterDispatcher)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrioritisedPrompts.BasePromptCoordinator.RegisterCharacterEvents_Implementable");
		
		UBasePromptCoordinator_RegisterCharacterEvents_Implementable_Params params {};
		params.CharacterDispatcher = CharacterDispatcher;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x039CDB80
	 * 		Name   -> Function PrioritisedPrompts.BasePromptCoordinator.OnControllerEndPlay
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBasePromptCoordinator::OnControllerEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrioritisedPrompts.BasePromptCoordinator.OnControllerEndPlay");
		
		UBasePromptCoordinator_OnControllerEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function PrioritisedPrompts.BasePromptCoordinator.MarkAsComplete_Implementable
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBasePromptCoordinator::MarkAsComplete_Implementable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrioritisedPrompts.BasePromptCoordinator.MarkAsComplete_Implementable");
		
		UBasePromptCoordinator_MarkAsComplete_Implementable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x039CDA50
	 * 		Name   -> Function PrioritisedPrompts.BasePromptCoordinator.MakeShowPrompt
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FPrioritisedPromptWithHandle                Prompt                                                     (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	struct FPromptEvaluation UBasePromptCoordinator::STATIC_MakeShowPrompt(const struct FPrioritisedPromptWithHandle& Prompt)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrioritisedPrompts.BasePromptCoordinator.MakeShowPrompt");
		
		UBasePromptCoordinator_MakeShowPrompt_Params params {};
		params.Prompt = Prompt;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x039CD9E0
	 * 		Name   -> Function PrioritisedPrompts.BasePromptCoordinator.MakeHideCurrentPrompts
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	struct FPromptEvaluation UBasePromptCoordinator::STATIC_MakeHideCurrentPrompts()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrioritisedPrompts.BasePromptCoordinator.MakeHideCurrentPrompts");
		
		UBasePromptCoordinator_MakeHideCurrentPrompts_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x039CD970
	 * 		Name   -> Function PrioritisedPrompts.BasePromptCoordinator.MakeCompleteCoordinator
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	struct FPromptEvaluation UBasePromptCoordinator::STATIC_MakeCompleteCoordinator()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrioritisedPrompts.BasePromptCoordinator.MakeCompleteCoordinator");
		
		UBasePromptCoordinator_MakeCompleteCoordinator_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x039CD8B0
	 * 		Name   -> Function PrioritisedPrompts.BasePromptCoordinator.Initialize
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AAthenaPlayerController*                     PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrioritisedPromptsManager*                  PrioritisedPromptsManager                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBasePromptCoordinator::Initialize(class AAthenaPlayerController* PlayerController, class UPrioritisedPromptsManager* PrioritisedPromptsManager)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrioritisedPrompts.BasePromptCoordinator.Initialize");
		
		UBasePromptCoordinator_Initialize_Params params {};
		params.PlayerController = PlayerController;
		params.PrioritisedPromptsManager = PrioritisedPromptsManager;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x039CD6E0
	 * 		Name   -> Function PrioritisedPrompts.BasePromptCoordinator.GetCompleted
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UBasePromptCoordinator::GetCompleted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrioritisedPrompts.BasePromptCoordinator.GetCompleted");
		
		UBasePromptCoordinator_GetCompleted_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function PrioritisedPrompts.BasePromptCoordinator.EvaluatePromptDisplayState
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	struct FPromptEvaluation UBasePromptCoordinator::EvaluatePromptDisplayState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrioritisedPrompts.BasePromptCoordinator.EvaluatePromptDisplayState");
		
		UBasePromptCoordinator_EvaluatePromptDisplayState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x039CD6C0
	 * 		Name   -> Function PrioritisedPrompts.BasePromptCoordinator.DismissAllPrompts
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UBasePromptCoordinator::DismissAllPrompts()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrioritisedPrompts.BasePromptCoordinator.DismissAllPrompts");
		
		UBasePromptCoordinator_DismissAllPrompts_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBasePromptCoordinator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBasePromptCoordinator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PrioritisedPrompts.BasePromptCoordinator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x039CD7A0
	 * 		Name   -> Function PrioritisedPrompts.GetPromptsLocalService.GetPromptsLocalService
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UGetPromptsLocalService* UGetPromptsLocalService::STATIC_GetPromptsLocalService(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrioritisedPrompts.GetPromptsLocalService.GetPromptsLocalService");
		
		UGetPromptsLocalService_GetPromptsLocalService_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGetPromptsLocalService.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGetPromptsLocalService::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PrioritisedPrompts.GetPromptsLocalService");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrioritisedPromptsManagerInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrioritisedPromptsManagerInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PrioritisedPrompts.PrioritisedPromptsManagerInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrioritisedPromptsManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrioritisedPromptsManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PrioritisedPrompts.PrioritisedPromptsManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPromptCounterAccessKey.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPromptCounterAccessKey::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PrioritisedPrompts.PromptCounterAccessKey");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x039CD820
	 * 		Name   -> Function PrioritisedPrompts.PromptsLocalServiceInterface.IncrementCountForKey
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UClass*                                      AccessKey                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void UPromptsLocalServiceInterface::IncrementCountForKey(class UClass* AccessKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrioritisedPrompts.PromptsLocalServiceInterface.IncrementCountForKey");
		
		UPromptsLocalServiceInterface_IncrementCountForKey_Params params {};
		params.AccessKey = AccessKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x039CD700
	 * 		Name   -> Function PrioritisedPrompts.PromptsLocalServiceInterface.GetCountForKey
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class UClass*                                      AccessKey                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	int32_t UPromptsLocalServiceInterface::GetCountForKey(class UClass* AccessKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrioritisedPrompts.PromptsLocalServiceInterface.GetCountForKey");
		
		UPromptsLocalServiceInterface_GetCountForKey_Params params {};
		params.AccessKey = AccessKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPromptsLocalServiceInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPromptsLocalServiceInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PrioritisedPrompts.PromptsLocalServiceInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPromptsLocalService.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPromptsLocalService::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PrioritisedPrompts.PromptsLocalService");
		return ptr;
	}

}


