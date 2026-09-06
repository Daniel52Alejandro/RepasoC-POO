void intercambiar1(int a, int b) {
    int t = a; a = b; b = t;
}
void intercambiar2(int* a, int* b) {
    int t = *a; *a = *b; *b = t;
}
void intercambiar3(int& a, int& b) {
    int t = a; a = b; b = t;
}