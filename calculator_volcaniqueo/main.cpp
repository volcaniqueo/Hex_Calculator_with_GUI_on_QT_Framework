#include <QApplication>
#include "calculator.h"

// Main function initiates the app and triggers the execution.
int main(int argc, char* argv[]) {
    QApplication app(argc, argv);
    Calculator calc;
    calc.show();
    return app.exec();
}
































