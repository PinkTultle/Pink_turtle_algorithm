#include <iostream>
#include <string>

// 모듈러 연산을 포함한 거듭제곱 함수
unsigned long long mod_pow(int base, int exp, int mod) {
    unsigned long long result = 1;
    unsigned long long base_mod = base % mod;

    while (exp > 0) {
        if (exp % 2 == 1) {
            result = (result * base_mod) % mod;
        }
        base_mod = (base_mod * base_mod) % mod;
        exp /= 2;
    }
    
    return result;
}

unsigned long long hashing_func(const std::string& input_str, int str_len) {
    const int hash_base = 31;
    const int mod = 1234567891;
    unsigned long long result = 0;

    for (int i = 0; i < str_len; ++i) {
        unsigned long long char_value = (input_str[i] - 'a' + 1) % mod;
        result = (result + char_value * mod_pow(hash_base, i, mod)) % mod;
    }

    return result;
}

int main() {
    int str_len;
    std::string input_str;

    std::cin >> str_len;
    std::cin >> input_str;

    std::cout << hashing_func(input_str, str_len) << std::endl;

    return 0;
}
