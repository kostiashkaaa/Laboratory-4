#include <QApplication>
#include "mainwindow.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    
    app.setStyle("Fusion");
    
    app.setApplicationName("ATC System");
    app.setApplicationVersion("1.0");
    app.setOrganizationName("Lab4");
    
    MainWindow window;
    window.show();
    
    return app.exec();
}
