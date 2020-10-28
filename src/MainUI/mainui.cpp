#include "mainui.h"

#include <QDebug>

#include "./ui_mainui.h"
#include "TheHalconScript.h"
using namespace HalconCpp;

MainUI::MainUI(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainUI) {
  ui->setupUi(this);
  HalconScript::SetResourcePath("script");
}

MainUI::~MainUI() { delete ui; }

void MainUI::on_btnClicked_clicked() {
  auto text{ui->lineEdit->text()};
  HTuple area;
  HalconScript::test(&text.toStdString()[0], &area);
  qDebug() << *area.ToDArr();
}
