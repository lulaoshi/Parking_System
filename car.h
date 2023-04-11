#ifndef CAR_H
#define CAR_H

#include <QWidget>
#include "mysql.h"
#include <QDateTime>
#include <QRegExp>
#include <QRegularExpression>
#include <QDateTimeEdit>
#include <QTimer>
namespace Ui {
class Car;
}

class Car : public QWidget
{
    Q_OBJECT

public:
    explicit Car(QWidget *parent = nullptr);
    ~Car();
    //切换函数
    void SwitchPage();
    //检查输入的车牌号是否合规
    bool checkPlateNumber(QString);
    //时间计费函数
    int fee_charge(QDateTime,QDateTime,QString);
    //设置函数输出到Qtable widget中数据，传入参数数据库对象
    void print_widget(QSqlQuery q,int i);

private slots:

    //初始化停车场数据
    //初始化停车场数据

    //点击用户管理页面
    void on_CtrolButton_clicked();
    //点击修改用户信息
    void on_ButtonModify_clicked();

    void on_ButtonADD_clicked();

    void on_ButtonDelete_clicked();

    void on_submitCar_clicked();

    void on_messageButton_clicked();

    //void on_MainButton_clicked();

    //创建饼图
    //void create_pie();

    //创建车位展示
    void park_num();

    void on_DeleteCar_clicked();





    void on_Carcheck_clicked();

    void on_Car_delete_clicked();

private:
    Ui::Car *ui;
};

#endif // CAR_H
