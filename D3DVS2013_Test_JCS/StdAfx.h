﻿#ifndef __STDAFX_H__
/**
 * $File: StdAfx.h $
 * $Date: $
 * $Revision: $
 * $Creator: Jen-Chieh Shen $
 * $Notice: See LICENSE.txt for modification and distribution information
 *                   Copyright (c) 2015 by Shen, Jen-Chieh $
 */
#define __STDAFX_H__

 // stdafx.h : include file for standard system include files,
 //  or project specific include files that are used frequently, but
 //      are changed infrequently
 //


#include <GameTool_JCS\GameTool_StdAfx.h>

//#include <dshow.h>        // 使用DirectX 中的 DirectShow組件

// microsoft os system
#define WM_GRAPHNOTIFY  WM_USER        // audio check WindowProc event use
#define WM_SOCKET 104

// Client's / Server's INFO
#define HOST_NAME "127.0.0.1"
#define PORT 5555

// 遊戲主程式INFO
#define WIDOW_TITLE L"D3DVS2013_Framework_JCS"
#define WIDOW_CLASS L"Framework Development Class"
#define SCREEN_WIDTH 1280        // set screen width
#define SCREEN_HEIGHT 720        // set screen height
#define FILL_VALUE 0x00        // color for D3D

////// LINKER ////////////////


// Platforms
#define __DIRECT2D__
//#define __DIRECTX3D__
#define __OPENGL__

#endif // __STDAFX_H__
