# YimMenu made possible by [BigBaseV2](https://github.com/Pocakking/BigBaseV2)
A mod menu base for Grand Theft Auto V.
Strictly for educational purposes only.

YimMenu is originally based of off [BigBaseV2](https://github.com/Pocakking/BigBaseV2) which was an amazing base at the time but nowadays is a bit dated.
Menu focusing on protecting the user from toxic modders.
## Game version support
- Build 2699 1.61
## Table of contents

 * [How to build](#how-to-build)
    * [Git](#git)
    * [Premake5](#premake5)
    * [Cloning and generating project files](#cloning-and-generating-project-files)
 * [Staying Up To Date](#staying-up-to-date)
 * [Project Structure](#project-structure)
 * [Features](#features)
 * [Contributing](#contributing)

## How to build/compile YimMenu

Requirements:

 * [git](#git)
 * [premake5](#premake5)
 * [Visual studio 2022](#visual-studio-2022)

If you have both of the above requirements you can skip to [cloning the git repo and generating the project files](#cloning-and-generating-project-files).

### Git

If you haven't installed git on your system go and do so it is **REQUIRED** for setting up a working build environment.

[Download Link](https://git-scm.com/download/win)

### Premake5

Premake5 is used to generate our project files, if you haven't used it before we will need to download and add it to our [System Path](https://www.architectryan.com/2018/03/17/add-to-the-path-on-windows-10/).

[Download Link](https://premake.github.io/download/)

### Visual studio 2022

Download and install visual studio

[Download Link](https://visualstudio.microsoft.com/thank-you-downloading-visual-studio/?sku=Community&channel=Release&version=VS2022&source=VSLandingPage&cid=2030&passive=false)

[Download the Visual Studio bootstrapper](https://aka.ms/vs/17/release/vs_community.exe)
<hr>

### Cloning and generating project files

Click the below link to make your own fork of YimMenu:

[YimMenu main](https://github.com/YimMenu/YimMenu/fork)

[~~YimMenu-outdated~~](https://github.com/NightFall-Dev/BigBaseV2a/fork)
<hr>
Clone the repository including submodules:
```bash
git clone https://github.com/YimMenu/YimMenu.git --recursive || echo "You don't have git installed, install it from https://git-scm.com/download/win"
```

Go into the directory you just cloned:
```bash
cd YimMenu
```

Generate project files:
```bash
GenerateProjects.bat
```

Now, you will be able to open the solution, and simply build it in Visual Studio.

## Staying Up To Date

Pull the latest changes from Github:
```bash
git pull && git submodule update
```

Make sure your Visual Studio is closed and regenerate project files:
```bash
GenerateProjects.bat
```

## Project Structure

- `api/` contains some basic example of how I'd make REST api calls
- `backend/` all features that should be ran in a loop are in here sorted by category
- `gui/` includes everything related to UI elements
- `hooks/` function hooks
- `native_hooks/` hooks to natives, currently not implemented
- `services/` service files to interact and maintain stuff
- `util/` general utility functions to keep code as compact and as much in one place as possible

## Features

Below is an incomplete list of feature that I believe are notable to this "base" or menu.

 - Return Native spoofing
 - Custom [settings](BigBaseV2/src/core/globals.hpp) with deep compare if changes were made include auto saving
 - Clear and well structured source code
 - Includes a thread pool to queue tasks that shouldn't block the game thread, very similar to fiber pool
 - Updated natives.hpp from https://nativedb.pieceof.art/natives
 - Includes basic code samples to interact with an api
 - ReClass.NET structures implemented, accessible from a global called g_local_player defined in `common.hpp`

## Contributing

You're free to contribute to YimMenu as long as the feature are useful, non-toxic and do not contain anything money related that might get the menu targetted by Take2.

Make sure to read the [CONTRIBUTING.md](https://github.com/YimMenu/YimMenu/blob/master/CONTRIBUTING.md) file.
