/*******************************************************************
*         Advanced 3D Game Programming with DirectX 10.0
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
*
*    See license.txt for modification and distribution information
*        copyright (c) 2007 by Peter Walsh, Wordware
******************************************************************/

//-----------------------------------------------------------------------------
// File: WavRead.h
//
// Description: Support for loading and playing Wave files using DirectSound sound
//       buffers.
//
// Copyright (c) 1999 Microsoft Corp. All rights reserved.
//-----------------------------------------------------------------------------
#ifndef WAVE_READ_H
#define WAVE_READ_H


#include <mmreg.h>
#include <mmsystem.h>


//-----------------------------------------------------------------------------
// Name: class CWaveSoundRead
// Description: A class to read in sound data from a Wave file
//-----------------------------------------------------------------------------
class CWaveSoundRead
{
public:
    WAVEFORMATEX* m_pwfx;        // Pointer to WAVEFORMATEX structure
    HMMIO         m_hmmioIn;     // MM I/O handle for the WAVE
    MMCKINFO      m_ckIn;        // Multimedia RIFF chunk
    MMCKINFO      m_ckInRiff;    // Use in opening a WAVE file

public:
    CWaveSoundRead();
    ~CWaveSoundRead();

    HRESULT Open(TCHAR* strFilename);
    HRESULT Reset();
    HRESULT Read(UINT nSizeToRead, BYTE* pbData, UINT* pnSizeRead);
    HRESULT Close();

};


#endif WAVE_READ_H



