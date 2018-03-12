

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Mon Mar 12 16:57:04 2018
 */
/* Compiler settings for ATLProject2.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.00.0603 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __ATLProject2_i_h__
#define __ATLProject2_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __ImyCom2_FWD_DEFINED__
#define __ImyCom2_FWD_DEFINED__
typedef interface ImyCom2 ImyCom2;

#endif 	/* __ImyCom2_FWD_DEFINED__ */


#ifndef __ImyCom3_FWD_DEFINED__
#define __ImyCom3_FWD_DEFINED__
typedef interface ImyCom3 ImyCom3;

#endif 	/* __ImyCom3_FWD_DEFINED__ */


#ifndef __ImyCom4_FWD_DEFINED__
#define __ImyCom4_FWD_DEFINED__
typedef interface ImyCom4 ImyCom4;

#endif 	/* __ImyCom4_FWD_DEFINED__ */


#ifndef __myCom2_FWD_DEFINED__
#define __myCom2_FWD_DEFINED__

#ifdef __cplusplus
typedef class myCom2 myCom2;
#else
typedef struct myCom2 myCom2;
#endif /* __cplusplus */

#endif 	/* __myCom2_FWD_DEFINED__ */


#ifndef __myCom3_FWD_DEFINED__
#define __myCom3_FWD_DEFINED__

#ifdef __cplusplus
typedef class myCom3 myCom3;
#else
typedef struct myCom3 myCom3;
#endif /* __cplusplus */

#endif 	/* __myCom3_FWD_DEFINED__ */


#ifndef __myCom4_FWD_DEFINED__
#define __myCom4_FWD_DEFINED__

#ifdef __cplusplus
typedef class myCom4 myCom4;
#else
typedef struct myCom4 myCom4;
#endif /* __cplusplus */

#endif 	/* __myCom4_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "shobjidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __ImyCom2_INTERFACE_DEFINED__
#define __ImyCom2_INTERFACE_DEFINED__

/* interface ImyCom2 */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ImyCom2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6BBC63A5-72BC-4F18-B8C4-A10F201E9C31")
    ImyCom2 : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE getValue21( 
            /* [retval][out] */ LONG *t) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE getValue5( 
            /* [retval][out] */ LONG *res) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE getValue6( 
            /* [retval][out] */ LONG *res) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE getValue8( 
            LONG a,
            /* [retval][out] */ LONG *res) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE getValue9_2( 
            /* [retval][out] */ LONG *res) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ImyCom2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ImyCom2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ImyCom2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ImyCom2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ImyCom2 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ImyCom2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ImyCom2 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ImyCom2 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *getValue21 )( 
            ImyCom2 * This,
            /* [retval][out] */ LONG *t);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *getValue5 )( 
            ImyCom2 * This,
            /* [retval][out] */ LONG *res);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *getValue6 )( 
            ImyCom2 * This,
            /* [retval][out] */ LONG *res);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *getValue8 )( 
            ImyCom2 * This,
            LONG a,
            /* [retval][out] */ LONG *res);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *getValue9_2 )( 
            ImyCom2 * This,
            /* [retval][out] */ LONG *res);
        
        END_INTERFACE
    } ImyCom2Vtbl;

    interface ImyCom2
    {
        CONST_VTBL struct ImyCom2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ImyCom2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ImyCom2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ImyCom2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ImyCom2_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ImyCom2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ImyCom2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ImyCom2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ImyCom2_getValue21(This,t)	\
    ( (This)->lpVtbl -> getValue21(This,t) ) 

#define ImyCom2_getValue5(This,res)	\
    ( (This)->lpVtbl -> getValue5(This,res) ) 

#define ImyCom2_getValue6(This,res)	\
    ( (This)->lpVtbl -> getValue6(This,res) ) 

#define ImyCom2_getValue8(This,a,res)	\
    ( (This)->lpVtbl -> getValue8(This,a,res) ) 

#define ImyCom2_getValue9_2(This,res)	\
    ( (This)->lpVtbl -> getValue9_2(This,res) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ImyCom2_INTERFACE_DEFINED__ */


#ifndef __ImyCom3_INTERFACE_DEFINED__
#define __ImyCom3_INTERFACE_DEFINED__

/* interface ImyCom3 */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ImyCom3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B2BD09C8-D19D-4CFB-9124-4EA84882EA3C")
    ImyCom3 : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE getValues3_1( 
            /* [retval][out] */ LONG *res) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ImyCom3Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ImyCom3 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ImyCom3 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ImyCom3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ImyCom3 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ImyCom3 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ImyCom3 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ImyCom3 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *getValues3_1 )( 
            ImyCom3 * This,
            /* [retval][out] */ LONG *res);
        
        END_INTERFACE
    } ImyCom3Vtbl;

    interface ImyCom3
    {
        CONST_VTBL struct ImyCom3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ImyCom3_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ImyCom3_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ImyCom3_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ImyCom3_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ImyCom3_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ImyCom3_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ImyCom3_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ImyCom3_getValues3_1(This,res)	\
    ( (This)->lpVtbl -> getValues3_1(This,res) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ImyCom3_INTERFACE_DEFINED__ */


#ifndef __ImyCom4_INTERFACE_DEFINED__
#define __ImyCom4_INTERFACE_DEFINED__

/* interface ImyCom4 */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ImyCom4;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("CDF67CE5-59CA-4B21-A57A-6DCE4A0E9CD4")
    ImyCom4 : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE getValue1( 
            LONG *r) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE getValue2( 
            /* [retval][out] */ LONG *res) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE getValue3( 
            /* [retval][out] */ LONG *res) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ImyCom4Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ImyCom4 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ImyCom4 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ImyCom4 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ImyCom4 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ImyCom4 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ImyCom4 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ImyCom4 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *getValue1 )( 
            ImyCom4 * This,
            LONG *r);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *getValue2 )( 
            ImyCom4 * This,
            /* [retval][out] */ LONG *res);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *getValue3 )( 
            ImyCom4 * This,
            /* [retval][out] */ LONG *res);
        
        END_INTERFACE
    } ImyCom4Vtbl;

    interface ImyCom4
    {
        CONST_VTBL struct ImyCom4Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ImyCom4_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ImyCom4_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ImyCom4_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ImyCom4_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ImyCom4_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ImyCom4_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ImyCom4_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ImyCom4_getValue1(This,r)	\
    ( (This)->lpVtbl -> getValue1(This,r) ) 

#define ImyCom4_getValue2(This,res)	\
    ( (This)->lpVtbl -> getValue2(This,res) ) 

#define ImyCom4_getValue3(This,res)	\
    ( (This)->lpVtbl -> getValue3(This,res) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ImyCom4_INTERFACE_DEFINED__ */



#ifndef __ATLProject2Lib_LIBRARY_DEFINED__
#define __ATLProject2Lib_LIBRARY_DEFINED__

/* library ATLProject2Lib */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_ATLProject2Lib;

EXTERN_C const CLSID CLSID_myCom2;

#ifdef __cplusplus

class DECLSPEC_UUID("2A6CE2DD-2848-4374-AFF0-852C6C107DD4")
myCom2;
#endif

EXTERN_C const CLSID CLSID_myCom3;

#ifdef __cplusplus

class DECLSPEC_UUID("DACCE1DB-B824-410B-8AE0-1262BDD08961")
myCom3;
#endif

EXTERN_C const CLSID CLSID_myCom4;

#ifdef __cplusplus

class DECLSPEC_UUID("CF876E73-03F4-41DC-9439-F5048AB19404")
myCom4;
#endif
#endif /* __ATLProject2Lib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


