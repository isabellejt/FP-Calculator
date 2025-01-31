#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main ()
{
    int a,m,h,i;
    h=0;
    int fix=0;
    int count_num=0;
    int count_op=0;
    char main[99999]; //utama
    char op[999]; //operator
    int n[999]; //angka

    //input awal
    scanf("%[^\n]", main);
    m = strlen(main);
    //jumlah karakter = m

    //pemisahan
    for (i=0;i<m;i++){
        if (main [i]==' '){
            }
        else{
            if (isdigit(main[i])){
            fix=fix*10+(int)main[i]-48;
            }
            else{
                op[count_op]=main[i];
                count_op++;
                count_num++;
                fix=0;
            }
        }
        n[count_num]=fix;
    }//jumlah operasi = count_op

    //validasi
    if (isdigit(main[0])){
        for(int i=1; i<m; i++){
            if (main[i]== '+' || main[i]=='-'|| main[i]=='/' || main[i]=='*' || main[i]=='^'){
                if(main[i-1]!=' ' || main[i+1]!=' '|| !(isdigit(main[i+2]))){
                    printf("operasi invalid");
                    return 0;
                }
            }
        }
    }
    else{
        printf ("operasi invalid");
        return 0;
    }

    //pangkat
    for (i=count_op-1;i>=0;i--){
        if (op[i]=='^'){
            n[i]=pow(n[i],n[i+1]);
            //printf ("hasil pangkat di %d = %d\n", i+1, n[i]);
            for (a=i;a<count_op;a++){
                n[a+1]=n[a+2];
                op[a]=op[a+1];
            }
        }
    }

    //kali-bagi
    for (i=0;i<count_op;i++){
        if (op[i]=='*'){
            n[i]=n[i]*n[i+1];
            //printf ("hasil kali di %d = %d\n", i+1, n[i]);
            for (a=i;a<count_op;a++){
                n[a+1]=n[a+2];
                op[a]=op[a+1];
            }
            i--;
        }

        else if (op[i]=='/'){
            n[i]=n[i]/n[i+1];
            //printf ("hasil bagi di %d = %d\n", i+1, n[i]);
            for (a=i;a<count_op;a++){
                n[a+1]=n[a+2];
                op[a]=op[a+1];
            }
            i--;
        }
    }

    //jumlah-kurang
    h=n[0];
    for (i=0;i<m;i++){
        if (op[i]=='+'){
            h=h+n[i+1];
        }
        else if (op[i]=='-'){
            h=h-n[i+1];
        }
    }

    //hasil akhir
    printf ("HASIL = %d ",h);
}
