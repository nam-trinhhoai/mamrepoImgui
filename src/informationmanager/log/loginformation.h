
#ifndef __LOGINFORMATION__
#define __LOGINFORMATION__

#include "iinformation.h"
#include "iinformationfolder.h"
#include "workingsetmanager.h"

#include <QColor>
#include <QObject>
#include <QPointer>

class LogInformation : public IInformation, public IInformationFolder {
	Q_OBJECT
public:
	LogInformation(const QString& name, const QString& fullPath, WorkingSetManager* manager, QObject* parent=0);
	virtual ~LogInformation();

	// for actions
	virtual bool isDeletable() const override;
	virtual bool deleteStorage(QString* errorMsg=nullptr) override;
	virtual bool isSelectable() const override;
	virtual bool isSelected() const override;
	virtual void toggleSelection(bool toggle) override;

	// comments
	virtual bool commentsEditable() const override;
	virtual QString comments() const override;
	virtual void setComments(const QString& txt) override;

	virtual bool hasIcon() const override;
	virtual QIcon icon(int preferedSizeX, int preferedSizeY) const override;

	// for sort and filtering
	virtual QString mainOwner() const override;
	virtual QStringList owners() const override;
	virtual QDateTime mainCreationDate() const override;
	virtual QList<QDateTime> creationDates() const override;
	virtual QDateTime mainModificationDate() const override;
	virtual QList<QDateTime> modificationDates() const override;
	virtual QString name() const override;
	virtual information::StorageType storage() const override;
	void searchFileCache() const;

	virtual bool hasProperty(information::Property property) const override;
	virtual QVariant property(information::Property property) const override;
	virtual bool isCompatible(information::Property property, const QVariant& filter) const override;

	// specific
	QColor color() const;
	void setColor(QColor color);

	virtual QString getSize();
	virtual QString getSizeOnDisk();
	virtual QString getVoxelFormat();
	virtual QString getAxis();
	virtual QString getDataSetType();
	virtual std::vector<QString> getDataParams();
	virtual std::vector<float> getDataFloatParams();
	virtual std::vector<int> getDims();





	// int nbCurves() const;
	// int precision() const;

	// for gui representation, maybe should be done by another class
	virtual IInformationPanelWidget* buildInformationWidget(QWidget* parent=nullptr) override;
	virtual QWidget* buildMetadataWidget(QWidget* parent=nullptr) override;

	// interface of IInformationFolder
	virtual QString folder() const override;
	virtual QString mainPath() const override;
	void setUserName(QString name);


signals:
	void colorChanged(QColor);

private:
	mutable QList<QDateTime> m_cacheCreationDates;
	mutable QList<QDateTime> m_cacheModificationDates;
	mutable QStringList m_cacheOwners;
	mutable bool m_cacheSearchDone = false;

	QColor m_color;
	QString m_fullPath; // path of the txt, there is an obj with the same base name
	QPointer<WorkingSetManager> m_manager;
	QString m_name;
	QString m_userName = "";

	// TODO
	// folder
};

#endif // SRC_INFORMATIONMANAGER_NURBS_NURBINFORMATION_H
