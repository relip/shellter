#ifndef _STAGEMANAGER_H_
#define _STAGEMANAGER_H_

#include "util.h"

class Login;

class StageManager 
{

private:
	int nStage;

	StageManager();
	StageManager(const StageManager& other);
	~StageManager();

	static StageManager* pSingleton;

public:
	static StageManager* getInstance() 
	{
		if (pSingleton == NULL)
		{
			pSingleton = new StageManager();
		}				
		return pSingleton;
	}
	int getStage() { return nStage; }
	void setStage(int nNewStage) { nStage = nNewStage; }

};

#endif // _STAGEMANAGER_H_
