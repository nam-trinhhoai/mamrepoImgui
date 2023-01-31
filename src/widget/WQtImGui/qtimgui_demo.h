#ifndef DemoMultipleWindows_H
#define DemoMultipleWindows_H

#include "QtImGuiCore.h"

#include "workingsetmanager.h"
#include "DataSelectorDialog.h"
#include "geotimegraphicsview.h"
#include "folderdata.h"
#include "wellhead.h"
#include "wellbore.h"

class DemoMultipleWindows : public QtImGuiCore
{
public:
    DemoMultipleWindows(const QString& name, int time, WorkingSetManager* manager);
	virtual ~DemoMultipleWindows();
	
private:
	// Data manager
	WorkingSetManager* m_manager;

    // Number of depth points	
	int numPoints;	
	
	// Names of log curves		 
	std::vector<std::string> logNames;

	// Plot well logs
	void showPlot() override;

};

#endif
