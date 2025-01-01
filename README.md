# Melodica Music Player

Melodica Music Player is a simple and versatile music player developed as part of the Data Structures course project for 2nd year Sem1 at EUI . Built entirely in C++, this music player showcases custom implementations of fundamental data structures such as **Linked Lists**, **Queues**, **Stacks**, and **Binary Search Trees** to power its core functionalities. Melodica comes in two versions: a **GUI version** built using C++/CLR and WinForms (inspired by Spotify and Anghami) and a **CLI version** for a lightweight, command-line experience.

Whether you're a music enthusiast or a developer interested in data structures, Melodica offers a practical and educational example of how these concepts can be applied in real-world applications.

---

## Features

### Core Functionalities
- **MP3 Music Playback**: Play, pause, stop, and skip tracks seamlessly.
 ![Screenshot 2025-01-01 123348](https://github.com/user-attachments/assets/bf778059-90d2-4e8c-8b7a-c4b9f13a9463)

- **Playlist Creation**: Create, edit, and manage playlists using custom linked lists.
![Screenshot 2025-01-01 123412](https://github.com/user-attachments/assets/06cb2a4f-31e1-4188-9d63-5a17df5ffbf7)
- **Search and Search History**: Quickly find songs using a binary search tree and view search history implemented with a stack.
- **Volume Control**: Adjust volume levels for an optimal listening experience.

---

### CLI Version (Pure C++)
- **Lightweight and Fast**: Ideal for users who prefer a command-line interface.
- **Clear and Concise Controls**: Navigate through songs and playlists using simple keyboard commands.
- **Cross-Platform**: Compatible with any system that supports C++.

---

### GUI Version (C++/CLR WinForms (still a work in progress))

![Screenshot 2025-01-01 123329](https://github.com/user-attachments/assets/ae828167-102c-409e-b38c-9a31f26a0d98)

- **Modern UI**: Inspired by Spotify and Anghami, the GUI offers an intuitive and visually appealing interface with the melodica visual identity.
- **Interactive Playlist Management**: Drag-and-drop functionality to organize playlists.
- **Visual Feedback**: Progress bars, album art display, and real-time updates.

---

## Data Structures Used

Melodica Music Player leverages custom implementations of the following data structures:
1. **Linked Lists**: Used for playlist creation and management.
2. **Queues**: Manages the song queue for playlists.
3. **Stacks**: Stores and retrieves search history.
4. **Binary Search Trees**: Enables efficient song searching and sorting.

These implementations demonstrate the practical application of data structures in a real-world project.

---


---
## Installation

### GUI Version
1. Clone the repository:
   ```bash
   gh repo clone OmarTheGrey/Melodica-MP3-Player/
   ```
2. Open the solution file in Visual Studio.
3. Build and run the project.

### CLI Version
1. Clone the repository:
   ```bash
   gh repo clone OmarTheGrey/Melodica-MP3-Player/
   ```
2. Navigate to the CLI directory:
  
3. Compile the program:
  
4. Run the executable:
   

---

## Usage

### GUI Version
- **Play/Pause**: Click the play/pause button or press the spacebar.
- **Skip Track**: Use the next/previous buttons.
- **Create Playlist**: Click "New Playlist" and add songs from your library.
- **Search**: Use the search bar to find songs or artists (WIP).

### CLI Version
- **Play/Pause**
- **Skip Track**
- **Create Playlist**
- **Search**

---
---



## Acknowledgments
- **Spotify and Anghami**: For inspiring the GUI design.
- **Data Structures Course**: For providing the foundation to build this project.
- **Open-Source Community**: For the libraries and tools that made this project possible, namely libmpg123, VLC-Dev, .NET and others.

---

Enjoy your music with Melodica Music Player! 🎶
