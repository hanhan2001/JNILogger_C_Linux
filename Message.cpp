#include "headers/Message.h"

Message::Message(const std::string& message, char color) {
    this->message = message;
    const char *c;
    switch (color) {
        case '1':
            c = "\033[34m";
            break;
        case '2':
            c = "\033[32m";
            break;
        case '3':
            c = "\033[31m";
            break;
        case '4':
            c = "\033[31m";
            break;
        case '5':
            c = "\033[35m";
            break;
        case '6':
            c = "\033[33m";
            break;
        case '7':
            c = "\033[37m";
            break;
        case '8':
            c = "\033[90m";
            break;
        case '9':
            c = "\033[94m";
            break;
        case 'a':
            c = "\033[92m";
            break;
        case 'b':
            c = "\033[36m";;
            break;
        case 'c':
            c = "\033[92m";
            break;
        case 'd':
            c = "\033[95m";
            break;
        case 'e':
            c = "\033[93m";
            break;
        case 'f':
            c = "\033[97m";
            break;
    }
    this->color = c;
}

std::string Message::getMessage() {
    return this->message;
}

char *Message::getColor() const {
    return const_cast<char *>(this->color);
}

void Message::send(bool line) {
    std::cout << this->getColor() << this->getMessage();
    if (line)
        std::cout << "\n";
}