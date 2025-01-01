#include <cstdint>
#include <string>
#include <cstdio>
#include <iostream>
#include <windows.h>
#include <mmsystem.h>
using namespace std;

class AudioPlayer {
private:
    struct WAVHeader {
        char riff[4];
        int32_t chunkSize;
        char wave[4];
        char fmt[4];
        int32_t subchunk1Size;
        int16_t audioFormat;
        int16_t numChannels;
        int32_t sampleRate;
        int32_t byteRate;
        int16_t blockAlign;
        int16_t bitsPerSample;
    };

    bool isPlaying;  
    bool isPaused;
    wstring currentFilename; 
    DWORD pauseposition;

public:
    AudioPlayer() : isPlaying(false),isPaused(false),pauseposition(0) {}
    ~AudioPlayer() {}

    bool playWAV(const string& filename) {
        if (isPlaying) {
            stop();
        }

        currentFilename = wstring(filename.begin(), filename.end());
        isPlaying = PlaySoundW(currentFilename.c_str(), NULL, SND_FILENAME | SND_ASYNC);
        isPaused = false;
        return isPlaying;
    }

    void stop() {
        if (isPlaying) {
            PlaySoundW(NULL, NULL, 0);  
            isPlaying = false;
            isPaused = false;
        }
    }

    void pause() {
        if (isPlaying && !isPaused) {
            PlaySoundW(NULL, NULL, 0);
            isPaused = true;
            isPlaying = false;
        }
    }

    bool resume() {
        if (!isPlaying && !currentFilename.empty()) {
            isPlaying = PlaySoundW(currentFilename.c_str(), NULL, SND_FILENAME | SND_ASYNC);
            isPaused = false;
            return isPlaying;
        }
        return false; 
    }

    bool isplaying(){
        return isPlaying;
    }
};
