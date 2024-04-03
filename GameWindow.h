//// GameWindow.h
//#pragma once
//#include <Windows.h>
//#include <windows.h>
//#include <string>
//
//class GameWindow {
//public:
//    GameWindow(std::wstring ipAddress, std::wstring port);
//    ~GameWindow();
//
//    void Create(HWND parentWnd);
//
//    static LRESULT CALLBACK WindowProc(HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam);
//
//private:
//    HWND m_hWnd;
//    std::wstring m_ipAddress;
//    std::wstring m_port;
//
//    void DrawBall(HWND hwnd); // Declaration of DrawBall method
//};
// GameWindow.h
#pragma once
#include <Windows.h>
#include <string>
#include <map>
#include <xaudio2.h>

class GameWindow {

public:
    //GameWindow(std::wstring ipAddress, std::wstring port);
    GameWindow(std::wstring ipAddress, std::wstring port, std::map<std::wstring, IXAudio2SourceVoice*>& soundVoices);
    ~GameWindow();

    void Create(HWND parentWnd);
    void MoveCircle(int dx, int dy); // Declaration of MoveCircle method
    void PlaySoundEffect(const std::wstring& soundName);


    static LRESULT CALLBACK WindowProc(HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam);

private:
    HWND m_hWnd;
    std::wstring m_ipAddress;
    std::wstring m_port;
    int m_circleX = 200; // Initial X position of the circle
    int m_circleY = 200; // Initial Y position of the circle

    std::map<std::wstring, IXAudio2SourceVoice*>& m_soundVoices; // Reference to the soundVoices map


    void DrawBall(HWND hwnd); // Declaration of DrawBall method
};
