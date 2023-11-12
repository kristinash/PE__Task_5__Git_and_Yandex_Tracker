#include "CaesarCipher.h"

int main() {
    int shift;
    cout << "Enter the shift value for Caesar Cipher: ";
    cin >> shift;

    CaesarCipher cipher(shift);

    string plaintext, ciphertext;

    cout << "Enter the plaintext: ";
    cin.ignore();
    getline(cin, plaintext);

    ciphertext = cipher.encrypt(plaintext);
    cout << "Encrypted text: " << ciphertext << endl;

    string decryptedText = cipher.decrypt(ciphertext);
    cout << "Decrypted text: " << decryptedText << endl;
}
