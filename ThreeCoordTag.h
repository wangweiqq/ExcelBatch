#pragma once

#include <QWidget>
#include "ui_ThreeCoordTag.h"
#include <QJsonObject>
#include <QJsonArray>
#include <QStandardItemModel>
#include <QItemSelectionModel>
#include <QHeaderView>
#include <QVBoxLayout>
class ThreeCoordTag : public QWidget
{
	Q_OBJECT

public:
	ThreeCoordTag(QWidget *parent = Q_NULLPTR);
	~ThreeCoordTag();
	void SetHoldTag(QJsonObject temp, QJsonObject val);
private:
	Ui::ThreeCoordTag ui;

	QStandardItemModel* pModel;
	QItemSelectionModel* pSelection;
	//孔的模板
	QJsonObject mHoldTemplet;
	//孔的值
	QJsonObject mHoldValue;
};
