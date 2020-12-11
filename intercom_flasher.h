//
// Created by akruglov on 12/11/20.
//

#ifndef INTERCOM_FLASHER_INTERCOM_FLASHER_H
#define INTERCOM_FLASHER_INTERCOM_FLASHER_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class IntercomFlasher; }
QT_END_NAMESPACE

class IntercomFlasher : public QWidget {
Q_OBJECT

public:
    explicit IntercomFlasher(QWidget *parent = nullptr);

    ~IntercomFlasher() override;

private:
    Ui::IntercomFlasher *ui;
};

#endif //INTERCOM_FLASHER_INTERCOM_FLASHER_H
