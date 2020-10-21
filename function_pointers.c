void troca(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;

}

int main() {
    int a = 5, b = 7;
    troca(&a, &b);
    printf("%d %d\n", a, b);
    
    return 0;
}