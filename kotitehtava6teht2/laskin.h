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
    int num = 0;
    float result = 1;
    float num1 = 0;
    float num2 = 0;
    int special;
    int nub = 0;

private slots:
    void AddNum(const QString &digit);

    void on_num1_clicked();

    void on_num2_clicked();

    void on_num3_clicked();

    void on_num4_clicked();

    void on_num5_clicked();

    void on_num6_clicked();

    void on_num7_clicked();

    void on_num8_clicked();

    void on_num9_clicked();

    void on_num0_clicked();

    void on_clear_clicked();

    void on_enter_clicked();

    void on_plus_clicked();

    void on_min_clicked();

    void on_kerto_clicked();

    void on_jako_clicked();

private:
    Ui::laskin *ui;
};
#endif // LASKIN_H
