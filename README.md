# NoEDIT
 A Level Editor for NoMAD Game Engine.
 ## How to
 NoEDIT is a command line tool<sup>1</sup> that converts properly formatted JSON files<sup>2</sup> into an actual functioning interactable window. It currently supports running files directly as written, but in the future will support editing and saving files. 
 ### Running
 To run a file simply call NoEDIT.exe from the command line with the path to a JSON file provided. <br/>
 Ex: ```NoPARSE.exe "./page.json"``` <br/>
 If you can't find NoEDIT.exe then you may need to compile it first. Luckily NoEDIT comes with all it's dependencies packaged with, and an included makefile
 ### Compiling
 First you will need to compile [raylib](https://github.com/raysan5/raylib) as NoEDIT depends on it. It is included under `include/raylib`. Detailed instructions for compiling it can be found here: https://github.com/raysan5/raylib/wiki#development-platforms. But it should be enough to move into `include/raylib/src` and calling: <br/>
 ```make PLATFORM=PLATFORM_DESKTOP``` <br/>
 Once that is completed you will need to change into the `build/` directory and call `make`. Then finally NoPARSE.exe should appear in that directory.
 
 <sup>1)</sup> a command line tool is a piece of software designed to be ran from the Operating System's terminal. <br/>
 <sup>2)</sup> JavaScript Object Notation (JSON) is a file format that stores data in key, value pairs
 ## File Format
 The following is the JSON representation of the "join" page in [`NoMVC/examples/game_menu`](https://github.com/noloitering/NoMVC/tree/main/examples/game_menu)
 ```
 {
    "Assets": {
        "Fonts": {
            "jupiter_crash": "../assets/fonts/jupiter_crash.png"
        },
        "Textures": {
            "joinBack": "../assets/textures/background.png"
        },
        "Sprites": {}
    },
    "Components": {
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
    },
    "Elements": {
        "AImage": [
            {
                "Element": {
                    "ID": "BackgroundImg",
                    "Num Sides": 4,
                    "Position": [235, 385],
                    "Size": [235, 335],
                    "Colour": [100, 100, 100, 255],
                    "Outline": [100, 100, 100, 255, 0],
                    "Hover Colour": [100, 100, 100, 255],
                    "Inner": "",
                    "Components": {
                        "Image": {
                            "File": "joinBack",
                            "Scale": [1.0, 1.0],
                            "Margin": [0.0, 0.0],
                            "Angle": 0.0,
                            "Cropping": "FIT",
                            "Back Colour": [255, 255, 255, 255]
                        }
                    }
                }
            }
        ],
        "Button": [
            {
                "Button": {
                    "ID": "Launcher",
                    "Num Sides": 4,
                    "Position": [235, 585],
                    "Size": [115, 50],
                    "Colour": [130, 130, 130, 255],
                    "Outline": [130, 130, 130, 255, 1],
                    "Hover Colour": [120, 120, 120, 255],
                    "Inner": "Connect",
                    "Components": {
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
                    }
                }
            },
            {
                "Button": {
                    "ID": "2",
                    "Num Sides": 4,
                    "Position": [98, 440],
                    "Size": [25, 25],
                    "Colour": [0, 228, 48, 255],
                    "Outline": [0, 228, 48, 255, 1],
                    "Hover Colour": [246, 218, 38, 255],
                    "Inner": "SEND",
                    "Components": {
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
                    }
                }
            }
        ],
        "Input": [
            {
                "Input": {
                    "ID": "IP",
                    "Num Sides": 4,
                    "Position": [235, 140],
                    "Size": [112, 25],
                    "Colour": [200, 200, 200, 255],
                    "Outline": [200, 200, 200, 255, 2],
                    "Hover Colour": [200, 200, 200, 255],
                    "Inner": "",
                    "Components": {
                        "Input": {
                            "Max": 50,
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
                    }
                }
            },
            {
                "Input": {
                    "ID": "Port",
                    "Num Sides": 4,
                    "Position": [235, 240],
                    "Size": [112, 25],
                    "Colour": [200, 200, 200, 255],
                    "Outline": [200, 200, 200, 255, 2],
                    "Hover Colour": [200, 200, 200, 255],
                    "Inner": "",
                    "Components": {
                        "Input": {
                            "Max": 10,
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
                    }
                }
            },
            {
                "Input": {
                    "ID": "Username",
                    "Num Sides": 4,
                    "Position": [235, 340],
                    "Size": [112, 25],
                    "Colour": [200, 200, 200, 255],
                    "Outline": [200, 200, 200, 255, 2],
                    "Hover Colour": [200, 200, 200, 255],
                    "Inner": "",
                    "Components": {
                        "Input": {
                            "Max": 50,
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
                    }
                }
            },
            {
                "Input": {
                    "ID": "Msg",
                    "Num Sides": 4,
                    "Position": [235, 440],
                    "Size": [112, 25],
                    "Colour": [200, 200, 200, 255],
                    "Outline": [200, 200, 200, 255, 2],
                    "Hover Colour": [200, 200, 200, 255],
                    "Inner": "",
                    "Components": {
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
                    }
                }
            }
        ],
        "Label": [
            {
                "Element": {
                    "ID": "3",
                    "Num Sides": 4,
                    "Position": [235, 110],
                    "Size": [112, 25],
                    "Colour": [0, 0, 0, 1],
                    "Outline": [0, 0, 0, 1, 0],
                    "Hover Colour": [0, 0, 0, 1],
                    "Inner": "IP Address:",
                    "Components": {}
                }
            },
            {
                "Element": {
                    "ID": "4",
                    "Num Sides": 4,
                    "Position": [235, 210],
                    "Size": [112, 25],
                    "Colour": [0, 0, 0, 1],
                    "Outline": [0, 0, 0, 1, 0],
                    "Hover Colour": [0, 0, 0, 1],
                    "Inner": "Port:",
                    "Components": {}
                }
            },
            {
                "Element": {
                    "ID": "5",
                    "Num Sides": 4,
                    "Position": [235, 310],
                    "Size": [112, 25],
                    "Colour": [0, 0, 0, 1],
                    "Outline": [0, 0, 0, 1, 0],
                    "Hover Colour": [0, 0, 0, 1],
                    "Inner": "Username:",
                    "Components": {}
                }
            },
            {
                "Element": {
                    "ID": "6",
                    "Num Sides": 4,
                    "Position": [235, 410],
                    "Size": [112, 25],
                    "Colour": [0, 0, 0, 1],
                    "Outline": [0, 0, 0, 1, 0],
                    "Hover Colour": [0, 0, 0, 1],
                    "Inner": "Message:",
                    "Components": {}
                }
            }
        ]
    }
}
```
### Assets
These are files that are to be loaded into memory. Textures, Fonts and Sprites are the available keys. Each file path contained within these keys are also given a name. [For more info please see NoMEM](https://github.com/noloitering/NoMEM)
### Components
Components can be added either to the document or to an Element. If it is added to the document then those components will be cloned into each Element contained within the document (unless the Element's components overwrite it). Components change the behaviour of how GUI Elements are rendered on screen. [For more info please see NoGUI](https://github.com/noloitering/NoGUI)
### Elements
Each Element is seperated into distinct groups, each with their own key. This is to mimic the class attribute used in HTML<sup>3</sup>. From there, an Element's key denotes its type. An Element's type determines how it interacts with the Event System. [Please see NoGUI for more details](https://github.com/noloitering/NoGUI). The data included within an Element is:
* ID: a unique identifier for the Element
* Num Sides: what shape the Element will take
* Position: From the center (TO BE CHANGED)
* Size: Radius of Shape (TO BE CHANGED)
* Colour: RGBA value of shape
* Outline: RGBA value + thickness of outline
* Hover Colour: RGBA value for the shape when cursor is hovering it
* Inner: Text to display on Element
* Components: see Components

<sup>3)</sup>Hyper Text Markup Language is a file format that is used to display content on the web. It is planned to include support for HTML in the future.
