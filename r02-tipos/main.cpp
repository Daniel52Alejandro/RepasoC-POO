int main() {
    std::cout << 7 / 2 << '\n';                       // 3 , bien
    std::cout << 7 / 2.0 << '\n';                     // 3.5 , bien
    std::cout << 7 % 2 << '\n';                       // 1 , bien 
    std::cout << static_cast<int>(3.99) << '\n';      // no se , 3
    std::cout << (1 == 1.0) << '\n';                  // 1 , bien
    unsigned int u = 3;
    std::cout << u - 5 << '\n';                       // numero muy grande , 4294967294
}