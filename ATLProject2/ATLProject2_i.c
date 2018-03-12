

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


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


#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, IID_ImyCom2,0x6BBC63A5,0x72BC,0x4F18,0xB8,0xC4,0xA1,0x0F,0x20,0x1E,0x9C,0x31);


MIDL_DEFINE_GUID(IID, IID_ImyCom3,0xB2BD09C8,0xD19D,0x4CFB,0x91,0x24,0x4E,0xA8,0x48,0x82,0xEA,0x3C);


MIDL_DEFINE_GUID(IID, IID_ImyCom4,0xCDF67CE5,0x59CA,0x4B21,0xA5,0x7A,0x6D,0xCE,0x4A,0x0E,0x9C,0xD4);


MIDL_DEFINE_GUID(IID, LIBID_ATLProject2Lib,0xBD93880E,0x6EFD,0x4C43,0x85,0x4D,0x2D,0x3F,0xE0,0xEE,0x0D,0xB5);


MIDL_DEFINE_GUID(CLSID, CLSID_myCom2,0x2A6CE2DD,0x2848,0x4374,0xAF,0xF0,0x85,0x2C,0x6C,0x10,0x7D,0xD4);


MIDL_DEFINE_GUID(CLSID, CLSID_myCom3,0xDACCE1DB,0xB824,0x410B,0x8A,0xE0,0x12,0x62,0xBD,0xD0,0x89,0x61);


MIDL_DEFINE_GUID(CLSID, CLSID_myCom4,0xCF876E73,0x03F4,0x41DC,0x94,0x39,0xF5,0x04,0x8A,0xB1,0x94,0x04);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



