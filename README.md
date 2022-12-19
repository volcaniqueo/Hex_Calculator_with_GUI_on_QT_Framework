# Hex_Calculator_with_GUI_on_QT_Framework
This project was my 3rd Homework for the course CMPE 230 (Systems Programming) at Bogazici University.
## About the Project
The project was about implementing simple hexadecimal calculator with graphical user interface on QT framework. A sample example can be found in the description file. Also our approach can be found in the documentation file.

Important Remark: I consider the implementation to be really bad, since we did not used any generalization for number buttons and simply defined all the connections and their respective functions seperately. Since the number buttons basically equivalent in terms of the usage, the implementation involving generic terms would be a much better implementation. Because this is just a design issue and would not change the correctness of the program, and we have some strict timing issues with the project, we could not follow good programming practices in this project.
## To Run the Code
One should install QT to run the project. Installation is pretty starightforward with sudo/brew. An example formulae of the brew as follows:
```brew install qt```

Now, move onto the directory where the regarding files in, with the command:
```cd calculator_volcaniqueo```

Then run qmake in 'project' mode with the command:
```qmake -project```

Now, add the line ```QT += widgets``` to the .pro file (calculator_volcaniqueo.pro) that the preceding commmand had created.

Then run the command:
```qmake volcaniqueo.pro``` to create the final make file.

Finally run:
```make``` to have the executable application.

You can simply click to the application to run or if you want to run via terminal, run the command:
```./calculator_volcaniqueo.app``` (Make sure you have a permisson to do that.)
