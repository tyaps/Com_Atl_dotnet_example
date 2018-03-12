// dllmain.h : Declaration of module class.

class CATLProject2Module : public ATL::CAtlDllModuleT< CATLProject2Module >
{
public :
	DECLARE_LIBID(LIBID_ATLProject2Lib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_ATLPROJECT2, "{2A658165-B4DB-4423-BFED-F89F6FFC2B50}")
};

extern class CATLProject2Module _AtlModule;
