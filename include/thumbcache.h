/*** Autogenerated by WIDL 8.21 from include/thumbcache.idl - Do not edit ***/

#ifdef _WIN32
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif
#include <rpc.h>
#include <rpcndr.h>
#endif

#ifndef COM_NO_WINDOWS_H
#include <windows.h>
#include <ole2.h>
#endif

#ifndef __thumbcache_h__
#define __thumbcache_h__

#ifndef __WIDL_INLINE
#if defined(__cplusplus) || defined(_MSC_VER)
#define __WIDL_INLINE inline
#elif defined(__GNUC__)
#define __WIDL_INLINE __inline__
#endif
#endif

/* Forward declarations */

#ifndef __ISharedBitmap_FWD_DEFINED__
#define __ISharedBitmap_FWD_DEFINED__
typedef interface ISharedBitmap ISharedBitmap;
#ifdef __cplusplus
interface ISharedBitmap;
#endif /* __cplusplus */
#endif

#ifndef __IThumbnailCache_FWD_DEFINED__
#define __IThumbnailCache_FWD_DEFINED__
typedef interface IThumbnailCache IThumbnailCache;
#ifdef __cplusplus
interface IThumbnailCache;
#endif /* __cplusplus */
#endif

#ifndef __IThumbnailProvider_FWD_DEFINED__
#define __IThumbnailProvider_FWD_DEFINED__
typedef interface IThumbnailProvider IThumbnailProvider;
#ifdef __cplusplus
interface IThumbnailProvider;
#endif /* __cplusplus */
#endif

#ifndef __IThumbnailSettings_FWD_DEFINED__
#define __IThumbnailSettings_FWD_DEFINED__
typedef interface IThumbnailSettings IThumbnailSettings;
#ifdef __cplusplus
interface IThumbnailSettings;
#endif /* __cplusplus */
#endif

#ifndef __IThumbnailCachePrimer_FWD_DEFINED__
#define __IThumbnailCachePrimer_FWD_DEFINED__
typedef interface IThumbnailCachePrimer IThumbnailCachePrimer;
#ifdef __cplusplus
interface IThumbnailCachePrimer;
#endif /* __cplusplus */
#endif

#ifndef __LocalThumbnailCache_FWD_DEFINED__
#define __LocalThumbnailCache_FWD_DEFINED__
#ifdef __cplusplus
typedef class LocalThumbnailCache LocalThumbnailCache;
#else
typedef struct LocalThumbnailCache LocalThumbnailCache;
#endif /* defined __cplusplus */
#endif /* defined __LocalThumbnailCache_FWD_DEFINED__ */

#ifndef __SharedBitmap_FWD_DEFINED__
#define __SharedBitmap_FWD_DEFINED__
#ifdef __cplusplus
typedef class SharedBitmap SharedBitmap;
#else
typedef struct SharedBitmap SharedBitmap;
#endif /* defined __cplusplus */
#endif /* defined __SharedBitmap_FWD_DEFINED__ */

/* Headers for imported files */

#include <oaidl.h>
#include <shtypes.h>
#include <shobjidl.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef enum WTS_FLAGS {
    WTS_NONE = 0x0,
    WTS_EXTRACT = 0x0,
    WTS_INCACHEONLY = 0x1,
    WTS_FASTEXTRACT = 0x2,
    WTS_FORCEEXTRACTION = 0x4,
    WTS_SLOWRECLAIM = 0x8,
    WTS_EXTRACTDONOTCACHE = 0x20,
    WTS_SCALETOREQUESTEDSIZE = 0x40,
    WTS_SKIPFASTEXTRACT = 0x80,
    WTS_EXTRACTINPROC = 0x100,
    WTS_CROPTOSQUARE = 0x200,
    WTS_INSTANCESURROGATE = 0x400,
    WTS_REQUIRESURROGATE = 0x800,
    WTS_APPSTYLE = 0x2000,
    WTS_WIDETHUMBNAILS = 0x4000,
    WTS_IDEALCACHESIZEONLY = 0x8000,
    WTS_SCALEUP = 0x10000
} WTS_FLAGS;
DEFINE_ENUM_FLAG_OPERATORS(WTS_FLAGS)
typedef enum WTS_CACHEFLAGS {
    WTS_DEFAULT = 0x0,
    WTS_LOWQUALITY = 0x1,
    WTS_CACHED = 0x2
} WTS_CACHEFLAGS;
DEFINE_ENUM_FLAG_OPERATORS(WTS_CACHEFLAGS)
typedef enum WTS_CONTEXTFLAGS {
    WTSCF_DEFAULT = 0x0,
    WTSCF_APPSTYLE = 0x1,
    WTSCF_SQUARE = 0x2,
    WTSCF_WIDE = 0x4,
    WTSCF_FAST = 0x8
} WTS_CONTEXTFLAGS;
DEFINE_ENUM_FLAG_OPERATORS(WTS_CONTEXTFLAGS)
typedef enum WTS_ALPHATYPE {
    WTSAT_UNKNOWN = 0,
    WTSAT_RGB = 1,
    WTSAT_ARGB = 2
} WTS_ALPHATYPE;
typedef struct WTS_THUMBNAILID {
    BYTE rgbKey[16];
} WTS_THUMBNAILID;
#define WTS_E_FAILEDEXTRACTION MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0xb200)
#define WTS_E_EXTRACTIONTIMEDOUT MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0xb201)
#define WTS_E_SURROGATEUNAVAILABLE MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0xb202)
#define WTS_E_FASTEXTRACTIONNOTSUPPORTED MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0xb203)
#define WTS_E_DATAFILEUNAVAILABLE MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0xb204)
#define WTS_E_EXTRACTIONPENDING MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0xb205)
#define WTS_E_EXTRACTIONBLOCKED MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0xb206)
/*****************************************************************************
 * ISharedBitmap interface
 */
#ifndef __ISharedBitmap_INTERFACE_DEFINED__
#define __ISharedBitmap_INTERFACE_DEFINED__

DEFINE_GUID(IID_ISharedBitmap, 0x091162a4, 0xbc96, 0x411f, 0xaa,0xe8, 0xc5,0x12,0x2c,0xd0,0x33,0x63);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("091162a4-bc96-411f-aae8-c5122cd03363")
ISharedBitmap : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE GetSharedBitmap(
        HBITMAP *phbm) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetSize(
        SIZE *pSize) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetFormat(
        WTS_ALPHATYPE *pat) = 0;

    virtual HRESULT STDMETHODCALLTYPE InitializeBitmap(
        HBITMAP hbm,
        WTS_ALPHATYPE wtsAT) = 0;

    virtual HRESULT STDMETHODCALLTYPE Detach(
        HBITMAP *phbm) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(ISharedBitmap, 0x091162a4, 0xbc96, 0x411f, 0xaa,0xe8, 0xc5,0x12,0x2c,0xd0,0x33,0x63)
#endif
#else
typedef struct ISharedBitmapVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ISharedBitmap *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ISharedBitmap *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ISharedBitmap *This);

    /*** ISharedBitmap methods ***/
    HRESULT (STDMETHODCALLTYPE *GetSharedBitmap)(
        ISharedBitmap *This,
        HBITMAP *phbm);

    HRESULT (STDMETHODCALLTYPE *GetSize)(
        ISharedBitmap *This,
        SIZE *pSize);

    HRESULT (STDMETHODCALLTYPE *GetFormat)(
        ISharedBitmap *This,
        WTS_ALPHATYPE *pat);

    HRESULT (STDMETHODCALLTYPE *InitializeBitmap)(
        ISharedBitmap *This,
        HBITMAP hbm,
        WTS_ALPHATYPE wtsAT);

    HRESULT (STDMETHODCALLTYPE *Detach)(
        ISharedBitmap *This,
        HBITMAP *phbm);

    END_INTERFACE
} ISharedBitmapVtbl;

interface ISharedBitmap {
    CONST_VTBL ISharedBitmapVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define ISharedBitmap_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define ISharedBitmap_AddRef(This) (This)->lpVtbl->AddRef(This)
#define ISharedBitmap_Release(This) (This)->lpVtbl->Release(This)
/*** ISharedBitmap methods ***/
#define ISharedBitmap_GetSharedBitmap(This,phbm) (This)->lpVtbl->GetSharedBitmap(This,phbm)
#define ISharedBitmap_GetSize(This,pSize) (This)->lpVtbl->GetSize(This,pSize)
#define ISharedBitmap_GetFormat(This,pat) (This)->lpVtbl->GetFormat(This,pat)
#define ISharedBitmap_InitializeBitmap(This,hbm,wtsAT) (This)->lpVtbl->InitializeBitmap(This,hbm,wtsAT)
#define ISharedBitmap_Detach(This,phbm) (This)->lpVtbl->Detach(This,phbm)
#else
/*** IUnknown methods ***/
static __WIDL_INLINE HRESULT ISharedBitmap_QueryInterface(ISharedBitmap* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static __WIDL_INLINE ULONG ISharedBitmap_AddRef(ISharedBitmap* This) {
    return This->lpVtbl->AddRef(This);
}
static __WIDL_INLINE ULONG ISharedBitmap_Release(ISharedBitmap* This) {
    return This->lpVtbl->Release(This);
}
/*** ISharedBitmap methods ***/
static __WIDL_INLINE HRESULT ISharedBitmap_GetSharedBitmap(ISharedBitmap* This,HBITMAP *phbm) {
    return This->lpVtbl->GetSharedBitmap(This,phbm);
}
static __WIDL_INLINE HRESULT ISharedBitmap_GetSize(ISharedBitmap* This,SIZE *pSize) {
    return This->lpVtbl->GetSize(This,pSize);
}
static __WIDL_INLINE HRESULT ISharedBitmap_GetFormat(ISharedBitmap* This,WTS_ALPHATYPE *pat) {
    return This->lpVtbl->GetFormat(This,pat);
}
static __WIDL_INLINE HRESULT ISharedBitmap_InitializeBitmap(ISharedBitmap* This,HBITMAP hbm,WTS_ALPHATYPE wtsAT) {
    return This->lpVtbl->InitializeBitmap(This,hbm,wtsAT);
}
static __WIDL_INLINE HRESULT ISharedBitmap_Detach(ISharedBitmap* This,HBITMAP *phbm) {
    return This->lpVtbl->Detach(This,phbm);
}
#endif
#endif

#endif


#endif  /* __ISharedBitmap_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IThumbnailCache interface
 */
#ifndef __IThumbnailCache_INTERFACE_DEFINED__
#define __IThumbnailCache_INTERFACE_DEFINED__

DEFINE_GUID(IID_IThumbnailCache, 0xf676c15d, 0x596a, 0x4ce2, 0x82,0x34, 0x33,0x99,0x6f,0x44,0x5d,0xb1);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("f676c15d-596a-4ce2-8234-33996f445db1")
IThumbnailCache : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE GetThumbnail(
        IShellItem *pShellItem,
        UINT cxyRequestedThumbSize,
        WTS_FLAGS flags,
        ISharedBitmap **ppvThumb,
        WTS_CACHEFLAGS *pOutFlags,
        WTS_THUMBNAILID *pThumbnailID) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetThumbnailByID(
        WTS_THUMBNAILID thumbnailID,
        UINT cxyRequestedThumbSize,
        ISharedBitmap **ppvThumb,
        WTS_CACHEFLAGS *pOutFlags) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IThumbnailCache, 0xf676c15d, 0x596a, 0x4ce2, 0x82,0x34, 0x33,0x99,0x6f,0x44,0x5d,0xb1)
#endif
#else
typedef struct IThumbnailCacheVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IThumbnailCache *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IThumbnailCache *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IThumbnailCache *This);

    /*** IThumbnailCache methods ***/
    HRESULT (STDMETHODCALLTYPE *GetThumbnail)(
        IThumbnailCache *This,
        IShellItem *pShellItem,
        UINT cxyRequestedThumbSize,
        WTS_FLAGS flags,
        ISharedBitmap **ppvThumb,
        WTS_CACHEFLAGS *pOutFlags,
        WTS_THUMBNAILID *pThumbnailID);

    HRESULT (STDMETHODCALLTYPE *GetThumbnailByID)(
        IThumbnailCache *This,
        WTS_THUMBNAILID thumbnailID,
        UINT cxyRequestedThumbSize,
        ISharedBitmap **ppvThumb,
        WTS_CACHEFLAGS *pOutFlags);

    END_INTERFACE
} IThumbnailCacheVtbl;

interface IThumbnailCache {
    CONST_VTBL IThumbnailCacheVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IThumbnailCache_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IThumbnailCache_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IThumbnailCache_Release(This) (This)->lpVtbl->Release(This)
/*** IThumbnailCache methods ***/
#define IThumbnailCache_GetThumbnail(This,pShellItem,cxyRequestedThumbSize,flags,ppvThumb,pOutFlags,pThumbnailID) (This)->lpVtbl->GetThumbnail(This,pShellItem,cxyRequestedThumbSize,flags,ppvThumb,pOutFlags,pThumbnailID)
#define IThumbnailCache_GetThumbnailByID(This,thumbnailID,cxyRequestedThumbSize,ppvThumb,pOutFlags) (This)->lpVtbl->GetThumbnailByID(This,thumbnailID,cxyRequestedThumbSize,ppvThumb,pOutFlags)
#else
/*** IUnknown methods ***/
static __WIDL_INLINE HRESULT IThumbnailCache_QueryInterface(IThumbnailCache* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static __WIDL_INLINE ULONG IThumbnailCache_AddRef(IThumbnailCache* This) {
    return This->lpVtbl->AddRef(This);
}
static __WIDL_INLINE ULONG IThumbnailCache_Release(IThumbnailCache* This) {
    return This->lpVtbl->Release(This);
}
/*** IThumbnailCache methods ***/
static __WIDL_INLINE HRESULT IThumbnailCache_GetThumbnail(IThumbnailCache* This,IShellItem *pShellItem,UINT cxyRequestedThumbSize,WTS_FLAGS flags,ISharedBitmap **ppvThumb,WTS_CACHEFLAGS *pOutFlags,WTS_THUMBNAILID *pThumbnailID) {
    return This->lpVtbl->GetThumbnail(This,pShellItem,cxyRequestedThumbSize,flags,ppvThumb,pOutFlags,pThumbnailID);
}
static __WIDL_INLINE HRESULT IThumbnailCache_GetThumbnailByID(IThumbnailCache* This,WTS_THUMBNAILID thumbnailID,UINT cxyRequestedThumbSize,ISharedBitmap **ppvThumb,WTS_CACHEFLAGS *pOutFlags) {
    return This->lpVtbl->GetThumbnailByID(This,thumbnailID,cxyRequestedThumbSize,ppvThumb,pOutFlags);
}
#endif
#endif

#endif

HRESULT STDMETHODCALLTYPE IThumbnailCache_RemoteGetThumbnail_Proxy(
    IThumbnailCache* This,
    IShellItem *pShellItem,
    UINT cxyRequestedThumbSize,
    WTS_FLAGS flags,
    ISharedBitmap **ppvThumb,
    WTS_CACHEFLAGS *pOutFlags,
    WTS_THUMBNAILID *pThumbnailID);
void __RPC_STUB IThumbnailCache_RemoteGetThumbnail_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IThumbnailCache_RemoteGetThumbnailByID_Proxy(
    IThumbnailCache* This,
    WTS_THUMBNAILID thumbnailID,
    UINT cxyRequestedThumbSize,
    ISharedBitmap **ppvThumb,
    WTS_CACHEFLAGS *pOutFlags);
void __RPC_STUB IThumbnailCache_RemoteGetThumbnailByID_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK IThumbnailCache_GetThumbnail_Proxy(
    IThumbnailCache* This,
    IShellItem *pShellItem,
    UINT cxyRequestedThumbSize,
    WTS_FLAGS flags,
    ISharedBitmap **ppvThumb,
    WTS_CACHEFLAGS *pOutFlags,
    WTS_THUMBNAILID *pThumbnailID);
HRESULT __RPC_STUB IThumbnailCache_GetThumbnail_Stub(
    IThumbnailCache* This,
    IShellItem *pShellItem,
    UINT cxyRequestedThumbSize,
    WTS_FLAGS flags,
    ISharedBitmap **ppvThumb,
    WTS_CACHEFLAGS *pOutFlags,
    WTS_THUMBNAILID *pThumbnailID);
HRESULT CALLBACK IThumbnailCache_GetThumbnailByID_Proxy(
    IThumbnailCache* This,
    WTS_THUMBNAILID thumbnailID,
    UINT cxyRequestedThumbSize,
    ISharedBitmap **ppvThumb,
    WTS_CACHEFLAGS *pOutFlags);
HRESULT __RPC_STUB IThumbnailCache_GetThumbnailByID_Stub(
    IThumbnailCache* This,
    WTS_THUMBNAILID thumbnailID,
    UINT cxyRequestedThumbSize,
    ISharedBitmap **ppvThumb,
    WTS_CACHEFLAGS *pOutFlags);

#endif  /* __IThumbnailCache_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IThumbnailProvider interface
 */
#ifndef __IThumbnailProvider_INTERFACE_DEFINED__
#define __IThumbnailProvider_INTERFACE_DEFINED__

DEFINE_GUID(IID_IThumbnailProvider, 0xe357fccd, 0xa995, 0x4576, 0xb0,0x1f, 0x23,0x46,0x30,0x15,0x4e,0x96);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("e357fccd-a995-4576-b01f-234630154e96")
IThumbnailProvider : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE GetThumbnail(
        UINT cx,
        HBITMAP *phbmp,
        WTS_ALPHATYPE *pdwAlpha) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IThumbnailProvider, 0xe357fccd, 0xa995, 0x4576, 0xb0,0x1f, 0x23,0x46,0x30,0x15,0x4e,0x96)
#endif
#else
typedef struct IThumbnailProviderVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IThumbnailProvider *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IThumbnailProvider *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IThumbnailProvider *This);

    /*** IThumbnailProvider methods ***/
    HRESULT (STDMETHODCALLTYPE *GetThumbnail)(
        IThumbnailProvider *This,
        UINT cx,
        HBITMAP *phbmp,
        WTS_ALPHATYPE *pdwAlpha);

    END_INTERFACE
} IThumbnailProviderVtbl;

interface IThumbnailProvider {
    CONST_VTBL IThumbnailProviderVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IThumbnailProvider_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IThumbnailProvider_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IThumbnailProvider_Release(This) (This)->lpVtbl->Release(This)
/*** IThumbnailProvider methods ***/
#define IThumbnailProvider_GetThumbnail(This,cx,phbmp,pdwAlpha) (This)->lpVtbl->GetThumbnail(This,cx,phbmp,pdwAlpha)
#else
/*** IUnknown methods ***/
static __WIDL_INLINE HRESULT IThumbnailProvider_QueryInterface(IThumbnailProvider* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static __WIDL_INLINE ULONG IThumbnailProvider_AddRef(IThumbnailProvider* This) {
    return This->lpVtbl->AddRef(This);
}
static __WIDL_INLINE ULONG IThumbnailProvider_Release(IThumbnailProvider* This) {
    return This->lpVtbl->Release(This);
}
/*** IThumbnailProvider methods ***/
static __WIDL_INLINE HRESULT IThumbnailProvider_GetThumbnail(IThumbnailProvider* This,UINT cx,HBITMAP *phbmp,WTS_ALPHATYPE *pdwAlpha) {
    return This->lpVtbl->GetThumbnail(This,cx,phbmp,pdwAlpha);
}
#endif
#endif

#endif


#endif  /* __IThumbnailProvider_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IThumbnailSettings interface
 */
#ifndef __IThumbnailSettings_INTERFACE_DEFINED__
#define __IThumbnailSettings_INTERFACE_DEFINED__

DEFINE_GUID(IID_IThumbnailSettings, 0xf4376f00, 0xbef5, 0x4d45, 0x80,0xf3, 0x1e,0x02,0x3b,0xbf,0x12,0x09);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("f4376f00-bef5-4d45-80f3-1e023bbf1209")
IThumbnailSettings : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE SetContext(
        WTS_CONTEXTFLAGS dwContext) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IThumbnailSettings, 0xf4376f00, 0xbef5, 0x4d45, 0x80,0xf3, 0x1e,0x02,0x3b,0xbf,0x12,0x09)
#endif
#else
typedef struct IThumbnailSettingsVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IThumbnailSettings *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IThumbnailSettings *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IThumbnailSettings *This);

    /*** IThumbnailSettings methods ***/
    HRESULT (STDMETHODCALLTYPE *SetContext)(
        IThumbnailSettings *This,
        WTS_CONTEXTFLAGS dwContext);

    END_INTERFACE
} IThumbnailSettingsVtbl;

interface IThumbnailSettings {
    CONST_VTBL IThumbnailSettingsVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IThumbnailSettings_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IThumbnailSettings_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IThumbnailSettings_Release(This) (This)->lpVtbl->Release(This)
/*** IThumbnailSettings methods ***/
#define IThumbnailSettings_SetContext(This,dwContext) (This)->lpVtbl->SetContext(This,dwContext)
#else
/*** IUnknown methods ***/
static __WIDL_INLINE HRESULT IThumbnailSettings_QueryInterface(IThumbnailSettings* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static __WIDL_INLINE ULONG IThumbnailSettings_AddRef(IThumbnailSettings* This) {
    return This->lpVtbl->AddRef(This);
}
static __WIDL_INLINE ULONG IThumbnailSettings_Release(IThumbnailSettings* This) {
    return This->lpVtbl->Release(This);
}
/*** IThumbnailSettings methods ***/
static __WIDL_INLINE HRESULT IThumbnailSettings_SetContext(IThumbnailSettings* This,WTS_CONTEXTFLAGS dwContext) {
    return This->lpVtbl->SetContext(This,dwContext);
}
#endif
#endif

#endif


#endif  /* __IThumbnailSettings_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IThumbnailCachePrimer interface
 */
#ifndef __IThumbnailCachePrimer_INTERFACE_DEFINED__
#define __IThumbnailCachePrimer_INTERFACE_DEFINED__

DEFINE_GUID(IID_IThumbnailCachePrimer, 0x0f03f8fe, 0x2b26, 0x46f0, 0x96,0x5a, 0x21,0x2a,0xa8,0xd6,0x6b,0x76);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("0f03f8fe-2b26-46f0-965a-212aa8d66b76")
IThumbnailCachePrimer : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE PageInThumbnail(
        IShellItem *psi,
        WTS_FLAGS wtsFlags,
        UINT cxyRequestedThumbSize) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IThumbnailCachePrimer, 0x0f03f8fe, 0x2b26, 0x46f0, 0x96,0x5a, 0x21,0x2a,0xa8,0xd6,0x6b,0x76)
#endif
#else
typedef struct IThumbnailCachePrimerVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IThumbnailCachePrimer *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IThumbnailCachePrimer *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IThumbnailCachePrimer *This);

    /*** IThumbnailCachePrimer methods ***/
    HRESULT (STDMETHODCALLTYPE *PageInThumbnail)(
        IThumbnailCachePrimer *This,
        IShellItem *psi,
        WTS_FLAGS wtsFlags,
        UINT cxyRequestedThumbSize);

    END_INTERFACE
} IThumbnailCachePrimerVtbl;

interface IThumbnailCachePrimer {
    CONST_VTBL IThumbnailCachePrimerVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IThumbnailCachePrimer_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IThumbnailCachePrimer_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IThumbnailCachePrimer_Release(This) (This)->lpVtbl->Release(This)
/*** IThumbnailCachePrimer methods ***/
#define IThumbnailCachePrimer_PageInThumbnail(This,psi,wtsFlags,cxyRequestedThumbSize) (This)->lpVtbl->PageInThumbnail(This,psi,wtsFlags,cxyRequestedThumbSize)
#else
/*** IUnknown methods ***/
static __WIDL_INLINE HRESULT IThumbnailCachePrimer_QueryInterface(IThumbnailCachePrimer* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static __WIDL_INLINE ULONG IThumbnailCachePrimer_AddRef(IThumbnailCachePrimer* This) {
    return This->lpVtbl->AddRef(This);
}
static __WIDL_INLINE ULONG IThumbnailCachePrimer_Release(IThumbnailCachePrimer* This) {
    return This->lpVtbl->Release(This);
}
/*** IThumbnailCachePrimer methods ***/
static __WIDL_INLINE HRESULT IThumbnailCachePrimer_PageInThumbnail(IThumbnailCachePrimer* This,IShellItem *psi,WTS_FLAGS wtsFlags,UINT cxyRequestedThumbSize) {
    return This->lpVtbl->PageInThumbnail(This,psi,wtsFlags,cxyRequestedThumbSize);
}
#endif
#endif

#endif


#endif  /* __IThumbnailCachePrimer_INTERFACE_DEFINED__ */

#ifndef __ThumbCacheLib_LIBRARY_DEFINED__
#define __ThumbCacheLib_LIBRARY_DEFINED__

DEFINE_GUID(LIBID_ThumbCacheLib, 0x4c857096, 0x0514, 0x4d4d, 0xab,0xd5, 0xdf,0xaa,0xa3,0xc3,0x26,0xd2);

/*****************************************************************************
 * LocalThumbnailCache coclass
 */

DEFINE_GUID(CLSID_LocalThumbnailCache, 0x50ef4544, 0xac9f, 0x4a8e, 0xb2,0x1b, 0x8a,0x26,0x18,0x0d,0xb1,0x3f);

#ifdef __cplusplus
class DECLSPEC_UUID("50ef4544-ac9f-4a8e-b21b-8a26180db13f") LocalThumbnailCache;
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(LocalThumbnailCache, 0x50ef4544, 0xac9f, 0x4a8e, 0xb2,0x1b, 0x8a,0x26,0x18,0x0d,0xb1,0x3f)
#endif
#endif

/*****************************************************************************
 * SharedBitmap coclass
 */

DEFINE_GUID(CLSID_SharedBitmap, 0x4db26476, 0x6787, 0x4046, 0xb8,0x36, 0xe8,0x41,0x2a,0x9e,0x8a,0x27);

#ifdef __cplusplus
class DECLSPEC_UUID("4db26476-6787-4046-b836-e8412a9e8a27") SharedBitmap;
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(SharedBitmap, 0x4db26476, 0x6787, 0x4046, 0xb8,0x36, 0xe8,0x41,0x2a,0x9e,0x8a,0x27)
#endif
#endif

#endif /* __ThumbCacheLib_LIBRARY_DEFINED__ */
/* Begin additional prototypes for all interfaces */

ULONG           __RPC_USER HBITMAP_UserSize     (ULONG *, ULONG, HBITMAP *);
unsigned char * __RPC_USER HBITMAP_UserMarshal  (ULONG *, unsigned char *, HBITMAP *);
unsigned char * __RPC_USER HBITMAP_UserUnmarshal(ULONG *, unsigned char *, HBITMAP *);
void            __RPC_USER HBITMAP_UserFree     (ULONG *, HBITMAP *);

/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __thumbcache_h__ */
