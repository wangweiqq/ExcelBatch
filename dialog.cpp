#pragma execution_character_set("utf-8")
#include "dialog.h"
#include "ui_dialog.h"
#include <QFileDialog>
#include <ActiveQt/QAxObject>
#include <QMessageBox>
#include <QDebug>
#include "exceloperator.h"
#include <iostream>
#include <QJsonDocument>
#include <QJsonParseError> 
#include <QJsonArray>
#include <QJsonObject>
#include <QPair>
#include <QMap>
#include <map>
#include <string>
#include <QVector>
#include <QRadioButton>
#include <QFile>
#include <QTextStream>
#include <sstream>
#include <QTime> 

QVector<QString> u5_vec = {
	"FAI-8-18",
	"FAI-8-17",
	"FAI-8-16",
	"FAI-8-15",
	"FAI-8-14",
	"FAI-8-13",
	"FAI-8-12",
	"FAI-8-11",
	"FAI-8-10",
	"FAI-8-9",
	"FAI-8-8",
	"FAI-8-7",
	"FAI-8-6",
	"FAI-8-5",
	"FAI-8-4",
	"FAI-8-3",
	"FAI-8-2",
	"FAI-8-1",
	"FAI-8-70",
	"FAI-8-69",
	"FAI-8-68",
	"FAI-8-67",
	"FAI-8-66",
	"FAI-8-65",
	"FAI-8-64",
	"FAI-8-63",
	"FAI-8-62",
	"FAI-8-61",
	"FAI-8-60",
	"FAI-8-59",
	"FAI-8-58",
	"FAI-8-57",
	"FAI-8-56",
	"FAI-8-55",
	"FAI-8-54",
	"FAI-8-53",
	"FAI-8-52",
	"FAI-8-51",
	"FAI-8-50",
	"FAI-8-49",
	"FAI-8-48",
	"FAI-8-47",
	"FAI-8-46",
	"FAI-8-45",
	"FAI-8-44",
	"FAI-8-43",
	"FAI-8-42",
	"FAI-8-41",
	"FAI-8-40",
	"FAI-8-39",
	"FAI-8-38",
	"FAI-8-37",
	"FAI-8-36",
	"FAI-8-35",
	"FAI-8-34",
	"FAI-8-33",
	"FAI-8-32",
	"FAI-8-31",
	"FAI-8-30",
	"FAI-8-29",
	"FAI-8-28",
	"FAI-8-27",
	"FAI-8-26",
	"FAI-8-25",
	"FAI-8-24",
	"FAI-8-23",
	"FAI-8-22",
	"FAI-8-21",
	"FAI-8-20",
	"FAI-8-19",
	"FAI-10-1-86",
	"FAI-10-1-87",
	"FAI-10-1-88",
	"FAI-10-1-89",
	"FAI-10-1-90",
	"FAI-10-1-91",
	"FAI-10-1-92",
	"FAI-10-1-93",
	"FAI-10-1-94",
	"FAI-10-1-95",
	"FAI-10-1-74",
	"FAI-10-1-75",
	"FAI-10-1-76",
	"FAI-10-1-77",
	"FAI-10-1-78",
	"FAI-10-1-79",
	"FAI-10-1-80",
	"FAI-10-1-81",
	"FAI-10-1-82",
	"FAI-10-1-83",
	"FAI-10-1-62",
	"FAI-10-1-63",
	"FAI-10-1-64",
	"FAI-10-1-65",
	"FAI-10-1-66",
	"FAI-10-1-67",
	"FAI-10-1-68",
	"FAI-10-1-69",
	"FAI-10-1-70",
	"FAI-10-1-71",
	"FAI-10-1-50",
	"FAI-10-1-51",
	"FAI-10-1-52",
	"FAI-10-1-53",
	"FAI-10-1-54",
	"FAI-10-1-55",
	"FAI-10-1-56",
	"FAI-10-1-57",
	"FAI-10-1-58",
	"FAI-10-1-59",
	"FAI-10-1-38",
	"FAI-10-1-39",
	"FAI-10-1-40",
	"FAI-10-1-41",
	"FAI-10-1-42",
	"FAI-10-1-43",
	"FAI-10-1-44",
	"FAI-10-1-45",
	"FAI-10-1-46",
	"FAI-10-1-47",
	"FAI-10-1-26",
	"FAI-10-1-27",
	"FAI-10-1-28",
	"FAI-10-1-29",
	"FAI-10-1-30",
	"FAI-10-1-31",
	"FAI-10-1-32",
	"FAI-10-1-33",
	"FAI-10-1-34",
	"FAI-10-1-35",
	"FAI-10-1-14",
	"FAI-10-1-15",
	"FAI-10-1-16",
	"FAI-10-1-17",
	"FAI-10-1-18",
	"FAI-10-1-19",
	"FAI-10-1-20",
	"FAI-10-1-21",
	"FAI-10-1-22",
	"FAI-10-1-23",
	"FAI-10-1-2",
	"FAI-10-1-3",
	"FAI-10-1-4",
	"FAI-10-1-5",
	"FAI-10-1-6",
	"FAI-10-1-7",
	"FAI-10-1-8",
	"FAI-10-1-9",
	"FAI-10-1-10",
	"FAI-10-1-11",
	"FAI-10-10#",
	"FAI-10-11#",
	"FAI-10-12#",
	"FAI-10-13#",
	"FAI-10-14#",
	"FAI-10-15#",
	"FAI-7-16",
	"FAI-7-15",
	"FAI-7-14",
	"FAI-7-13",
	"FAI-7-12",
	"FAI-7-11",
	"FAI-7-10",
	"FAI-7-9",
	"FAI-7-8",
	"FAI-7-7",
	"FAI-7-6",
	"FAI-7-5",
	"FAI-7-4",
	"FAI-7-3",
	"FAI-7-2",
	"FAI-7-1",
	"FAI-6-5",
	"FAI-6-4",
	"FAI-6-3",
	"FAI-6-6",
	"FAI-6-7",
	"FAI-6-2",
	"FAI-6-1",
	"FAI-6-8"
};
QMap<int, QString> u5_map;

//3坐标U5模板Json文档
QJsonDocument json_u5_template;
//3坐标U5模板Json文档
QJsonDocument json_es6_template;

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
	ui->radES6->setEnabled(false);
	ui->btnReadCSVFile->hide();
	//ui->btnShowCoord->hide();
	for (int i = 0; i < u5_vec.count(); ++i) {
		u5_map.insert(i + 1, u5_vec[i]);
	}
	mCoordWidget = new ShowThreeCoord(this);
	mCoordWidget->setModal(false);
}

Dialog::~Dialog()
{
    delete ui;
}
//读取3坐标模板生成模板Json文件
void Dialog::on_btnOpenExcel_clicked(){
    QString excelPath = QFileDialog::getOpenFileName(this,"请打开Excel文件",QDir::currentPath(),"Excel文件(*.xlsx)");
    if(excelPath.isEmpty()){
        QMessageBox::information(this,"信息","请打开Excel文件");
        return;
    }
    qDebug()<<excelPath;
	int type = 1;
	if (ui->radU5->isChecked()) {
		//生成U5模板
		type = 2;
	}
	else {
		//生产ES6模板
		type = 1;
	}
    //GetFileContent(excelPath, type);
	GetFileBatchContent(excelPath, type);
}

void Dialog::GetFileBatchContent(QString filename, int iCaseType) {
	if (filename.isEmpty()) {
		return;
	}
	ExcelOperator readExcel;
	qDebug() << "打开Excel";
	bool bl = readExcel.open(filename, false);
	if (!bl) {
		readExcel.close();
		QMessageBox::information(this, "信息", "请打开Excel文件错误");
		return;
	}
	qDebug() << "选择Excel表";
	QAxObject* pWorkSheet = readExcel.getSheet(1);
	if (pWorkSheet == NULL) {
		readExcel.close();
		QMessageBox::information(this, "信息", "Excel没有找到第一个Sheet表");
		return;
	}
	int row_count = readExcel.getRowsCount(pWorkSheet);
	int col_count = readExcel.getColumnsCount(pWorkSheet);
	qDebug() << "Excel row = " << row_count << ", cols = " << col_count;
	QVariantList excellist = readExcel.getRangeValues(pWorkSheet, 1, 1, row_count, col_count);
	qDebug() << "读取完成";
	
	QJsonParseError error;
	QJsonDocument jsonDoc1;
	QJsonDocument jsonDoc2;
	QJsonArray jsonArr1;
	QJsonArray jsonArr2;

	bool isRead2 = false;

	QMap<QString, QJsonObject> result;
	int sourceindex = 1;
	int resindex = 1;
	bool ok;


	const int rowCount = excellist.count();
	QVariantList rowData;
	for (int i = 0; i<rowCount; ++i) {
		rowData = excellist[i].toList();
		//qDebug() << rowData.at(0);
		QString name = rowData[0].toString();
		if (name.isEmpty()) {
			break;
		}
		QJsonObject obj1;
		QJsonObject obj2;
		obj1.insert("name", name);
		obj1.insert("index", sourceindex++);
		if (ui->radU5->isChecked()) {
			isRead2 = u5_vec.contains(name);
		}
		if (isRead2) {
			obj2.insert("name", name);
			obj2.insert("index", resindex++);
		}
		if (name == "FAI-6-1") {
			bool bbbb = false;
		}
		//title列
		int titlecols;
		QJsonArray jsonDataR;
		QJsonArray jsonRows;
		rowData = excellist[++i].toList();
		for (titlecols = 0; titlecols < rowData.count(); ++titlecols) {
			QString val = rowData[titlecols].toString();
			if (val.isEmpty()) {
				break;
			}
			jsonRows.append(val);
		}
		jsonDataR.append(jsonRows);

		while (++i < rowCount) {
			rowData = excellist[i].toList();
			QString tmpTest = rowData[0].toString();
			if (tmpTest.isEmpty()) {
				break;
			}
			QJsonArray jsonRows2;
			jsonRows2.append(tmpTest);
			for (int j = 1; j < titlecols; ++j) {
				QString tmp = rowData[j].toString();
				if (j > 3) {
					double dtmp = tmp.toDouble(&ok);
					int count = jsonRows.count();
					QString strmeas = jsonRows[j].toString();
					if (isRead2 && jsonRows[j].toString() == "MEAS" && (tmpTest == "X" || tmpTest == "Y" || tmpTest == "DF")) {
						obj2.insert(tmpTest, tmp);
					}
					if (ok) {
						tmp = "0";
					}
				}
				jsonRows2.append(tmp);
			}
			jsonDataR.append(jsonRows2);
			//qDebug() << "读取Excel row:" << i;
		}
		obj1.insert("rows", jsonDataR);
		jsonArr1.append(obj1);
		if (isRead2) {
			jsonArr2.append(obj2);
			result.insert(obj2["name"].toString(), obj2);
		}
	}
	qDebug() << "准备关闭";
	readExcel.close();
	qDebug() << "close";
	jsonDoc1.setArray(jsonArr1);

	if (iCaseType == 2) {
		//生成U5模板
		json_u5_template = jsonDoc1;
	}
	else {
		//生产ES6模板
		json_es6_template = jsonDoc1;
	}
	jsonDoc2.setArray(jsonArr2);

	QFileInfo info(filename);
	qDebug() << info.absolutePath();
	qDebug() << info.baseName();
	QString str = info.absolutePath() + QDir::separator() + info.baseName() + "_1.json";
	QString str2 = info.absolutePath() + QDir::separator() + info.baseName() + "_2.json";
	QString str3 = info.absolutePath() + QDir::separator() + info.baseName() + "_3.xlsx";
	qDebug() << str;

	QFile fd(str);
	bl = fd.open(QIODevice::WriteOnly | QIODevice::Text);
	if (!bl) {
		QMessageBox::information(this, "错误", QString("文件写入"), QMessageBox::Ok);
		return;
	}
	//qDebug()<< jsonDoc1.toJson();
	fd.write(jsonDoc1.toJson());
	fd.close();
	fd.setFileName(str2);

	bl = fd.open(QIODevice::WriteOnly | QIODevice::Text);
	if (!bl) {
		QMessageBox::information(this, "错误", QString("文件写入"), QMessageBox::Ok);
		return;
	}
	fd.write(jsonDoc2.toJson());
	fd.close();


	/*qDebug() << "Show Widget";
	QTime t;
	t.start();
	mCoordWidget->SetShowData(jsonDoc1, result);
	mCoordWidget->show();
	long long ms = t.elapsed();
	qDebug() << "毫秒：" << ms << ",秒" << (double)ms / 1000;*/

	//QMessageBox::information(this, "信息", QString("Excel数据读入完成"), QMessageBox::Ok);

	qDebug() << "写Excel";
	ExcelOperator writeExcel;
	writeExcel.open(str3);
	QString sheetName = "";
	if (iCaseType == 2) {
		sheetName = "U5";
	}
	else {
		sheetName = "ES6";
	}
	QAxObject* pSheet = writeExcel.addSheet(sheetName);

	QList<QList<QVariant>> list;
	int excelrows = 0;
	for (int row = 0; row < jsonArr1.count(); ++row) {
		QJsonObject obj = jsonArr1[row].toObject();
		QString name = obj["name"].toString();
		QList<QVariant> rowList;
		rowList.append(name);
		list.append(rowList);
		excelrows = list.count() - 1;

		QJsonArray titleArr = obj["rows"].toArray();
		for (int i = 0; i < titleArr.count(); ++i) {
			QList<QVariant> rowList;
			QJsonArray arr = titleArr[i].toArray();
			for (int j = 0; j < arr.count(); ++j) {
				QString str = arr[j].toString();
				rowList.append(str);
				/*QAxObject* pCell = writeExcel.getCellItem(pSheet, excelrows + i, j + 1);
				writeExcel.setItemValue(pCell, QString("%1").arg(str));*/
			}
			list.append(rowList);
		}
		QList<QVariant> tmplist;
		list.append(tmplist);
		//在结果数据集中查找数据
		QJsonObject resval = result.value(name, QJsonObject());
		//row>9 计算结果		
		if (row > 8 && !resval.isEmpty()) {
			int measIndex = 5;
			QString name = resval["name"].toString();
			double x = resval["X"].toString().toDouble(&ok);
			double y = resval["Y"].toString().toDouble(&ok);
			double df = resval["DF"].toString().toDouble(&ok);
			QList<QVariant>& xlist = list[excelrows + 2];
			QList<QVariant>& ylist = list[excelrows + 3];
			QList<QVariant>& dflist = list[excelrows + 4];
			QList<QVariant>& tplist = list[excelrows + 5];
			xlist[measIndex] = x;
			ylist[measIndex] = y;
			dflist[measIndex] = df;
			//计算
			//double B61
			double df_nominal = dflist[1].toString().toDouble(&ok);
			//double C61
			double df_tol1 = dflist[2].toString().toDouble(&ok);
			//double D61
			double df_tol2 = titleArr[3].toArray()[3].toString().toDouble(&ok);
			//double C62
			double tp_tol1 = tplist[2].toString().toDouble(&ok);
			double DEV_X = x - titleArr[1].toArray()[1].toString().toDouble(&ok);
			double DEV_Y = y - titleArr[2].toArray()[1].toString().toDouble(&ok);
			double DEV_DF = df - titleArr[3].toArray()[1].toString().toDouble(&ok);
			double DF_BONUS = std::max(std::min(df, df_nominal + df_tol1) - (df_nominal + df_tol2),0.0);
			double DF_OUTTOL = DEV_DF > df_tol1 ? DEV_DF - df_tol1 : (DEV_DF < df_tol2 ? df_tol2 - DEV_DF : 0.0);
			double TP_BONUS = DF_BONUS;
			double TP_MEAS = std::sqrt(DEV_X*DEV_X + DEV_Y*DEV_Y)*2;
			double TP_DEV = TP_MEAS;
			double TP_OUTTOL = (TP_DEV - (tp_tol1 + TP_BONUS)) < 0 ? 0.0 : (TP_DEV - (tp_tol1 + TP_BONUS));
			xlist[measIndex + 1] = DEV_X;
			ylist[measIndex + 1] = DEV_Y;
			dflist[measIndex + 1] = DEV_DF;
			dflist[measIndex - 1] = DF_BONUS;
			dflist[measIndex + 2] = DF_OUTTOL;
			tplist[measIndex + 1] = TP_DEV;
			tplist[measIndex] = TP_MEAS;
			tplist[measIndex - 1] = TP_BONUS;
			tplist[measIndex + 2] = TP_OUTTOL;
		}
		
	}
	writeExcel.setRangeValues(pSheet, 1, 1, list.count() - 1, 8, list);
	writeExcel.save();
	writeExcel.close();
	QMessageBox::information(NULL, "信息", "保存完毕");
	return;
}
void Dialog::GetFileContent(QString filename, int iCaseType)
{
	if (filename.isEmpty()) {
		return ;
	}
    ExcelOperator readExcel;
	qDebug() << "打开Excel";
    bool bl = readExcel.open(filename, false);
    if (!bl) {
        readExcel.close();
        QMessageBox::information(this, "信息", "请打开Excel文件错误");
        return;
    }
	qDebug() << "选择Excel表";
    QAxObject* pWorkSheet = readExcel.getSheet(1);
    if (pWorkSheet == NULL) {
        readExcel.close();
        QMessageBox::information(this, "信息", "Excel没有找到第一个Sheet表");
        return;
    }
    int row_count = readExcel.getRowsCount(pWorkSheet);
    int col_count = readExcel.getColumnsCount(pWorkSheet);
    qDebug() << "Excel row = " << row_count << ", cols = " << col_count;

    QJsonParseError error;
	QJsonDocument jsonDoc1;
    QJsonDocument jsonDoc2;
    QJsonArray jsonArr1;
    QJsonArray jsonArr2;

	bool isRead2 = false;

	QMap<QString, QJsonObject> result;
	int sourceindex = 1;
	int resindex = 1;
	bool ok;

    for (int i = 1; i < row_count + 1; ++i) {	
		qDebug() << "读取Excel row:" << i;
		QString name = readExcel.getCell(pWorkSheet, i, 1);
        if (name.isEmpty()) {
            break;
		}
		QJsonObject obj1;
		QJsonObject obj2;
		obj1.insert("name", name);
		obj1.insert("index", sourceindex++);
		if (ui->radU5->isChecked()) {
			isRead2 = u5_vec.contains(name);
		}
		if (isRead2) {
			obj2.insert("name", name);
			obj2.insert("index", resindex++);
		}
		//title列
		++i;
		int titlecols;
		QJsonArray jsonDataR;
		QJsonArray jsonRows;
		for (titlecols = 1; titlecols < col_count + 1; ++titlecols) {
			QString val = readExcel.getCell(pWorkSheet, i, titlecols);
			if (val.isEmpty()) {
				break;
			}
			jsonRows.append(val);
		}
		//qDebug() << "读取Excel row:" << i;
		jsonDataR.append(jsonRows);
		
		while (true) {
			++i;
			QString tmpTest = readExcel.getCell(pWorkSheet, i, 1);
			if (tmpTest.isEmpty()) {
				break;
			}
			QJsonArray jsonRows2; 
			jsonRows2.append(tmpTest);
			for (int j = 2; j < titlecols; ++j) {
				QString tmp = readExcel.getCell(pWorkSheet, i, j);
				if (j > 4) {
					double dtmp = tmp.toDouble(&ok);
					int count = jsonRows.count();
					QString strmeas = jsonRows[j - 1].toString();
					if (isRead2 && jsonRows[j - 1].toString() == "MEAS" && (tmpTest == "X" || tmpTest == "Y" || tmpTest == "DF" )) {
						obj2.insert(tmpTest, tmp);
					}
					if (ok) {
						tmp = "0";
					}
				}
				jsonRows2.append(tmp);
			}
			jsonDataR.append(jsonRows2);
			//qDebug() << "读取Excel row:" << i;
		}
		obj1.insert("rows", jsonDataR);
		jsonArr1.append(obj1);
		if (isRead2) {
			jsonArr2.append(obj2);
			result.insert(obj2["name"].toString(), obj2);
		}
    }
    readExcel.close();
	jsonDoc1.setArray(jsonArr1);

	if (iCaseType == 2) {
		//生成U5模板
		json_u5_template = jsonDoc1;
	}
	else {
		//生产ES6模板
		json_es6_template = jsonDoc1;
	}
    jsonDoc2.setArray(jsonArr2);

    QFileInfo info(filename);
    qDebug() << info.absolutePath();
    qDebug() << info.baseName();
    QString str = info.absolutePath() + QDir::separator() + info.baseName() + "_1.json";
    QString str2 = info.absolutePath() + QDir::separator() + info.baseName() + "_2.json";
	QString str3 = info.absolutePath() + QDir::separator() + info.baseName() + "_3.xlsx";
    qDebug() << str;

    QFile fd(str);
    bl = fd.open(QIODevice::WriteOnly | QIODevice::Text);
    if (!bl) {
    	QMessageBox::information(this, "错误", QString("文件写入"), QMessageBox::Ok);
    	return;
    }
    //qDebug()<< jsonDoc1.toJson();
    fd.write(jsonDoc1.toJson());
    fd.close();
    fd.setFileName(str2);

    bl = fd.open(QIODevice::WriteOnly | QIODevice::Text);
    if (!bl) {
    	QMessageBox::information(this, "错误", QString("文件写入"), QMessageBox::Ok);
    	return;
    }
    fd.write(jsonDoc2.toJson());
    fd.close();


	qDebug() << "Show Widget";
	QTime t;
	t.start();
	mCoordWidget->SetShowData(jsonDoc1, result);
	mCoordWidget->show();
	long long ms = t.elapsed();
	qDebug() << "毫秒：" << ms << ",秒" << (double)ms / 1000;

    QMessageBox::information(this, "信息", QString("Excel数据读入完成"), QMessageBox::Ok);

	//qDebug() << "写Excel";
	//ExcelOperator writeExcel;
	//writeExcel.open(str3);
	//QString sheetName = "";
	//if (iCaseType == 2) {
	//	sheetName = "U5";
	//}
	//else {
	//	sheetName = "ES6";
	//}
	//QAxObject* pSheet = writeExcel.addSheet(sheetName);
	//int excelrows = 1;
	//for (int row = 0; row < jsonArr1.count(); ++row,++excelrows) {
	//	qDebug() << "写Excel row = "<< excelrows;
	//	QJsonObject obj = jsonArr1[row].toObject();
	//	QString name = obj["name"].toString();
	//	QAxObject* pCell = writeExcel.getCellItem(pSheet, excelrows, 1);
	//	writeExcel.setItemValue(pCell, QString("%1").arg(name));
	//	//写完名称空一行
	//	++excelrows;
	//			
	//	QJsonArray titleArr = obj["rows"].toArray();
	//	for (int i = 0; i < titleArr.count(); ++i) {
	//		QJsonArray arr = titleArr[i].toArray();
	//		for (int j = 0; j < arr.count(); ++j) {
	//			QString str = arr[j].toString();
	//			QAxObject* pCell = writeExcel.getCellItem(pSheet, excelrows + i, j + 1);
	//			writeExcel.setItemValue(pCell, QString("%1").arg(str));
	//		}
	//	}
	//	//在结果数据集中查找数据
	//	QJsonObject resval = result.value(name, QJsonObject());
	//	//row>9 计算结果		
	//	if (row > 8 && !resval.isEmpty()) {
	//		int measIndex = 6;
	//		QString name = resval["name"].toString();
	//		double x = resval["X"].toString().toDouble(&ok);
	//		double y = resval["Y"].toString().toDouble(&ok);
	//		double df = resval["DF"].toString().toDouble(&ok);
	//		QAxObject* pCell = writeExcel.getCellItem(pSheet, excelrows + 1, measIndex);
	//		writeExcel.setItemValue(pCell, x);
	//		pCell = writeExcel.getCellItem(pSheet, excelrows + 2, measIndex);
	//		writeExcel.setItemValue(pCell, y);
	//		pCell = writeExcel.getCellItem(pSheet, excelrows + 3, measIndex);
	//		writeExcel.setItemValue(pCell, df);
	//		//计算
	//		double B61 = titleArr[3].toArray()[1].toString().toDouble(&ok);
	//		double C61 = titleArr[3].toArray()[2].toString().toDouble(&ok);
	//		double D61 = titleArr[3].toArray()[3].toString().toDouble(&ok);
	//		double C62 = titleArr[4].toArray()[2].toString().toDouble(&ok);
	//		double DEV_X = x - titleArr[1].toArray()[1].toString().toDouble(&ok);
	//		double DEV_Y = y - titleArr[2].toArray()[1].toString().toDouble(&ok);
	//		double DEV_DF = df - titleArr[3].toArray()[1].toString().toDouble(&ok);
	//		double DF_BONUS = std::max(std::min(df, B61 + C61) - (B61 + D61),0.0);
	//		double DF_OUTTOL = DEV_DF > C61 ? DEV_DF - C61 : (DEV_DF < D61 ? D61 - DEV_DF : 0.0);
	//		double TP_BONUS = DF_BONUS;
	//		double TP_MEAS = std::sqrt(DEV_X*DEV_X + DEV_Y*DEV_Y)*2;
	//		double TP_DEV = TP_MEAS;
	//		double TP_OUTTOL = (TP_DEV - (C62 + TP_BONUS)) < 0 ? 0.0 : (TP_DEV - (C62 + TP_BONUS));
	//		pCell = writeExcel.getCellItem(pSheet, excelrows + 1, measIndex+1);
	//		writeExcel.setItemValue(pCell, DEV_X);
	//		pCell = writeExcel.getCellItem(pSheet, excelrows + 2, measIndex+1);
	//		writeExcel.setItemValue(pCell, DEV_Y);
	//		pCell = writeExcel.getCellItem(pSheet, excelrows + 3, measIndex+1);
	//		writeExcel.setItemValue(pCell, DEV_DF);
	//		pCell = writeExcel.getCellItem(pSheet, excelrows + 4, measIndex+1);
	//		writeExcel.setItemValue(pCell, TP_DEV);
	//		pCell = writeExcel.getCellItem(pSheet, excelrows + 4, measIndex);
	//		writeExcel.setItemValue(pCell, TP_MEAS);
	//		pCell = writeExcel.getCellItem(pSheet, excelrows + 4, measIndex-1);
	//		writeExcel.setItemValue(pCell, TP_BONUS);
	//		pCell = writeExcel.getCellItem(pSheet, excelrows + 3, measIndex-1);
	//		writeExcel.setItemValue(pCell, DF_BONUS);
	//		pCell = writeExcel.getCellItem(pSheet, excelrows + 3, measIndex+2);
	//		writeExcel.setItemValue(pCell, DF_OUTTOL);
	//		pCell = writeExcel.getCellItem(pSheet, excelrows + 4, measIndex+2);
	//		writeExcel.setItemValue(pCell, TP_OUTTOL);
	//	}
	//	excelrows += titleArr.count();
	//}
	//writeExcel.save();
	//writeExcel.close();
	//QMessageBox::information(NULL, "信息", "保存完毕");

    return;
}
//处理2D采图数据
void Dialog::Get2DResultExcel(QString filename, int iCaseType) {
	if (filename.isEmpty()) {
		return;
	}
	QJsonParseError error;
	QJsonDocument jsonDoc1;
	QJsonDocument jsonDoc2;
	QJsonArray jsonArr2;

	if (ui->radU5->isChecked()) {
		//生成U5模板
		jsonDoc1 = json_u5_template;
	}
	else {
		//生产ES6模板
		jsonDoc1 = json_es6_template;
	}
	if (jsonDoc1.isEmpty() || !jsonDoc1.isArray()) {
		if (iCaseType == 2) {
			QMessageBox::information(this, "信息", "请先读取U5 Excel模板");
		}
		else {
			QMessageBox::information(this, "信息", "请先读取ES6 Excel模板");
		}
		return;
	}

	ExcelOperator readExcel;
	qDebug() << "打开Excel";
	bool bl = readExcel.open(filename, false);
	if (!bl) {
		readExcel.close();
		QMessageBox::information(this, "信息", "请打开Excel文件错误");
		return;
	}
	qDebug() << "选择Excel表";
	QAxObject* pWorkSheet = readExcel.getSheet(1);
	if (pWorkSheet == NULL) {
		readExcel.close();
		QMessageBox::information(this, "信息", "Excel没有找到第一个Sheet表");
		return;
	}
	int row_count = readExcel.getRowsCount(pWorkSheet);
	int col_count = readExcel.getColumnsCount(pWorkSheet);
	qDebug() << "Excel row = " << row_count << ", cols = " << col_count;
	if (col_count < 4) {
		qDebug() << "数据错误，必须4列数据：孔名称，X，Y,DF";
		return;
	}
	QMap<QString, QJsonObject> result;
	int resindex = 1;
	bool ok;
	for (int i = 1; i < row_count + 1; ++i) {
		qDebug() << "读取Excel row:" << i;
		QString name = readExcel.getCell(pWorkSheet, i, 1);
		if (name.isEmpty()) {
			break;
		}
		QJsonObject obj2;
		obj2.insert("name", name);
		obj2.insert("index", resindex++);
		obj2.insert("X", readExcel.getCell(pWorkSheet, i, 2));
		obj2.insert("Y", readExcel.getCell(pWorkSheet, i, 3));
		obj2.insert("DF", readExcel.getCell(pWorkSheet, i, 4));
		jsonArr2.append(obj2);
		result.insert(name, obj2);
	}
	readExcel.close();
	jsonDoc2.setArray(jsonArr2);

	QFileInfo info(filename);
	qDebug() << info.absolutePath();
	qDebug() << info.baseName();
	QString str = info.absolutePath() + QDir::separator() + info.baseName() + "_4.json";
	QString str2 = info.absolutePath() + QDir::separator() + info.baseName() + "_5.json";
	QString str3 = info.absolutePath() + QDir::separator() + info.baseName() + "_6.xlsx";
	QString str4 = info.absolutePath() + QDir::separator() + info.baseName() + "_7.csv";
	qDebug() << str;

	//QFile fd(str);
	//bl = fd.open(QIODevice::WriteOnly | QIODevice::Text);
	//if (!bl) {
	//	QMessageBox::information(this, "错误", QString("文件写入"), QMessageBox::Ok);
	//	return;
	//}
	////qDebug()<< jsonDoc1.toJson();
	//fd.write(jsonDoc1.toJson());
	//fd.close();
	//fd.setFileName(str2);

	
	qDebug() << "写Excel";
	/*QByteArray csvArr;
	QTextStream strstream(&csvArr, QIODevice::ReadWrite | QIODevice::Text);*/

	std::ostringstream buffer(std::ostringstream::ate);
	buffer.precision(10);

	ExcelOperator writeExcel;
	writeExcel.open(str3);
	QString sheetName = "";
	if (iCaseType == 2) {
		sheetName = "U5";
	}
	else {
		sheetName = "ES6";
	}
	QAxObject* pSheet = writeExcel.addSheet(sheetName);
	int excelrows = 1;
	QJsonArray jsonArr1 = jsonDoc1.array();
	for (int row = 0; row < jsonArr1.count(); ++row, ++excelrows) {
		qDebug() << "写Excel row = " << excelrows;
		QJsonObject obj = jsonArr1[row].toObject();
		QString name = obj["name"].toString();
		QAxObject* pCell = writeExcel.getCellItem(pSheet, excelrows, 1);
		writeExcel.setItemValue(pCell, QString("%1").arg(name));
		//写完名称空一行
		++excelrows;

		QJsonArray titleArr = obj["rows"].toArray();
		for (int i = 0; i < titleArr.count(); ++i) {
			QJsonArray arr = titleArr[i].toArray();
			for (int j = 0; j < arr.count(); ++j) {
				QString str = arr[j].toString();
				QAxObject* pCell = writeExcel.getCellItem(pSheet, excelrows + i, j + 1);
				writeExcel.setItemValue(pCell, QString("%1").arg(str));
			}
		}
		//在结果数据集中查找数据
		QJsonObject resval = result.value(name, QJsonObject());
		//row>9 计算结果		
		if (row > 8 && !resval.isEmpty()) {
			int measIndex = 6;
			QString name = resval["name"].toString();
			double x = resval["X"].toString().toDouble(&ok);
			double y = resval["Y"].toString().toDouble(&ok);
			double df = resval["DF"].toString().toDouble(&ok);
			QAxObject* pCell = writeExcel.getCellItem(pSheet, excelrows + 1, measIndex);
			writeExcel.setItemValue(pCell, x);
			pCell = writeExcel.getCellItem(pSheet, excelrows + 2, measIndex);
			writeExcel.setItemValue(pCell, y);
			pCell = writeExcel.getCellItem(pSheet, excelrows + 3, measIndex);
			writeExcel.setItemValue(pCell, df);
			//计算
			double df_nominal = titleArr[3].toArray()[1].toString().toDouble(&ok);
			double C61 = titleArr[3].toArray()[2].toString().toDouble(&ok);
			double D61 = titleArr[3].toArray()[3].toString().toDouble(&ok);
			double C62 = titleArr[4].toArray()[2].toString().toDouble(&ok);
			double x_nominal = titleArr[1].toArray()[1].toString().toDouble(&ok);
			double y_nominal = titleArr[2].toArray()[1].toString().toDouble(&ok);

			double DEV_X = x - x_nominal;
			double DEV_Y = y - y_nominal;
			double DEV_DF = df - df_nominal;
			double DF_BONUS = std::max(std::min(df, df_nominal + C61) - (df_nominal + D61), 0.0);
			double DF_OUTTOL = DEV_DF > C61 ? DEV_DF - C61 : (DEV_DF < D61 ? D61 - DEV_DF : 0.0);
			double TP_BONUS = DF_BONUS;
			double TP_MEAS = std::sqrt(DEV_X*DEV_X + DEV_Y*DEV_Y) * 2;
			double TP_DEV = TP_MEAS;
			double TP_OUTTOL = (TP_DEV - (C62 + TP_BONUS)) < 0 ? 0.0 : (TP_DEV - (C62 + TP_BONUS));
			pCell = writeExcel.getCellItem(pSheet, excelrows + 1, measIndex + 1);
			writeExcel.setItemValue(pCell, DEV_X);
			pCell = writeExcel.getCellItem(pSheet, excelrows + 2, measIndex + 1);
			writeExcel.setItemValue(pCell, DEV_Y);
			pCell = writeExcel.getCellItem(pSheet, excelrows + 3, measIndex + 1);
			writeExcel.setItemValue(pCell, DEV_DF);
			pCell = writeExcel.getCellItem(pSheet, excelrows + 4, measIndex + 1);
			writeExcel.setItemValue(pCell, TP_DEV);
			pCell = writeExcel.getCellItem(pSheet, excelrows + 4, measIndex);
			writeExcel.setItemValue(pCell, TP_MEAS);
			pCell = writeExcel.getCellItem(pSheet, excelrows + 4, measIndex - 1);
			writeExcel.setItemValue(pCell, TP_BONUS);
			pCell = writeExcel.getCellItem(pSheet, excelrows + 3, measIndex - 1);
			writeExcel.setItemValue(pCell, DF_BONUS);
			pCell = writeExcel.getCellItem(pSheet, excelrows + 3, measIndex + 2);
			writeExcel.setItemValue(pCell, DF_OUTTOL);
			pCell = writeExcel.getCellItem(pSheet, excelrows + 4, measIndex + 2);
			writeExcel.setItemValue(pCell, TP_OUTTOL);

			//组装CSV数据
			//QByteArray nByte = name.toLocal8Bit();
			buffer << name.toStdString()<<","<< x_nominal << "," << y_nominal << "," << x << "," << y << "\n";
			//std::string sss = buffer.str();
			//strstream << name << "," << x_nominal << "," << y_nominal << "," << x << "," << y << "\n";
		}

		excelrows += titleArr.count();
	}
	writeExcel.save();
	writeExcel.close();

	QFile fdCSV(str4);
	bl = fdCSV.open(QIODevice::WriteOnly | QIODevice::Text);
	if (!bl) {
		QMessageBox::information(this, "错误", QString("CSV文件写入错误"), QMessageBox::Ok);
	}
	//QString tttt = strstream.readAll();
	//buffer.flush();
	std::string tttt = buffer.str();
	//buffer.flush();
	fdCSV.write(tttt.data());
	

	fdCSV.close();

	QMessageBox::information(NULL, "信息", "保存完毕");

	return;
}
void Dialog::on_btnOpenExcel_2_clicked() {
	QString excelPath = QFileDialog::getOpenFileName(this, "请打开Excel文件", QDir::currentPath(), "Excel文件(*.xlsx)");
	if (excelPath.isEmpty()) {
		QMessageBox::information(this, "信息", "请打开Excel文件");
		return;
	}
	qDebug() << excelPath;
	int type = 1;
	if (ui->radU5->isChecked()) {
		//生成U5模板
		type = 2;
	}
	else {
		//生产ES6模板
		type = 1;
	}
	Get2DResultExcel(excelPath, type);
}

//读取CSV文件，返回JSON文件
QString Dialog::GetCSVToJson(QString csvfile,int iCaseType) {
	QFile file(csvfile);
	if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
		return "Err";
	}
	int index = 0;
	QJsonParseError error;
	QJsonDocument jsonDocCSV;
	QJsonArray jsonArrCSV;
	while (!file.atEnd()) {
		QByteArray line = file.readLine();
		QList<QByteArray> list = line.split(',');		
		if (list.count() > 2) {
			//存在X,Y,DF的值
			QJsonObject obj;
			if (iCaseType == 2) {
				//U5
				if (index >= u5_vec.count()) {
					break;
				}
				obj.insert("name", u5_vec[index]);
			}
			else if (iCaseType == 1) {
			//ES6
			}
			obj.insert("index", index+1);
			obj.insert("X", list[0].toDouble());
			obj.insert("Y", list[1].toDouble());
			obj.insert("DF", list[2].toDouble());
			jsonArrCSV.append(obj);
		}
		index++;
	}
	file.close();
	jsonDocCSV.setArray(jsonArrCSV);
	return jsonDocCSV.toJson();
}
//读取CSV数据
void Dialog::on_btnReadCSVFile_clicked() {
	QString excelPath = QFileDialog::getOpenFileName(this, "请打开CSV文件", QDir::currentPath(), "CSV文件(*.csv)");
	if (excelPath.isEmpty()) {
		QMessageBox::information(this, "信息", "请打开CSV文件");
		return;
	}
	int type = 1;
	if (ui->radU5->isChecked()) {
		//生成U5模板
		type = 2;
	}
	else {
		//生产ES6模板
		type = 1;
	}
	QString json = GetCSVToJson(excelPath, type);
	if (json.isEmpty() || json == "Err") {
		QMessageBox::information(this, "错误", QString("JSON生成错误"), QMessageBox::Ok);
		return;
	}
	QFileInfo info(excelPath);
	QString str = info.absolutePath() + QDir::separator() + info.baseName() + "_7.json";
	qDebug() << str;

	QFile fd(str);
	bool bl = fd.open(QIODevice::WriteOnly | QIODevice::Text);
	if (!bl) {
		QMessageBox::information(this, "错误", QString("文件写入"), QMessageBox::Ok);
	}
	fd.write(json.toLocal8Bit());
	fd.close();
	QMessageBox::information(this, "成功", QString("成功"), QMessageBox::Ok);
}

////讲3坐标显示在对话框内
//void Dialog::on_btnShowCoord_clicked() {
//	/*mCoordWidget->show();
//	return;*/
//	QString filename = QFileDialog::getOpenFileName(this, "请打开EXCEL模板文件", QDir::currentPath(), "EXCEL文件(*.xlsx)");
//	if (filename.isEmpty()) {
//		QMessageBox::information(this, "信息", "请打开CSV文件");
//		return;
//	}
//	int type = 1;
//	if (ui->radU5->isChecked()) {
//		//生成U5模板
//		type = 2;
//	}
//	else {
//		//生产ES6模板
//		type = 1;
//	}
//
//	if (filename.isEmpty()) {
//		return;
//	}
//	ExcelOperator readExcel;
//	qDebug() << "打开Excel";
//	bool bl = readExcel.open(filename, false);
//	if (!bl) {
//		readExcel.close();
//		QMessageBox::information(this, "信息", "请打开Excel文件错误");
//		return;
//	}
//	//qDebug() << "选择Excel表";
//	QAxObject* pWorkSheet = readExcel.getSheet(1);
//	if (pWorkSheet == NULL) {
//		readExcel.close();
//		QMessageBox::information(this, "信息", "Excel没有找到第一个Sheet表");
//		return;
//	}
//	int row_count = readExcel.getRowsCount(pWorkSheet);
//	int col_count = readExcel.getColumnsCount(pWorkSheet);
//	qDebug() << "Excel row = " << row_count << ", cols = " << col_count;
//
//	QJsonParseError error;
//	QJsonDocument jsonDoc1;
//	//QJsonDocument jsonDoc2;
//	QJsonArray jsonArr1;
//	//QJsonArray jsonArr2;
//
//	bool isRead2 = false;
//
//	QMap<QString, QJsonObject> result;
//	int sourceindex = 1;
//	int resindex = 1;
//	bool ok;
//
//	for (int i = 1; i < row_count + 1; ++i) {
//		qDebug() << "读取Excel row:" << i;
//		QString name = readExcel.getCell(pWorkSheet, i, 1);
//		if (name.isEmpty()) {
//			break;
//		}
//		QJsonObject obj1;
//		QJsonObject obj2;
//		obj1.insert("name", name);
//		obj1.insert("index", sourceindex++);
//		if (ui->radU5->isChecked()) {
//			isRead2 = u5_vec.contains(name);
//		}
//		if (isRead2) {
//			obj2.insert("name", name);
//			obj2.insert("index", resindex++);
//		}
//		//title列
//		++i;
//		int titlecols;
//		QJsonArray jsonDataR;
//		QJsonArray jsonRows;
//		for (titlecols = 1; titlecols < col_count + 1; ++titlecols) {
//			QString val = readExcel.getCell(pWorkSheet, i, titlecols);
//			if (val.isEmpty()) {
//				break;
//			}
//			jsonRows.append(val);
//		}
//		//qDebug() << "读取Excel row:" << i;
//		jsonDataR.append(jsonRows);
//
//		while (true) {
//			++i;
//			QString tmpTest = readExcel.getCell(pWorkSheet, i, 1);
//			if (tmpTest.isEmpty()) {
//				break;
//			}
//			QJsonArray jsonRows2;
//			jsonRows2.append(tmpTest);
//			for (int j = 2; j < titlecols; ++j) {
//				QString tmp = readExcel.getCell(pWorkSheet, i, j);
//				if (j > 4) {
//					double dtmp = tmp.toDouble(&ok);
//					int count = jsonRows.count();
//					QString strmeas = jsonRows[j - 1].toString();
//					if (isRead2 && jsonRows[j - 1].toString() == "MEAS" && (tmpTest == "X" || tmpTest == "Y" || tmpTest == "DF")) {
//						obj2.insert(tmpTest, tmp);
//					}
//					if (ok) {
//						tmp = "0";
//					}
//				}
//				jsonRows2.append(tmp);
//			}
//			jsonDataR.append(jsonRows2);
//			//qDebug() << "读取Excel row:" << i;
//		}
//		obj1.insert("rows", jsonDataR);
//		jsonArr1.append(obj1);
//		if (isRead2) {
//			//jsonArr2.append(obj2);
//			result.insert(obj2["name"].toString(), obj2);
//		}
//	}
//	readExcel.close();
//	jsonDoc1.setArray(jsonArr1);
//	if (type == 2) {
//		//生成U5模板
//		json_u5_template = jsonDoc1;
//	}
//	else {
//		//生产ES6模板
//		json_es6_template = jsonDoc1;
//	}
//	//jsonDoc2.setArray(jsonArr2);
//	qDebug() << "Show Widget";
//	QTime t;
//	t.start();
//	mCoordWidget->SetShowData(jsonDoc1, result);
//	mCoordWidget->show();
//	long long ms = t.elapsed();
//	qDebug() << "毫秒：" << ms << ",秒" << (double)ms / 1000;
//	QMessageBox::information(this, "信息", QString("Excel数据读入完成"), QMessageBox::Ok);	
//}

//将模板中X，Y值保存为CSV文件
void Dialog::on_btnSaveCSV_clicked() {
	QString excelPath = QFileDialog::getOpenFileName(this, "请保存EXCEL文件", QDir::currentPath(), "EXCEL文件(*.xlsx)");
	if (excelPath.isEmpty()) {
		QMessageBox::information(this, "信息", "请打开Excel文件");
		return;
	}
	qDebug() << excelPath;
	int type = 1;
	if (ui->radU5->isChecked()) {
		//生成U5模板
		type = 2;
	}
	else {
		//生产ES6模板
		type = 1;
	}

	if (excelPath.isEmpty()) {
		return;
	}
	ExcelOperator readExcel;
	qDebug() << "打开Excel";
	bool bl = readExcel.open(excelPath, false);
	if (!bl) {
		readExcel.close();
		QMessageBox::information(this, "信息", "请打开Excel文件错误");
		return;
	}
	qDebug() << "选择Excel表";
	QAxObject* pWorkSheet = readExcel.getSheet(1);
	if (pWorkSheet == NULL) {
		readExcel.close();
		QMessageBox::information(this, "信息", "Excel没有找到第一个Sheet表");
		return;
	}
	int row_count = readExcel.getRowsCount(pWorkSheet);
	int col_count = readExcel.getColumnsCount(pWorkSheet);
	qDebug() << "Excel row = " << row_count << ", cols = " << col_count;

	QJsonParseError error;
	QJsonDocument jsonDoc1;
	QJsonDocument jsonDoc2;
	QJsonArray jsonArr1;
	QJsonArray jsonArr2;

	bool isRead2 = false;

	QMap<QString, QJsonObject> result;
	int sourceindex = 1;
	int resindex = 1;
	bool ok;

	for (int i = 1; i < row_count + 1; ++i) {
		qDebug() << "读取Excel row:" << i;
		QString name = readExcel.getCell(pWorkSheet, i, 1);
		if (name.isEmpty()) {
			break;
		}
		QJsonObject obj1;
		QJsonObject obj2;
		obj1.insert("name", name);
		obj1.insert("index", sourceindex++);
		if (ui->radU5->isChecked()) {
			isRead2 = u5_vec.contains(name);
		}
		if (isRead2) {
			obj2.insert("name", name);
			obj2.insert("index", resindex++);
		}
		//title列
		++i;
		int titlecols;
		QJsonArray jsonDataR;
		QJsonArray jsonRows;
		for (titlecols = 1; titlecols < col_count + 1; ++titlecols) {
			QString val = readExcel.getCell(pWorkSheet, i, titlecols);
			if (val.isEmpty()) {
				break;
			}
			jsonRows.append(val);
		}
		//qDebug() << "读取Excel row:" << i;
		jsonDataR.append(jsonRows);

		while (true) {
			++i;
			QString tmpTest = readExcel.getCell(pWorkSheet, i, 1);
			if (tmpTest.isEmpty()) {
				break;
			}
			QJsonArray jsonRows2;
			jsonRows2.append(tmpTest);
			for (int j = 2; j < titlecols; ++j) {
				QString tmp = readExcel.getCell(pWorkSheet, i, j);
				if (j > 4) {
					double dtmp = tmp.toDouble(&ok);
					int count = jsonRows.count();
					QString strmeas = jsonRows[j - 1].toString();
					if (isRead2 && jsonRows[j - 1].toString() == "MEAS" && (tmpTest == "X" || tmpTest == "Y" || tmpTest == "DF")) {
						obj2.insert(tmpTest, tmp);
					}
					if (ok) {
						tmp = "0";
					}
				}
				jsonRows2.append(tmp);
			}
			jsonDataR.append(jsonRows2);
			//qDebug() << "读取Excel row:" << i;
		}
		obj1.insert("rows", jsonDataR);
		jsonArr1.append(obj1);
		if (isRead2) {
			jsonArr2.append(obj2);
			result.insert(obj2["name"].toString(), obj2);
		}
	}
	readExcel.close();
	//jsonDoc1.setArray(jsonArr1);
	
	std::ostringstream buffer(std::ostringstream::ate);
	buffer.precision(10);

	
	for (int row = 0; row < jsonArr1.count(); ++row) {
		//qDebug() << "写Excel row = " << excelrows;
		QJsonObject obj = jsonArr1[row].toObject();
		QString name = obj["name"].toString();
		//写完名称空一行
		//++excelrows;

		QJsonArray titleArr = obj["rows"].toArray();
		/*for (int i = 0; i < titleArr.count(); ++i) {
			QJsonArray arr = titleArr[i].toArray();
			for (int j = 0; j < arr.count(); ++j) {
				QString str = arr[j].toString();
				QAxObject* pCell = writeExcel.getCellItem(pSheet, excelrows + i, j + 1);
				writeExcel.setItemValue(pCell, QString("%1").arg(str));
			}
		}*/
		//在结果数据集中查找数据
		QJsonObject resval = result.value(name, QJsonObject());
		//row>9 计算结果		
		if (row > 8 && !resval.isEmpty()) {
			int measIndex = 6;
			QString name = resval["name"].toString();
			double x = resval["X"].toString().toDouble(&ok);
			double y = resval["Y"].toString().toDouble(&ok);
			double df = resval["DF"].toString().toDouble(&ok);
			//计算
			double df_nominal = titleArr[3].toArray()[1].toString().toDouble(&ok);
			double C61 = titleArr[3].toArray()[2].toString().toDouble(&ok);
			double D61 = titleArr[3].toArray()[3].toString().toDouble(&ok);
			double C62 = titleArr[4].toArray()[2].toString().toDouble(&ok);
			double x_nominal = titleArr[1].toArray()[1].toString().toDouble(&ok);
			double y_nominal = titleArr[2].toArray()[1].toString().toDouble(&ok);

			double DEV_X = x - x_nominal;
			double DEV_Y = y - y_nominal;
			double DEV_DF = df - df_nominal;
			double DF_BONUS = std::max(std::min(df, df_nominal + C61) - (df_nominal + D61), 0.0);
			double DF_OUTTOL = DEV_DF > C61 ? DEV_DF - C61 : (DEV_DF < D61 ? D61 - DEV_DF : 0.0);
			double TP_BONUS = DF_BONUS;
			double TP_MEAS = std::sqrt(DEV_X*DEV_X + DEV_Y*DEV_Y) * 2;
			double TP_DEV = TP_MEAS;
			double TP_OUTTOL = (TP_DEV - (C62 + TP_BONUS)) < 0 ? 0.0 : (TP_DEV - (C62 + TP_BONUS));			
			//组装CSV数据
			buffer << name.toStdString() << "," << x_nominal << "," << y_nominal << "," << x << "," << y << "\n";
		}
	}

	QFileInfo info(excelPath);
	qDebug() << info.absolutePath();
	qDebug() << info.baseName();
	QString str4 = info.absolutePath() + QDir::separator() + info.baseName() + "_7.csv";


	QFile fdCSV(str4);
	bl = fdCSV.open(QIODevice::WriteOnly | QIODevice::Text);
	if (!bl) {
		QMessageBox::information(this, "错误", QString("CSV文件写入错误"), QMessageBox::Ok);
	}
	//QString tttt = strstream.readAll();
	//buffer.flush();
	std::string tttt = buffer.str();
	//buffer.flush();
	fdCSV.write(tttt.data());

	fdCSV.close();

	QMessageBox::information(NULL, "信息", "保存完毕");
}