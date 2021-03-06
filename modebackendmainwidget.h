#ifndef MODEBACKENDMAINWIDGET_H
#define MODEBACKENDMAINWIDGET_H

#include <QDialog>

namespace Ui {
class ModeBackendMainWidget;
}// namespace Ui

namespace BackendEditor {
namespace Internal {

class ModeBackendMainWidget : public QDialog
{
    Q_OBJECT

public:
    explicit ModeBackendMainWidget(QWidget *parent = nullptr);
    ~ModeBackendMainWidget();

private:
    Ui::ModeBackendMainWidget *ui;
};

} // namespace Internal
} // namespace BackendEditor

#endif // MODEBACKENDMAINWIDGET_H
