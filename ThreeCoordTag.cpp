#include "ThreeCoordTag.h"

ThreeCoordTag::ThreeCoordTag(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	this->hide();
	pModel = new QStandardItemModel(this);
	pSelection = new QItemSelectionModel(pModel);
	ui.tableView->setModel(pModel);
	ui.tableView->setSelectionModel(pSelection);
	ui.tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
	ui.tableView->verticalHeader()->hide();
	ui.tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
	ui.tableView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
	//ui.tableView->horizontalHeader()->setSectionResizeMode(0, QHeaderView::Stretch);
}

ThreeCoordTag::~ThreeCoordTag()
{
}
void ThreeCoordTag::SetHoldTag(QJsonObject temp, QJsonObject resval) {
	pModel->clear();
	mHoldTemplet = temp;
	mHoldValue = resval;
	QString name = mHoldTemplet["name"].toString();
	if (name == "FAI-10-1-81") {
		bool b111 = false;
	}
	int index = mHoldTemplet["index"].toInt();
	QJsonArray rows = mHoldTemplet["rows"].toArray();
	QJsonArray titlerow = rows[0].toArray();
	QStringList titleList;
	for (int i = 0; i < titlerow.count(); ++i) {
		titleList << titlerow[i].toString();
	}
	pModel->setHorizontalHeaderLabels(titleList);
	ui.tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
	int height = ui.tableView->horizontalHeader()->height();
	ui.groupBox->setTitle(name);
	for (int i = 1; i < rows.count(); ++i) {
		QJsonArray jsonarr = rows[i].toArray();
		QList<QStandardItem*> items;
		for (int j = 0; j < jsonarr.count(); ++j) {
			QString ttt = jsonarr[j].toString();
			items.append(new QStandardItem(jsonarr[j].toString()));
		}
		pModel->appendRow(items);
	}
	height += ui.tableView->rowHeight(0) * (rows.count() - 1);
	/*for (int i = 1; i < rows.count(); ++i) {
		height += ui.tableView->rowHeight(i);
	}*/
	ui.tableView->setFixedHeight(height);
	bool ok;
	if (index > 8 && !resval.isEmpty()) {
		int measIndex = 6;
		measIndex -= 1;
		QString name = resval["name"].toString();
		double x = resval["X"].toString().toDouble(&ok);
		double y = resval["Y"].toString().toDouble(&ok);
		double df = resval["DF"].toString().toDouble(&ok);
		pModel->item(0, measIndex)->setText(QString::number(x,'f',4));
		pModel->item(1, measIndex)->setText(QString::number(y, 'f', 4));
		pModel->item(2, measIndex)->setText(QString::number(df, 'f', 4));

		//¼ÆËã
		double B61 = rows[3].toArray()[1].toString().toDouble(&ok);
		double C61 = rows[3].toArray()[2].toString().toDouble(&ok);
		double D61 = rows[3].toArray()[3].toString().toDouble(&ok);
		double C62 = rows[4].toArray()[2].toString().toDouble(&ok);

		double DEV_X = x - rows[1].toArray()[1].toString().toDouble(&ok);
		double DEV_Y = y - rows[2].toArray()[1].toString().toDouble(&ok);
		double DEV_DF = df - rows[3].toArray()[1].toString().toDouble(&ok);
		double DF_BONUS = std::max(std::min(df, B61 + C61) - (B61 + D61), 0.0);
		double DF_OUTTOL = DEV_DF > C61 ? DEV_DF - C61 : (DEV_DF < D61 ? D61 - DEV_DF : 0.0);
		double TP_BONUS = DF_BONUS;
		double TP_MEAS = std::sqrt(DEV_X*DEV_X + DEV_Y*DEV_Y) * 2;
		double TP_DEV = TP_MEAS;
		double TP_OUTTOL = (TP_DEV - (C62 + TP_BONUS)) < 0 ? 0.0 : (TP_DEV - (C62 + TP_BONUS));

		pModel->item(0, measIndex+1)->setText(QString::number(DEV_X, 'f', 4));
		pModel->item(1, measIndex + 1)->setText(QString::number(DEV_Y, 'f', 4));
		pModel->item(2, measIndex + 1)->setText(QString::number(DEV_DF, 'f', 4));
		pModel->item(3, measIndex + 1)->setText(QString::number(TP_DEV, 'f', 4));
		pModel->item(3, measIndex)->setText(QString::number(TP_MEAS, 'f', 4));
		pModel->item(3, measIndex - 1)->setText(QString::number(TP_BONUS, 'f', 4));
		pModel->item(2, measIndex - 1)->setText(QString::number(DF_BONUS, 'f', 4));
		pModel->item(2, measIndex + 2)->setText(QString::number(DF_OUTTOL, 'f', 4));
		pModel->item(3, measIndex + 2)->setText(QString::number(TP_OUTTOL, 'f', 4));
	}
	this->show();
}