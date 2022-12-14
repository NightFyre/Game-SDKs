/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x04F2C560
	 * 		Name   -> Function BTService_HasNavMesh.BTService_HasNavMesh_C.ReceiveTickAI
	 * 		Flags  -> (Native, Event, Public)
	 * Parameters:
	 * 		class AAIController*                               bpp__OwnerController__pf                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APawn*                                       bpp__ControlledPawn__pf                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              bpp__DeltaSeconds__pf                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBTService_HasNavMesh_C::ReceiveTickAI(class AAIController* bpp__OwnerController__pf, class APawn* bpp__ControlledPawn__pf, float bpp__DeltaSeconds__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTService_HasNavMesh.BTService_HasNavMesh_C.ReceiveTickAI");
		
		UBTService_HasNavMesh_C_ReceiveTickAI_Params params {};
		params.bpp__OwnerController__pf = bpp__OwnerController__pf;
		params.bpp__ControlledPawn__pf = bpp__ControlledPawn__pf;
		params.bpp__DeltaSeconds__pf = bpp__DeltaSeconds__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTService_HasNavMesh_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTService_HasNavMesh_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass BTService_HasNavMesh.BTService_HasNavMesh_C");
		return ptr;
	}

}


