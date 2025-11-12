#include <iostream>
#include <chrono>
#include <thread>
#ifdef _WIN32
#include <windows.h>
#endif

using namespace std;

int main() {
    int seconds;
    cout << "Enter countdown time in seconds: ";
    cin >> seconds;

    cout << "Timer started for " << seconds << " seconds..." << endl;

    while (seconds > 0) {
        cout << seconds << " seconds remaining..." << endl;
        this_thread::sleep_for(chrono::seconds(1));
        seconds--;
    }

    cout << "⏰ Time's up!" << endl;

    #ifdef _WIN32
        Beep(1000, 1000); // Windows beep
    #else
        cout << "\a";     // Linux/macOS terminal bell
    #endif

    return 0;
}
