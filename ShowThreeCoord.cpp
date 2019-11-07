#include "ShowThreeCoord.h"
#include <QDebug>
ShowThreeCoord::ShowThreeCoord(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	vLayout = dynamic_cast<QVBoxLayout*>(ui.scrollArea->widget()->layout());
	ui.scrollArea->setWidgetResizable(true);
	for (int i = 0; i < 328; ++i) {
		ThreeCoordTag* tagWidget = new ThreeCoordTag(this);
		vLayout->addWidget(tagWidget);
		mListTag.append(tagWidget);
	}
}

ShowThreeCoord::~ShowThreeCoord()
{
}
void ShowThreeCoord::SetShowData(QJsonDocument temp, QMap<QString, QJsonObject> value) {
	mTemplet = temp;
	QJsonArray tmparr = temp.array();
	mValue = value;
	int widgetcount = mListTag.count();
	int tempcount = tmparr.count();
	if (widgetcount < tempcount) {
		int diffcount = tempcount - widgetcount;
		for (int i = 0; i < diffcount; ++i) {
			ThreeCoordTag* tagWidget = new ThreeCoordTag(this);
			vLayout->addWidget(tagWidget);
			mListTag.append(tagWidget);
		}
	}
	else if (widgetcount > tempcount) {
		for (int i = tempcount; i < widgetcount; ++i) {
			mListTag[i]->hide();
		}
	}
	for (int i = 0; i < tempcount; ++i) {
		mListTag[i]->show();
	}
	qDebug() << "Widget Count";
	//遍历输入数据
	for (int i = 0; i < tempcount; ++i) {
		QJsonObject obj = tmparr[i].toObject();
		QString name = obj["name"].toString();
		/*if (name == "FAI-6-1") {
			int a = 0;
		}*/
		mListTag[i]->SetHoldTag(obj, mValue[name]);
	}

	
	this->show();
}