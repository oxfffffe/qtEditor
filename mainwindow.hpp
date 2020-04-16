#ifndef MAINWINDOW_HPP
#define MAINWINDOW_HPP

#include <QMainWindow>
#include <QShortcut>
#include <QClipboard>
#include <QFile>
#include <QFileDialog>
#include <QTextEdit>
#include <QTextBrowser>
#include <QTextStream>
#include <QMessageBox>
#include <QDataStream>
#include <QFontDialog>
#include <QSyntaxHighlighter>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow {

Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);

    ~MainWindow() override;

    void shortcuts();

private slots:

    void appearance(QString fileName);

    void setColorSchemeLight();

    void setColorSchemeDark();

    void setColorSchemeSolarized();

    void setCurrentFont();

    void saveFile();

    void openFile();

    void checkOpenFile();

    void newFile();

    void checkNewFile();

    void closeFile();

private:
    Ui::MainWindow *ui{};
    QShortcut *CtrlQ{}; //exit
    QShortcut *CtrlS{}; //save
    QShortcut *CtrlN{}; //new file
    QShortcut *CtrlO{}; //open
};


#endif // MAINWINDOW_HPP