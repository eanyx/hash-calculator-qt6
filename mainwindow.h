#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow() override;

private slots:
    void on_filePushButton_clicked();

    void on_filehashButton_clicked();

    void on_md5_radioButton_clicked();

    void on_sha1RadioButton_clicked();

    void on_sha2224RadioButton_clicked();

    void on_sha2256RadioButton_clicked();

    void on_sha2384RadioButton_clicked();

    void on_sha212RadioButton_clicked();

    void on_sha3_224RadioButton_clicked();

    void on_sha3_256RadioButton_clicked();

    void on_sha3_384RadioButton_clicked();

    void on_sha3_512RadioButton_clicked();

    void on_keccak512_RadioButton_clicked();

    void on_cancelPushButton_clicked();

    void on_onComparePushButton_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
