#pragma once

// CProcess 명령 대상

class CProcess : public CObject
{
public:
	CProcess();
	virtual ~CProcess();

	int getstarInfo(CImage *pImage, int nTh = 100);
};


