#include "backendeditor.h"
#include "backendeditorconstants.h"
#include "modebackend.h"

#include <coreplugin/icore.h>
#include <coreplugin/icontext.h>
#include <coreplugin/actionmanager/actionmanager.h>
#include <coreplugin/actionmanager/command.h>
#include <coreplugin/actionmanager/actioncontainer.h>
#include <coreplugin/coreconstants.h>

#include <QAction>
#include <QMessageBox>
#include <QMainWindow>
#include <QMenu>

namespace BackendEditor {
namespace Internal {

BackendEditorPlugin::BackendEditorPlugin()
{
    // Create your members
}

BackendEditorPlugin::~BackendEditorPlugin()
{
    // Unregister objects from the plugin manager's object pool
    // Delete members
}

bool BackendEditorPlugin::initialize(const QStringList &arguments, QString *errorString)
{
    // Register objects in the plugin manager's object pool
    // Load settings
    // Add actions to menus
    // Connect to other plugins' signals
    // In the initialize function, a plugin can be sure that the plugins it
    // depends on have initialized their members.

    Q_UNUSED(arguments)
    Q_UNUSED(errorString)

//    auto action = new QAction(tr("backendEditor Action"), this);
//    Core::Command *cmd = Core::ActionManager::registerAction(action, Constants::ACTION_ID,
//                                                             Core::Context(Core::Constants::C_GLOBAL));
//    cmd->setDefaultKeySequence(QKeySequence(tr("Ctrl+Alt+Meta+A")));
//    connect(action, &QAction::triggered, this, &backendEditorPlugin::triggerAction);

//    Core::ActionContainer *menu = Core::ActionManager::createMenu(Constants::MENU_ID);
//    menu->menu()->setTitle(tr("backendEditor"));
//    menu->addAction(cmd);
//    Core::ActionManager::actionContainer(Core::Constants::M_TOOLS)->addMenu(menu);

    ModeBackend *pMode = new ModeBackend(this);
    Q_UNUSED(pMode)
    return true;
}

void BackendEditorPlugin::extensionsInitialized()
{
    // Retrieve objects from the plugin manager's object pool
    // In the extensionsInitialized function, a plugin can be sure that all
    // plugins that depend on it are completely initialized.
}

ExtensionSystem::IPlugin::ShutdownFlag BackendEditorPlugin::aboutToShutdown()
{
    // Save settings
    // Disconnect from signals that are not needed during shutdown
    // Hide UI (if you add UI that is not in the main window directly)
    return SynchronousShutdown;
}

void BackendEditorPlugin::triggerAction()
{
    QMessageBox::information(Core::ICore::mainWindow(),
                             tr("Action Triggered"),
                             tr("This is an action from backendEditor."));
}

} // namespace Internal
} // namespace BackendEditor
