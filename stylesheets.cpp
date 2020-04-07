#include "mainwindow.h"
#include "ui_mainwindow.h"

void MainWindow::setColorSchemeLight() {

    ui->TextEdit->setStyleSheet     ("background-color: #ffffff;"
                                    "color: #000000;");
    ui->menuBar->setStyleSheet      ("background-color: #f0f0f0;"
                                    "color: #000000;"
                                    "border-color: #000000");
    ui->statusBar->setStyleSheet        ("background-color: #f0f0f0;"
                                    "color: #000000;"
                                    "border-color: #000000");
}

void MainWindow::setColorSchemeDark() {

    ui->TextEdit->setStyleSheet     ("background-color: #2e3436;"
                                    "color: #dadada;");
    ui->menuBar->setStyleSheet      ("background-color: #222425;"
                                    "color: #dadada;"
                                    "border-color: #ffffff;"
                                    );
    ui->statusBar->setStyleSheet    ("background-color: #222425;"
                                    "color: #839496;"
                                    "border-color: #ffffff;"
                                    );
}

void MainWindow::setColorSchemeSolarized() {

    ui->TextEdit->setStyleSheet     ("background-color: #002b36;"
                                    "color: #839496;");
    ui->menuBar->setStyleSheet      ("background-color: #001c24;"
                                    "color: #839496;"
                                    "border-color: #ffffff;"
                                    );
    ui->statusBar->setStyleSheet    ("background-color: #001c24;"
                                    "color: #839496;"
                                    "border-color: #ffffff;"
                                    );
}
