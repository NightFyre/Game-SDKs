#pragma once

/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * BlueprintGeneratedClass Lock_Item_Basic.Lock_Item_Basic_C
	 * Size -> 0x0008 (FullSize[0x0910] - InheritedSize[0x0908])
	 */
	class ALock_Item_Basic_C : public AItem
	{
	public:
		unsigned char                                              UnknownData_H4WJ[0x8];                                   // 0x0908(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
