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
	 * BlueprintGeneratedClass BP_FrontendHUD.BP_FrontendHUD_C
	 * Size -> 0x0008 (FullSize[0x0638] - InheritedSize[0x0630])
	 */
	class ABP_FrontendHUD_C : public AFrontendHUD
	{
	public:
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0630(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor

	public:
		void UserConstructionScript();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
