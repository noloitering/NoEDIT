# Install
NoEDIT is a command line tool that converts properly formatted JSON files into an actual functioning window. This guide will explain how to install, compile, and run NoEDIT on your computer. It assumes that the reader has 0 prior software development experience. If the prerequisites listed below are already installed on the system you can go ahead and skip to step number 8.<br/>
NoEDIT comes with 2 dependencies bundled within: [raylib](https://github.com/raysan5/raylib), and [rapidjson](https://github.com/Tencent/rapidjson). They are included in `NoEDIT/include` and `NoPARSE/include`. Raylib must be compiled in order for NoEDIT to work. If you already have raylib compiled on your system you can change the path on [line 40 of the makefile](https://github.com/noloitering/NoEDIT/blob/main/build/makefile#L40) and skip steps 9-10 (you will probably want to skip the recursive flag to the clone command in step 8 as well).
## Prerequisites
1. [Git](https://git-scm.com/)
2. [GCC](https://www.mingw-w64.org/)
## Windows
1. [Download Git](https://git-scm.com/downloads) and run the installer. It is recommended to use the default settings
2. [Download MinGW](https://www.mingw-w64.org/downloads/#mingw-builds). It is reccomended to use the SourceForge link provided by MinGW-builds. **It is very important to remember where you install minGW** when you run the installer (it is recommended to use **default settings otherwise**)
3. Add MinGW to your PATH. Start by typing 'Edit the system environment variables' in Cortana/Search:
![sysenvshot](https://user-images.githubusercontent.com/93274535/144873960-fb054df7-7c31-4c30-8cb5-1de8a184025a.jpg) <br/>
Launch it and click the 'Edit Environment Variables' button near the bottom of the window: 2 tables should appear. One for User variables, and another for System variables. Find any Variable named "Path" in either table and Edit it: <br/>
![image](https://user-images.githubusercontent.com/93274535/144873731-eb71a653-e8e9-4d5f-a23b-6276263e5f8d.png)<br/>
Click the 'New' button and enter the install path for MinGW with "\bin" appended to the end of it. Once you have that completed click "Ok" to save your changes <br/>
![binshot](https://user-images.githubusercontent.com/93274535/144876281-43874dfd-3779-4eeb-aac3-8a33caa6cec0.jpg) <br/>
4. Choose/Create a folder on your computer to install NoEDIT into
5. Launch Command Prompt. In this window your mouse cursor will not adjust the text cursor. You must use the arrow keys to adjust your position. On the left of the cursor is the current directory/folder you are in.<br/>
![promptshot](https://user-images.githubusercontent.com/93274535/144878049-73435074-6e51-4956-8099-88ffb04bf1a5.jpg) <br/>
There are 2 important commands to remember: `cd`, and `dir`. Typing `dir` into the command prompt will provide a list of the files in your current directory. Typing `cd ` and then the path to a directory will change your current directory. For example typing `cd C:\Program Files` will change the text on the left of the cursor to 'C:\Program Files' and `dir` will list the installed programs on your computer
6. Ensure that the previous steps have been completed succesfully. Type "git version" into the command prompt. If a version number is outputted then git has been installed correctly. If the output says that git is a unrecongnized command then try installing the [GUI application](https://desktop.github.com/). Next try `mingw32-make`. If the output complains that the command is unrecognized try repeating step 3 again<br/>
![outputshot](https://user-images.githubusercontent.com/93274535/144879212-6a20c96d-7319-4b4b-b1b5-d8aeaf340128.JPG) <br/>
if your Command Prompt looks like the above screenshot then continue
7. Type `cd` and then the path to the folder you created in step 4
8. Type `git clone https://github.com/noloitering/NoEDIT.git --recursive` into the command prompt and wait as NoEDIT is being copied
9. Type `cd include\raylib\src`
10. Type `mingw32-make` and wait as raylib is being compiled
11. Type `cd ../../../build`
12. Type `mingw32-make` and wait as NoEDIT is being compiled
13. Congratulations you have installed NoEDIT!
# Test
1. Copy the text in [README](https://github.com/noloitering/NoEDIT/blob/main/README.md#file-format) under the 'File Format' section and paste it into a text editor of your choice. Save this file in the same folder that NoEDIT.exe is in. You can name the file whatever you wish, but make sure that the file is saved with the ".json" extension.
2. Launch Command Prompt
3. Type `cd` and then the path you saved the file in step 1
4. Type `NoPARSE.exe ` and then the full name (including extension) of the file in step 1
5. a 1280x1080p window should open with the following contents: <br/>
![pageshot](https://user-images.githubusercontent.com/93274535/144881091-68e69623-fe46-4c75-a9d1-03b0c9b81036.JPG)
Try typing into the boxes and hovering the buttons
