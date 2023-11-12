#include "CaesarCipher.h"

CaesarCipher::CaesarCipher(int shift) : shift(shift) {}

string CaesarCipher::encrypt(const string& input) const {
    string result = input;
    for (char& c : result) {
        if (isalpha(c)) {
            char base = islower(c) ? 'a' : 'A';
            c = (c - base + shift) % 26 + base;
        }
    }
    return result;
}

string CaesarCipher::decrypt(const string& input) const {
    CaesarCipher decryptor(26 - shift);
    return decryptor.encrypt(input);
}
