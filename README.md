# Qt-App-FindCrap
<br />
A **Qt Widgets Application** to search, highlight and point the cursor to words requested by user.<br />
Motivated by : C++ GUI Qt Tutorials with Bucky [thenewboston]

The application basically creates a UI. Furthermore, functionalties are implemented for getting the text file and adding push button click events.

UI
------------
 
 * Consists of a Text Edit Area (**QTextEdit**), **QLabels**, **QLineEdits** and **QPushButtons**.
 * Text Edit Area includes the text file which is imported as a **Qt Resource File**.
 
Functions
------------

There are basically two functions.

 * **getTextFile** : 
          Creates a **QFile** for reading from a file which we need to work with.
          Opens that file, so we can use it.
          Converts the text in the file into a stream and store them in a **QString** variable.
          Closes the file.
          Displays the text in the file on the Text Edit Area of the UI.
          Moves the cursor into a place so that whenever the user searches for the next term, they can see where the words they are looking for.
          
 * **goButton_clicked** : 
          Takes the word user is searching for and store it as a **QString**.
          Finds the next occurence of that word, basically takes the cursor and moves it to the word if it appears in the Text Edit Area.
          
