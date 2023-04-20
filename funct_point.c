/*
Function pointers are used to store the address of functions
*/

int Add(int a, int b)
{
        return(a + b);
}

char greet(char *name)
{
        printf("Hello %s how are u doing...", name);
}

int main()
{
        int c;
        int (*Ap)(int, int);
        char (*Gp)(char*);

        Ap = Add;
        Gp = greet;

        c = (*Ap)(3, 4);
        printf("%d \n", c);

        Gp("Akuoma");


}