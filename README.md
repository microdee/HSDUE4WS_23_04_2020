# Hochschule Darmstadt UE4 workshop
## 23.04.2020

This is the public repository for the introductory workshop material regarding Unreal Engine 4 (abbreviated to UE4 or just Unreal).

These are some points we'll might be able to go over:

* The general usage of the user interface of UE4
* A general overview of the phylosophy behind most components
* Interacting with the UE4 ecosystem
* The architecture of the authoring tools and an average application made in UE4
* Basics of programming application behavior in Blueprints

* Jump to C++ to make UE4 really do your bidding
* Using UE4 build and project configuration tools
* Using the UE4 specific standard library
* Using the C++ LiveCoding feature to make iterative changes to our application
* Possibly automate engine tasks in your favorite/available shell environments

The workshop will be kept from a Windows PC. UE4 supports other desktop OS's (many Linux distros and macOS) however I'm only familiar with Windows workflows, therefore I can only give accurate support on installing UE4 on Windows. If you have problems installing on Linux or macOS, we can still attempt to solve it but I don't have useful practice on those platforms.

## Installing UE4

First create an account for UE4 and in turn Epic games at https://www.unrealengine.com/id/register , it's free and no strings attached (depending on your cyber paranoia threshold), and also required to download UE4 and optionally have access to its source code.

**The easy way for Windows and MacOS:**

Go to https://www.unrealengine.com/en-US/download/ue_non_games and download Epic Games Launcher. In there go to the Unreal Engine section and add an engine version. Click install under the "version slot". It will ask you for location, and you can select installed components under the advanced section. Depending on your configuration download can be between 3 and 10 Gb and it might take up 10 to 50 Gb of hard drive space.

**The slightly more elaborate and possibly only way for Linux**

Go to https://www.unrealengine.com/en-US/ue4-on-github and follow instructions to get access to the source code of UE4 on github. Once you have access to the repository go to https://github.com/EpicGames/UnrealEngine and follow the Linux section of "Getting up and running" https://github.com/EpicGames/UnrealEngine#linux and build it following the instructions here: https://github.com/EpicGames/UnrealEngine/blob/release/Engine/Build/BatchFiles/Linux/README.md

## For developing with C++ in UE4

UE4 supports the following IDE's out of the box (in order of integration tightness)
* Visual Studio Community (on Windows)
* XCode (on Mac)
* CLion
* Visual Studio Code

None of these are explicitly required, but at least one of them is recommended for a working intellisense respecting the header path inference of Unreal Build Tool, and for opening source files from the editor. The workshop will be kept using Visual Studio Community 2019 (with VS 2017 also installed)

## Installing Visual Studio for Windows

**via chocolatey:**  
```
PS> choco install visualstudio2017community
```  
(choco package is not maintained by Microsoft, https://chocolatey.org/packages/VisualStudio2017Community)

**manual installation**

In case you don't want to use Chocolatey for any reason, download Visual Studio **Community** from https://visualstudio.microsoft.com/ and during installation check both Game~ and Desktop Development with C++" workload. This can also take up 3-15 Gb storage on your hard drive. A sole installation of Visual Studio 2019 will work only for UE 4.25 (currently still in preview), installed VS 2017 is required for compiling UE4 C++ code for earlier UE4 versions (like UE 4.24). Downloading Visual Studio 2017, is slighty more annoying tho:

1. go to https://visualstudio.microsoft.com/vs/older-downloads/
2. Expand 2017, click Download
3. Login with Microsoft account
4. Look for "Visual Studio Community 2017 (version 15.9)" and download it
5. During installation check both Game~ and Desktop Development with C++" workload

## Installing XCode for macOS

Install XCode from the App Store https://apps.apple.com/us/app/xcode/id497799835

## Note on Linux

On Linux you gotta use your favorite text editor. In fact you can use your favorite text editor on any OS, however UE4 might not support generating project files for them. JetBrains CLion is a cross-platform IDE supported by UE4, supposedly working on Linux, but because CLion is not open source, it's not very popular choice either.

## Note on version control

Version controlling system such as Git, Perforce or Subversion is not only recommended but even required today in any sized project. The industry mostly uses Perforce for UE4 (including Epic Games), but Git + LFS is also well usable with UE4. Using any version controlling systems are outside the scope of the workshop, but I will probably demonstrate how to make the Unreal editor aware of them.
