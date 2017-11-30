#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mev,haft,o,hafta;
    char mevsim;
    int large_deluxe[3][12][50],deluxe[3][12][50],standart[3][12][50];
    for(mev=0;mev<3;mev++){
        for (haft=0;haft<12;haft++){
            for (o=0;o<100;o++){
               if (o%6==0)
            {
                large_deluxe[mev][haft][o]=o;
            }
            else if (o%2==1)
            {
            standart[mev][haft][o]=o;
            }
            else {
                deluxe[mev][haft][o]=o;
            }
}
}
}

int syc=0;
int sec1,misafir_say;
    printf("**********OTEL REZERVASYON PROJESi*************\n");
   do{ printf("Otelde kalmak istediginiz mevsimi seciniz: \n BAHAR: B\t YAZ:Y\t GUZ: G\n");
    scanf(" %c",&mevsim);
    switch (mevsim){
case 'Y':{
        mev=1;
        do {
            printf("Yaz mevsiminin kacinci haftasinda otelde konaklamak istersiniz: \n");
            scanf("%d",&hafta);
            haft=hafta;
                if (haft<1 || haft>12)
                {syc+=1;
                if (syc==3)
                        return 0;}
                else
                    syc=3;
            }while(syc!=3);
        int i;
        char Odatipi;
            printf("lutfen oda tipini seciniz:\n Standart icin S:\t deluxe icin D: \t large deluxe icin L seciniz\n");
            scanf(" %c",&Odatipi);
                switch(Odatipi){
case 'S':{
                    for (i=0;i<50;i++){
                            if (i%2==1){
                    printf("---%d---",standart[1][haft][i]);
                        if (standart[1][haft][i]==101)
                        continue;}
                    }
    int secim,misafir_say;char rez_tip;
    do{
        printf("Seceneklerinden hangisinde konaklamak istersiniz: \n");
        scanf("%d",&secim);
        standart[1][haft][secim]=101;
        printf("%d. hafta %d. odaya Yerlestirme yapildi\n",haft,secim);
        printf("yerlestirilmemis misafir sayisi giriniz: \n");
        scanf("%d",&misafir_say);
    }while (misafir_say>4);
            printf("asagidaki rezervasyon tiplerinden birini seciniz:\n");
            printf("On odemeli: O\tHavale ile odeme: H\tStandart odeme:S\n");
            scanf(" %c",&rez_tip);
            int indrmsz,son_fiyat;  int gece;
        switch(rez_tip){
        case 'O':
        printf("kac gun konaklayacaksiniz:\n");
        scanf("%d",&gece);
        indrmsz=misafir_say*60*gece;
        son_fiyat=indrmsz-(indrmsz*0,15);
        printf("Fiyat= %d $",son_fiyat);
break;
        case 'H':
        printf("kac gun konaklayacaksiniz:\n");
        scanf("%d",&gece);
        if (misafir_say>3 && misafir_say<=5){
            indrmsz=misafir_say*60*gece;
            son_fiyat=indrmsz-30;
            }
        else if (misafir_say>5){
            indrmsz=misafir_say*60;
            son_fiyat=indrmsz-45;
        }
        printf("Fiyat: %d $",son_fiyat);
break;
        case 'S':
        printf("kac gun konaklayacaksiniz:\n");
        scanf("%d",&gece);
        indrmsz=misafir_say*60*gece;
        printf("Fiyat: %d $",indrmsz);
           }break;}

case 'D':{

            for (i=0;i<100;i++){
                    if(i%2==0&&i%6!=0){
                    printf("---%d---",deluxe[1][haft][i]);
                        if (deluxe[1][haft][i]==101)
                        continue;}}
int secim,misafir_say;
    do{ printf("Seceneklerinden hangisinde konaklamak istersiniz: \n");
        scanf("%d",&secim);
        deluxe[1][haft][secim]=101;
        printf("yerlestirilmemis misafir sayisi giriniz: \n");
        scanf("%d",&misafir_say);
    }
    while (misafir_say>4);
    char rez_tip;
    printf("asagidaki rezervasyon tiplerinden birini seciniz:\n");
    printf("On odemeli: O\tHavale ile odeme: H\tStandart odeme:S\n");
    scanf("%c",&rez_tip);
int gece;float indrmsz,son_fiyat;
        switch(rez_tip){
        case 'O':{printf("kac gun konaklayacaksiniz:\n");
        scanf("%d",&gece);
        indrmsz=misafir_say*90*gece;
        son_fiyat=indrmsz-(indrmsz*0,15);
        printf("Fiyat= %f $",son_fiyat);
        break; }
    case 'H':{
        printf("kac gun konaklayacaksiniz:\n");
        scanf("%d",&gece);

        if (misafir_say>3 && misafir_say<=5){
            indrmsz=misafir_say*90*gece;
            son_fiyat=indrmsz-45;
            }
        else if (misafir_say>5){
            indrmsz=misafir_say*90;
            son_fiyat=indrmsz-67,5;
        }
        printf("Fiyat: %f $",son_fiyat);
        break;
    }
    case 'S':{
        printf("kac gun konaklayacaksiniz:\n");
        scanf("%d",&gece);
        indrmsz=misafir_say*90*gece;
        printf("Fiyat: %f $",indrmsz);
          }
        }
       break; }
case 'L':{
        for (i=0;i<100;i++){
                if(i%6==0){
                        if (large_deluxe[1][haft][i]==101)
                        continue;
                        else
                            printf("---%d---",large_deluxe[1][haft][i]);
                        }}
                        int secim,misafir_say,rez_tip;
    do{ printf("Seceneklerinden hangisinde konaklamak istersiniz: \n");
        scanf("%d",&secim);
        large_deluxe[1][haft][secim]=101;
        printf("yerlestirilmemis misafir sayisi giriniz: \n");
        scanf("%d",&misafir_say);
    }
    while (misafir_say>7);
    printf("asagidaki rezervasyon tiplerinden birini seciniz:\n");
    printf("On odemeli:O \tHavale ile odeme:H\tStandart odeme:S");
    scanf("%d",&rez_tip);
    int gece;float indrmsz,son_fiyat;
    switch(rez_tip){
        case 'O':{
        printf("kac gun konaklayacaksiniz:\n");
        scanf("%d",&gece);
        indrmsz=400*gece;
        son_fiyat=indrmsz-(indrmsz*0,15);
        printf("Fiyat= %f $",son_fiyat);
        break;}

        case 'H':{
        printf("kac gun konaklayacaksiniz:\n");
        scanf("%d",&gece);
        if (misafir_say>3 && misafir_say<=5){
            indrmsz=400*gece;
            son_fiyat=indrmsz-200;
            }
        else if (misafir_say>5){
            indrmsz=400*gece;
            son_fiyat=indrmsz-300;
        }
        printf("Fiyat: %f $",son_fiyat);
break;}
        case 'S':{
        printf("kac gun konaklayacaksiniz:\n");
        scanf("%d",&gece);
        indrmsz=400*gece;
        printf("Fiyat: %f $",indrmsz);
           break;}}}
break;}
break;}
case 'G':{
mev=2;
        do {
            printf("sonbahar mevsiminin kacinci haftasinda otelde konaklamak istersiniz: \n");
            scanf("%d",&hafta);
            haft=hafta;
                if (haft<1 || haft>12)
                {syc+=1;
                if (syc==3)
                        return 0;}
                else
                    syc=3;
            }while(syc!=3);
        int i;
        char Odatipi;
            printf("lutfen oda tipini seciniz:\n Standart icin S:\t deluxe icin D: \t large deluxe icin L seciniz\n");
            scanf(" %c",&Odatipi);
                switch(Odatipi){
case 'S':
                    for (i=0;i<50;i++){
                            if (i%2==1){
                        if (standart[2][haft][i]==101)
                        continue;
                        else
                          printf("---%d---",standart[2][haft][i]);
                        }
                    }
    int secim,misafir_say;char rez_tip;
    do{
        printf("Seceneklerinden hangisinde konaklamak istersiniz: \n");
        scanf("%d",&secim);
        standart[2][haft][secim]=101;
        printf("%d. hafta %d. odaya Yerlestirme yapildi\n",haft,secim);
        printf("yerlestirilmemis misafir sayisi giriniz: \n");
        scanf("%d",&misafir_say);
    }while (misafir_say>4);
            printf("asagidaki rezervasyon tiplerinden birini seciniz:\n");
            printf("On odemeli: O\tHavale ile odeme: H\tStandart odeme:S\n");
            scanf(" %c",&rez_tip);
            int indrmsz,son_fiyat;  int gece;
        switch(rez_tip){
        case 'O':
        printf("kac gun konaklayacaksiniz:\n");
        scanf("%d",&gece);
        indrmsz=misafir_say*25*gece;
        son_fiyat=indrmsz-(indrmsz*0,15);
        printf("Fiyat= %d $",son_fiyat);
break;
        case 'H':
        printf("kac gun konaklayacaksiniz:\n");
        scanf("%d",&gece);
        if (misafir_say>3 && misafir_say<=5){
            indrmsz=misafir_say*25*gece;
            son_fiyat=indrmsz-12,5;
            }
        else if (misafir_say>5){
            indrmsz=misafir_say*25;
            son_fiyat=indrmsz-18,75;
        }
        printf("Fiyat: %d $",son_fiyat);
break;
        case 'S':
        printf("kac gun konaklayacaksiniz:\n");
        scanf("%d",&gece);
        indrmsz=misafir_say*25*gece;
        printf("Fiyat: %d $",indrmsz);
           }break;

break;

case 'D':

            for (i=0;i<100;i++){
                    if(i%2==1&&i%6!=0){
                        if (deluxe[2][haft][i]==101)
                        continue;
                        else
                           printf("---%d---",deluxe[2][haft][i]);
                        }}

    do{ int secim,misafir_say;
        printf("Seceneklerinden hangisinde konaklamak istersiniz: \n");
        scanf("%d",&secim);
        deluxe[2][haft][secim]=101;
        printf("yerlestirilmemis misafir sayisi giriniz: \n");
        scanf("%d",&misafir_say);
    }
    while (misafir_say>4);
    printf("asagidaki rezervasyon tiplerinden birini seciniz:\n");
    printf("On odemeli: O\tHavale ile odeme: H\tStandart odeme:S\n");

    scanf("%c",&rez_tip);

        switch(rez_tip){
        int gece;float indrmsz,son_fiyat;
        case 'O':{printf("kac gun konaklayacaksiniz:\n");
        scanf("%d",&gece);
        indrmsz=misafir_say*50*gece;
        son_fiyat=indrmsz-(indrmsz*0,15);
        printf("Fiyat= %f $",son_fiyat);
        break; }
    case 'H':{
        printf("kac gun konaklayacaksiniz:\n");
        scanf("%d",&gece);

        if (misafir_say>3 && misafir_say<=5){
            indrmsz=misafir_say*50*gece;
            son_fiyat=indrmsz-25;
            }
        else if (misafir_say>5){
            indrmsz=misafir_say*50;
            son_fiyat=indrmsz-37,5;
        }
        printf("Fiyat: %f $",son_fiyat);
        break;
    }
    case 'S':{
        printf("kac gun konaklayacaksiniz:\n");
        scanf("%d",&gece);
        indrmsz=misafir_say*50*gece;
        printf("Fiyat: %f $",indrmsz);
          }
        break;}
case 'L':{
        for (i=0;i<100;i++){
                if(i%2==1&&i%6!=0){
                        if (large_deluxe[2][haft][i]==101)
                        continue;
                        else
                            printf("---%d---",large_deluxe[2][haft][i]);
                        }}
    do{int secim,misafir_say;
        printf("Seceneklerinden hangisinde konaklamak istersiniz: \n");
        scanf("%d",&secim);
        large_deluxe[2][haft][secim]=101;
        printf("yerlestirilmemis misafir sayisi giriniz: \n");
        scanf("%d",&misafir_say);
    }
    while (misafir_say>7);
    char rez_tip;
    printf("asagidaki rezervasyon tiplerinden birini seciniz:\n");
    printf("On odemeli:O \tHavale ile odeme:H\tStandart odeme:S");
    scanf("%c",&rez_tip);
    int gece;float indrmsz,son_fiyat;
    switch(rez_tip){
        case 'O':{
        printf("kac gun konaklayacaksiniz:\n");
        scanf("%d",&gece);
        indrmsz=250*gece;
        son_fiyat=indrmsz-(indrmsz*0,15);
        printf("Fiyat= %f $",son_fiyat);}
        case 'H':{
        printf("kac gun konaklayacaksiniz:\n");
        scanf("%d",&gece);
        if (misafir_say>3 && misafir_say<=5){
            indrmsz=250*gece;
            son_fiyat=indrmsz-125;
            }
        else if (misafir_say>5){
            indrmsz=250*gece;
            son_fiyat=indrmsz-187,5;
        }
        printf("Fiyat: %f $",son_fiyat);
break;}
        case 'S':{
        printf("kac gun konaklayacaksiniz:\n");
        scanf("%d",&gece);
        indrmsz=250*gece;
        printf("Fiyat: %f $",indrmsz);
           break;}}}
break;}
break;}
case 'B':{
    mev=3;
        do {
            printf("bahar  mevsiminin kacinci haftasinda otelde konaklamak istersiniz: \n");
            scanf("%d",&hafta);
            haft=hafta;
                if (haft<1 || haft>12)
                {syc+=1;
                if (syc==3)
                        return 0;}
                else
                    syc=3;
            }while(syc!=3);
        int i;
        char Odatipi;
            printf("lutfen oda tipini seciniz:\n Standart icin S:\t deluxe icin D: \t large deluxe icin L seciniz\n");
            scanf(" %c",&Odatipi);
                switch(Odatipi){
case 'S':{
                    for (i=0;i<50;i++){
                            if (i%2==1){
                        if (standart[3][haft][i]==101)
                        continue;
                        else
                            printf("---%d---",standart[3][haft][i]);
                        }
                    }
    int secim,misafir_say;char rez_tip;
    do{
        printf("Seceneklerinden hangisinde konaklamak istersiniz: \n");
        scanf("%d",&secim);
        standart[3][haft][secim]=101;
        printf("%d. hafta %d. odaya Yerlestirme yapildi\n",haft,secim);
        printf("yerlestirilmemis misafir sayisi giriniz: \n");
        scanf("%d",&misafir_say);
    }while (misafir_say>4);
            printf("asagidaki rezervasyon tiplerinden birini seciniz:\n");
            printf("On odemeli: O\tHavale ile odeme: H\tStandart odeme:S\n");
            scanf(" %c",&rez_tip);
            int indrmsz,son_fiyat;  int gece;
        switch(rez_tip){
        case 'O':
        printf("kac gun konaklayacaksiniz:\n");
        scanf("%d",&gece);
        indrmsz=misafir_say*40*gece;
        son_fiyat=indrmsz-(indrmsz*0,15);
        printf("Fiyat= %d $",son_fiyat);
break;
        case 'H':
        printf("kac gun konaklayacaksiniz:\n");
        scanf("%d",&gece);
        if (misafir_say>3 && misafir_say<=5){
            indrmsz=misafir_say*40*gece;
            son_fiyat=indrmsz-20;
            }
        else if (misafir_say>5){
            indrmsz=misafir_say*40;
            son_fiyat=indrmsz-30;
        }
        printf("Fiyat: %d $",son_fiyat);
break;
        case 'S':
        printf("kac gun konaklayacaksiniz:\n");
        scanf("%d",&gece);
        indrmsz=misafir_say*40*gece;
        printf("Fiyat: %d $",indrmsz);
           }break;}
           break;
case 'D':{

            for (i=0;i<100;i++){
                    if(i%2==0&&i%6!=0){
                        if (deluxe[3][haft][i]==101)
                        continue;
                        else
                            printf("---%d---",deluxe[3][haft][i]);
                        }
                        }
    int misafir_say,secim;
    do{
        printf("Seceneklerinden hangisinde konaklamak istersiniz: \n");
        scanf("%d",&secim);
        deluxe[3][haft][secim]=101;
        printf("yerlestirilmemis misafir sayisi giriniz: \n");
        scanf("%d",&misafir_say);
    }
    while (misafir_say>4);
    char rez_tip;
    printf("asagidaki rezervasyon tiplerinden birini seciniz:\n");
    printf("On odemeli: O\tHavale ile odeme: H\tStandart odeme:S\n");
    scanf("%c",&rez_tip);
int gece;float indrmsz,son_fiyat;
        switch(rez_tip){
        case 'O':{printf("kac gun konaklayacaksiniz:\n");
        scanf("%d",&gece);
        indrmsz=misafir_say*75*gece;
        son_fiyat=indrmsz-(indrmsz*0,15);
        printf("Fiyat= %f $",son_fiyat);
        break; }
    case 'H':{
        printf("kac gun konaklayacaksiniz:\n");
        scanf("%d",&gece);

        if (misafir_say>3 && misafir_say<=5){
            indrmsz=misafir_say*75*gece;
            son_fiyat=indrmsz-37,5;
            }
        else if (misafir_say>5){
            indrmsz=misafir_say*75;
            son_fiyat=indrmsz-56,25;
        }
        printf("Fiyat: %f $",son_fiyat);
        break;
    }
    case 'S':{
        printf("kac gun konaklayacaksiniz:\n");
        scanf("%d",&gece);
        indrmsz=misafir_say*75*gece;
        printf("Fiyat: %f $",indrmsz);
          break;}
        }break;}
case 'L':{
        for (i=0;i<100;i++){
                if(i%2==0&&i%6!=0){
                    if (large_deluxe[3][haft][i]==101)
                    continue;
                    else
                        printf("---%d---",large_deluxe[3][haft][i]);
                    }
int secim,misafir_say;
    do{ printf("Seceneklerinden hangisinde konaklamak istersiniz: \n");
        scanf("%d",&secim);
        large_deluxe[3][haft][secim]=101;
        printf("yerlestirilmemis misafir sayisi giriniz: \n");
        scanf("%d",&misafir_say);
    }
    while (misafir_say>7);}
    char rez_tip;
    printf("asagidaki rezervasyon tiplerinden birini seciniz:\n");
    printf("On odemeli:O \tHavale ile odeme:H\tStandart odeme:S");
    scanf(" %c",&rez_tip);
    int gece;float indrmsz,son_fiyat;
    switch(rez_tip){
        case 'O':{
        printf("kac gun konaklayacaksiniz:\n");
        scanf("%d",&gece);
        indrmsz=300*gece;
        son_fiyat=indrmsz-(indrmsz*0,15);
        printf("Fiyat= %f $",son_fiyat);}
        case 'H':{
        printf("kac gun konaklayacaksiniz:\n");
        scanf("%d",&gece);

        if (misafir_say>3 && misafir_say<=5){
            indrmsz=300*gece;
            son_fiyat=indrmsz-150;
            }
        else if (misafir_say>5){
            indrmsz=300*gece;
            son_fiyat=indrmsz-225;
        }
        printf("Fiyat: %f $",son_fiyat);
break;}
        case 'S':{
        printf("kac gun konaklayacaksiniz:\n");
        scanf("%d",&gece);
        indrmsz=300*gece;
        printf("Fiyat: %f $",indrmsz);
           break;}}}
   break;}}
  }for(haft=1;haft<=12;haft++){
    if(haft==hafta)
    {
        printf("\n %d.hafta yuzde: %%%.1d\n",haft,misafir_say);
    }
    else
        printf("\n%d. hafta yuzde :%%0\n",haft);
}
  printf("devam etmek icin 1 \t,cikis icin 2 giriniz:\n");
  scanf("%d",&sec1);
   }while(sec1==1);


return 0;

}
