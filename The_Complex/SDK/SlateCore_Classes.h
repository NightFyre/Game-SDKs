﻿#pragma once

/**
 * Name: The_Complex
 * Version: 9349459
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
	 * Class SlateCore.FontBulkData
	 * Size -> 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
	 */
	class UFontBulkData : public UObject
	{
	public:
		unsigned char                                              UnknownData_163Y[0x50];                                  // 0x0028(0x0050) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SlateCore.FontFaceInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UFontFaceInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SlateCore.FontProviderInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UFontProviderInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SlateCore.SlateTypes
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USlateTypes : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SlateCore.SlateWidgetStyleAsset
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class USlateWidgetStyleAsset : public UObject
	{
	public:
		class USlateWidgetStyleContainerBase*                      CustomStyle;                                             // 0x0028(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SlateCore.SlateWidgetStyleContainerBase
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class USlateWidgetStyleContainerBase : public UObject
	{
	public:
		unsigned char                                              UnknownData_XE08[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SlateCore.SlateWidgetStyleContainerInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USlateWidgetStyleContainerInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SlateCore.SlateThemeManager
	 * Size -> 0x0998 (FullSize[0x09C0] - InheritedSize[0x0028])
	 */
	class USlateThemeManager : public UObject
	{
	public:
		struct FGuid                                               CurrentThemeId;                                          // 0x0028(0x0010) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FStyleColorList                                     ActiveColors;                                            // 0x0038(0x0988) Edit, Transient, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif