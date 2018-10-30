#include "mainview.h"
#include "ui_mainview.h"
#include "View/setuptab.h"

namespace Ps {


    MainView::MainView(QWidget *parent) :
        QMainWindow(parent),
        ui(new Ui::MainView)
    {
        ui->setupUi(this);

        auto setup_tag = new SetupTab(this);
        ui->loSetupTab->addWidget(setup_tag);

    }

    MainView::~MainView()
    {
        delete ui;
    }
}
