//
// Created by akruglov on 12/11/20.
//

// You may need to build the project (run Qt uic code generator) to get "ui_intercom_flasher.h" resolved

#include "intercom_flasher.h"
#include "ui_intercom_flasher.h"

IntercomFlasher::IntercomFlasher(QWidget *parent) :
    QWidget(parent), ui(new Ui::IntercomFlasher) {
    ui->setupUi(this);
}

IntercomFlasher::~IntercomFlasher() {
    delete ui;
}
