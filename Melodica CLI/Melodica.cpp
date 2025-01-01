#include <iostream>
#include <fstream>
#include <string>
#include <stack>
#include <queue>
#include <vector>
#include <algorithm>
#include <random>
#include <deque>
#include <set>
#include "AudioPlayer.h"
using namespace std;

// Song structure
struct Song {
    int id;
    string name;
    string artist;
    int playCount;

    // Constructor with ID, name, artist, and optional play count
    Song(int i, string n, string a, int p = 0) : id(i), name(n), artist(a), playCount(p) {}

    // Constructor with name and artist only, defaulting ID and play count
    Song(string n, string a, int p = 0) : id(0), name(n), artist(a), playCount(p) {}
    void incrementPlayCount() {
        playCount++;
    }
};

// Node structure for the Binary Search Tree
struct TreeNode {
    Song song;
    TreeNode* left;
    TreeNode* right;

    TreeNode(Song s) : song(s), left(nullptr), right(nullptr) {}
};

// Binary Search Tree for managing the songs
class SongTree {
private:
    TreeNode* root;

    // Helper function to insert a node
    TreeNode* insert(TreeNode* node, Song song) {
        if (!node) return new TreeNode(song);

        if (song.name < node->song.name) {
            node->left = insert(node->left, song);
        } else {
            node->right = insert(node->right, song);
        }
        return node;
    }

    // Helper function for in-order traversal
    void inOrder(TreeNode* node, vector<Song>& songs) const {
        if (!node) return;

        inOrder(node->left, songs);
        songs.push_back(node->song);
        inOrder(node->right, songs);
    }

    // Helper function for pre-order traversal
    void preOrder(TreeNode* node, vector<Song>& songs) const {
        if (!node) return;

        songs.push_back(node->song);
        preOrder(node->left, songs);
        preOrder(node->right, songs);
    }

    // Helper function for post-order traversal
    void postOrder(TreeNode* node, vector<Song>& songs) const {
        if (!node) return;

        postOrder(node->left, songs);
        postOrder(node->right, songs);
        songs.push_back(node->song);
    
    }

public:
    SongTree() : root(nullptr) {}

    void insertSong(Song song) {
        root = insert(root, song);
    }

    vector<Song> getAllSongs() const {
        vector<Song> songs;
        inOrder(root, songs);
        return songs;
    }

    vector<Song> getPreOrderSongs() const {
        vector<Song> songs;
        preOrder(root, songs);
        return songs;
    }

    vector<Song> getPostOrderSongs() const {
        vector<Song> songs;
        postOrder(root, songs);
        return songs;
    }
};

// Playlist structure
struct Playlist {
    string name;
    vector<Song> songs;

    Playlist(string n) : name(n) {}
};

// MusicApp class
class MusicApp {
private:
    SongTree songTree;
    vector<Playlist> playlists;
    vector<Song> songDatabase;

    deque<Song> recentlyPlayed;  // To store recently played songs
    static const int MAX_RECENTLY_PLAYED = 10;  // Limit for recently played songs
    vector<Song> mostListenedSongs;  // To store most listened songs


public:
    MusicApp() {
        loadSongs();
        loadMostPlayed();
        loadPlaylists();
        loadRecentlyListened();
        for (const auto& song : songDatabase) {
            songTree.insertSong(song);
        }
    }

    void loadSongs() {
    ifstream file("musics.txt");
    if (!file) {
        cerr << "Error loading songs file! Creating a new one.\n";
        ofstream newFile("musics.txt");
        newFile.close();
        return;
    }

    string line;
    int id = 1;
    while (getline(file, line)) {
        size_t dashPos1 = line.find('-');
        size_t dashPos2 = line.rfind('-');
        if (dashPos1 != string::npos && dashPos2 != string::npos && dashPos1 != dashPos2) {
            string name = line.substr(0, dashPos1 - 1); // Song name
            string artist = line.substr(dashPos1 + 2, dashPos2 - dashPos1 - 2);  // Artist name
            int playCount = stoi(line.substr(dashPos2 + 2)); // Play count
            songDatabase.emplace_back(id++, name, artist, playCount);
        } else {
            cerr << "Error in song format: " << line << "\n";
        }
    }
    file.close();
}

    void displaySongs() const {
    if (songDatabase.empty()) {
        cout << "There are no songs yet.\n";
        return;
    }

    cout << "All Songs:\n";
    for (const auto& song : songDatabase) {
        cout << song.id << ". " << song.name << " by " << song.artist << " (Played " 
             << song.playCount << " times)\n";
    }
}

    void addPlaylist() {
        string name;
        cout << "Enter playlist name: ";
        cin.ignore();
        getline(cin, name);
        playlists.emplace_back(name);
        cout << "Playlist '" << name << "' added successfully!\n";
    }

    void removePlaylist() {
    // Check if there are any playlists
    if (playlists.empty()) {
        cout << "There are no playlists to remove.\n";
        return; // Exit the function early
    }

    int index;
    while (true) { // Loop until a valid input is received
        cout << "Playlists:\n";
        for (size_t i = 0; i < playlists.size(); ++i) {
            cout << i + 1 << ". " << playlists[i].name << "\n";
        }
        
        cout << "Enter the index of the playlist to remove: ";
        
        // Use try-catch to handle invalid input
        try {
            cin >> index;

            // Check if the input is valid
            if (cin.fail()) {
                throw invalid_argument("Invalid input. Please enter a number.");
            }

            if (index > 0 && index <= playlists.size()) {
                playlists.erase(playlists.begin() + index - 1);
                cout << "Playlist removed successfully!\n";
                break; // Exit the loop after successful removal
            } else {
                cout << "Invalid index! Please enter a number between 1 and " << playlists.size() << ".\n";
            }
        } catch (const invalid_argument& e) {
            cout << e.what() << "\n";
            // Clear the error state
            cin.clear();
            // Ignore the rest of the input line
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }
}

    void addToPlaylist() {
    if (playlists.empty()) {
        cout << "There are no playlists yet. Please create a playlist first.\n";
        return;
    }

    // Display playlists
    while (true) {
        cout << "Playlists:\n";
        for (size_t i = 0; i < playlists.size(); ++i) {
            cout << i + 1 << ". " << playlists[i].name << "\n";
        }

        int playlistIndex;
        cout << "Enter the index of the playlist to add a song to: ";
        cin >> playlistIndex;

        // Check if the input is valid
        if (cin.fail()) {
            cout << "Invalid input. Please enter a number.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue; // Prompt for input again
        }

        if (playlistIndex <= 0 || playlistIndex > playlists.size()) {
            cout << "Invalid playlist index! Please enter a number between 1 and " << playlists.size() << ".\n";
            continue; // Prompt for input again
        }

        // Display songs
        displaySongs(); // This will show all songs and check if there are any

        int songIndex;
        cout << "Enter the index of the song to add to the playlist: ";
        cin >> songIndex;

        // Check if the input is valid
        if (cin.fail()) {
            cout << "Invalid input. Please enter a number.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue; // Prompt for input again
        }

        if (songIndex <= 0 || songIndex > songDatabase.size()) {
            cout << "Invalid song index! Please enter a number between 1 and " << songDatabase.size() << ".\n";
            continue; // Prompt for input again
        }

        // Check if the song is already in the selected playlist
        const Song& selectedSong = songDatabase[songIndex - 1];
        Playlist& selectedPlaylist = playlists[playlistIndex - 1];

        // Check if the song is already in the playlist
        for (const auto& song : selectedPlaylist.songs) {
            if (song.id == selectedSong.id) {
                cout << "The song '" << selectedSong.name << "' is already in the playlist '" << selectedPlaylist.name << "'.\n";
                return;
            }
        }

        // Add the song to the playlist
        selectedPlaylist.songs.push_back(selectedSong);
        cout << "The song '" << selectedSong.name << "' has been added to the playlist '" << selectedPlaylist.name << "'.\n";
        break; // Exit the loop after successful addition
    }
}
    void removeFromPlaylist() {
    if (playlists.empty()) {
        cout << "There are no playlists to remove songs from.\n";
        return; // Exit the function early
    }

    int playlistIndex;
    while (true) {
        cout << "Playlists:\n";
        for (size_t i = 0; i < playlists.size(); ++i) {
            cout << i + 1 << ". " << playlists[i].name << "\n";
        }
        cout << "Enter the index of the playlist to remove a song from: ";
        cin >> playlistIndex;

        // Check if the input is valid
        if (cin.fail()) {
            cout << "Invalid input. Please enter a number.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue; // Prompt for input again
        }

        if (playlistIndex <= 0 || playlistIndex > playlists.size()) {
            cout << "Invalid index! Please enter a number between 1 and " << playlists.size() << ".\n";
            continue; // Prompt for input again
        }

        // Check if the selected playlist is empty
        if (playlists[playlistIndex - 1].songs.empty()) {
            cout << "The playlist '" << playlists[playlistIndex - 1].name << "' is empty. No songs to remove.\n";
            return; // Exit the function early
        }

        // Display songs in the selected playlist
        cout << "Songs in Playlist '" << playlists[playlistIndex - 1].name << "':\n";
        for (size_t i = 0; i < playlists[playlistIndex - 1].songs.size(); ++i) {
            cout << i + 1 << ". " << playlists[playlistIndex - 1].songs[i].name << "\n";
        }

        int songIndex;
        
        cout << "Enter the index of the song to remove: ";
        cin >> songIndex;

        // Check if the input is valid
        if (cin.fail()) {
            cout << "Invalid input. Please enter a number.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            // Do not continue the loop; allow the user to try again for the song index
            continue; 
        }

        if (songIndex <= 0 || songIndex > playlists[playlistIndex - 1].songs.size()) {
            cout << "Invalid song index! Please enter a number between 1 and " << playlists[playlistIndex - 1].songs.size() << ".\n";
            // Do not continue the loop; allow the user to try again for the song index
            continue; 
        }

        // Remove the song from the playlist
        playlists[playlistIndex - 1].songs.erase(playlists[playlistIndex - 1].songs.begin() + songIndex - 1);
        cout << "Song removed from playlist successfully!\n";
        break; // Exit the loop after successful removal
    }
}

    void search() const {
    string query;
    cout << "Enter song name or artist name to search: ";
    cin.ignore();
    getline(cin, query);

    // Convert the query to lower case for case-insensitive comparison
    std::transform(query.begin(), query.end(), query.begin(), ::tolower);

    cout << "Search Results:\n";
    bool found = false; // Flag to check if any song is found
    for (const auto& song : songDatabase) {
        // Create lower case versions of song name and artist for comparison
        string songNameLower = song.name;
        string artistNameLower = song.artist;
        std::transform(songNameLower.begin(), songNameLower.end(), songNameLower.begin(), ::tolower);
        std::transform(artistNameLower.begin(), artistNameLower.end(), artistNameLower.begin(), ::tolower);

        // Check if the query matches the song name or artist name
        if (songNameLower.find(query) != string::npos || artistNameLower.find(query) != string::npos) {
            cout << song.name << " by " << song.artist << " (Played " << song.playCount << " times)\n";
            found = true; // Set flag to true if a song is found
        }
    }

    

    if (!found) {
        cout << "No songs found matching your search.\n";
    }
}

    void displayPlaylists() const {
        if (playlists.empty()) {
            cout << "There are no playlists yet.\n";
            return;
        }

        cout << "Playlists:\n";
        for (size_t i = 0; i < playlists.size(); ++i) {
            cout << i + 1 << ". " << playlists[i].name << "\n";
        }
        
        int index;
        cout << "Enter the index of the playlist to view its songs: ";
        cin >> index;

        if (index > 0 && index <= playlists.size()) {
            const Playlist& selectedPlaylist = playlists[index - 1];
            if (selectedPlaylist.songs.empty()) {
                cout << "There are no songs yet in playlist '" << selectedPlaylist.name << "'.\n";
            } else {
                cout << "Songs in Playlist '" << selectedPlaylist.name << "':\n";
                for (const auto& song : selectedPlaylist.songs) {
                    cout << song.name << " by " << song.artist << " (Played " << song.playCount << " times)\n";
                }
            }
        } else {
            cout << "Invalid index!\n";
        }
    }

    void recentlyListened() {
        cout << "Recently Listened Songs:\n";
        if (recentlyPlayed.empty()) {
            cout << "No songs have been played recently.\n";
        } else {
            for (const auto& song : recentlyPlayed) {
                cout << song.name << " by " << song.artist << " \n";
            }
        }
    }

    void mostListened() {
    cout << "Most Listened Songs:\n";

    // Filter out songs that have not been played
    vector<Song> listenedSongs;
    for (const auto& song : mostListenedSongs) {
        if (song.playCount > 0) {
            listenedSongs.push_back(song);
        }
    }

    // Sort the listened songs by play count in descending order
    sort(listenedSongs.begin(), listenedSongs.end(), [](const Song& a, const Song& b) {
        return a.playCount > b.playCount;  // Sort by play count in descending order
    });

    if (listenedSongs.empty()) {
        cout << "No songs have been played yet.\n";
    } else {
        for (const auto& song : listenedSongs) {
            cout << song.name << " by " << song.artist << " (Played " << song.playCount << " times)\n";
        }
    }
}

    vector<Song> search(const string& query) const {
        vector<Song> results;
        string queryLower = query;
        std::transform(queryLower.begin(), queryLower.end(), queryLower.begin(), ::tolower);

        for (const auto& song : songDatabase) {
            string songNameLower = song.name;
            string artistNameLower = song.artist;
            std::transform(songNameLower.begin(), songNameLower.end(), songNameLower.begin(), ::tolower);
            std::transform(artistNameLower.begin(), artistNameLower.end(), artistNameLower.begin(), ::tolower);

            if (songNameLower.find(queryLower) != string::npos || artistNameLower.find(queryLower) != string::npos) {
                results.push_back(song);
            }
        }

        return results;
}

    void playSong(){
        string query;
        cout << "Enter song name or artist name to play: ";
        cin.ignore();
        getline(cin, query);

        // Use the search function to find matching songs
        vector<Song> matchingSongs = search(query);
        if (matchingSongs.empty()) {
            cout << "No songs found matching your search.\n";
            return;
        }

        int index = 0;
        // If there are matching songs, display them
        if (matchingSongs.size() > 1) {
            for (int i = 0; i < matchingSongs.size(); i++) {
                cout << i + 1 << ". " << matchingSongs[i].name << " by " << matchingSongs[i].artist << "\n";
            }
            cout << "Enter the index of the song to play: ";
            cin >> index;

            // Validate the index
            if (cin.fail() || index < 1 || index > matchingSongs.size()) {
                cout << "Invalid index! Please enter a number between 1 and " << matchingSongs.size() << ".\n";
                cin.clear(); // Clear the error state
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignore the rest of the input
                return; // Exit the function
            }
        } else {
            // Automatically select the only matching song
            index = 1; // Set index to 1 for the single match
        }

        Song songToPlay = matchingSongs[index - 1];
        
        // Construct the path to the WAV file - adjust the path format as needed
        string audioFile = "songs/" + songToPlay.name + ".wav";  // Assuming WAV files are in a "music" folder
        
        // Try to play the audio file
        static AudioPlayer player;
        if (player.playWAV(audioFile)) {
            cout << "Now playing: " << songToPlay.name << " by " << songToPlay.artist << "\n";
            
            // Update play count and other tracking as before
            for (auto& song : songDatabase) {
                if (song.id == songToPlay.id) {
                    song.incrementPlayCount();
                    break;
                }
            }

            recentlyPlayed.push_front(songToPlay);
            if (recentlyPlayed.size() > MAX_RECENTLY_PLAYED) {
                recentlyPlayed.pop_back();
            }

        } else {
            cout << "Error: Could not play audio file: " << audioFile << "\n";
        }

        // Update recently played
        recentlyPlayed.push_front(songToPlay);
        if (recentlyPlayed.size() > MAX_RECENTLY_PLAYED) {
            recentlyPlayed.pop_back();
        }

        // Update most listened songs
        auto it = find_if(mostListenedSongs.begin(), mostListenedSongs.end(), 
                        [&songToPlay](const Song& s) { return s.id == songToPlay.id; });
        if (it != mostListenedSongs.end()) {
            it->incrementPlayCount();  // Increment play count in most listened
        } else {
            mostListenedSongs.push_back(songToPlay);  // Add new song to most listened
            mostListenedSongs.back().incrementPlayCount(); // Increment play count for the newly added song
        }

        // Update playlists if the song is in any playlist
        for (auto& playlist : playlists) {
            auto songIt = find_if(playlist.songs.begin(), playlist.songs.end(), 
                                [&songToPlay](const Song& s) { return s.id == songToPlay.id; });
            if (songIt != playlist.songs.end()) {
                songIt->incrementPlayCount();  // Increment play count in the playlist
            }
        }

        // Save updated song database to musics.txt
        saveSongs();

        // Save recently listened songs to recently_listened.txt
        saveRecentlyListened();
    }

    void playArtist(const string& artistPrefix) {
    // Convert the artist prefix to lowercase for case-insensitive comparison
    string artistPrefixLower = artistPrefix;
    std::transform(artistPrefixLower.begin(), artistPrefixLower.end(), artistPrefixLower.begin(), ::tolower);

    vector<Song> matchingSongs;
    set<string> matchingArtists; // To store unique artist names
    bool found = false; // Flag to check if any song is found

    // Collect all songs by artists that match the specified prefix
    for (const auto& song : songDatabase) {
        string songArtistLower = song.artist;
        std::transform(songArtistLower.begin(), songArtistLower.end(), songArtistLower.begin(), ::tolower);

        // Check if the artist name contains the prefix
        if (songArtistLower.find(artistPrefixLower) != string::npos) {
            matchingSongs.push_back(song);
            matchingArtists.insert(song.artist); // Add artist to the set
            found = true; // Set flag to true if a song is found
        }
    }

    if (!found) {
        cout << "No songs found for artist prefix: " << artistPrefix << "\n";
        return;
    }

    // If multiple artists are found, prompt the user to select one
    if (matchingArtists.size() > 1) {
        cout << "Multiple artists found. Please select one:\n";
        int index = 1;
        for (const auto& artist : matchingArtists) {
            cout << index++ << ". " << artist << "\n";
        }
        cout << "Enter the index of the artist to play: ";
        cin >> index;

        // Validate the index
        if (cin.fail() || index < 1 || index > matchingArtists.size()) {
            cout << "Invalid index! Please enter a number between 1 and " << matchingArtists.size() << ".\n";
            cin.clear(); // Clear the error state
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignore the rest of the input
            return; // Exit the function
        }

        // Get the selected artist
        auto it = matchingArtists.begin();
        advance(it, index - 1); // Move iterator to the selected index
        string selectedArtist = *it;

        // Filter songs by the selected artist
        matchingSongs.clear(); // Clear previous matches
        for (const auto& song : songDatabase) {
            if (song.artist == selectedArtist) {
                matchingSongs.push_back(song);
            }
        }
    }

    // Display the songs for the selected artist
    cout << "Now playing songs by: " << (matchingArtists.size() > 1 ? *matchingArtists.begin() : matchingSongs[0].artist) << "\n";
    for (int i = 0; i < matchingSongs.size(); i++) {
        cout << i + 1 << ". " << matchingSongs[i].name << "\n";
    }
    cout << "Enter the index of the song to play: ";
    int songIndex;
    cin >> songIndex;

    // Validate the song index
    if (cin.fail() || songIndex < 1 || songIndex > matchingSongs.size()) {
        cout << "Invalid index! Please enter a number between 1 and " << matchingSongs.size() << ".\n";
        cin.clear(); // Clear the error state
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignore the rest of the input
        return; // Exit the function
    }

    // Adjust index for zero-based access
    Song songToPlay = matchingSongs[songIndex - 1]; // User input is 1-based, so we subtract 1
    cout << "Now playing: " << songToPlay.name << " by " << songToPlay.artist << "\n";

    static AudioPlayer player;
    string filename = "songs/" +songToPlay.name + ".wav";  
    if (!player.playWAV(filename)) {
            cout << "Error playing file: " << filename << "\n";
        }
    // Update play count in the songDatabase
    for (auto& song : songDatabase) {
        if (song.id == songToPlay.id) {
            song.incrementPlayCount();  // Increment play count in the database
            break;
        }
    }

    // Update recently played songs
    recentlyPlayed.push_front(songToPlay);

    // Maintain size of the recently played queue
    if (recentlyPlayed.size() > MAX_RECENTLY_PLAYED) {
        recentlyPlayed.pop_back();
    }

    // Update most listened songs
    auto it = find_if(mostListenedSongs.begin(), mostListenedSongs.end(), 
                      [&songToPlay](const Song& s) { return s.id == songToPlay.id; });
    if (it != mostListenedSongs.end()) {
        it->incrementPlayCount();  // Increment play count in most listened
    } else {
        mostListenedSongs.push_back(songToPlay);  // Add new song to most listened
        mostListenedSongs.back().incrementPlayCount(); // Increment play count for the newly added song
    }

    // Update playlists if the song is in any playlist
    for (auto& playlist : playlists) {
        auto songIt = find_if(playlist.songs.begin(), playlist.songs.end(), 
                               [&songToPlay](const Song& s) { return s.id == songToPlay.id; });
        if (songIt != playlist.songs.end()) {
            songIt->incrementPlayCount();  // Increment play count in the playlist
        }
    }

    // Save updated most listened songs to most_played.txt
    saveMostPlayed();
} 

void playPlaylist() {
    // Display all playlists
    cout << "Available Playlists:\n";
    for (size_t i = 0; i < playlists.size(); ++i) {
        cout << i + 1 << ". " << playlists[i].name << "\n";
    }

    // Prompt user for input
    cout << "Enter playlist index or name to play: ";
    string input;
    cin.ignore();
    getline(cin, input);

    // Check if input is a number (index)
    int playlistIndex = -1;
    try {
        playlistIndex = stoi(input) - 1; // Convert to zero-based index
    } catch (invalid_argument&) {
        // Not a number, treat as name
    }

    Playlist* selectedPlaylist = nullptr;

    // If input is a valid index
    if (playlistIndex >= 0 && playlistIndex < playlists.size()) {
        selectedPlaylist = &playlists[playlistIndex];
    } else {
        // If input is not a valid index, check if it matches a playlist name
        for (auto& playlist : playlists) {
            if (playlist.name == input) {
                selectedPlaylist = &playlist;
                break;
            }
        }
    }

    // If a valid playlist was found, proceed to play it
    if (selectedPlaylist) {
        string orderType;
        cout << "Enter order type (normal, shuffle, preorder, postorder): ";
        cin >> orderType;

        vector<Song> songs = selectedPlaylist->songs;

        // Shuffle the songs based on the order type
        if (orderType == "normal") {
            cout << "Playing playlist '" << selectedPlaylist->name << "' in normal order:\n";
        } else if (orderType == "shuffle") {
            cout << "Playing playlist '" << selectedPlaylist->name << "' in random order:\n";
            std::shuffle(songs.begin(), songs.end(), std::default_random_engine(std::random_device()()));
        } else if (orderType == "preorder") {
            cout << "Playing playlist '" << selectedPlaylist->name << "' in pre-order:\n";
            std::sort(songs.begin(), songs.end(), [](const Song& a, const Song& b) {
                return a.name < b.name;  // Sort by name
            });
        } else if (orderType == "postorder") {
            cout << "Playing playlist '" << selectedPlaylist->name << "' in post-order:\n";
            std::sort(songs.rbegin(), songs.rend(), [](const Song& a, const Song& b) {
                return a.name < b.name;  // Sort by name in reverse
            });
        }
        int index= 0;
        while(index < songs.size()){
            auto song = songs[index];
            static AudioPlayer player;
            string filename ="songs/" + song.name + ".wav";  
            if (!player.playWAV(filename)) {
                cout << "Error playing file: " << filename << "\n";
                ++index;
                continue;
            }
            cout << "Playing: " << song.name << " by " << song.artist << "\n";
            while (player.isplaying()){
                cout<<"Enter 1 for next, 2 to stop, 3 to Previous, 4 to resume and 5 to pause.\n";
                int command;
                cin>>command;
                switch (command){
                case 1:
                    player.stop();
                    index = (index+1) % songs.size();
                    break;
                case 2:
                    player.stop();
                    index = songs.size();
                    break;
                case 3:
                    player.stop();
                    index = (index == 0) ? songs.size() - 1 : index - 1;
                    break;
                case 4:
                    player.pause();
                    break;
                case 5:
                    player.resume();
                    break;
                default:
                    cout << "Invalid command. Please enter 1,2,3,4 or 5.\n";
                        break;
                }
            }

            song.incrementPlayCount(); // Increment play count in the song database

            // Update the song database
            for (auto& dbSong : songDatabase) {
                if (dbSong.id == song.id) {
                    dbSong.incrementPlayCount(); // Increment play count in the database
                    break;
                }
            }

            // Update recently played songs
            recentlyPlayed.push_front(song);

            // Maintain size of the recently played queue
            if (recentlyPlayed.size() > MAX_RECENTLY_PLAYED) {
                recentlyPlayed.pop_back();
            }

            // Update most listened songs
            auto it = find_if(mostListenedSongs.begin(), mostListenedSongs.end(), 
                            [&song](const Song& s) { return s.id == song.id; });
            if (it != mostListenedSongs.end()) {
                it->incrementPlayCount();  // Increment play count in most listened
            } else {
                mostListenedSongs.push_back(song);  // Add new song to most listened
            }

            // Update playlists if the song is in any playlist
            for (auto& playlist : playlists) {
                for (auto& songInPlaylist : playlist.songs) {
                    if (songInPlaylist.id == song.id) {
                        songInPlaylist.incrementPlayCount(); // Increment play count in the playlist
                        break; // No need to check further in this playlist
                    }
                }
            }
        }

    } else {
        cout << "Playlist not found!\n";
    }
}
    void saveSongs() {
    ofstream file("musics.txt");
    if (!file) {
        cerr << "Error saving songs file!\n";
        return;
    }

    for (const auto& song : songDatabase) {
        file << song.name << " - " << song.artist << " - " << song.playCount << "\n";
    }
    file.close();
}   

    void saveRecentlyListened() {
    ofstream file("recently_listened.txt");
    if (!file) {
        cerr << "Error saving recently listened songs file!\n";
        return;
    }

    for (const auto& song : recentlyPlayed) {
        file << song.name << " - " << song.artist << "\n"; // Save only the song name and artist
    }
    file.close();
}

    void saveMostPlayed() {
    ofstream file("most_played.txt");
    if (!file) {
        cerr << "Error saving most played songs file!\n";
        return;
    }

    for (const auto& song : mostListenedSongs) {
        if (song.playCount > 0) {
            file << song.name << " - " << song.artist << " - " << song.playCount << "\n";
        }
    }
    file.close();
}

    

    void savePlaylists() {
    ofstream file("playlists.txt");
    if (!file) {
        cerr << "Error saving playlists file!\n";
        return;
    }

    for (const auto& playlist : playlists) {
        file << playlist.name << "\n";
        for (const auto& song : playlist.songs) {
            file << song.name << " - " << song.artist << " - " << song.playCount << "\n";
        }
        file << "END_PLAYLIST\n"; // Marker to separate playlists
    }
    file.close();
}

    void loadPlaylists() {
    ifstream file("playlists.txt");
    if (!file) {
        cerr << "Error loading playlists file!\n";
        return;
    }

    string line;
    while (getline(file, line)) {
        Playlist playlist(line); // Create a new playlist with the name
        while (getline(file, line) && line != "END_PLAYLIST") {
            size_t dashPos1 = line.find('-');
            size_t dashPos2 = line.rfind('-');
            if (dashPos1 != string::npos && dashPos2 != string::npos && dashPos1 != dashPos2) {
                string name = line.substr(0, dashPos1 - 1); // Song name
                string artist = line.substr(dashPos1 + 2, dashPos2 - dashPos1 - 2);  // Artist name
                int playCount = stoi(line.substr(dashPos2 + 2)); // Play count
                playlist.songs.emplace_back(name, artist, playCount);
            }
        }
        playlists.push_back(playlist); // Add the playlist to the vector
    }
    file.close();
}

void loadRecentlyListened() {
    ifstream file("recently_listened.txt");
    if (!file) {
        cerr << "Error loading recently listened songs file!\n";
        return;
    }

    string line;
    while (getline(file, line)) {
        size_t dashPos = line.find('-');
        if (dashPos != string::npos) {
            string name = line.substr(0, dashPos - 1); // Song name
            string artist = line.substr(dashPos + 2);  // Artist name
            recentlyPlayed.emplace_back(0, name, artist); // Provide a default ID (0)
        }
    }
    file.close();
}

void loadMostPlayed() {
    ifstream file("most_played.txt");
    if (!file) {
        cerr << "Error loading most played songs file!\n";
        return;
    }

    string line;
    while (getline(file, line)) {
        size_t dashPos1 = line.find('-');
        size_t dashPos2 = line.rfind('-');
        if (dashPos1 != string::npos && dashPos2 != string::npos && dashPos1 != dashPos2) {
            string name = line.substr(0, dashPos1 - 1); // Song name
            string artist = line.substr(dashPos1 + 2, dashPos2 - dashPos1 - 2);  // Artist name
            int playCount = stoi(line.substr(dashPos2 + 2)); // Play count
            mostListenedSongs.emplace_back(0, name, artist, playCount); // Provide a default ID (0)
        }
    }
    file.close();
}


    void run() {
        int choice;
        do {
            cout << "\n--- Melodica Music Player ---\n";
            cout << "1. Display All Songs\n2. Display Playlists\n3. Add Song to Playlist\n4. Remove Song from Playlist\n";
            cout << "5. Add Playlist\n6. Remove Playlist\n7. Search for Song\n8. Recently Listened\n9. Most Listened\n";
            cout << "10. Play Song\n11. Play Artist\n12. Play Playlist\n13. Exit\n";
            cout << "Enter your choice: ";
            saveMostPlayed();
            savePlaylists();
            saveRecentlyListened();
            saveSongs();
            cin >> choice;
            

            switch (choice) {
                case 1: displaySongs(); break;
                case 2: displayPlaylists(); break;
                case 3: addToPlaylist(); break;
                case 4: removeFromPlaylist(); break;
                case 5: addPlaylist(); break;
                case 6: removePlaylist(); break;
                case 7: search(); break;
                case 8: recentlyListened(); break;
                case 9: mostListened(); break;
                case 10: {
                    playSong();
                    break;
                }
                case 11: {
                    string artistName;
                    cout << "Enter artist name to play: ";
                    cin.ignore();
                    getline(cin, artistName);
                    playArtist(artistName);
                    break;
                }
                case 12: playPlaylist(); break;
                
                case 13: cout << "Goodbye!\n"; break;
                default: cout << "Invalid choice. Try again.\n"; break;
            }
        } while (choice != 13);
    }
};

// Main function
int main() {
    MusicApp app;
    app.run();
    return 0;
}