﻿#ifndef MAINUI_H
#define MAINUI_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainUI;
}
QT_END_NAMESPACE

class MainUI : public QMainWindow {
  Q_OBJECT

 public:
  MainUI(QWidget *parent = nullptr);
  ~MainUI();

 private slots:
  void on_btnClicked_clicked();

 private:
  Ui::MainUI *ui;
};
#endif  // MAINUI_H
