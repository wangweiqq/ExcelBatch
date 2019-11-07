#pragma once

#include <QDialog>
#include "ui_ShowThreeCoord.h"
#include "ThreeCoordTag.h"
#include <QVector>
#include <QJsonDocument>
#include <QJsonParseError> 
#include <QJsonArray>
#include <QJsonObject>
#include <QMap>
#include <QVBoxLayout>
class ShowThreeCoord : public QDialog
{
	Q_OBJECT

public:
	ShowThreeCoord(QWidget *parent = Q_NULLPTR);
	~ShowThreeCoord();
	void SetShowData(QJsonDocument temp, QMap<QString, QJsonObject> value);
private:
	Ui::ShowThreeCoord ui;
	QVector<ThreeCoordTag* > mListTag;
	//¿×Ä£°å
	QJsonDocument mTemplet;
	//¿×Öµ
	QMap<QString,QJsonObject> mValue;
	QVBoxLayout* vLayout;
};
