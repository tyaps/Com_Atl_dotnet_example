// myCom2.cpp : Implementation of CmyCom2

#include "stdafx.h"
#include "myCom2.h"


// CmyCom2



STDMETHODIMP CmyCom2::getValue21(LONG* t)
{
	// TODO: Add your implementation code here
	long tmpResult = 4 + 5; //типа, вот такой подход
	*t = tmpResult;

	return S_OK;
}





STDMETHODIMP CmyCom2::getValue4(LONG* res)
{
	// TODO: Add your implementation code here
	
	return S_OK;
}


STDMETHODIMP CmyCom2::getValue5(LONG* res)
{
	// TODO: Add your implementation code here
	long tmpResult = 6;
	*res = tmpResult;

	return S_OK;
}


STDMETHODIMP CmyCom2::getValue6(LONG* res)
{
	// TODO: Add your implementation code here

	return S_OK;
}


STDMETHODIMP CmyCom2::getValue8(LONG a, LONG* res)
{
	// TODO: Add your implementation code here
	long tmpResult = 10 + a;
	*res = tmpResult;

	return S_OK;
}


STDMETHODIMP CmyCom2::getValues9_1(LONG* a)
{
	// TODO: Add your implementation code here

	return S_OK;
}


STDMETHODIMP CmyCom2::getValue9_2(LONG* res)
{
	// TODO: Add your implementation code here

	return S_OK;
}
