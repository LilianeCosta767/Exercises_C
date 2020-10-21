float media(int n, float *v){
    int i;
    float s = 0.0;
    for (i = 0; i < n; i++)
        s += v[i]; // adding the vector values
    return s/n; // returning the average
}

int main () {
    float v[10]; // creating the vector v
    float med;
    int i;

    for (i = 0; i < 10; i++)
        scanf("%f", &v[i]); // receiving the values to vector v

    med = media(10,v); // calling the function media passing the vector size and the first position of the vector

    printf ( "Media = %.2f \n", med );

    return 0;

}