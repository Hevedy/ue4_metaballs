//=================================================
// FileName: MetaballsPlugin.h
// 
// Created by: Andrey Harchenko
// Updated by: Hevedy
// Project name: Metaballs FX Plugin
// Unreal Engine version: 4.18
// Created on: 2016/03/17
// Updated on: 2018/06/14
// Initial realisation by: Andreas Jönsson, April 2001
//
// -------------------------------------------------
// For parts referencing UE4 code, the following copyright applies:
// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
//
// Feel free to use this software in any commercial/free game.
// Selling this as a plugin/item, in whole or part, is not allowed.
// See "License.md" for full licensing details. <MIT License>


#pragma once
 
#include "ModuleManager.h"
 
class MetaballsPluginImpl : public IModuleInterface
{
public:
	/** IModuleInterface implementation */
	void StartupModule();
	void ShutdownModule();
};
