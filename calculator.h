#include <QWidget>
#include "ui_calculator.h"

// Class for Calculator object which is a sub-class of QWidget. 
class Calculator : public QWidget
{
    Q_OBJECT

    public:
        Calculator();
    private slots:
        /*
        number_display_i() implements display function of related PushBotton_i visualized in hexadecimal format. 
        */
        void number_display_0();
        void number_display_1();
        void number_display_2();
        void number_display_3();
        void number_display_4();
        void number_display_5();
        void number_display_6();
        void number_display_7();
        void number_display_8();
        void number_display_9();
        void number_display_10();
        void number_display_11();
        void number_display_12();
        void number_display_13();
        void number_display_14();
        void number_display_15();
        
        void clear_display(); // Slot function to clear display.    
        void add_display();   // Slot function to trigger adding operation.
        void minus_display(); // Slot function to trigger subtraction operation.
        void equal_display(); // Slot function to equals operation.

    private:
        Ui::Form ui;          // UI object from QT Designer.

        /*
        Storage for operator given by user.
         1 -> +
        -1 -> -
         0 -> null 
        -2 -> =
        */
        int current_operator; 

        int operand;          // Storage for number calculated.
        int current_number;   // Storage for number given by user.
};

















