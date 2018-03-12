// myCom2.h : Declaration of the CmyCom2

#pragma once
#include "resource.h"       // main symbols



#include "ATLProject2_i.h"



#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;


// CmyCom2

class ATL_NO_VTABLE CmyCom2 :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CmyCom2, &CLSID_myCom2>,
	public IDispatchImpl<ImyCom2, &IID_ImyCom2, &LIBID_ATLProject2Lib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CmyCom2()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_MYCOM2)


BEGIN_COM_MAP(CmyCom2)
	COM_INTERFACE_ENTRY(ImyCom2)
	COM_INTERFACE_ENTRY(IDispatch)
END_COM_MAP()



	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct()
	{
		return S_OK;
	}

	void FinalRelease()
	{
	}

public:



	STDMETHOD(getValue21)(LONG* t);

	STDMETHOD(getValue4)(LONG* res);
	STDMETHOD(getValue5)(LONG* res);
	STDMETHOD(getValue6)(LONG* res);
	STDMETHOD(getValue8)(LONG a, LONG* res);
	STDMETHOD(getValues9_1)(LONG* a);
	STDMETHOD(getValue9_2)(LONG* res);
};

OBJECT_ENTRY_AUTO(__uuidof(myCom2), CmyCom2)
