#include "shakkikello.h"
#include "ui_shakkikello.h"

shakkikello::shakkikello(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::shakkikello)
{
    ui->setupUi(this);

    ui->progressBar->setMaximum(100);
    ui->progressBar->setMinimum(0);

    ui->progressBar_2->setMaximum(100);
    ui->progressBar_2->setMinimum(0);

    player1Timer = new QTimer(this);
    player1Timer->setSingleShot(false);

    player2Timer = new QTimer(this);
    player2Timer->setSingleShot(false);
}

shakkikello::~shakkikello()
{
    delete ui;
}

void shakkikello::updateProgressBar()
{
    if (player1Timer->isActive())
    {
        player1RemainingTime = player1Timer->remainingTime();
        double player1Percentage = static_cast<double>(player1RemainingTime) / player1Time *100.0;
        ui->progressBar->setValue(static_cast<int>(player1Percentage));
    }
    if (player2Timer->isActive())
    {
        player2RemainingTime = player2Timer->remainingTime();
        double player2Percentage = static_cast<double>(player2RemainingTime) / player2Time *100.0;
        ui->progressBar_2->setValue(static_cast<int>(player2Percentage));
    }
    if(ui->progressBar->value() == 0){
        setGameInfoText("Player 2 won!");
        player1Timer->stop();
        player2Timer->stop();
        progressUpdateTimer->stop();
        QTimer::singleShot(2000, this, [this](){
            setGameInfoText("new game via start button");
        });
    }
if(ui->progressBar_2->value() == 0){
        setGameInfoText("Player 1 won!");
        player1Timer->stop();
        player2Timer->stop();
        progressUpdateTimer->stop();
        QTimer::singleShot(2000, this, [this](){
            setGameInfoText("new game via start button");
        });
    }
}




void shakkikello::on_start_clicked()
{
    ui->progressBar->setValue(100);
    ui->progressBar_2->setValue(100);

    setGameInfoText("game ongoing");

    player1Timer->start(player1Time);

    progressUpdateTimer = new QTimer(this);
    connect(progressUpdateTimer, &QTimer::timeout, this, &shakkikello::updateProgressBar);
    progressUpdateTimer->start(100);
}


void shakkikello::on_stop_clicked()
{
    setGameInfoText("new game via start button");
    player1Timer->stop();
    player2Timer->stop();
    progressUpdateTimer->stop();
}


void shakkikello::on_sec_clicked()
{
setGameInfoText("ready to play!");
    player1Time = 120000;
    player2Time = 120000;

    player2RemainingTime = 120000;

    player1Timer->setInterval(player1Time);
    player2Timer->setInterval(player2Time);


}


void shakkikello::on_min_clicked()
{
    setGameInfoText("ready to play!");
    player1Time = 300000;
    player2Time = 300000;

    player2RemainingTime = 300000;

    player1Timer->setInterval(player1Time);
    player2Timer->setInterval(player2Time);
}


void shakkikello::on_switchToPlayer1_clicked()
{
    player1Timer->stop();
    player2Timer->start(player2RemainingTime);
    updateProgressBar();
}


void shakkikello::on_switchToPlayer2_clicked()
{
    player2Timer->stop();
    player1Timer->start(player1RemainingTime);
    updateProgressBar();
}

void shakkikello::setGameInfoText(QString a)
{
    short b = 19;
    QFont font;
    font.setPointSize(b);
    ui->label->setFont(font);
    ui->label->setText(a);
}





