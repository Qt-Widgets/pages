#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "pageditemmodel.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
Q_OBJECT

public:
explicit MainWindow(QWidget *parent = nullptr);
~MainWindow();

private:
Ui::MainWindow *ui;
ItemListModel* m_itemListModel;
};

#endif // MAINWINDOW_H
