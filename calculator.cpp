#include <QWidget>
#include "calculator.h"

/*
Class where connections and slots are implemented.
*/
Calculator::Calculator() : QWidget() {
    ui.setupUi(this);
    connect(ui.pushButton_0, SIGNAL(clicked()), this, SLOT(number_display_0()));
    connect(ui.pushButton_1, SIGNAL(clicked()), this, SLOT(number_display_1()));
    connect(ui.pushButton_2, SIGNAL(clicked()), this, SLOT(number_display_2()));
    connect(ui.pushButton_3, SIGNAL(clicked()), this, SLOT(number_display_3()));
    connect(ui.pushButton_4, SIGNAL(clicked()), this, SLOT(number_display_4()));
    connect(ui.pushButton_5, SIGNAL(clicked()), this, SLOT(number_display_5()));
    connect(ui.pushButton_6, SIGNAL(clicked()), this, SLOT(number_display_6()));
    connect(ui.pushButton_7, SIGNAL(clicked()), this, SLOT(number_display_7()));
    connect(ui.pushButton_8, SIGNAL(clicked()), this, SLOT(number_display_8()));
    connect(ui.pushButton_9, SIGNAL(clicked()), this, SLOT(number_display_9()));
    connect(ui.pushButton_A, SIGNAL(clicked()), this, SLOT(number_display_10()));
    connect(ui.pushButton_B, SIGNAL(clicked()), this, SLOT(number_display_11()));
    connect(ui.pushButton_C, SIGNAL(clicked()), this, SLOT(number_display_12()));
    connect(ui.pushButton_D, SIGNAL(clicked()), this, SLOT(number_display_13()));
    connect(ui.pushButton_E, SIGNAL(clicked()), this, SLOT(number_display_14()));
    connect(ui.pushButton_F, SIGNAL(clicked()), this, SLOT(number_display_15()));
    connect(ui.pushButton_clear, SIGNAL(clicked()), this, SLOT(clear_display()));
    connect(ui.pushButton_plus, SIGNAL(clicked()), this, SLOT(add_display()));
    connect(ui.pushButton_minus, SIGNAL(clicked()), this, SLOT(minus_display()));
    connect(ui.pushButton_equals, SIGNAL(clicked()), this, SLOT(equal_display()));
    current_number = 0;
    current_operator = 0;
    operand = 0;
    ui.LCDdisplay -> setHexMode();
}

/*
number_display_i() 

Gets the current number's value, multiplies by 16 to shift left and adds i, given by the user.

NOTE:   If operator equal sign is given before pushing buttons; 
        operand, current operator and current number are reset to zero, 
        in order to reflect initialization of a new calculation.   
*/
void Calculator::number_display_0() {
    if (current_operator == -2) {
        current_number = 0;
        current_operator = 0;
        operand = 0;
    }
    current_number = (current_number * 16) + 0;
    ui.LCDdisplay -> display(current_number);
}
void Calculator::number_display_1() {
    if (current_operator == -2) {
        current_number = 0;
        current_operator = 0;
        operand = 0;
    }
    current_number = (current_number * 16) + 1;
    ui.LCDdisplay -> display(current_number);
}
void Calculator::number_display_2() {
    if (current_operator == -2) {
        current_number = 0;
        current_operator = 0;
        operand = 0;
    }
    current_number = (current_number * 16) + 2;
    ui.LCDdisplay -> display(current_number);
}
void Calculator::number_display_3() {
    if (current_operator == -2) {
        current_number = 0;
        current_operator = 0;
        operand = 0;
    }
    current_number = (current_number * 16) + 3;
    ui.LCDdisplay -> display(current_number);
}
void Calculator::number_display_4() {
    if (current_operator == -2) {
        current_number = 0;
        current_operator = 0;
        operand = 0;
    }
    current_number = (current_number * 16) + 4;
    ui.LCDdisplay -> display(current_number);
}
void Calculator::number_display_5() {
    if (current_operator == -2) {
        current_number = 0;
        current_operator = 0;
        operand = 0;
    }
    current_number = (current_number * 16) + 5;
    ui.LCDdisplay -> display(current_number);
}
void Calculator::number_display_6() {
    if (current_operator == -2) {
        current_number = 0;
        current_operator = 0;
        operand = 0;
    }
    current_number = (current_number * 16) + 6;
    ui.LCDdisplay -> display(current_number);
}
void Calculator::number_display_7() {
    if (current_operator == -2) {
        current_number = 0;
        current_operator = 0;
        operand = 0;
    }
    current_number = (current_number * 16) + 7;
    ui.LCDdisplay -> display(current_number);
}
void Calculator::number_display_8() {
    if (current_operator == -2) {
        current_number = 0;
        current_operator = 0;
        operand = 0;
    }
    current_number = (current_number * 16) + 8;
    ui.LCDdisplay -> display(current_number);
}
void Calculator::number_display_9() {
    if (current_operator == -2) {
        current_number = 0;
        current_operator = 0;
        operand = 0;
    }
    current_number = (current_number * 16) + 9;
    ui.LCDdisplay -> display(current_number);
}
void Calculator::number_display_10() {
    if (current_operator == -2) {
        current_number = 0;
        current_operator = 0;
        operand = 0;
    }
    current_number = (current_number * 16) + 10;
    ui.LCDdisplay -> display(current_number);
}
void Calculator::number_display_11() {
    if (current_operator == -2) {
        current_number = 0;
        current_operator = 0;
        operand = 0;
    }
    current_number = (current_number * 16) + 11;
    ui.LCDdisplay -> display(current_number);
}
void Calculator::number_display_12() {
    if (current_operator == -2) {
        current_number = 0;
        current_operator = 0;
        operand = 0;
    }
    current_number = (current_number * 16) + 12;
    ui.LCDdisplay -> display(current_number);
}
void Calculator::number_display_13() {
    if (current_operator == -2) {
        current_number = 0;
        current_operator = 0;
        operand = 0;
    }
    current_number = (current_number * 16) + 13;
    ui.LCDdisplay -> display(current_number);
}
void Calculator::number_display_14() {
    if (current_operator == -2) {
        current_number = 0;
        current_operator = 0;
        operand = 0;
    }
    current_number = (current_number * 16) + 14;
    ui.LCDdisplay -> display(current_number);
}
void Calculator::number_display_15() {
    if (current_operator == -2) {
        current_number = 0;
        current_operator = 0;
        operand = 0;
    }
    current_number = (current_number * 16) + 15;
    ui.LCDdisplay -> display(current_number);
}


/*
    Clears the display by refreshing all the data stored in:
        int current_number;
        int current_operator;
        int operand;
 
*/
void Calculator::clear_display() {
    current_number = 0;
    current_operator = 0;
    operand = 0;
    ui.LCDdisplay -> display(current_number);
}
/*
    If <current_operator> is not null, calculates the operation stored in <current_operator> 
        with the operands <current_num> and <operand>.
    Else if <current_operator> is null stores the value of <current_number> on <operand>.
    
    Updates the <current_operator> with plus sign and resets <current_number>.

    NOTE: Result of the calculation is reflected on <operand>.  
*/
void Calculator::add_display() {
    if (current_operator) {
        if (current_operator == 1) {
            operand = current_number + operand;
            current_number = 0;
            current_operator = 1;
        }else if (current_operator == -1) {
            operand = operand - current_number;
            current_number = 0;
            current_operator = 1;
        }else {
            current_operator = 1;
        }
    }else {
        operand = current_number;
        current_number = 0;
        current_operator = 1;
    }
    ui.LCDdisplay -> display(operand);
}

/*
    If <current_operator> is not null, calculates the operation stored in <current_operator> with the operands <current_num> and <operand>.
    Else if <current_operator> is null stores the value of <current_number> on <operand>.
    
    Updates the <current_operator> with minus sign and resets <current_number>.

    NOTE: Result of the calculation is reflected on <operand>.  
*/
void Calculator::minus_display() {
    if (current_operator) {
        if (current_operator == 1) {
            operand = current_number + operand;
            current_number = 0;
            current_operator = -1;
        }else if (current_operator == -1) {
            operand = operand - current_number;
            current_number = 0;
            current_operator = -1;
        } else {
            current_operator = -1;
        }
    }else {
        operand = current_number;
        current_number = 0;
        current_operator = -1;
    }
    ui.LCDdisplay -> display(operand);
}

/*
    If <current_operator> is not null, calculates the operation stored in <current_operator> with the operands <current_num> and <operand>.
    Else if <current_operator> is null stores the value of <current_number> on <operand>.
    
    Updates the <current_operator> with equal sign and resets <current_number>.

    NOTE: Result of the calculation is reflected on <operand>.  
*/
void Calculator::equal_display() {
    if (current_operator) {
        if (current_operator == 1) {
            operand = current_number + operand;
            current_number = 0;
            current_operator = -2;
        }else if (current_operator == -1) {
            operand = operand - current_number;
            current_number = 0;
            current_operator = -2;
        } else {
            current_operator = -2;
        }
    }else {
        operand = current_number;
        current_number = 0;
        current_operator = -2;
    }
    ui.LCDdisplay -> display(operand);
}





























