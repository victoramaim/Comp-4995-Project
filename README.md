# Dynamic Sound Game

## Project Overview

This project, Dynamic Sound Game, incorporates real-time audio manipulation within a visual environment. It focuses on dynamic sound effects to enhance player interaction and game immersion. The application is built using C++ with extensive use of the Windows API for graphical rendering and event handling, alongside XAudio2 for advanced audio capabilities.

## Features

- **Graphical User Interface:** Utilizes the Direct2D and DirectWrite libraries to render game graphics and text.
- **Real-Time Audio Manipulation:** Leverages the XAudio2 library to handle complex audio operations. Sounds are dynamically controlled to respond to game events, enhancing the overall gaming atmosphere.
- **Interactive Gameplay:** Players can control an object within a confined space, with the ability to move in all four cardinal directions.
- **Dynamic Sound Effects:** Implements features such as looping background music and triggered sound effects (e.g., engine sounds, firing sounds) that react to specific player actions or game events.

## Technical Details

- **Sound Management:** The game maintains a map of sound voices (`soundVoices`), which manage individual audio tracks for playback. This approach facilitates efficient audio manipulation and allows for real-time sound effect adjustments.
- **Game Window Management:** A dedicated `GameWindow` class encapsulates all window-related functionalities, including message handling, rendering, and sound playback initiation. This class interacts with the global audio management system to trigger sounds based on game events.
- **Event-Driven Architecture:** Utilizes the Windows message loop to handle events such as keyboard inputs and window repaint requests. This ensures that the game reacts promptly to user input and system messages.

## Development Environment

- **Platform:** Developed for Windows using Visual Studio.
- **Languages:** C, C++.
- **Libraries/Frameworks:** Windows API, Direct2D, DirectWrite, XAudio2.

## Running the Game

To run the game, compile the provided source files in a Visual Studio environment configured for desktop development with C++ support. Ensure that all project dependencies, particularly those related to the DirectX SDK for audio and graphics functionalities, are correctly configured.

This project is a robust foundation for further exploration into game development with an emphasis on integrating complex audiovisual elements in real-time interactive applications.
