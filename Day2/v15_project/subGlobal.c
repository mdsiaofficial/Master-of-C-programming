
//static int subval;
int sub()
{
    int var =3;
    static int subval;
    subval = var;
    subval  +=1;
    return subval;
}
