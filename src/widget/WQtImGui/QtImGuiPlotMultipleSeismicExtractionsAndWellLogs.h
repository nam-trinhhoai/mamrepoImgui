/*
 *  Created on: 27 Sept 2022
 *      Author: l0359127
 */

#ifndef NEXTVISION_SRC_WIDGET_WQTIMGUI_PLOTMULTIPLESEISMICEXTRACTIONSANDWELLLOGS_H_
#define NEXTVISION_SRC_WIDGET_WQTIMGUI_PLOTMULTIPLESEISMICEXTRACTIONSANDWELLLOGS_H_

#include "QtImGuiCore.h"

#include "workingsetmanager.h"
#include "folderdata.h"
#include "wellhead.h"
#include "wellbore.h"
#include "seismicsurvey.h"
#include "seismic3ddataset.h"
#include "viewutils.h"
#include "affinetransformation.h"
#include "affine2dtransformation.h"

class QtImGuiPlotMultipleSeismicExtractionsAndWellLogs : public QtImGuiCore
{
public:
    QtImGuiPlotMultipleSeismicExtractionsAndWellLogs(const QString& name, int time, WorkingSetManager* manager);
	~QtImGuiPlotMultipleSeismicExtractionsAndWellLogs();

private:

	// Data manager
	WorkingSetManager* m_manager;

    // Number of depth points	
	int numPoints;	
	
	// Names of log curves		 
	std::vector<std::string> logNames;

	// Plot well logs
	void showPlot() override;

	// Long crosshair cursor
	void longCrossHairCursor();

	// Interactive helper
	int interactiveHelper(double* depth);

	typedef struct IJKPoint {
        int i;
        int j;
        int k;
    } IJKPoint;

	std::pair<bool, IJKPoint> isPointInBoundingBox(Seismic3DAbstractDataset* dataset, WellUnit wellUnit, double logKey, WellBore* wellBore);

	float logMin = 1e6;
	float logMax = 1e-6;
	float depthMin = 1e6;
	float depthMax = 1e-6;

};

#endif // NEXTVISION_SRC_WIDGET_WQTIMGUI_PLOTMULTIPLESEISMICEXTRACTIONSANDWELLLOGS_H_


