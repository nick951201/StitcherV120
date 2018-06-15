﻿#ifndef SETTING_H
#define SETTING_H

#include <QDialog>
#include <QMap>
namespace Ui {
class setting;
}

class setting : public QDialog
{
    Q_OBJECT

public:
    explicit setting(QWidget *parent = 0);
    ~setting();

    QString getArgumentStr() const;

private slots:
    void on_applyButton_clicked();

    void on_okButton_clicked();

    void on_cancelButton_clicked();



private:
    Ui::setting *ui;
    QMap<QString, QString> arguments;
    QString argumentStr;

    void updateArguments();

};

#endif // SETTING_H
