#ifndef SHAKKIKELLO_H
#define SHAKKIKELLO_H

#include <QMainWindow>
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui { class shakkikello; }
QT_END_NAMESPACE

class shakkikello : public QMainWindow
{
    Q_OBJECT

public:
    shakkikello(QWidget *parent = nullptr);
    ~shakkikello();
    int player1RemainingTime;
    int player2RemainingTime;


private slots:

    void updateProgressBar();

    void setGameInfoText(QString);

    void on_start_clicked();

    void on_stop_clicked();

    void on_sec_clicked();

    void on_min_clicked();

    void on_switchToPlayer1_clicked();

    void on_switchToPlayer2_clicked();

    void on_progressBar_valueChanged(int value);

private:
    Ui::shakkikello *ui;
    int player1Time;
    int player2Time;
    QTimer *  player1Timer;
    QTimer *  player2Timer;
    QTimer * progressUpdateTimer;




};
#endif // SHAKKIKELLO_H
