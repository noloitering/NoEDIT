# NoEDIT
 A Level Editor for NoMAD Game Engine.
 ## How to
 NoEDIT is a command line tool<sup>1</sup> that converts properly formatted JSON files<sup>2</sup> into an actual functioning interactable window. It currently supports running files directly as written, but in the future will support editing and saving files. 
 ### Running
 To run a file simply call NoEDIT.exe from the command line with the path to a JSON file provided. <br/>
 Ex: ```NoPARSE.exe "./page.json"``` <br/>
 If you can't find NoEDIT.exe then you may need to compile it first. Luckily NoEDIT comes with all it's dependicies packaged with, and an included makefile
 ### Compiling
 First you will need to compile raylib as NoEDIT depends on it. It is included under `include/raylib`. Detailed instructions for compiling it can be found here: https://github.com/raysan5/raylib/wiki#development-platforms. But it should be enough to move into `include/raylib/src` and calling: <br/>
 ```make PLATFORM=PLATFORM_DESKTOP``` <br/>
 Once that is completed you will need to change into the `build/` directory and call make again. Then finally NoPARSE.exe should appear in that directory.
 
 <sup>1)</sup> a command line tool is a piece of software designed to be ran from the Operating System's terminal. <br/>
 <sup>2)</sup> JavaScript Object Notation (JSON) is a file format that stores data in key, value pairs
