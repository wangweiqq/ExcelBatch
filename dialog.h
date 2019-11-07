#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QVector>
#include <string>
#include <QStandardItemModel>
#include <QItemSelectionModel>
#include "ShowThreeCoord.h"
using namespace std;
namespace Ui {
class Dialog;
}
//蔚来（ES6）类型1，爱驰（U5）类型2
class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();
    //bool xlsReader(QString excelPath,vector<string> &stuNames);
	void GetFileBatchContent(QString filename, int iCaseType);
	//处理3坐标模板
    void GetFileContent(QString filename, int iCaseType);
	//处理2D采图数据
	void Get2DResultExcel(QString filename, int iCaseType);
	//读取CSV文件，返回JSON文件
	QString GetCSVToJson(QString csvfile, int iCaseType);
public slots:
    void on_btnOpenExcel_clicked();
	void on_btnOpenExcel_2_clicked();
	void on_btnReadCSVFile_clicked();
	////讲3坐标显示在对话框内
	//void on_btnShowCoord_clicked();
	//将模板中X，Y值保存为CSV文件
	void on_btnSaveCSV_clicked();	
private:
    Ui::Dialog *ui;
	ShowThreeCoord* mCoordWidget;
};

#endif // DIALOG_H
