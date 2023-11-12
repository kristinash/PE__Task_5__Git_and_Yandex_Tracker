#ifndef PE__TASK_5__GIT_AND_YANDEX_TRACKER_CAESARCIPHER_H
#define PE__TASK_5__GIT_AND_YANDEX_TRACKER_CAESARCIPHER_H

#include <string>
#include <iostream>

using namespace std;

class CaesarCipher {
public:
    CaesarCipher(int shift);
    string encrypt(const string& input) const;
    string decrypt(const string& input) const;

private:
    int shift;
};

#endif //PE__TASK_5__GIT_AND_YANDEX_TRACKER_CAESARCIPHER_H
