set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CUDA_HOST_COMPILER ${CXX_COMPILER})
set(CUDA_NVCC_FLAGS ${NV_CUDA_ARCH_FLAGS} --std=c++11)

set(NEXTVISION_VIEWER_APP_INCLUDE ${CMAKE_CURRENT_SOURCE_DIR}/src/ 
									 ${CMAKE_CURRENT_SOURCE_DIR}/src/palette
									 ${CMAKE_CURRENT_SOURCE_DIR}/src/colortable
									
								 	 ${CMAKE_CURRENT_SOURCE_DIR}/src/graphicitems
									 ${CMAKE_CURRENT_SOURCE_DIR}/src/graphicitems/overlayitem
									 ${CMAKE_CURRENT_SOURCE_DIR}/src/graphicitems/geometryitem
									 ${CMAKE_CURRENT_SOURCE_DIR}/src/graphicitems/image
									  ${CMAKE_CURRENT_SOURCE_DIR}/src/graphicitems/tiledimage
									 
									 ${CMAKE_CURRENT_SOURCE_DIR}/src/basemap/
									 ${CMAKE_CURRENT_SOURCE_DIR}/src/basemap/data/
								
									 ${CMAKE_CURRENT_SOURCE_DIR}/src/cuda
									 
									 ${CMAKE_CURRENT_SOURCE_DIR}/src/genericeditor
									 
									 ${CMAKE_CURRENT_SOURCE_DIR}/src/GraphicEditor
									 
									 ${CMAKE_CURRENT_SOURCE_DIR}/src/process
									 ${CMAKE_CURRENT_SOURCE_DIR}/src/processrelay
									 
									 ${CMAKE_CURRENT_SOURCE_DIR}/src/datamanager
									 ${CMAKE_CURRENT_SOURCE_DIR}/src/datamanager/controler
									 ${CMAKE_CURRENT_SOURCE_DIR}/src/datamanager/model
									 
									 ${CMAKE_CURRENT_SOURCE_DIR}/src/bnni
									 ${CMAKE_CURRENT_SOURCE_DIR}/src/bnni/models
									 ${CMAKE_CURRENT_SOURCE_DIR}/src/bnni/parallelization/
									 
									 ${CMAKE_CURRENT_SOURCE_DIR}/src/informationmanager
									 ${CMAKE_CURRENT_SOURCE_DIR}/src/informationmanager/nurbs
									 ${CMAKE_CURRENT_SOURCE_DIR}/src/informationmanager/picks
									 ${CMAKE_CURRENT_SOURCE_DIR}/src/informationmanager/trainingsets
									 ${CMAKE_CURRENT_SOURCE_DIR}/src/informationmanager/videos
									 ${CMAKE_CURRENT_SOURCE_DIR}/src/informationmanager/wells
									 ${CMAKE_CURRENT_SOURCE_DIR}/src/informationmanager/horizonanim

									 ${CMAKE_CURRENT_SOURCE_DIR}/src/informationmanager/seismic
									 ${CMAKE_CURRENT_SOURCE_DIR}/src/informationmanager/nextvisionhorizon
									 ${CMAKE_CURRENT_SOURCE_DIR}/src/informationmanager/isohorizon
									 ${CMAKE_CURRENT_SOURCE_DIR}/src/informationmanager/horizonanim
									 ${CMAKE_CURRENT_SOURCE_DIR}/src/informationmanager/log

									 ${CMAKE_CURRENT_SOURCE_DIR}/src/sea

									 ${CMAKE_CURRENT_SOURCE_DIR}/src/units

									 ${CMAKE_CURRENT_SOURCE_DIR}/src/slicer/
									 ${CMAKE_CURRENT_SOURCE_DIR}/src/slicer/view
									 ${CMAKE_CURRENT_SOURCE_DIR}/src/slicer/treeview
									 ${CMAKE_CURRENT_SOURCE_DIR}/src/slicer/graphicitemsrgt
									 ${CMAKE_CURRENT_SOURCE_DIR}/src/slicer/graphicsview	
									 ${CMAKE_CURRENT_SOURCE_DIR}/src/slicer/graphicsrep	
									 ${CMAKE_CURRENT_SOURCE_DIR}/src/slicer/pickingtask	
									 ${CMAKE_CURRENT_SOURCE_DIR}/src/slicer/graphicsrep/stratislice/
									 ${CMAKE_CURRENT_SOURCE_DIR}/src/slicer/graphicsrep/stratislice/rgb/
									 ${CMAKE_CURRENT_SOURCE_DIR}/src/slicer/graphicsrep/stratislice/amplitude/
									 ${CMAKE_CURRENT_SOURCE_DIR}/src/slicer/graphicsrep/stratislice/frequency/
									 ${CMAKE_CURRENT_SOURCE_DIR}/src/slicer/graphicsrep/stratislice/slice/	
									 ${CMAKE_CURRENT_SOURCE_DIR}/src/slicer/graphicsrep/slice
									 ${CMAKE_CURRENT_SOURCE_DIR}/src/slicer/graphicsrep/random
									 ${CMAKE_CURRENT_SOURCE_DIR}/src/slicer/graphicsrep/seismicsurvey
									 ${CMAKE_CURRENT_SOURCE_DIR}/src/slicer/graphicsrep/dataset
									 ${CMAKE_CURRENT_SOURCE_DIR}/src/slicer/graphicsrep/rgbdataset
									 ${CMAKE_CURRENT_SOURCE_DIR}/src/slicer/graphicsrep/multiseedhorizon
									 ${CMAKE_CURRENT_SOURCE_DIR}/src/slicer/graphicsrep/multiseedrgt
									 ${CMAKE_CURRENT_SOURCE_DIR}/src/slicer/graphicsrep/layerrgt
									 ${CMAKE_CURRENT_SOURCE_DIR}/src/slicer/graphicsrep/layerrgt/rgb
									 ${CMAKE_CURRENT_SOURCE_DIR}/src/slicer/graphicsrep/layerrgt/stack
									 ${CMAKE_CURRENT_SOURCE_DIR}/src/slicer/graphicsrep/fixedlayer
									 ${CMAKE_CURRENT_SOURCE_DIR}/src/slicer/graphicsrep/fixedlayer/cube
									 ${CMAKE_CURRENT_SOURCE_DIR}/src/slicer/graphicsrep/well
									 ${CMAKE_CURRENT_SOURCE_DIR}/src/slicer/graphicsrep/well/wellbore
									 ${CMAKE_CURRENT_SOURCE_DIR}/src/slicer/graphicsrep/well/wellhead
									 ${CMAKE_CURRENT_SOURCE_DIR}/src/slicer/graphicsrep/well/wellpick
									 ${CMAKE_CURRENT_SOURCE_DIR}/src/slicer/graphicsrep/nurbs
									 ${CMAKE_CURRENT_SOURCE_DIR}/src/slicer/graphicsrep/random3d
									 ${CMAKE_CURRENT_SOURCE_DIR}/src/slicer/graphicsrep/folderdata
									 ${CMAKE_CURRENT_SOURCE_DIR}/src/slicer/graphicsrep/videolayer
									 ${CMAKE_CURRENT_SOURCE_DIR}/src/slicer/graphicsrep/graphiceditor
									 ${CMAKE_CURRENT_SOURCE_DIR}/src/slicer/graphicsrep/computationoperatordataset
									 ${CMAKE_CURRENT_SOURCE_DIR}/src/slicer/texture/
									 ${CMAKE_CURRENT_SOURCE_DIR}/src/slicer/data/
									 ${CMAKE_CURRENT_SOURCE_DIR}/src/slicer/data/cache/	
									 ${CMAKE_CURRENT_SOURCE_DIR}/src/slicer/data/dataset/
									 ${CMAKE_CURRENT_SOURCE_DIR}/src/slicer/data/stratislice/
									 ${CMAKE_CURRENT_SOURCE_DIR}/src/slicer/data/stratislicergb/
									 ${CMAKE_CURRENT_SOURCE_DIR}/src/slicer/data/layerslice/
									 ${CMAKE_CURRENT_SOURCE_DIR}/src/slicer/data/sismage/
									 ${CMAKE_CURRENT_SOURCE_DIR}/src/slicer/data/multiseedhorizon/
									 ${CMAKE_CURRENT_SOURCE_DIR}/src/slicer/data/multiseedrgt/
									 ${CMAKE_CURRENT_SOURCE_DIR}/src/slicer/data/fixedlayer/
									 ${CMAKE_CURRENT_SOURCE_DIR}/src/slicer/data/ijkhorizon/
									 ${CMAKE_CURRENT_SOURCE_DIR}/src/slicer/data/freehorizon/
									 ${CMAKE_CURRENT_SOURCE_DIR}/src/slicer/data/freehorizon/fixedlayer
									 ${CMAKE_CURRENT_SOURCE_DIR}/src/slicer/data/freehorizon/fixedlayer/freehorizon
									 ${CMAKE_CURRENT_SOURCE_DIR}/src/slicer/data/well/
									 ${CMAKE_CURRENT_SOURCE_DIR}/src/slicer/data/nurbs/
 									 ${CMAKE_CURRENT_SOURCE_DIR}/src/slicer/data/random/
									 ${CMAKE_CURRENT_SOURCE_DIR}/src/slicer/dialog/
									 ${CMAKE_CURRENT_SOURCE_DIR}/src/slicer/workingset
									 ${CMAKE_CURRENT_SOURCE_DIR}/src/slicer/view3d
									  ${CMAKE_CURRENT_SOURCE_DIR}/src/slicer/multiview
									 ${CMAKE_CURRENT_SOURCE_DIR}/src/widget/
									 ${CMAKE_CURRENT_SOURCE_DIR}/src/widget/WGeotime
									 ${CMAKE_CURRENT_SOURCE_DIR}/src/widget/WGeotime/wspectrum
									 ${CMAKE_CURRENT_SOURCE_DIR}/src/widget/WGeotime/wvideocreate
									 ${CMAKE_CURRENT_SOURCE_DIR}/src/widget/WGeotime/geotimeConfiguration
									 ${CMAKE_CURRENT_SOURCE_DIR}/src/widget/WGeotime/freeHorizonWidget
									 ${CMAKE_CURRENT_SOURCE_DIR}/src/widget/WGeotime/widgetutil
									 ${CMAKE_CURRENT_SOURCE_DIR}/src/widget/datamanager
									 ${CMAKE_CURRENT_SOURCE_DIR}/src/widget/bnni
									 ${CMAKE_CURRENT_SOURCE_DIR}/src/slicer/innerview/
									 ${CMAKE_CURRENT_SOURCE_DIR}/src/slicer/utils/
									 ${CMAKE_CURRENT_SOURCE_DIR}/src/slicer/nurbs/
									 )

set(NEXTVISION_VIEWER_APP_SRC
	 src/cuda/cuda_common_helpers.cpp

	src/NextMainWindow.cpp
	
	src/colortable/qhistogram.cpp
	src/colortable/lookuptable.cpp
	src/colortable/colortable.cpp
	src/colortable/colortableregistry.cpp
	src/colortable/colortablechooser.cpp
	src/colortable/colortableselector.cpp
	
	src/colortable/linearfct.cpp
	src/colortable/binlinearfct.cpp
	src/colortable/binfct.cpp
	src/colortable/logfct.cpp
	src/colortable/triangle1fct.cpp
	src/colortable/triangle2fct.cpp
	src/colortable/abstractfct.cpp
	
	src/datamanager/model/deleteableleaf.cpp
	src/datamanager/model/leafcontainer.cpp
	src/datamanager/model/leafcontaineraggregator.cpp
	src/datamanager/controler/filestoragecontroler.cpp
	src/datamanager/util_filesystem.cpp
	
	src/bnni/bnnitrainingset.cpp
	src/bnni/bnnimainwindow.cpp
	src/bnni/MuratCanvas2dLogView.cpp
	src/bnni/MuratCanvas2dVerticalView.cpp
	src/bnni/MuratCanvas2dView.cpp
	src/bnni/MuratCanvas2dScene.cpp
	src/bnni/rectanglemovable.cpp
	src/bnni/wellviewer.cpp
	src/bnni/Canvas2dVerticalSync.cpp
	src/bnni/logstats.cpp
	src/bnni/cutline.cpp
	src/bnni/Canvas2dFullSync.cpp
	src/bnni/MuratCanvas2dFullView.cpp
	src/bnni/iterationlistwidgetitem.cpp
	src/bnni/surveyselectiondialog.cpp
	src/bnni/paletteholder.cpp
	src/bnni/wellpolylinemanager.cpp
	src/bnni/computelogdialog.cpp
	src/bnni/algorithm.cpp
	src/bnni/bnnijsondecoder.cpp
	src/bnni/configreader.cpp
	src/bnni/xgboostgeneticparams.cpp
	src/bnni/densegeneticparams.cpp
	src/bnni/bnniubjsondecoder.cpp
	src/bnni/models/baseparametersmodel.cpp
	src/bnni/models/bnniconfig.cpp
	src/bnni/models/denseparametersmodel.cpp
	src/bnni/models/networkparametersmodel.cpp
	src/bnni/models/treeparametersmodel.cpp
	src/bnni/parallelization/computerresources.cpp
	src/bnni/parallelization/sshfingerprint.cpp
	src/bnni/parallelization/sshhostkey.cpp
	src/bnni/parallelization/listselectiondialog.cpp
	src/bnni/parallelization/kerberosauthentification.cpp
	
	src/informationmanager/iinformation.cpp
	src/informationmanager/iinformationaggregator.cpp
	src/informationmanager/iinformationpropertywidget.cpp
	src/informationmanager/informationpropertywidgetfactory.cpp
	src/informationmanager/iinformationpanelwidget.cpp
	src/informationmanager/propertyfiltersparser.cpp
	src/informationmanager/nurbs/nurbinformation.cpp
	src/informationmanager/nurbs/nurbinformationaggregator.cpp
	src/informationmanager/nurbs/nurbinformationiterator.cpp
	src/informationmanager/nurbs/nurbinformationmetadatawidget.cpp
	src/informationmanager/nurbs/nurbinformationpanelwidget.cpp
	src/informationmanager/picks/pickinformation.cpp
	src/informationmanager/picks/pickinformationaggregator.cpp
	src/informationmanager/picks/pickinformationiterator.cpp
	src/informationmanager/picks/pickinformationpanelwidget.cpp
	src/informationmanager/trainingsets/trainingsetinformation.cpp
	src/informationmanager/trainingsets/trainingsetinformationaggregator.cpp
	src/informationmanager/trainingsets/trainingsetinformationiterator.cpp
	src/informationmanager/trainingsets/trainingsetinformationpanelwidget.cpp
	src/informationmanager/trainingsets/trainingsetmanagerwrapper.cpp
	src/informationmanager/videos/videoinformation.cpp
	src/informationmanager/videos/videoinformationaggregator.cpp
	src/informationmanager/videos/videoinformationiterator.cpp
	src/informationmanager/videos/videoinformationpanelwidget.cpp
	src/informationmanager/videos/videomanagerwrapper.cpp
	src/informationmanager/wells/wellinformation.cpp
	src/informationmanager/wells/wellinformationaggregator.cpp
	src/informationmanager/wells/wellinformationiterator.cpp
	src/informationmanager/wells/wellinformationpanelwidget.cpp
	
	src/informationmanager/seismic/seismicinformationaggregator.cpp
	src/informationmanager/seismic/seismicinformation.cpp
	src/informationmanager/seismic/seismicinformationiterator.cpp
	src/informationmanager/seismic/seismicinformationmetadatawidget.cpp
	src/informationmanager/seismic/seismicinformationpanelwidget.cpp
	
	src/informationmanager/nextvisionhorizon/nextvisionhorizoninformationaggregator.cpp
	src/informationmanager/nextvisionhorizon/nextvisionhorizoninformation.cpp
	src/informationmanager/nextvisionhorizon/nextvisionhorizoninformationiterator.cpp
	src/informationmanager/nextvisionhorizon/nextvisionhorizoninformationmetadatawidget.cpp
	src/informationmanager/nextvisionhorizon/nextvisionhorizoninformationpanelwidget.cpp
	src/informationmanager/nextvisionhorizon/nextvisionhorizonattributinfo.cpp
	
	src/informationmanager/isohorizon/isohorizoninformationaggregator.cpp
	src/informationmanager/isohorizon/isohorizoninformation.cpp
	src/informationmanager/isohorizon/isohorizoninformationiterator.cpp
	src/informationmanager/isohorizon/isohorizoninformationmetadatawidget.cpp
	src/informationmanager/isohorizon/isohorizoninformationpanelwidget.cpp	
	src/informationmanager/isohorizon/isohorizonattributinfo.cpp
		
	src/informationmanager/horizonanim/horizonaniminformation.cpp
	src/informationmanager/horizonanim/horizonanimaggregator.cpp
	src/informationmanager/horizonanim/horizonanimiterator.cpp
	src/informationmanager/horizonanim/horizonanimmetadatawidget.cpp
	src/informationmanager/horizonanim/horizonanimpanelwidget.cpp
	
	src/informationmanager/log/loginformationaggregator.cpp
	src/informationmanager/log/loginformation.cpp
	src/informationmanager/log/loginformationiterator.cpp
	
	

	src/sea/servermanager.cpp
	src/sea/seamodules.cpp
	src/sea/seaserver.cpp
	src/sea/seatranslationserver.cpp
	src/sea/seaseismicserver.cpp
	src/sea/seainterpretationserver.cpp

	src/units/mtlengthunit.cpp
	src/units/qmlenumwrappers.cpp

	src/palette/lutrenderutil.cpp
	src/palette/luteditdialog.cpp
	src/palette/lutwidget.cpp
	src/palette/histogramwidget.cpp
	src/palette/palettewidget.cpp	
	src/palette/ipaletteholder.cpp
	src/palette/rgbpalettewidget.cpp
	src/palette/rangehistogramwidget.cpp
	src/palette/imageformats.cpp

	#src/widget/GeotimeProjectManagerWidget.cpp
	src/widget/WGeotime/FileConvertionXTCWT.cpp
	src/widget/WGeotime/GeotimeConfiguratorExpertWidget.cpp
	src/widget/WGeotime/GeotimeConfiguratorWidget.cpp
	src/widget/WGeotime/rgtPatchExpertWidget.cpp
	# src/widget/WGeotime/RgtPatchManagerWidget.cpp
	src/widget/WGeotime/GeotimeProjectManagerWidget.cpp
	src/widget/WGeotime/GeotimeSystemInfo.cpp
	src/widget/WGeotime/GradientMultiscaleWidget.cpp
	src/widget/WGeotime/DipSmoothingWidget.cpp
	src/widget/WGeotime/dipFilterWidget.cpp
	# src/widget/WGeotime/ProjectManagerDatabaseUpdate.cpp
	src/widget/WGeotime/ProjectManager.cpp
	# src/widget/WGeotime/projectmanagerwidget.cpp
	# src/widget/WGeotime/geotimedebugwidget.cpp
	src/widget/WGeotime/SpectrumComputeWidget.cpp
	src/widget/WGeotime/ProjectManagerWidget.cpp
	src/widget/WGeotime/SurveyManager.cpp
	src/widget/WGeotime/ProjectManagerNames.cpp
	src/widget/WGeotime/SeismicManager.cpp
	src/widget/WGeotime/HorizonManager.cpp
	src/widget/WGeotime/CulturalsManager.cpp
	src/widget/WGeotime/WellsManager.cpp
	src/widget/WGeotime/WellsHeadManager.cpp
	src/widget/WGeotime/WellsLogManager.cpp
	src/widget/WGeotime/WellsPicksManager.cpp
	src/widget/WGeotime/WellsTF2PManager.cpp
	src/widget/WGeotime/ObjectManager.cpp
	src/widget/WGeotime/picksManager.cpp	
	src/widget/WGeotime/WellUtil.cpp
	src/widget/WGeotime/RgbRawManager.cpp
	src/widget/WGeotime/DebugWidget.cpp
	src/widget/WGeotime/OpenFileWidget.cpp
	src/widget/WGeotime/wspectrum/MeanSeismicSpectrumWidget.cpp
	src/widget/WGeotime/sampleLimitsChooser.cpp
	# src/widget/WGeotime/RgtPatchManagerWidget.cpp
	src/widget/WGeotime/faultDetectionWidget.cpp
	src/widget/WGeotime/rgtToGCC16Widget.cpp
	src/widget/WGeotime/rgb2ToXtWidget.cpp
	# src/widget/WGeotime/RgtPatchManagerWidget.cpp
	src/widget/WGeotime/seismicDatabaseManager.cpp
	src/widget/WGeotime/wellsDatabaseManager.cpp
	src/widget/WGeotime/nvhorizonconvertion.cpp
	src/widget/WGeotime/geotimeConfiguration/fileSelectWidget.cpp
	src/widget/WGeotime/geotimeConfiguration/labelLineEditWidget.cpp
	src/widget/WGeotime/geotimeConfiguration/horizonSelectWidget.cpp
	src/widget/WGeotime/geotimeConfiguration/orientationWidget.cpp	
	src/widget/WGeotime/geotimeConfiguration/rgtStackingWidget.cpp
	src/widget/WGeotime/geotimeConfiguration/rgtAndPatchWidget.cpp	
	src/widget/WGeotime/geotimeConfiguration/rgtComputeConfigurationWidget.cpp
	src/widget/WGeotime/geotimeConfiguration/rgtVolumicGraphicOut.cpp
	src/widget/WGeotime/geotimeConfiguration/fileSelectorDialog.cpp
	src/widget/WGeotime/geotimeConfiguration/checkDataSizeMatch.cpp
	src/widget/WGeotime/geotimeConfiguration/QFileUtils.cpp
	src/widget/WGeotime/geotimeConfiguration/horizonUtils.cpp
	src/widget/WGeotime/geotimeConfiguration/fileInformationWidget.cpp
	src/widget/WGeotime/geotimeConfiguration/rgtVolumicVolumeComputationOperator.cpp
	src/widget/WGeotime/geotimeConfiguration/rgtStackingComputationOperator.cpp
	src/widget/WGeotime/geotimeConfiguration/patchWidget.cpp
	src/widget/WGeotime/geotimeConfiguration/rgtPatchWidget.cpp
	src/widget/WGeotime/geotimeConfiguration/patchParametersWidget.cpp
	src/widget/WGeotime/geotimeConfiguration/rgtPatchParametersWidget.cpp	
	src/widget/WGeotime/geotimeConfiguration/orientationParametersWidget.cpp
	src/widget/WGeotime/geotimeConfiguration/rgtStackingParametersWidget.cpp	
	src/widget/WGeotime/geotimeConfiguration/managerFileSelectorWidget.cpp
	src/widget/WGeotime/wspectrum/spectrumProcessWidget.cpp
	src/widget/WGeotime/wspectrum/rgtToRgb16bitsWidget.cpp
	src/widget/WGeotime/wspectrum/rgtToSeismicMeanWidget.cpp
	src/widget/WGeotime/wspectrum/rgtToGccWidget.cpp
	src/widget/WGeotime/wspectrum/attributToXtWidget.cpp
	src/widget/WGeotime/wspectrum/rawToAviWidget.cpp
	src/widget/WGeotime/wspectrum/aviViewWidget.cpp
	src/widget/WGeotime/wspectrum/rgb16ToRgb8Widget.cpp
	src/widget/WGeotime/wspectrum/spectrumHorizonUtil.cpp
	src/widget/WGeotime/freeHorizonWidget/horizonAttributComputeDialog.cpp
	src/widget/WGeotime/freeHorizonWidget/horizonAttributSpectrumParam.cpp
	src/widget/WGeotime/freeHorizonWidget/horizonAttributMeanParam.cpp
	src/widget/WGeotime/freeHorizonWidget/horizonAttributGCCParam.cpp
	src/widget/WGeotime/widgetutil/freeHorizonQManager.cpp	
	src/widget/WGeotime/widgetutil/isoHorizonQManager.cpp
	src/widget/WGeotime/widgetutil/dataFileCreationInfo.cpp
	src/widget/WGeotime/freeHorizonWidget/gccOnSpectrumAttributWidget.cpp
	
	src/widget/WGeotime/wvideocreate/videocreatewidget.cpp
	src/widget/WGeotime/wvideocreate/aviParamWidget.cpp
	
		
	src/widget/datamanager/datamanager.cpp
	src/widget/datamanager/fileinformationtablewidget.cpp
	src/widget/datamanager/filedeletiontablewidget.cpp
	src/widget/datamanager/trashtablewidget.cpp
	src/widget/bnni/trainingsetparameterwidget.cpp
	src/widget/bnni/bnnilauncher.cpp
	src/widget/bnni/collapsablescrollarea.cpp
	src/widget/bnni/networkparameterform.cpp
	src/widget/bnni/denseparameterform.cpp
	src/widget/bnni/treeparameterform.cpp
	src/widget/bnni/generalizationsectionwidget.cpp
	src/widget/bnni/resourcesselectorwidget.cpp
	src/widget/bnni/predictionwidget.cpp
	src/widget/bnni/geneticalgorithmlauncher.cpp
	src/widget/bnni/xgboostgeneticparamswidget.cpp
	src/widget/bnni/densegeneticparamswidget.cpp

	src/widget/WQtImGui/ImGuiRenderer.cpp
	src/widget/WQtImGui/QtImGui.cpp
	src/widget/WQtImGui/PetropyWidget.cpp

	src/widget/WPetrophysics/PlotWellLog.cpp
	src/widget/WPetrophysics/CrossPlotWellLogs.cpp
	src/widget/WPetrophysics/CrossPlotRegression.cpp	
	src/widget/WPetrophysics/CrossPlotSplineRegression.cpp	
	src/widget/WPetrophysics/CrossPlotPowerRegression.cpp
	src/widget/WPetrophysics/PointsSelectionDragRect.cpp
	src/widget/WPetrophysics/PointsSelectionMultipleDragRect.cpp
	src/widget/WPetrophysics/MultipleIntervalsCrossPlot.cpp
	src/widget/WPetrophysics/MultipleIntervalsCrossPlotRegression.cpp
	src/widget/WPetrophysics/MultipleIntervalsCrossPlotDragRect.cpp
	src/widget/WPetrophysics/PlotSingleWellLog.cpp
	src/widget/WPetrophysics/SelectLogInterval.cpp
	src/widget/WPetrophysics/SelectMultipleIntervals.cpp
	src/widget/WPetrophysics/HistogramPlotWellLog.cpp
	src/widget/WPetrophysics/PlotHistogramCurve.cpp
	src/widget/WPetrophysics/CrossPlotWellLogsWithHistogram.cpp
	src/widget/WPetrophysics/MultipleIntervalsCrossPlotWithHistogram.cpp
	src/widget/WPetrophysics/MultipleIntervalsCrossPlotWithHistogramRegression.cpp
	src/widget/WPetrophysics/PlotMultipleWellLogs.cpp
	src/widget/WPetrophysics/PlotMultipleWellBores.cpp
	src/widget/WPetrophysics/PlotWellLogShaded.cpp
	src/widget/WPetrophysics/PlotWellLogInteractive.cpp
	src/widget/WPetrophysics/InteractiveHistogram.cpp
	src/widget/WPetrophysics/InteractiveCrossPlot.cpp
	src/widget/WPetrophysics/InteractiveCrossPlotWithHistogram.cpp
	src/widget/WPetrophysics/InteractiveMultipleWindows.cpp	


	src/widget/managerwidget.cpp
	
	src/widget/processwatcherwidget.cpp
	src/widget/editingspinbox.cpp
	src/widget/itemlistselectorwithcolor.cpp
	src/widget/computereflectivitywidget.cpp
	src/widget/importsismagehorizonwidget.cpp
	src/widget/importsismagehorizonwithworkingsetwidget.cpp
	src/widget/importsismagehorizondialog.cpp
	src/widget/nvlineedit.cpp
	src/widget/nvtreewidget.cpp
	src/widget/managerwidget.cpp
		
	
	src/genericeditor/GeRectangle.cpp
	src/genericeditor/GeEllipse.cpp
	src/genericeditor/GePolygon.cpp
	src/genericeditor/GePolyLine.cpp
	src/genericeditor/dotsignal.cpp
	src/genericeditor/GeGlobalParameters.cpp
	src/genericeditor/GeShape.cpp
	src/genericeditor/GraphicsPointerExt.cpp
	src/genericeditor/GeRectanglePicking.cpp
	
	src/GraphicEditor/PointCtrl.cpp
	src/GraphicEditor/GraphicToolsWidget.cpp
	src/GraphicEditor/GraphicSceneEditor.cpp
	src/GraphicEditor/GraphEditor_GrabberItem.cpp
	src/GraphicEditor/GraphEditor_RectShape.cpp
	src/GraphicEditor/GraphEditor_EllipseShape.cpp
	src/GraphicEditor/GraphEditor_PolyLineShape.cpp
	src/GraphicEditor/GraphEditor_PolygonShape.cpp
	src/GraphicEditor/GraphEditor_Path.cpp
	src/GraphicEditor/GraphEditor_TextItem.cpp
	src/GraphicEditor/GraphEditor_CurveShape.cpp
	src/GraphicEditor/GraphEditor_LineShape.cpp
	src/GraphicEditor/bezierinterpolator.cpp
	src/GraphicEditor/GraphEditor_RegularBezierPath.cpp
	src/GraphicEditor/GraphEditor_ListBezierPath.cpp
	src/GraphicEditor/GraphEditor_CrossItem.cpp
	src/GraphicEditor/GraphEditor_MultiPolyLineShape.cpp
	src/GraphicEditor/undosystem.cpp
	
	src/process/LayerSpectrumProcess.cpp
	src/process/LayerProcess.cpp
	src/process/SeismicPropagator.cpp
	src/process/RgtLayerProcessUtil.cpp
	src/process/GradientMultiScaleProcess.cpp
	src/process/AttributProcess.cpp
	src/process/KohonenProcess.cpp
	src/process/KohonenEngine.cpp
	src/process/KohonenLayerProcess.cpp
	src/process/KohonenOnMultispectralImages.cpp
	src/process/BNNIJsonGenerator.cpp
	src/process/AnisotropyProcess.cpp
	src/process/PatchCompositionProcess.cpp
	src/process/SectionToVideo.cpp

	src/processrelay/processrelay.cpp
	src/processrelay/computationdatasetrelayconnectioncloser.cpp

	src/slicer/data/idata.cpp
	src/slicer/data/stackabledata.cpp
	src/slicer/data/grid2d.cpp
	
	src/slicer/data/dataset/seismic3dcudadataset.cpp
	src/slicer/data/dataset/seismic3dabstractdataset.cpp
	src/slicer/data/dataset/seismic3ddataset.cpp
	src/slicer/data/dataset/seismic3ddatasetgrahicrepfactory.cpp
	src/slicer/data/dataset/cudadatasetminmaxtile.cpp
	src/slicer/data/dataset/datasetbloctile.cpp
	src/slicer/data/dataset/rgbdataset.cpp
	src/slicer/data/dataset/rgbdatasetgraphicrepfactory.cpp
	
	src/slicer/data/cache/datasetbloccache.cpp
	src/slicer/data/cache/datasethashkey.cpp
	
	src/slicer/data/seismicsurvey.cpp
	src/slicer/data/randomTransformation.cpp
	src/slicer/data/affine2dtransformation.cpp
	src/slicer/data/affinetransformation.cpp
	src/slicer/data/seismicsurveygrahicrepfactory.cpp
	
	src/slicer/data/videolayer.cpp
	src/slicer/data/videolayergraphicrepfactory.cpp
	
	src/slicer/data/stratislice/stratislice.cpp
	src/slicer/data/stratislice/stratislicegrahicrepfactory.cpp
	src/slicer/data/stratislice/cudargttile.cpp
	src/slicer/data/layerslice/LayerSlice.cpp
	src/slicer/data/layerslice/layerslicegrahicrepfactory.cpp
	src/slicer/data/layerslice/rgblayerslice.cpp
	src/slicer/data/layerslice/rgblayerslicegraphicrepfactory.cpp
	
	src/slicer/data/stratislice/cudargbtile.cpp
	src/slicer/data/stratislice/cudafrequencytile.cpp
	src/slicer/data/stratislice/abstractstratisliceattribute.cpp
	src/slicer/data/stratislice/amplitudestratisliceattribute.cpp
	src/slicer/data/stratislice/frequencystratisliceattribute.cpp
	src/slicer/data/stratislice/rgbstratisliceattribute.cpp
	src/slicer/data/stratislice/stratislicergbattributegraphicrepfactory.cpp
	src/slicer/data/stratislice/stratisliceamplitudeattributegraphicrepfactory.cpp
	src/slicer/data/stratislice/stratislicefrequencyattributegraphicrepfactory.cpp
	
	src/slicer/data/fixedlayer/fixedlayerfromdataset.cpp
	src/slicer/data/fixedlayer/fixedlayerfromdatasetgraphicrepfactory.cpp
	src/slicer/data/fixedlayer/fixedrgblayersfromdataset.cpp
	src/slicer/data/fixedlayer/fixedrgblayersfromdatasetgraphicrepfactory.cpp
	src/slicer/data/fixedlayer/fixedrgblayersfromdatasetandcube.cpp
	src/slicer/data/fixedlayer/fixedrgblayersfromdatasetandcubeimplmulti.cpp
	src/slicer/data/fixedlayer/fixedrgblayersfromdatasetandcubeimplmono.cpp
	src/slicer/data/fixedlayer/fixedrgblayersfromdatasetandcubeimpldirectories.cpp
	src/slicer/data/fixedlayer/fixedattributimplfromdirectories.cpp
	src/slicer/data/fixedlayer/fixedattributimplfreehorizonfromdirectories.cpp	
	src/slicer/data/fixedlayer/fixedrgblayersfromdatasetandcubegraphicrepfactory.cpp
	src/slicer/data/fixedlayer/rgblayerfromdataset.cpp
	src/slicer/data/fixedlayer/rgblayerfromdatasetgraphicrepfactory.cpp
	src/slicer/data/fixedlayer/fixedlayersfromdatasetandcube.cpp
	src/slicer/data/fixedlayer/fixedlayersfromdatasetandcubegraphicrepfactory.cpp
	src/slicer/data/fixedlayer/freehorizonUtil.cpp

	src/slicer/data/sismage/smdataset3D.cpp
	src/slicer/data/sismage/smsurvey3D.cpp
	src/slicer/data/sismage/sismagedbmanager.cpp
	src/slicer/data/sismage/layerings.cpp
	src/slicer/data/sismage/layering.cpp
	src/slicer/data/sismage/layer.cpp
	src/slicer/data/sismage/layerproperty.cpp
	src/slicer/data/sismage/cultural.cpp
	src/slicer/data/sismage/culturals.cpp
	src/slicer/data/sismage/culturalcategory.cpp
	src/slicer/data/sismage/isochron.cpp
	src/slicer/data/sismage/isochronattribut.cpp
	src/slicer/data/sismage/nextvisiondbmanager.cpp
	src/slicer/data/sismage/nvhorizontransformgenerator.cpp
	
	src/slicer/data/multiseedhorizon/multiseedhorizon.cpp
	src/slicer/data/multiseedhorizon/multiseedhorizongraphicrepfactory.cpp
	
	src/slicer/data/multiseedrgt/multiseedrgt.cpp
	src/slicer/data/multiseedrgt/multiseedrgtgraphicrepfactory.cpp

	src/slicer/nurbs/curvemodel.h
	src/slicer/nurbs/curvecontroller.cpp
	src/slicer/nurbs/curvelistener.cpp
	src/slicer/nurbs/helperqt3d.cpp
	src/slicer/nurbs/manager.cpp
	src/slicer/nurbs/meshgeometry.cpp
	src/slicer/nurbs/nurbsentity.cpp
	src/slicer/nurbs/pointslinesgeometry.cpp
	src/slicer/nurbs/splinemath.cpp
	src/slicer/nurbs/nurbsmanager.cpp
	src/slicer/nurbs/nurbsclone.cpp

	src/slicer/data/ijkhorizon/ijkhorizon.cpp
	src/slicer/data/ijkhorizon/ijkhorizongraphicrepfactory.cpp
	
	src/slicer/data/freehorizon/freehorizon.cpp
	src/slicer/data/freehorizon/freehorizongraphicrepfactory.cpp
	src/slicer/data/freehorizon/freehorizonattribut.cpp
	src/slicer/data/freehorizon/freehorizonattributreponslice.cpp
	src/slicer/data/freehorizon/freehorizongraphicrepfactory.cpp
	src/slicer/data/freehorizon/freehorizonrep.cpp
	src/slicer/data/freehorizon/freehorizonattributrepfactory.cpp
	src/slicer/data/freehorizon/freehorizonattributlayer.cpp
	src/slicer/data/freehorizon/freehorizonattributlayer.cpp
	# src/slicer/data/freehorizon/freehorizonattributlayeronslice.cpp
	# src/slicer/data/freehorizon/freehorizonlayersonslice.cpp
	src/slicer/data/freehorizon/freehorizonattributlayeronslice.cpp
	src/slicer/data/freehorizon/freehorizonproppanel.cpp
	src/slicer/data/freehorizon/fixedlayer/fixedlayerimplisohorizonfromdatasetandcube.cpp
	
	src/slicer/data/freehorizon/fixedlayer/fixedlayerimplfreehorizonfromdataset.cpp
	# src/slicer/data/freehorizon/fixedlayer/rgblayerimplfreehorizonslice.cpp
	# src/slicer/data/freehorizon/fixedlayer/rgblayerfreehorizongraphicrepfactory.cpp
	# src/slicer/data/freehorizon/fixedlayer/rgblayerfreehorizonrep.cpp
	src/slicer/data/freehorizon/fixedlayer/freehorizon/FixedRGBLayersFromDatasetAndCube3FreqPropPanel.cpp
	src/slicer/data/freehorizon/fixedlayer/freehorizon/fixedlayersfreehorizonproppanelonslice.cpp
	
	src/slicer/data/freehorizon/fixedlayer/freehorizon/fixedlayerimplfreehorizonfromdatasetandcube.cpp
	src/slicer/data/freehorizon/fixedlayer/freehorizon/fixedlayersfreehorizonproppanel.cpp
	
	
	
	
	
	src/slicer/data/freehorizon/isohorizon.cpp
	src/slicer/data/freehorizon/isohorizongraphicrepfactory.cpp
	src/slicer/data/freehorizon/isohorizonrep.cpp
	
	src/slicer/data/editabledata.cpp
	src/slicer/data/dataeditor.cpp

	src/slicer/data/well/wellhead.cpp
	src/slicer/data/well/wellheadgraphicrepfactory.cpp
	src/slicer/data/well/wellbore.cpp
	src/slicer/data/well/wellboregraphicrepfactory.cpp
	src/slicer/data/well/wellpick.cpp
	src/slicer/data/well/wellpickgraphicrepfactory.cpp
	src/slicer/data/well/marker.cpp
	src/slicer/data/well/markergraphicrepfactory.cpp

	src/slicer/data/folderdata.cpp
	src/slicer/data/folderdatagraphicrepfactory.cpp
	
	src/slicer/data/nurbs/nurbsdataset.cpp
	src/slicer/data/nurbs/nurbsgraphicrepfactory.cpp
	src/slicer/data/random/randomdataset.cpp
	src/slicer/data/random/randomgraphicrepfactory.cpp
	src/slicer/data/random/randomtexdataset.cpp
	src/slicer/data/random/randomtexgraphicrepfactory.cpp
	src/slicer/data/rgbcomputationondataset.cpp
	src/slicer/data/rgbcomputationondatasetgraphicrepfactory.cpp
	src/slicer/data/scalarComputationOnDataSet.cpp
	src/slicer/data/scalarComputationOnDataSetGraphicRepFactory.cpp
	src/slicer/data/computationoperatordataset.cpp
	src/slicer/data/computationoperatordatasetgraphicrepfactory.cpp



	src/slicer/dialog/SaveGraphicLayerDialog.cpp
	src/slicer/dialog/stratislicechooserdialog.cpp
	src/slicer/dialog/DataSelectorDialog.cpp
	src/slicer/dialog/ManagerUpdateWidget.cpp
	src/slicer/dialog/DataUpdatorDialog.cpp
	src/slicer/dialog/LayerSpectrumDialog.cpp	
	src/slicer/dialog/RgtVolumicDialog.cpp
	src/slicer/dialog/stringselectordialog.cpp
	src/slicer/dialog/GraphicLayerSelectorDialog.cpp
	src/slicer/dialog/savehorizondialog.cpp
	src/slicer/dialog/selectseedfrommarkers.cpp
	src/slicer/dialog/selectrandomcreationmode.cpp
	src/slicer/dialog/exportmultilayerblocdialog.cpp
	src/slicer/dialog/exportlayerdialog.cpp
	src/slicer/dialog/GeotimeMarkerQCDialog.cpp
	src/slicer/dialog/composeseismictorgbdialog.cpp
	src/slicer/dialog/selectorcreatelayerdialog.cpp
	src/slicer/dialog/subgridgetterdialog.cpp
	src/slicer/dialog/bnniconfigcreationdialog.cpp
	src/slicer/dialog/gettextwithoverwritedialog.cpp
	src/slicer/dialog/exportnvhorizondialog.cpp
	src/slicer/workingset/workingsetmanager.cpp

	src/slicer/graphicsview/sliceqglgraphicsview.cpp
	src/slicer/graphicsview/basemapqglgraphicsview.cpp
	src/slicer/graphicsview/baseqglgraphicsview.cpp
	
	src/slicer/graphicsrep/graphiclayer.cpp
	src/slicer/graphicsrep/graphic3Dlayer.cpp
	src/slicer/graphicsrep/qrect3d.cpp
	src/slicer/graphicsrep/abstractgraphicrep.cpp
	src/slicer/graphicsrep/genericsurface3Dlayer.cpp
	src/slicer/graphicsrep/genericsurfacegray3Dlayer.cpp	
	src/slicer/graphicsrep/basemapsurface.cpp

	src/slicer/graphicsrep/stratislice/rgb/stratislicergb3Dlayer.cpp
	src/slicer/graphicsrep/stratislice/rgb/stratislicergbattributerep.cpp
	src/slicer/graphicsrep/stratislice/rgb/stratislicergblayer.cpp
	src/slicer/graphicsrep/stratislice/rgb/stratislicergbproppanel.cpp
	
	src/slicer/graphicsrep/stratislice/amplitude/stratisliceamplitude3Dlayer.cpp
	src/slicer/graphicsrep/stratislice/amplitude/stratisliceamplitudelayer.cpp
	src/slicer/graphicsrep/stratislice/amplitude/stratisliceamplitudeproppanel.cpp
	src/slicer/graphicsrep/stratislice/amplitude/stratisliceamplituderep.cpp
	
	src/slicer/graphicsrep/stratislice/frequency/stratislicefrequency3Dlayer.cpp
	src/slicer/graphicsrep/stratislice/frequency/stratislicefrequencylayer.cpp
	src/slicer/graphicsrep/stratislice/frequency/stratislicefrequencyproppanel.cpp
	src/slicer/graphicsrep/stratislice/frequency/stratislicefrequencyrep.cpp
	
	src/slicer/graphicsrep/stratislice/slice/stratisliceattributeproppanelonslice.cpp
	src/slicer/graphicsrep/stratislice/slice/stratisliceattributereponslice.cpp
	src/slicer/graphicsrep/stratislice/slice/stratisliceattributeslicelayer.cpp
	src/slicer/graphicsrep/stratislice/stratislicerep.cpp

	src/slicer/graphicsrep/slice/sliceproppanel.cpp
	src/slicer/graphicsrep/slice/slicelayer.cpp
	src/slicer/graphicsrep/slice/slicerep.cpp
	src/slicer/graphicsrep/slice/slicepositioncontroler.cpp

	src/slicer/graphicsrep/random/randomrep.cpp
	src/slicer/graphicsrep/random/randomlayer.cpp
	src/slicer/graphicsrep/random/randomproppanel.cpp
	
	src/slicer/graphicsrep/seismicsurvey/seismicsurveyproppanel.cpp
	src/slicer/graphicsrep/seismicsurvey/seismicsurveylayer.cpp
	src/slicer/graphicsrep/seismicsurvey/seismicsurvey3Dlayer.cpp
	src/slicer/graphicsrep/seismicsurvey/seismicsurveyrep.cpp
	src/slicer/graphicsrep/seismicsurvey/seismicsurveyreponmap.cpp
	src/slicer/graphicsrep/seismicsurvey/seismicsurveyrepon3D.cpp
	
	src/slicer/graphicsrep/multiseedhorizon/multiseedslicerep.cpp
	src/slicer/graphicsrep/multiseedhorizon/multiseedslicelayer.cpp
	src/slicer/graphicsrep/multiseedhorizon/multiseedrandomrep.cpp
	src/slicer/graphicsrep/multiseedhorizon/multiseedrandomlayer.cpp
	src/slicer/graphicsrep/multiseedhorizon/referencecurvewrapper.cpp
	
	src/slicer/graphicsrep/multiseedrgt/multiseedrgtslicelayer.cpp
	src/slicer/graphicsrep/multiseedrgt/multiseedrgtslicerep.cpp
	
	src/slicer/graphicsrep/layerrgt/layerrgt3Dlayer.cpp
	src/slicer/graphicsrep/layerrgt/layerrgtlayer.cpp
	src/slicer/graphicsrep/layerrgt/layerrgtproppanel.cpp
	src/slicer/graphicsrep/layerrgt/layerrgtproppanelonslice.cpp
	src/slicer/graphicsrep/layerrgt/layerrgtrep.cpp
	src/slicer/graphicsrep/layerrgt/layerrgtreponslice.cpp
	src/slicer/graphicsrep/layerrgt/layerrgtslicelayer.cpp
	src/slicer/graphicsrep/layerrgt/rgb/rgblayerrgtrep.cpp
	src/slicer/graphicsrep/layerrgt/rgb/rgblayerrgtproppanel.cpp
	src/slicer/graphicsrep/layerrgt/rgb/rgblayerrgtlayer.cpp
	src/slicer/graphicsrep/layerrgt/rgb/rgblayerrgt3dlayer.cpp
	src/slicer/graphicsrep/layerrgt/stack/stacklayerrgtrep.cpp
	src/slicer/graphicsrep/layerrgt/stack/stacklayerrgtproppanel.cpp
	src/slicer/graphicsrep/layerrgt/stack/stacklayerrgtlayer.cpp
	
	src/slicer/graphicsrep/dataset/seismicdataset3Dlayer.cpp
	src/slicer/graphicsrep/dataset/datasetrep.cpp
	src/slicer/graphicsrep/dataset/dataset3Dslicerep.cpp
	src/slicer/graphicsrep/dataset/dataset3Dslicelayer.cpp
	src/slicer/graphicsrep/dataset/dataset3Dproppanel.cpp
	src/slicer/graphicsrep/dataset/cameraparameterscontroller.cpp
	src/slicer/graphicsrep/igraphicrepfactory.cpp
	
	src/slicer/graphicsrep/fixedlayer/fixedlayerfromdatasetrep.cpp
	src/slicer/graphicsrep/fixedlayer/fixedlayerfromdatasetproppanel.cpp
	src/slicer/graphicsrep/fixedlayer/fixedlayerfromdatasetlayer.cpp
	src/slicer/graphicsrep/fixedlayer/fixedlayerfromdatasetreponslice.cpp
	src/slicer/graphicsrep/fixedlayer/fixedlayerfromdatasetproppanelonslice.cpp
	src/slicer/graphicsrep/fixedlayer/fixedlayerfromdatasetlayeronslice.cpp
	src/slicer/graphicsrep/fixedlayer/fixedlayerfromdatasetreponrandom.cpp
	src/slicer/graphicsrep/fixedlayer/fixedlayerfromdatasetproppanelonrandom.cpp
	src/slicer/graphicsrep/fixedlayer/fixedlayerfromdatasetlayeronrandom.cpp
	src/slicer/graphicsrep/fixedlayer/fixedrgblayersfromdatasetrep.cpp
	src/slicer/graphicsrep/fixedlayer/fixedrgblayersfromdataset3dlayer.cpp
	src/slicer/graphicsrep/fixedlayer/fixedrgblayersfromdatasetlayeronmap.cpp
	src/slicer/graphicsrep/fixedlayer/fixedrgblayersfromdatasetproppanel.cpp
	src/slicer/graphicsrep/fixedlayer/fixedrgblayersfromdatasetreponslice.cpp
	src/slicer/graphicsrep/fixedlayer/fixedrgblayersfromdatasetlayeronslice.cpp
	src/slicer/graphicsrep/fixedlayer/fixedrgblayersfromdatasetproppanelonslice.cpp
	src/slicer/graphicsrep/fixedlayer/cube/fixedrgblayersfromdatasetandcuberep.cpp
	src/slicer/graphicsrep/fixedlayer/cube/fixedrgblayersfromdatasetandcube3dlayer.cpp
	src/slicer/graphicsrep/fixedlayer/cube/fixedrgblayersfromdatasetandcubelayeronmap.cpp
	src/slicer/graphicsrep/fixedlayer/cube/fixedrgblayersfromdatasetandcubeproppanel.cpp
	src/slicer/graphicsrep/fixedlayer/cube/fixedrgblayersfromdatasetandcubereponslice.cpp
	src/slicer/graphicsrep/fixedlayer/cube/fixedrgblayersfromdatasetandcubelayeronslice.cpp
	src/slicer/graphicsrep/fixedlayer/cube/fixedrgblayersfromdatasetandcubeproppanelonslice.cpp
	src/slicer/graphicsrep/fixedlayer/cube/fixedrgblayersfromdatasetandcubereponrandom.cpp
	src/slicer/graphicsrep/fixedlayer/cube/fixedrgblayersfromdatasetandcubelayeronrandom.cpp
	src/slicer/graphicsrep/fixedlayer/cube/fixedrgblayersfromdatasetandcubeproppanelonrandom.cpp
	src/slicer/graphicsrep/fixedlayer/cube/fixedlayersfromdatasetandcuberep.cpp
	src/slicer/graphicsrep/fixedlayer/cube/fixedlayersfromdatasetandcubeproppanel.cpp
	src/slicer/graphicsrep/fixedlayer/cube/fixedlayersfromdatasetandcube3dlayer.cpp
	src/slicer/graphicsrep/fixedlayer/cube/fixedlayersfromdatasetandcubelayeronmap.cpp
	src/slicer/graphicsrep/fixedlayer/cube/fixedlayersfromdatasetandcubereponslice.cpp
	src/slicer/graphicsrep/fixedlayer/cube/fixedlayersfromdatasetandcubeproppanelonslice.cpp
	src/slicer/graphicsrep/fixedlayer/cube/fixedlayersfromdatasetandcubelayeronslice.cpp
	src/slicer/graphicsrep/fixedlayer/cube/fixedlayersfromdatasetandcubereponrandom.cpp
	src/slicer/graphicsrep/fixedlayer/cube/fixedlayersfromdatasetandcubeproppanelonrandom.cpp
	src/slicer/graphicsrep/fixedlayer/cube/fixedlayersfromdatasetandcubelayeronrandom.cpp
	src/slicer/graphicsrep/fixedlayer/rgblayerfromdatasetrep.cpp
	src/slicer/graphicsrep/fixedlayer/rgblayerfromdatasetlayer.cpp
	src/slicer/graphicsrep/fixedlayer/rgblayerfromdatasetproppanel.cpp

	
	src/slicer/graphicsrep/well/wellhead/wellheadreponmap.cpp
	src/slicer/graphicsrep/well/wellhead/wellheadlayeronmap.cpp
	src/slicer/graphicsrep/well/wellhead/wellheadreponslice.cpp
	src/slicer/graphicsrep/well/wellhead/wellheadlayeronslice.cpp
	src/slicer/graphicsrep/well/wellhead/wellheadrepnodisplay.cpp
	src/slicer/graphicsrep/well/wellbore/wellborereponmap.cpp
	src/slicer/graphicsrep/well/wellbore/wellborelayeronmap.cpp
	src/slicer/graphicsrep/well/wellbore/wellborereponslice.cpp
	src/slicer/graphicsrep/well/wellbore/wellborelayeronslice.cpp
	src/slicer/graphicsrep/well/wellbore/wellborelayer3d.cpp
	src/slicer/graphicsrep/well/wellbore/wellboreproppanelonslice.cpp
	src/slicer/graphicsrep/well/wellbore/wellborerepon3d.cpp
	src/slicer/graphicsrep/well/wellbore/wellboreproppanelon3d.cpp
	src/slicer/graphicsrep/well/markerrep.cpp
	src/slicer/graphicsrep/well/wellpick/wellpickreponslice.cpp
	src/slicer/graphicsrep/well/wellpick/wellpicklayeronslice.cpp
	src/slicer/graphicsrep/well/wellpick/wellpickrep.cpp
	src/slicer/graphicsrep/well/wellpick/wellpicklayer3d.cpp
	src/slicer/graphicsrep/well/wellpick/wellpickreponrandom.cpp
	src/slicer/graphicsrep/well/wellpick/wellpicklayeronrandom.cpp
	src/slicer/graphicsrep/well/wellbore/wellborereponrandom.cpp
	src/slicer/graphicsrep/well/wellbore/wellborelayeronrandom.cpp

	src/slicer/graphicsrep/folderdata/folderdatarep.cpp

	src/slicer/graphicsrep/nurbs/nurbsrep.cpp
	src/slicer/graphicsrep/nurbs/nurbslayer.cpp
	src/slicer/graphicsrep/random3d/random3drep.cpp
	src/slicer/graphicsrep/random3d/random3dlayer.cpp
	src/slicer/graphicsrep/random3d/random3dtexrep.cpp
	src/slicer/graphicsrep/random3d/random3dtexlayer.cpp
	
	src/slicer/graphicsrep/videolayer/videolayerrep.cpp
	src/slicer/graphicsrep/videolayer/videolayerlayer.cpp
	src/slicer/graphicsrep/videolayer/videolayerproppanel.cpp
	
	src/slicer/graphicsrep/rgbdataset/rgbdatasetreponslice.cpp
	src/slicer/graphicsrep/rgbdataset/rgbdatasetlayeronslice.cpp
	src/slicer/graphicsrep/rgbdataset/rgbdatasetproppanelonslice.cpp
	src/slicer/graphicsrep/rgbdataset/rgbdatasetreponrandom.cpp
	src/slicer/graphicsrep/rgbdataset/rgbdatasetlayeronrandom.cpp
	src/slicer/graphicsrep/rgbdataset/rgbdatasetproppanelonrandom.cpp

	src/slicer/graphicsrep/graphiceditor/GraphicEditorFormsLayer.cpp
	src/slicer/graphicsrep/graphiceditor/GraphicEditorFormsRepFactory.cpp
	src/slicer/graphicsrep/graphiceditor/GraphicEditorFormsRep.cpp 

	src/slicer/graphicsrep/computationoperatordataset/computationoperatordatasetrep.cpp
	src/slicer/graphicsrep/computationoperatordataset/computationoperatordatasetlayer.cpp
	src/slicer/graphicsrep/computationoperatordataset/computationoperatordatasetproppanel.cpp

	src/slicer/innerview/abstractinnerview.cpp
	src/slicer/innerview/abstract2Dinnerview.cpp
	src/slicer/innerview/abstractsectionview.cpp
	src/slicer/innerview/slavesectionview.cpp
	src/slicer/innerview/singlesectionview.cpp
	src/slicer/innerview/basemapview.cpp
	src/slicer/innerview/statusbar.cpp
	src/slicer/innerview/dockwidgetsizegrid.cpp
	src/slicer/innerview/stackbasemapview.cpp
	src/slicer/innerview/extendedbasemapview.cpp
	src/slicer/innerview/randomlineview.cpp
	
	src/slicer/view/abstractgraphicsview.cpp
	src/slicer/view/viewutils.cpp
	src/slicer/view/datacontroler.cpp
	src/slicer/view/qgraphicsreptreewidgetitem.cpp
	src/slicer/view/qinnerviewtreewidgetitem.cpp
	src/slicer/view/datatreewidgetitem.cpp
	src/slicer/view/markertreewidgetitem.cpp
	src/slicer/view/wellpicktreewidgetitem.cpp
	src/slicer/view/wellheadtreewidgetitem.cpp
	src/slicer/view/folderdatatreewidgetitem.cpp
	src/slicer/view/freehorizontreewidgetitem.cpp
	src/slicer/view/basemapgraphicsview.cpp
	src/slicer/view/sectiongraphicsview.cpp
	src/slicer/view/mousesynchronizedgraphicsview.cpp
	src/slicer/view/monotypegraphicsview.cpp
	src/slicer/view/multitypegraphicsview.cpp
	src/slicer/view/geotimegraphicsview.cpp
	src/slicer/view/SynchroMultiView.cpp
	src/slicer/view/stacksynchronizer.cpp
	src/slicer/view/splittedview.cpp
	src/slicer/view/icontreewidgetitemdecorator.cpp
	src/slicer/view/itreewidgetitemdecorator.cpp
	src/slicer/view/colortreewidgetitemdecorator.cpp
	src/slicer/view/textcolortreewidgetitemdecorator.cpp
	src/slicer/view/propertypanel.cpp
	
	src/slicer/texture/cudaimagepaletteholder.cpp
	src/slicer/texture/cudaimagebuffer.cpp
	src/slicer/texture/cudargbimage.cpp
	src/slicer/texture/cudargbinterleavedimage.cpp
	src/slicer/texture/cudargbinterleavedimagebuffer.cpp
	src/slicer/texture/cudaimagetexturemapper.cpp
	src/slicer/texture/cudargbimagetexturemapper.cpp
	src/slicer/texture/cpuimagebuffer.cpp
	src/slicer/texture/cpuimagepaletteholder.cpp
	src/slicer/texture/iimagepaletteholder.cpp
	
	src/slicer/pickingtask/pickingtask.cpp
	src/slicer/pickingtask/pointpickingtask.cpp
	src/slicer/pickingtask/pickinginfo.cpp
	src/slicer/pickingtask/rulerpicking.cpp
	
	src/slicer/mousetrackingevent.cpp
	src/slicer/slicerwindow.cpp
	src/slicer/graphicsutil.cpp
	
	src/slicer/graphicitemsrgt/rgbqglcudaimageitem.cpp
	src/slicer/graphicitemsrgt/rgtqglcudaimageitem.cpp
	src/slicer/graphicitemsrgt/qglisolineitem.cpp
	src/slicer/graphicitemsrgt/qglfullcudaimageitem.cpp
	src/slicer/graphicitemsrgt/qglfullcudargbaimageitem.cpp
	src/slicer/graphicitemsrgt/rgbinterleavedqglcudaimageitem.cpp
	
	src/slicer/view3d/viewqt3d.cpp
	src/slicer/view3d/path3d.cpp
	src/slicer/view3d/tools3dWidget.cpp
	src/slicer/view3d/nurbswidget.cpp
	src/slicer/view3d/colortabletexture.cpp
	src/slicer/view3d/cudaimagetexture.cpp
	src/slicer/view3d/qt3dhelpers.cpp
	src/slicer/view3d/surfacegenerator.cpp
	src/slicer/view3d/volumeboundingmesh.cpp
	src/slicer/view3d/surfacemesh.cpp
	src/slicer/view3d/qt3dressource.cpp
	src/slicer/view3d/view3dgraphicsview.cpp
	src/slicer/view3d/cameracontroller.cpp
	src/slicer/view3d/rgbmaterialinitializer.cpp
	src/slicer/view3d/graymaterialinitializer.cpp
	src/slicer/view3d/rgbinterleavedmaterialinitializer.cpp
	src/slicer/view3d/randomview3d.cpp
	
	src/slicer/multiview/scenemultimanager.cpp
	src/slicer/multiview/multiview.cpp
	src/slicer/multiview/viewportmanager.cpp
	src/slicer/multiview/mathutils.cpp
		
	
	src/slicer/utils/curve.cpp
	src/slicer/utils/stringutil.cpp
	src/slicer/utils/ioutil.cpp
	src/slicer/utils/continuouspresseventfilter.cpp
	src/slicer/utils/geometry2dtoolbox.cpp
	src/slicer/utils/polygoninterpolator.cpp
	src/slicer/utils/interpolation.cpp
	src/slicer/utils/datasetrelatedstorageimpl.cpp
	src/slicer/utils/surfacemeshcacheutils.cpp
	src/slicer/utils/seautils.cpp

	src/slicer/globalconfig.cpp

	src/basemap/data/ogrloader.cpp
	src/basemap/data/gdalloader.cpp
	src/basemap/data/gdalimagewrapper.cpp
	src/basemap/data/qglgdalfullimage.cpp
	src/basemap/data/qglgdaltiledimage.cpp
	src/basemap/basemapwindow.cpp

	src/graphicitems/qglfixedaxisitem.cpp
	src/graphicitems/qglgridaxisitem.cpp
	src/graphicitems/qvertex2D.cpp
	src/graphicitems/qglimageitemhelper.cpp
	src/graphicitems/qabstractglgraphicsitem.cpp
	src/graphicitems/igeorefimage.cpp
	src/graphicitems/igeorefgrid.cpp
	src/graphicitems/qglabstractimage.cpp
	src/graphicitems/qabstractglgraphicsitem.cpp
	src/graphicitems/qglabstracttiledimage.cpp
	src/graphicitems/qglabstractfullimage.cpp
	
	src/graphicitems/geometryitem/qglpolylineitem.cpp
	src/graphicitems/geometryitem/qglpointclouditem.cpp
	src/graphicitems/geometryitem/qglpolygonitem.cpp
	src/graphicitems/geometryitem/qglsymbolitem.cpp

	src/graphicitems/image/qglfullimageitem.cpp
	src/graphicitems/image/qglimagegriditem.cpp
	src/graphicitems/image/texturehelper.cpp
	src/graphicitems/image/qglimagefilledhistogramitem.cpp
	src/graphicitems/image/qgllineitem.cpp
	src/graphicitems/image/qglgridtickitem.cpp

	src/graphicitems/overlayitem/qglcolorbar.cpp
	src/graphicitems/overlayitem/qglgriditem.cpp
	src/graphicitems/overlayitem/qglscalebaritem.cpp
	src/graphicitems/overlayitem/qglcrossitem.cpp
	
	src/graphicitems/tiledimage/qgltilecoord.cpp
	src/graphicitems/tiledimage/qglgridutil.cpp
	src/graphicitems/tiledimage/qgltile.cpp
	src/graphicitems/tiledimage/qgltiledimageitem.cpp
	src/graphicitems/tiledimage/qglrenderthread.cpp	
	
	src/graphicitems/helicoitem.cpp
	src/graphicitems/callout.cpp
	src/graphicitems/customchartview.cpp
	
	src/widget/orderstackhorizonwidget.cpp
	src/slicer/data/horizonfolderdata.cpp
	src/slicer/data/horizonfolderdatagraphicrepfactory.cpp
	src/slicer/graphicsrep/folderdata/horizonfolderdatarep.cpp
	src/slicer/graphicsrep/folderdata/horizondatarep.cpp
	src/slicer/graphicsrep/layerrgt/horizonproppanel.cpp
	src/slicer/graphicsrep/fixedlayer/cube/horizonfolder3dlayer.cpp
	
	src/slicer/graphicsrep/fixedlayer/cube/horizonfolderlayeronrandom.cpp
	src/slicer/graphicsrep/fixedlayer/cube/horizonfolderproppanelonrandom.cpp
	src/slicer/graphicsrep/fixedlayer/cube/horizonfolderreponrandom.cpp
	
	
	src/slicer/graphicsrep/fixedlayer/cube/horizonfolderlayeronslice.cpp
	src/slicer/graphicsrep/fixedlayer/cube/horizonfolderproppanelonslice.cpp
	src/slicer/graphicsrep/fixedlayer/cube/horizonfolderreponslice.cpp
	
	src/slicer/graphicsrep/fixedlayer/cube/horizonfolderlayeronmap.cpp
	
	src/graphicitems/qopenglextensions.cpp

	src/imgui/imgui_draw.cpp
	src/imgui/imgui.cpp
	src/imgui/imgui_widgets.cpp
	src/imgui/imgui_tables.cpp

	src/implot/implot.cpp
	src/implot/implot_items.cpp
)

set(NEXTVISION_VIEWER_APP_CUDA_SRC
	src/cuda/cuda_algo.cu
	src/cuda/cuda_volume.cu
	src/cuda/cuda_optvolume.cu
	src/cuda/RGT_Spectrum_Memory.cu
	src/cuda/RGTMorletMemory.cu
)

set(CUDA_SEPARABLE_COMPILATION ON)
cuda_include_directories(${CUDA_INCLUDE_DIRS} ${NEXTVISION_VIEWER_APP_INCLUDE})
cuda_add_library(NextVisionViewerCudaLib ${NEXTVISION_VIEWER_APP_CUDA_SRC} OPTIONS "--relocatable-device-code=true")

qt6_add_resources(NEXTVISION_VIEWER_APP_RESSOURCES src/resources.qrc src/qdarkstyle/style.qrc)

link_directories(${OCR_STATIC_LIB_DIRS})

add_library(NextVisionViewerLib SHARED  ${NEXTVISION_VIEWER_APP_SRC} ${NEXTVISION_VIEWER_APP_RESSOURCES})

target_include_directories(NextVisionViewerLib PUBLIC ${NEXTVISION_VIEWER_APP_INCLUDE})
message("inripp : ${LIBINRIPP_INCLUDE}")
target_include_directories(NextVisionViewerLib PRIVATE  ${Boost_INCLUDE_DIRS}  ${MYGDAL_INCLUDE_DIR} ${LIBINRIPP_INCLUDE} ${GSL_INCLUDE_DIR} ${KDDockWidgets_INCLUDE_DIRS} $<TARGET_PROPERTY:geotime,INCLUDE_DIRECTORIES> ${RAPIDJSON_INCLUDE_DIRS}
					    $<TARGET_PROPERTY:NvResampleSpline,INCLUDE_DIRECTORIES> $<TARGET_PROPERTY:MuratBasicIO,INCLUDE_DIRECTORIES> ${Tinynurbs_INCLUDE_DIRS} ${SEA_INCLUDE_DIRS} nlohmann_json::nlohmann_json)

target_link_libraries(NextVisionViewerLib 
					    NextVisionViewerCudaLib
					    MuratBasicIO
					    ${CUDA_LIBRARIES}
					    ${CUDA_CUFFT_LIBRARIES}
					    ${CUDA_CUBLAS_LIBRARIES}
					    inripp
					    ${Boost_FILESYSTEM_LIBRARY}
					    ${Boost_IOSTREAMS_LIBRARY}
					    ${Boost_SYSTEM_LIBRARY} 
					    ${MYGDAL_LIBRARIES}
					    Qt6::Widgets
					    Qt6::Core
					    Qt6::Gui
					    Qt6::OpenGL
					    #Qt6::OpenGLExtensions
					    Qt6::Quick
					    Qt6::QuickControls2
					    Qt6::QuickWidgets
					    Qt6::Sql
					    Qt6::Xml
					    Qt6::3DCore
					    Qt6::3DCorePrivate
					    Qt6::3DRender
					    Qt6::3DInput
					    Qt6::3DExtras
					    Qt6::3DQuick
					    Qt6::Charts
					    Qt6::3DQuickExtras
					    Qt6::Svg
					    Qt6::SvgWidgets
					    Qt6::Multimedia
					    Qt6::MultimediaWidgets
					    geotime
					    ${GSL_LIBRARY}
					    ${GSL_CBLAS_LIBRARY}
					    ${KDDockWidgets_LIBRARIES}
					    NvResampleSpline
					    ${SEA_LIBRARIES}
					)

 
add_executable(NextVisionViewer src/main.cpp)
target_include_directories(NextVisionViewer PUBLIC ${NEXTVISION_VIEWER_APP_INCLUDE}  ${Boost_INCLUDE_DIRS} ${LIBINRIPP_INCLUDE})
target_link_libraries(NextVisionViewer PUBLIC NextVisionViewerLib NextVisionViewerCudaLib inripp)

add_executable(NextVisionViewerBnni src/mainbnni.cpp)
target_include_directories(NextVisionViewerBnni PUBLIC ${NEXTVISION_VIEWER_APP_INCLUDE}  ${Boost_INCLUDE_DIRS} ${LIBINRIPP_INCLUDE})
target_link_libraries(NextVisionViewerBnni PUBLIC NextVisionViewerLib NextVisionViewerCudaLib inripp)

add_custom_command(TARGET NextVisionViewer PRE_BUILD
                   COMMAND ${CMAKE_COMMAND} -E copy_directory
                       ${CMAKE_SOURCE_DIR}/NextVision/src/colortable/palettes  $<TARGET_FILE_DIR:NextVisionViewer>/palettes )

add_custom_command(TARGET NextVisionViewer PRE_BUILD
		   COMMAND ${CMAKE_COMMAND} -E copy
		       ${CMAKE_SOURCE_DIR}/NextVision/src/slicer/icons/logoIcon.png $<TARGET_FILE_DIR:NextVisionViewer>/logoTitle.png )

install(DIRECTORY ${CMAKE_SOURCE_DIR}/NextVision/src/colortable/palettes DESTINATION bin)
install(FILES ${CMAKE_SOURCE_DIR}/NextVision/src/slicer/icons/logoIcon.png DESTINATION bin)
install(TARGETS NextVisionViewer RUNTIME DESTINATION bin ARCHIVE DESTINATION bin)
install(TARGETS NextVisionViewerBnni RUNTIME DESTINATION bin ARCHIVE DESTINATION bin)
install(TARGETS NextVisionViewerLib LIBRARY DESTINATION lib ARCHIVE DESTINATION lib)
install(TARGETS NextVisionViewerCudaLib LIBRARY DESTINATION lib ARCHIVE DESTINATION lib)

install(FILES ${CMAKE_SOURCE_DIR}/NextVision/src/bnni/launch_convertJson.sh ${CMAKE_SOURCE_DIR}/NextVision/src/bnni/convertJson.py
        PERMISSIONS OWNER_READ OWNER_WRITE OWNER_EXECUTE GROUP_READ GROUP_EXECUTE WORLD_READ WORLD_EXECUTE
	DESTINATION scripts/BNNI_Interface )

install(FILES ${CMAKE_SOURCE_DIR}/NextVision/src/version.txt DESTINATION .)
