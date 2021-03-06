#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "pageditemmodel.h"

#include <memory>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
Q_OBJECT

public:
  explicit MainWindow(QWidget *parent = nullptr);
  ~MainWindow();


public slots:
  //void onCheckboxChanged(const int state);

  //void onPersonsPageChanged(const QVariant& val);

  void onMapperIndexChanged(int row);

private:
  Ui::MainWindow *m_ui;
  std::shared_ptr<PagedItemMapper> m_pagedItemMapper;
};

#endif // MAINWINDOW_H
