// #include <string>
// #include <iostream>

// int main() {
//     std::string emoji = "😁"; // Emoji as a UTF-8 string
//     std::cout << "Emoji: " << emoji << std::endl;
//     return 0;
// }

#include <string>
#include <iostream>

int main() {
    std::wstring emoji = L"😁"; // Emoji as a UTF-16/UTF-32 string
    std::wcout << L"Emoji: " << emoji << std::endl;
    return 0;
}
