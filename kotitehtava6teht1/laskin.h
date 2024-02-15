#ifndef LASKIN_H
#define LASKIN_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class laskin; }
QT_END_NAMESPACE

class laskin : public QMainWindow
{
    Q_OBJECT

public:
    laskin(QWidget *parent = nullptr);
    ~laskin();
    int numero = 1;

private slots:
    void on_count_clicked();

    void on_reset_clicked();

private:
    Ui::laskin *ui;
};
#endif // LASKIN_H
