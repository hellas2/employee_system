#include <iostream>
#include <string>
#include <iomanip>

// XOR 加密/解密函数
std::string xorEncryptDecrypt(const std::string& text, char key) {
    std::string result = text;
    for (char& c : result) {
        c ^= key;
    }
    return result;
}

// 将字符串转换为十六进制字符串
std::string toHex(const std::string& input) {
    std::ostringstream oss;
    oss << std::hex << std::setfill('0');
    for (unsigned char c : input) {
        oss << std::setw(2) << static_cast<int>(c);
    }
    return oss.str();
}

int main() {
    std::string plaintext = "HELLO";
    char key = 'A';

    // 加密
    std::string ciphertext = xorEncryptDecrypt(plaintext, key);
    //std::string hexCiphertext = toHex(ciphertext);
    std::cout << "加密后的文本 (十六进制): " << hexCiphertext << std::endl;

    // 解密
    std::string decryptedText = xorEncryptDecrypt(ciphertext, key);
    std::cout << "解密后的文本: " << decryptedText << std::endl;

    return 0;
}
    
