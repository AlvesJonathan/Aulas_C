int main(void)
{
    int lin, col, a[3][3]={{1,0,0},{0,1,0},{0,0,1}};
    
  for (lin=0;lin<3;lin++)
    {
        for (col=0;col<3;col++)
        {
             if((lin != col && a[lin][col] != 0) || (lin==col && a[lin][col]!=1))
             {
                 printf("");
                 break;
             }
        }
}
}
