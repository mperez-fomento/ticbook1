#include <iostream>
#include <chrono>
#include <ctime>
#include <cstdio>
#include <termios.h>
#include <sys/select.h>
#include <sys/ioctl.h>
#include <unistd.h>

using namespace std;

int kbhit()
{
    static const int STDIN = 0;
    static bool initialized = false;
    if (!initialized) {
      termios term;
      tcgetattr(STDIN, &term);
      term.c_lflag &= ~ICANON;
      tcsetattr(STDIN, TCSANOW, &term);
      setbuf(stdin, NULL);
      initialized = true;
    }
    int bytes_waiting;
    ioctl(STDIN, FIONREAD, &bytes_waiting);
    return bytes_waiting;
}

int main() {
  system("clear");
  while (!kbhit()) {
    auto now = chrono::system_clock::now();
    time_t now_time = chrono::system_clock::to_time_t(now);
    cout << ctime(&now_time);
    fflush(stdout);
    usleep(1000000);
    system("clear");
  }
}
