#include<stdio.h>
#include<conio.h>
void main()
{
     int z, fe[10], fc[10], fg[10], hi[10], hf[10];
     int a[10] = {0, 5, 2, 3, 0, 0, 0, 0, 0, 0};
     int b[10] = {0, 0, 0, 0, 3, 0, 0, 0, 0, 0};
     int c[10] = {0, 0, 0, 0, 0, 4, 0, 0, 0, 0};
     int d[10] = {0, 0, 0, 0, 0, 0, 4, 0, 0, 0};
     int e[10] = {0, 0, 0, 0, 0, 2, 0, 0, 2, 0};
     int f[10] = {0, 0, 0, 0, 0, 0, 0, 5, 0, 0};
     int g[10] = {0, 0, 0, 0, 0, 6, 0, 0, 0, 0};
     int h[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 1};
     int i[10] = {0, 0, 0, 0, 0, 0, 0, 2, 0, 0};
     int j[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
     clrscr();
     printf("\t\t***shortest path routing***\n\n");
     printf("\n the shortest path routing table \n\n");
      for(z = 0; z < 10; z++)
      {
           if(b[z] != 0)
            b[z] = a[1] + b[z];
           else
            b[z] = 0;
            if(c[z] != 0)
            c[z] = a[2] + c[z];
           else
            c[z] = 0;
            if(d[z] != 0)
            d[z] = a[1] + d[z];
           else
            d[z] = 0;
       }
      for(z = 0; z < 10; z++)
       {
           if(e[z] != 0)
            e[z] = e[z] + b[4];
           else
            e[z] = 0;
            if(g[z] != 0)
            g[z] = g[z] + d[6];
           else
            g[z] = 0;
      }
      for(z = 0; z < 10; z++)
      {
           if(f[z] != 0)
           {
                fe[z] = e[5] + f[z];
                fc[z] = c[5] + f[z];
                fg[z] = g[5] + f[z];
           }
           else
           {
                fe[z]=0;
                fc[z]=0;
                fg[z]=0;
           }
      }
       for(z = 0; z < 10; z++)
       {
            if(fc[z] < fe[z] && fc[z] < fg[z])
              f[z] = fc[z];
            else if(fe[z] < fg[z])
              f[z] = fe[z];
            else
             f[z] = fg[z];
       }
       for(z = 0; z < 10; z++)
      {
           if(i[z] != 0)
            i[z] = i[z] + e[8];
           else
            i[z] = 0;
            if(h[z] != 0)
            {
                hi[z] = h[z] + i[7];
                hf[z] = h[z] + f[7];
            }
           else
           {
                hi[z] = 0;
                hf[z] = 0;
           }
            if(hi[z] < hf[z])
            h[z] = hi[z];
           else
            h[z] = hf[z];
       }
       printf("\tA\tB\tC\tD\tE\n");
       printf("A\t");
       for(z = 0; z < 5; z++)
       printf("%d \t", a[z]);
       printf("\nB\t");
       for(z = 0; z < 5; z++)
       printf("%d \t", b[z]);
       printf("\nC\t");
       for(z = 0; z < 5; z++)
       printf("%d \t", c[z]);
       printf("\nD\t");
       for(z = 0; z < 5; z++)
       printf("%d \t", d[z]);
       printf("\nE\t");
       for(z = 0; z < 5; z++)
       printf("%d \t", e[z]);
       printf("\nF\t");
       for(z = 0; z < 5; z++)
       printf("%d \t", f[z]);
       printf("\nG\t");
       for(z = 0; z < 5; z++)
       printf("%d \t", g[z]);
       printf("\nI\t");
       for(z = 0; z < 5; z++)
       printf("%d \t", i[z]);
       printf("\nH\t");
       for(z = 0; z < 5; z++)
       printf("%d \t", h[z]);
       printf("\n\n");
       printf("\tF\tG\tH\tI\tJ\n");
       printf("\nA\t");
       for(z = 5; z < 10; z++)
       printf("%d \t", a[z]);
       printf("\nB\t");
       for(z = 5; z < 10; z++)
       printf("%d \t", b[z]);
       printf("\nC\t");
       for(z = 5; z < 10; z++)
       printf("%d \t", c[z]);
       printf("\nD\t");
       for(z = 5; z < 10; z++)
       printf("%d \t", d[z]);
       printf("\nE\t");
       for(z = 5; z < 10; z++)
       printf("%d \t", e[z]);
       printf("\nF\t");
       for(z = 5; z < 10; z++)
       printf("%d \t", f[z]);
       printf("\nG\t");
       for(z = 5; z < 10; z++)
       printf("%d \t", g[z]);
       printf("\nI\t");
       for(z = 5; z < 10; z++)
       printf("%d \t", i[z]);
       printf("\nH\t");
       for(z = 5; z < 10; z++)
       printf("%d \t", h[z]);
       printf("\nthe shortest path from source 'a' to destination 'j' is: %d", h[9]);
       getch();
}
