int main() {
    int a;  // criando um armazenamento para a
    int *p; // criando um ponteiro de um armazenamento para p
    p = &a; // faz p receber a referencia de a
    *p = 2; // faz o endereço que p está apontando receber o valor 2
    printf("%d", a);
    return 0;
}