//---------------------------------------------------------------------------
// Copyright (c) Microsoft Corporation.  All rights reserved.
//
// This file is automatically generated.  Please do not edit it directly.
//
// File name: D2D1_2.h
//---------------------------------------------------------------------------
#ifdef _MSC_VER
#pragma once
#endif // #ifdef _MSC_VER

#ifndef _D2D1_2_H_
#define _D2D1_2_H_

#ifndef _D2D1_1_H_
#include <d2d1_1.h>
#endif // #ifndef _D2D1_1_H_
#ifndef _D2D1_EFFECTS_1_
#include <d2d1effects_1.h>
#endif // #ifndef _D2D1_EFFECTS_1_



#ifndef D2D_USE_C_DEFINITIONS

interface ID2D1Device1;
#else

typedef interface ID2D1Device1 ID2D1Device1;

#endif

/// <summary>
/// Specifies the extent to which D2D will throttle work sent to the GPU.
/// </summary>
typedef enum D2D1_RENDERING_PRIORITY
{
    D2D1_RENDERING_PRIORITY_NORMAL = 0,
    D2D1_RENDERING_PRIORITY_LOW = 1,
    D2D1_RENDERING_PRIORITY_FORCE_DWORD = 0xffffffff

} D2D1_RENDERING_PRIORITY;


#ifndef D2D_USE_C_DEFINITIONS


/// <summary>
/// Encapsulates a device- and transform-dependent representation of a filled or
/// stroked geometry.
/// </summary>
interface DX_DECLARE_INTERFACE("a16907d7-bc02-4801-99e8-8cf7f485f774") ID2D1GeometryRealization  : public ID2D1Resource
{
}; // interface ID2D1GeometryRealization


/// <summary>
/// Enables creation and drawing of geometry realization objects.
/// </summary>
interface DX_DECLARE_INTERFACE("d37f57e4-6908-459f-a199-e72f24f79987") ID2D1DeviceContext1  : public ID2D1DeviceContext
{
    
    STDMETHOD(CreateFilledGeometryRealization)(
        _In_ ID2D1Geometry *geometry,
        FLOAT flatteningTolerance,
        _COM_Outptr_ ID2D1GeometryRealization **geometryRealization 
        ) PURE;
    
    STDMETHOD(CreateStrokedGeometryRealization)(
        _In_ ID2D1Geometry *geometry,
        FLOAT flatteningTolerance,
        FLOAT strokeWidth,
        _In_opt_ ID2D1StrokeStyle *strokeStyle,
        _COM_Outptr_ ID2D1GeometryRealization **geometryRealization 
        ) PURE;
    
    STDMETHOD_(void, DrawGeometryRealization)(
        _In_ ID2D1GeometryRealization *geometryRealization,
        _In_ ID2D1Brush *brush 
        ) PURE;
}; // interface ID2D1DeviceContext1


/// <summary>
/// Represents a resource domain whose objects and device contexts can be used
/// together.
/// </summary>
interface DX_DECLARE_INTERFACE("d21768e1-23a4-4823-a14b-7c3eba85d658") ID2D1Device1  : public ID2D1Device
{
    
    /// <summary>
    /// Retrieves the rendering priority currently set on the device.
    /// </summary>
    STDMETHOD_(D2D1_RENDERING_PRIORITY, GetRenderingPriority)(
        ) PURE;
    
    /// <summary>
    /// Sets the rendering priority of the device.
    /// </summary>
    STDMETHOD_(void, SetRenderingPriority)(
        D2D1_RENDERING_PRIORITY renderingPriority 
        ) PURE;
    
    /// <summary>
    /// Creates a new device context with no initially assigned target.
    /// </summary>
    STDMETHOD(CreateDeviceContext)(
        D2D1_DEVICE_CONTEXT_OPTIONS options,
        _COM_Outptr_ ID2D1DeviceContext1 **deviceContext1 
        ) PURE;
    
    using ID2D1Device::CreateDeviceContext;
}; // interface ID2D1Device1


/// <summary>
/// Creates Direct2D resources. This interface also enables the creation of
/// ID2D1Device1 objects.
/// </summary>
interface DX_DECLARE_INTERFACE("94f81a73-9212-4376-9c58-b16a3a0d3992") ID2D1Factory2  : public ID2D1Factory1
{
    
    /// <summary>
    /// This creates a new Direct2D device from the given IDXGIDevice.
    /// </summary>
    STDMETHOD(CreateDevice)(
        _In_ IDXGIDevice *dxgiDevice,
        _COM_Outptr_ ID2D1Device1 **d2dDevice1 
        ) PURE;
    
    using ID2D1Factory1::CreateDevice;
}; // interface ID2D1Factory2


/// <summary>
/// This interface performs all the same functions as the existing ID2D1CommandSink
/// interface. It also enables access to the new primitive blend modes, MIN and ADD,
/// through its SetPrimitiveBlend1 method.
/// </summary>
interface DX_DECLARE_INTERFACE("9eb767fd-4269-4467-b8c2-eb30cb305743") ID2D1CommandSink1  : public ID2D1CommandSink
{
    
    /// <summary>
    /// This method is called if primitiveBlend value was added after Windows 8.
    /// SetPrimitiveBlend method is used for Win8 values (_SOURCE_OVER and _COPY).
    /// </summary>
    STDMETHOD(SetPrimitiveBlend1)(
        D2D1_PRIMITIVE_BLEND primitiveBlend 
        ) PURE;
}; // interface ID2D1CommandSink1



#endif


EXTERN_C CONST IID IID_ID2D1GeometryRealization;
EXTERN_C CONST IID IID_ID2D1DeviceContext1;
EXTERN_C CONST IID IID_ID2D1Device1;
EXTERN_C CONST IID IID_ID2D1Factory2;
EXTERN_C CONST IID IID_ID2D1CommandSink1;


#ifdef D2D_USE_C_DEFINITIONS


typedef interface ID2D1GeometryRealization ID2D1GeometryRealization;

typedef interface ID2D1DeviceContext1 ID2D1DeviceContext1;

typedef interface ID2D1Device1 ID2D1Device1;

typedef interface ID2D1Factory2 ID2D1Factory2;

typedef interface ID2D1CommandSink1 ID2D1CommandSink1;

#endif

           
#ifdef __cplusplus
extern "C"
{
#endif

#if NTDDI_VERSION >= NTDDI_WINBLUE
    FLOAT WINAPI 
    D2D1ComputeMaximumScaleFactor(
        _In_ CONST D2D1_MATRIX_3X2_F *matrix
        ); 
#endif // #if NTDDI_VERSION >= NTDDI_WINBLUE
        
#ifdef __cplusplus
}
#endif
        


#include <d2d1_2helper.h>
#endif // #ifndef _D2D1_2_H_
