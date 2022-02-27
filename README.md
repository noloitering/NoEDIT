# NoEDIT
 A Level Editor for NoMAD Game Engine.
 ## How to
 NoEDIT is a command line tool<sup>1</sup> that converts properly formatted JSON files<sup>2</sup> into an actual functioning interactable window. It currently supports running files directly as written, but in the future will support editing and saving files. 
 ### Running
 To run a file simply call NoEDIT.exe from the command line with the path to a JSON file provided. <br/>
 Ex: ```NoEDIT.exe "./page.json"``` <br/>
 If you can't find NoEDIT.exe then you may need to compile it first. Luckily NoEDIT comes with all it's dependencies packaged with, and an included makefile
 ### Compiling
 First you will need to compile [raylib](https://github.com/raysan5/raylib) as NoEDIT depends on it. It is included under `include/raylib`. Detailed instructions for compiling it can be found here: https://github.com/raysan5/raylib/wiki#development-platforms. But it should be enough to move into `include/raylib/src` and calling: <br/>
 ```make PLATFORM=PLATFORM_DESKTOP``` <br/>
 Once that is completed you will need to change into the `build/` directory and call `make`. Then finally NoEDIT.exe should appear in that directory.
 
 <sup>1)</sup> a command line tool is a piece of software designed to be ran from the Operating System's terminal. <br/>
 <sup>2)</sup> JavaScript Object Notation (JSON) is a file format that stores data in key, value pairs
 ## File Format
 The following is the JSON representation of the "join" page in [`NoMVC/examples/game_menu`](https://github.com/noloitering/NoMVC/tree/main/examples/game_menu)
 ```
{
    "Assets": {
        "Config": {
            "Base": "./",
            "Fonts": "../assets/fonts/",
            "Textures": "../assets/textures/",
            "Sprites": "../assets/textures/sprites/",
            "Sounds": "../assets/audio/sounds/",
            "Music": "../assets/audio/music/"
        },
        "Fonts": {
            "jupiter_crash": "jupiter_crash.png"
        },
        "Textures": {},
        "Sprites": {},
        "Sounds": {},
        "Music": {},
        "Custom": {
            "Fonts": {},
            "Textures": {
                "joinBack": "../assets/textures/background.png"
			},
            "Sprites": {},
            "Sounds": {},
            "Music": {}
        }
    },
    "Components": {
        "AImage": {
            "Image": {
                "File": "joinBack",
                "Scale": [1.0, 1.0],
                "Margin": [0.0, 0.0],
                "Angle": 0.0,
                "Cropping": "FIT",
                "Back Colour": [255, 255, 255, 255]
            }
        },
        "Button": {
            "Text": {
                "Font": "jupiter_crash",
                "Size": 25.0,
                "Colour": [190, 33, 55, 255],
                "Margin": [0.0, 0.0],
                "Whitespace": [2.0, 0.0],
                "Angle": 0.0,
                "Wrapping": "DOWN",
                "Align": "CENTER",
                "Cropping": "NONE"
            }
        },
        "Input": {
            "Input": {
                "Max": 200,
                "Index": 0
            },
            "Text": {
                "Font": "jupiter_crash",
                "Size": 25.0,
                "Colour": [190, 33, 55, 255],
                "Margin": [0.0, 0.0],
                "Whitespace": [2.0, 0.0],
                "Angle": 0.0,
                "Wrapping": "DOWN",
                "Align": "RIGHT",
                "Cropping": "NONE"
            }
        },
        "Label": {
            "Text": {
                "Font": "jupiter_crash",
                "Size": 25.0,
                "Colour": [190, 33, 55, 255],
                "Margin": [0.0, 0.0],
                "Whitespace": [2.0, 0.0],
                "Angle": 0.0,
                "Wrapping": "DOWN",
                "Align": "RIGHT",
                "Cropping": "NONE",
                "Shadow": [2.0, -2.0, 0, 0, 0, 255]
            }
        }
    },
    "Elements": [
        {
            "Type": "Element",
            "Components": "AImage",
            "Inner": "Background",
            "Num Sides": 4,
            "Position": [235.0, 385.0],
            "Size": [235.0, 335.0],
            "Colour": [100, 100, 100, 255],
            "Outline": [0, 0, 0, 255, 0],
            "Hover Colour": [100, 100, 100, 255]
        },
        {
            "Type": "Button",
            "Components": "Button",
            "Inner": "Connect",
            "Num Sides": 4,
            "Position": [235.0, 585.0],
            "Size": [115.0, 50.0],
            "Colour": [130, 130, 130, 255],
            "Outline": [0, 0, 0, 255, 1],
            "Hover Colour": [120, 120, 120, 255]
        },
        {
            "Type": "Button",
            "Components": "Button",
            "Inner": "SEND",
            "Num Sides": 4,
            "Position": [98.0, 440.0],
            "Size": [25.0, 25.0],
            "Colour": [0, 228, 48, 255],
            "Outline": [0, 0, 0, 255, 1],
            "Hover Colour": [246, 218, 38, 255]
        },
        {
            "Type": "Element",
            "Components": "Label",
            "Inner": "IP Address:",
            "Num Sides": 4,
            "Position": [235.0, 110.0],
            "Size": [112.0, 25.0],
            "Colour": [0, 0, 0, 1],
            "Outline": [0, 0, 0, 255, 0],
            "Hover Colour": [0, 0, 0, 1]
        },
        {
            "Type": "Element",
            "Components": "Label",
            "Inner": "Port:",
            "Num Sides": 4,
            "Position": [235.0, 210.0],
            "Size": [112.0, 25.0],
            "Colour": [0, 0, 0, 1],
            "Outline": [0, 0, 0, 255, 0],
            "Hover Colour": [0, 0, 0, 1]
        },
        {
            "Type": "Element",
            "Components": "Label",
            "Inner": "Username:",
            "Num Sides": 4,
            "Position": [235.0, 310.0],
            "Size": [112.0, 25.0],
            "Colour": [0, 0, 0, 1],
            "Outline": [0, 0, 0, 255, 0],
            "Hover Colour": [0, 0, 0, 1]
        },
        {
            "Type": "Element",
            "Components": "Label",
            "Inner": "Message:",
            "Num Sides": 4,
            "Position": [235.0, 410.0],
            "Size": [112.0, 25.0],
            "Colour": [0, 0, 0, 1],
            "Outline": [0, 0, 0, 255, 0],
            "Hover Colour": [0, 0, 0, 1]
        },
        {
            "Type": "Input",
            "Components": "Input",
            "Inner": "",
            "Num Sides": 4,
            "Position": [235.0, 140.0],
            "Size": [112.0, 25.0],
            "Colour": [200, 200, 200, 255],
            "Outline": [0, 0, 0, 255, 2],
            "Hover Colour": [200, 200, 200, 255]
        },
        {
            "Type": "Input",
            "Components": "Input",
            "Inner": "",
            "Num Sides": 4,
            "Position": [235.0, 240.0],
            "Size": [112.0, 25.0],
            "Colour": [200, 200, 200, 255],
            "Outline": [0, 0, 0, 255, 2],
            "Hover Colour": [200, 200, 200, 255]
        },
        {
            "Type": "Input",
            "Components": "Input",
            "Inner": "",
            "Num Sides": 4,
            "Position": [235.0, 340.0],
            "Size": [112.0, 25.0],
            "Colour": [200, 200, 200, 255],
            "Outline": [0, 0, 0, 255, 2],
            "Hover Colour": [200, 200, 200, 255]
        },
        {
            "Type": "Input",
            "Components": "Input",
            "Inner": "",
            "Num Sides": 4,
            "Position": [235.0, 440.0],
            "Size": [112.0, 25.0],
            "Colour": [200, 200, 200, 255],
            "Outline": [0, 0, 0, 255, 2],
            "Hover Colour": [200, 200, 200, 255]
        }
    ]
}
```
### Assets
These are files that are to be loaded into memory. Textures, Fonts, Sprites, Sounds, and Music can be loaded from their respective directories defined in the Config, or can be loaded using a custom path. Each file path contained within these keys are also given a name. [For more info please see NoMEM](https://github.com/noloitering/NoMEM)
### Components
Components are defined within the document and are shared by Elements. Components change the behaviour of how GUI Elements are rendered on screen. [For more info please see NoGUI](https://github.com/noloitering/NoGUI)
### Elements
Each Element is given a unique id according to their position within the Document. An Element's type determines how it interacts with the Event System. [Please see NoGUI for more details](https://github.com/noloitering/NoGUI). The data included within an Element is:
* Type: see above
* Num Sides: what shape the Element will take
* Position: From the center (TO BE CHANGED)
* Size: Radius of Shape (TO BE CHANGED)
* Colour: RGBA value of shape
* Outline: RGBA value + thickness of outline
* Hover Colour: RGBA value for the shape when cursor is hovering it
* Inner: Text to display on Element
* Components: see Components

<sup>3)</sup>Hyper Text Markup Language is a file format that is used to display content on the web. It is planned to include support for HTML in the future.
