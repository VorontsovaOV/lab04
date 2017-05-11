#include <iostream>
#include <cstring>
using namespace std;
char nibble_to_hex(uint8_t byte)//перевод в 16-ричное число
{
 switch (byte) {
 case 0:
     return '0';
 case 1:
     return '1';
 case 2:
     return '2';
 case 3:
     return '3';
 case 4:
     return '4';
 case 5:
     return '5';
 case 6:
     return '6';
 case 7:
     return '7';
 case 8:
     return '8';
 case 9:
     return '9';
 case 10:
     return 'A';
 case 11:
     return 'B';
 case 12:
     return 'C';
 case 13:
     return 'D';
 case 14:
     return 'E';
 case 15:
     return 'F';
 }
}

void print_byte(uint8_t byte) {
    uint8_t low = (byte & 0b00001111);
    uint8_t high = (byte & 0b11110000) >> 4;
    cout << nibble_to_hex(high) << nibble_to_hex(low);

}
void print_in_hex(const void* data, size_t size)
{
    const uint8_t* p = reinterpret_cast<const uint8_t*>(data);
    for(size_t i=0; i < size; i++)
    {    print_byte(*(p+i));
    cout<<"  ";}
}


struct Student
{char name[17];
    uint16_t year;
    float mid_mark;
    int mf : 1;
    int quantity;
    Student* str;
};

int
main() {
    uint8_t z = 200;
    print_byte(z); cout<<'\n';

    int n = 42;
    print_in_hex(&n, sizeof(n));
    cout<<'\n';

    Student S[3];
    strcpy(S[0].name,"Vasiliy");
    S[0].year=2016;
    S[0].mid_mark=4.2;
    S[0].mf=1;
    S[0].quantity=0;
    S[0].str = nullptr;  // &S[0]

    strcpy(S[1].name,"Uliya");
    S[1].year = 2016;
    S[1].mid_mark = 4.13;
    S[1].mf=0;
    S[1].quantity=0;
    S[1].str = &S[0];

    strcpy(S[2].name,"Vitaliy");
    S[2].year=2016;
    S[2].mid_mark=4.34;
    S[2].mf=1;
    S[2].quantity=0;
    S[2].str = &S[0];

    cout << &S << endl;
    cout<<"Size of S - "<< sizeof S << '\n';

cout<<"Mas. S:"<<'\n';
    print_in_hex(&S, sizeof S); cout<<'\n';

for(size_t i=0; i<3; i++){
cout<<"Adress of el."<<i<<" - "<<&S[i]; cout<<"\nSize of el."<<i<<" - "<<sizeof
            S[i]<<'\n';
} cout<<'\n';

  //  cout<<"El. mas. S #2";
    char path[64]
cout<<"Enter adress ";cin>>path;
    bool path_d= true;
    if (path[1]=':')
                if ((strchr(path[0]))&&(path[2]=='\\'))
    return 0;
}