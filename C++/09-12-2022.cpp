#include<iostream>
#include<stdio.h>
#include<math.h>
#define MAX_MENU 10

//09-12-2022 (Nguyen Van Khanh - K22PFP-02-VTC)
bool clear() {
    system("cls");
    return 0;
}

bool pause() {
    system("pause");
    return 0;
}
bool bai01();
bool bai02();
bool bai03();
bool bai04();
bool bai05();
bool bai06();
bool bai07();
bool bai08();
bool bai09();

int main() {
    int a;
    int choose;
main_menu:
    clear();
    for (int i=1;i<MAX_MENU;i++) {
        std::cout << i << ". Bai " << i << "\n";
    }
    std::cout << "0. Exit\n\n";
    printf("Choose: ");
    scanf("%d", &choose);
    clear();
    switch (choose) {
	case 1:
        bai01();
        pause();
        goto main_menu;
    case 2:
        bai02();
        pause();
        goto main_menu;
    case 3:
        bai03();
        pause();
        goto main_menu;
    case 4:
        bai04();
        pause();
        goto main_menu;
    case 5:
        bai05();
        pause();
        goto main_menu;
    case 6:
        bai06();
        pause();
        goto main_menu;
    case 7:
        bai07();
        pause();
        goto main_menu;
    case 8:
        bai08();
        pause();
        goto main_menu;
    case 9:
        bai09();
        pause();
        goto main_menu;
    case 0:
        exit(0);
    }
    goto main_menu;
}

bool bai01() {
    {
        printf("Viet chuong trinh nhap vao 3 so nguyen a,b,c. Tinh tong va tich cua 3 so nguyen do\n\n");
        int a,b,c;
        printf("Input [a, b, c]: ");
        scanf("%d, %d, %d",&a,&b,&c);
        std::cout << "Tong: " << a+b+c << "\n";
        std::cout << "Tich: " << a*b*c << "\n";
    }
    return 0;
}


bool bai02() {
    {
        printf("Viet chuong trinh nhap vao 2 canh a, b cua 1 hinh chu nhat. Tinh chu vi va dien tich cua hinh chu nhat do.\n\n");
        int a,b;
        printf("Input [a, b]: ");
        scanf("%d, %d",&a,&b);
        std::cout << "Chu vi: " << (a+b)*2 << "\n";
        std::cout << "Dien tich: " << a*b << "\n";
    }
    return 0;
}

bool bai03() {
    {
        printf("Viet chuong trinh nhap vao ban kinh r cua mot hinh tron. Tinh chu vi va dien tich cua hinh tron do.\n\n");
        float r, PI=3.16;
        printf("Input [r]: ");
        scanf("%f",&r);
        std::cout << "Chu vi: " << (2*r)*PI << "\n";
        std::cout << "Dien tich: " << (r*r)*PI << "\n";
    }
    return 0;
}

bool bai04() {
    {
        printf("Viet chuong trinh nhap vao 2 gia tri so luong, don gia. Tinh tien va thue gia tri gia tang phai tra, biet:\n a. Tien = so luong * don gia\n b. Thue gia tri gia tang = 10%% tien\n\n");
        int sl,dg;
        printf("Input [so luong, don gia]: ");
        scanf("%d, %d",&sl,&dg);
        int tien=sl*dg;
        std::cout << "Tien: " << tien << "\n";
        std::cout << "Thue gia tri gia tang: " << tien/100*10 << "\n";
    }
    return 0;
}

bool bai05() {
    {
        printf("Viet chuong trinh nhap vao diem thi va he so cua 3 mon Toan, Ly, Hoa cua mot sinh vien. Tinh diem trung binh cua sinh vien do\n\n");
        int toan,ly,hoa,htoan,hly,hhoa;
        printf("Input Diem thi [toan, ly, hoa]: ");
        scanf("%d, %d, %d",&toan,&ly,&hoa);
        printf("Input He so [toan, ly, hoa]: ");
        scanf("%d, %d, %d",&htoan,&hly,&hhoa);
        printf("Diem trung binh: %.2f\n", (float) ((toan*htoan) + (ly*hly) + (hoa*hhoa))/(htoan+hly+hhoa));
    }
    return 0;
}

bool bai06() {
    {
        printf("Viet chuong trinh nhap vao 3 canh cua 1 tam giac. Tinh chu vi và dien tich cua tam giac do\n\n");
        float a,b,c;
        printf("Input [a, b, c]: ");
        scanf("%f, %f, %f",&a,&b,&c);
        float chuvi=a+b+c;
        printf("Chu vi: %.2f\n",chuvi);
        chuvi = chuvi / 2.0;
        printf("Dien tich: %.2f\n",sqrt(chuvi*(chuvi - a)*(chuvi - b)*(chuvi - c)));
    }
    return 0;
}

bool bai07() {
    {
        printf("Viet chuong trinh nhap vao so Km da di cua 1 xe taxi. Tinh tong tien phai tra cho quang duong do. Biet rang: Km dau tien gia: 15000d/Km. Tu Km 2 tro di gia 12000d/Km. Thue gia tri gia tang: 10% tren tong tien tra\n\n");
        int km;
        printf("Input [km]: ");
        scanf("%d",&km);
        int tongtien=(12000*(km-1))+15000;
        printf("Tong tien: %d\n",tongtien);
        printf("Thue gia tri gia tang: %d\n",tongtien/100*10);
    }
    return 0;
}

bool bai08() {
    {
        printf("Viet chuong trinh nhap vao mot so nguyen N (4 chu so). Tinh so nut?\n Vi du: N=3456 -> So nut=8\n\n");
        int n;
        int sum = 0;
        printf("Input n: ");
        scanf("%d",&n);
        while (n>0) {
            sum = sum + n % 10;
            n = n / 10;
        }
        printf("So nut: %d\n", sum % 10);
    }
    return 0;
}

bool bai09() {
    {
        printf("Viet chuong trinh nhap vao 1 canh a cua 1 hinh vuong. Tinh va xuat ra chu vi, dien tich va duong cheo cua hinh vuong do\n\n");
        int a=0;
        printf("Input [a]: ");
        scanf("%d",&a);
        printf("Chu vi: %d\n", a+a+a+a);
        printf("Dien tich: %d\n", a*a);
        printf("Duong cheo: %d\n", (a*a)+(a*a));
    }
    return 0;
}
