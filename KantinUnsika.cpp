#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string>

using namespace std;
#define ppn 0.10
char a;
int menu;
float pajak;
const float diskon = 1000;

void judul();
void registrasi();
void tampilan();
void harga();
void akhir();

main()
{
int i;
char ch;
cout << "============================\n";
cout << "Selamat Datang di Form Login \n";
cout << "============================\n";
string user = "";
string pass = "";
cout << "Username : "; cin >> user;
cout << "Password : ";
a = _getch();
while(a != 13)
    {
        pass.push_back(a);
        cout << '*';
        a = _getch();
    }

if (user == "UNSIKA" || user == "unsika" && pass == "123")
    {
        system("cls");
        judul();
        tampilan();
    }
}

void judul()
{
cout<<"\n\t         ==============================================";
cout<<"\n\t       ==================================================";
cout<<"\n\t     ======================================================";
cout<<"\n\t\t\t  Kantin UNSIKA 'Warung Pojok' ";
cout<<"\n\n\t\t     Jl. HS.Ronggo Waluyo, telp. 082014851";
cout<<"\n\t       Puseurjaya, Kec. Telukjambe Tim., Kabupaten Karawang";
cout<<"\n\t\t  ==============================================";
cout<<"\n\t\t ================================================";
}

void registrasi()
{
   int menu,pembeli,b,kembali,jmlpembelian;
    cout<<endl;
    cout<<"\t\tMasukan Kode makanan = ";
    cin>>menu;
    cout<<endl;
    cout<<"\t\tJumlah pembelian = ";
    cin>>pembeli;
    cout<<endl;
    switch(menu)
    {
    case 1:
        if (pembeli >= 3)
        {
        cout<<"\t\tCadbury cholate"<<endl;
        pajak = 85000*ppn;
        cout<<"\t\tJumlah Pembelian Rp."<<pajak*pembeli<<endl;
        jmlpembelian=pajak*pembeli-diskon;
        cout<<"\t\tAnda Mendapat Potongan Harga Sebesar : Rp.1000"<<endl;
        cout<<"\t\tPPN 10%"<<endl;
        cout<<"\t\tBayar \t\t Rp. ";cin>>b;
        kembali=b-jmlpembelian;
        cout<<"\t\tKembali\t\t Rp. "<<kembali<<endl;
        }
        else if (pembeli <= 2)
        {
        cout<<"\t\tCadbury cholate"<<endl;
        pajak = 85000*ppn;
        cout<<"\t\tJumlah Pembelian Rp."<<pajak*pembeli<<endl;
        cout<<"\t\tPPN 10%"<<endl;
        jmlpembelian=pajak*pembeli;
        cout<<"\t\tBayar \t\t Rp. ";cin>>b;
        kembali=b-jmlpembelian;
        cout<<"\t\tKembali\t\t Rp. "<<kembali<<endl;
        }
        break;

    case 2:
        if (pembeli >= 3)
        {
        cout<<"\t\tstrepsils "<<endl<<endl;
        pajak = 50000*ppn;
        cout<<"\t\tJumlah Pembelian Rp."<<pajak*pembeli<<endl;
        jmlpembelian=pajak*pembeli-diskon;
        cout<<"\t\tAnda Mendapat Potongan Harga Sebesar : Rp.1000"<<endl;
        cout<<"\t\tPPN 10%"<<endl;
        cout<<"\t\tBayar \t\t Rp. ";cin>>b;
        kembali=b-jmlpembelian;
        cout<<"\t\tKembali\t\t Rp. "<<kembali<<endl;
        }
        else if (pembeli <= 2)
        {
        cout<<"\t\tstrepsils "<<endl<<endl;
        pajak = 50000*ppn;
        cout<<"\t\tJumlah Pembelian Rp."<<pajak*pembeli<<endl;
        cout<<"\t\tPPN 10%"<<endl;
        jmlpembelian=pajak*pembeli;
        cout<<"\t\tBayar \t\t Rp. ";cin>>b;
        kembali=b-jmlpembelian;
        cout<<"\t\tKembali\t\t Rp. "<<kembali<<endl;
        }
        break;

    case 3:
        if (pembeli >= 3)
        {
        cout<<"\t\tpermen karet "<<endl<<endl;
        pajak = 15000*ppn;
        cout<<"\t\tJumlah Pembelian Rp."<<pajak*pembeli<<endl;
        cout<<"\t\tAnda Mendapat Potongan Harga Sebesar : Rp.1000"<<endl;
        cout<<"\t\tPPN 10%"<<endl;
        jmlpembelian=pajak*pembeli-diskon;
        cout<<"\t\tBayar \t\t Rp. ";cin>>b;
        kembali=b-jmlpembelian;
        cout<<"\t\tKembali\t\t Rp. "<<kembali<<endl;
        }
        else if (pembeli <= 2)
        {
        cout<<"\t\tpermen karet "<<endl<<endl;
        pajak = 15000*ppn ;
        cout<<"\t\tJumlah Pembelian Rp."<<pajak*pembeli<<endl;
        cout<<"\t\tPPN 10%"<<endl;
        jmlpembelian=pajak*pembeli*ppn;
        cout<<"\t\tBayar \t\t Rp. ";cin>>b;
        kembali=b-jmlpembelian;
        cout<<"\t\tKembali\t\t Rp. "<<kembali<<endl;
        }
        break;

    case 4:
        if (pembeli >= 3)
        {
        cout<<"\t\tKitkat cholate"<<endl<<endl;
        pajak = 289000*ppn;
        cout<<"\t\tJumlah Pembelian Rp."<<pajak*pembeli<<endl;
        cout<<"\t\tAnda Mendapat Potongan Harga Sebesar : Rp.1000"<<endl;
        cout<<"\t\tPPN 10%"<<endl;
        jmlpembelian=pajak*pembeli-diskon;
        cout<<"\t\tBayar \t\t Rp. ";cin>>b;
        kembali=b-jmlpembelian;
        cout<<"\t\tKembali\t\t Rp. "<<kembali<<endl;
        }
        else if (pembeli <= 2)
        {
        cout<<"\t\tKitkat cholate"<<endl<<endl;
        pajak = 289000*ppn;
        cout<<"\t\tJumlah Pembelian Rp."<<pajak*pembeli<<endl;
        cout<<"\t\tPPN 10%"<<endl;
        jmlpembelian=pajak*pembeli;
        cout<<"\t\tBayar \t\t Rp. ";cin>>b;
        kembali=b-jmlpembelian;
        cout<<"\t\tKembali\t\t Rp. "<<kembali<<endl;
        }
        break;

    case 5:
        if (pembeli >= 3)
        {
        cout<<"\t\tChoki Choki "<<endl<<endl;
        pajak = 70000*ppn;
        cout<<"\t\tJumlah Pembelian Rp."<<pajak*pembeli<<endl;
        cout<<"\t\tAnda Mendapat Potongan Harga Sebesar : Rp.1000"<<endl;
        cout<<"\t\tPPN 10%"<<endl;
        jmlpembelian=pajak*pembeli-diskon;
        cout<<"\t\tBayar \t\t Rp. ";cin>>b;
        kembali=b-jmlpembelian;
        cout<<"\t\tKembali\t\t Rp. "<<kembali<<endl;
        }
        else if (pembeli <= 2)
        {
        cout<<"\t\tChoki Choki "<<endl<<endl;
        pajak = 70000*ppn;
        cout<<"\t\tJumlah Pembelian Rp."<<pajak*pembeli<<endl;
        cout<<"\t\tPPN 10%"<<endl;
        jmlpembelian=pajak*pembeli;
        cout<<"\t\tBayar \t\t Rp. ";cin>>b;
        kembali=b-jmlpembelian;
        cout<<"\t\tKembali\t\t Rp. "<<kembali<<endl;
        }
        break;

    case 6:
        if (pembeli >=3)
        {
        cout<<"\t\tTIM TAM"<<endl<<endl;
        pajak = 80000*ppn;
        cout<<"\t\tJumlah Pembelian Rp."<<pajak*pembeli<<endl;
        cout<<"\t\tAnda Mendapat Potongan Harga Sebesar : Rp.1000"<<endl;
        cout<<"\t\tPPN 10%"<<endl;
        jmlpembelian=pajak*pembeli-diskon;
        cout<<"\t\tBayar \t\t Rp. ";cin>>b;
        kembali=b-jmlpembelian;
        cout<<"\t\tKembali\t\t Rp. "<<kembali<<endl;
        }
        else if (pembeli <= 2)
        {
        cout<<"\t\tTIM TAM"<<endl<<endl;
        pajak = 80000*ppn;
        cout<<"\t\tJumlah Pembelian Rp."<<pajak*pembeli<<endl;
        cout<<"\t\tPPN 10%"<<endl;
        jmlpembelian=pajak*pembeli;
        cout<<"\t\tBayar \t\t Rp. ";cin>>b;
        kembali=b-jmlpembelian;
        cout<<"\t\tKembali\t\t Rp. "<<kembali<<endl;
        }
        break;

    case 7:
        if (pembeli >= 3)
        {
        cout<<"\t\tBeng-Beng wafer cholate"<<endl<<endl;
        pajak = 50000*ppn;
        cout<<"\t\tJumlah Pembelian Rp."<<pajak*pembeli<<endl;
        cout<<"\t\tAnda Mendapat Potongan Harga Sebesar : Rp.1000"<<endl;
        cout<<"\t\tPPN 10%"<<endl;
        jmlpembelian=pajak*pembeli-diskon;
        cout<<"\t\tBayar \t\t Rp. ";cin>>b;
        kembali=b-jmlpembelian;
        cout<<"\t\tKembali\t\t Rp. "<<kembali<<endl;
        }
        else if (pembeli <= 2)
        {
        cout<<"\t\tBeng-Beng wafer cholate"<<endl<<endl;
        pajak = 50000*ppn;
        cout<<"\t\tJumlah Pembelian Rp."<<pajak*pembeli<<endl;
        cout<<"\t\tPPN 10%"<<endl;
        jmlpembelian=pajak*pembeli;
        cout<<"\t\tBayar \t\t Rp. ";cin>>b;
        kembali=b-jmlpembelian;
        cout<<"\t\tKembali\t\t Rp. "<<kembali<<endl;
        }
        break;

    case 8:
        if (pembeli >= 3)
        {
        cout<<"\t\tDairy Milk"<<endl<<endl;
        pajak = 70000*ppn;
        cout<<"\t\tJumlah Pembelian Rp."<<pajak*pembeli<<endl;
        cout<<"\t\tAnda Mendapat Potongan Harga Sebesar : Rp.1000"<<endl;
        cout<<"\t\tPPN 10%"<<endl;
        jmlpembelian=pajak*pembeli-diskon;
        cout<<"\t\tBayar \t\t Rp. ";cin>>b;
        kembali=b-jmlpembelian;
        cout<<"\t\tKembali\t\t Rp. "<<kembali<<endl;
        }
        else if (pembeli <= 2)
        {
        cout<<"\t\tDairy Milk"<<endl<<endl;
        pajak = 70000*ppn;
        cout<<"\t\tJumlah Pembelian Rp."<<pajak*pembeli<<endl;
        cout<<"\t\tPPN 10%"<<endl;
        jmlpembelian=pajak*pembeli;
        cout<<"\t\tBayar \t\t Rp. ";cin>>b;
        kembali=b-jmlpembelian;
        cout<<"\t\tKembali\t\t Rp. "<<kembali<<endl;
        }
        break;

    case 9:
        if (pembeli >= 3)
        {
        cout<<"\t\tIndo Mie Goreng"<<endl<<endl;
        pajak = 25000*ppn;
        cout<<"\t\tJumlah Pembelian Rp."<<pajak*pembeli<<endl;
        cout<<"\t\tAnda Mendapat Potongan Harga Sebesar : Rp.1000"<<endl;
        cout<<"\t\tPPN 10%"<<endl;
        jmlpembelian=pajak*pembeli-diskon;
        cout<<"\t\tBayar \t\t Rp. ";cin>>b;
        kembali=b-jmlpembelian;
        cout<<"\t\tKembali\t\t Rp. "<<kembali<<endl;
        }
        else if (pembeli <= 2)
        {
        cout<<"\t\tIndo Mie Goreng"<<endl<<endl;
        pajak = 25000*ppn;
        cout<<"\t\tJumlah Pembelian Rp."<<pajak*pembeli<<endl;
        cout<<"\t\tPPN 10%"<<endl;
        jmlpembelian=pajak*pembeli;
        cout<<"\t\tBayar \t\t Rp. ";cin>>b;
        kembali=b-jmlpembelian;
        cout<<"\t\tKembali\t\t Rp. "<<kembali<<endl;
        }
        break;

    case 10:
        if (pembeli >= 3)
        {
        cout<<"\t\tIndo Mie Rebus"<<endl<<endl;
        pajak = 20000*ppn;
        cout<<"\t\tJumlah Pembelian Rp."<<pajak*pembeli<<endl;
        cout<<"\t\tAnda Mendapat Potongan Harga Sebesar : Rp.1000"<<endl;
        cout<<"\t\tPPN 10%"<<endl;
        jmlpembelian=pajak*pembeli-diskon;
        cout<<"\t\tBayar \t\t Rp. ";cin>>b;
        kembali=b-jmlpembelian;
        cout<<"\t\tKembali\t\t Rp. "<<kembali<<endl;
        }
        else if (pembeli <= 2)
        {
        cout<<"\t\tIndo Mie Rebus"<<endl<<endl;
        pajak = 20000*ppn;
        cout<<"\t\tJumlah Pembelian Rp."<<pajak*pembeli<<endl;
        cout<<"\t\tPPN 10%"<<endl;
        jmlpembelian=pajak*pembeli;
        cout<<"\t\tBayar \t\t Rp. ";cin>>b;
        kembali=b-jmlpembelian;
        cout<<"\t\tKembali\t\t Rp. "<<kembali<<endl;
        }
        break;

    case 11:
        if (pembeli >= 3)
        {
        cout<<"\t\tIndo Mie Goreng Aceh"<<endl<<endl;
        pajak = 35000*ppn;
        cout<<"\t\tJumlah Pembelian Rp."<<pajak*pembeli<<endl;
        cout<<"\t\tAnda Mendapat Potongan Harga Sebesar : Rp.1000"<<endl;
        cout<<"\t\tPPN 10%"<<endl;
        jmlpembelian=pajak*pembeli-diskon;
        cout<<"\t\tBayar \t\t Rp. ";cin>>b;
        kembali=b-jmlpembelian;
        cout<<"\t\tKembali\t\t Rp. "<<kembali<<endl;
        }
        else if (pembeli <= 2)
        {
        cout<<"\t\tIndo Mie Goreng Aceh"<<endl<<endl;
        pajak = 35000*ppn;
        cout<<"\t\tJumlah Pembelian Rp."<<pajak*pembeli<<endl;
        cout<<"\t\tPPN 10%"<<endl;
        jmlpembelian=pajak*pembeli;
        cout<<"\t\tBayar \t\t Rp. ";cin>>b;
        kembali=b-jmlpembelian;
        cout<<"\t\tKembali\t\t Rp. "<<kembali<<endl;
        }
        break;
    case 12:
        if (pembeli >= 3)
        {
        cout<<"\t\tIndo Mie Rebus Jakarta "<<endl<<endl;
        pajak = 50000*ppn;
        cout<<"\t\tJumlah Pembelian Rp."<<pajak*pembeli<<endl;
        cout<<"\t\tAnda Mendapat Potongan Harga Sebesar : Rp.1000"<<endl;
        cout<<"\t\tPPN 10%"<<endl;
        jmlpembelian=pajak*pembeli-diskon;
        cout<<"\t\tBayar \t\t Rp. ";cin>>b;
        kembali=b-jmlpembelian;
        cout<<"\t\tKembali\t\t Rp. "<<kembali<<endl;
        }
        else if (pembeli <= 2)
        {
        cout<<"\t\tIndo Mie Rebus Jakarta "<<endl<<endl;
        pajak = 50000*ppn;
        cout<<"\t\tJumlah Pembelian Rp."<<pajak*pembeli<<endl;
        cout<<"\t\tPPN 10%"<<endl;
        jmlpembelian=pajak*pembeli;
        cout<<"\t\tBayar \t\t Rp. ";cin>>b;
        kembali=b-jmlpembelian;
        cout<<"\t\tKembali\t\t Rp. "<<kembali<<endl;
        }
        break;

    }
}

void tampilan()
{

                cout<<"\n\n\t\t 1.Pemesanan Makanan";
                cout<<"\n\t\t 2.Info Stok Makanan ";
                cout<<"\n\t\t 3.Keluar ";
                cout<<"\n\t\t Masukkan Pilihan : ";
                cin>>menu;
                if(menu==1)
                {
                    system("cls");
                    judul();
                    cout<<endl<<endl<<endl;
                    cout<<"\t\t =============================================="<<endl;
                    cout<<"\t\t||             Daftar menu Warung Pojok       || "<<endl;
                    cout<<"\t\t =============================================="<<endl;
                    cout<<"\t\t Kode      | Menu                    | Harga  |"<<endl;
                    cout<<"\t\t 1         | Cadbury cholate         | 8.500  |"<<endl;
                    cout<<"\t\t 2         | strepsils               | 5.000  |"<<endl;
                    cout<<"\t\t 3         | permen karet            | 1.500  |"<<endl;
                    cout<<"\t\t 4         | Kitkat cholate          | 28.900 |"<<endl;
                    cout<<"\t\t 5         | Choki Choki             | 7.000  |"<<endl;
                    cout<<"\t\t 6         | TIM TAM                 | 8.000  |"<<endl;
                    cout<<"\t\t 7         | Beng-Beng wafer cholate | 5.000  |"<<endl;
                    cout<<"\t\t 8         | Dairy Milk              | 7.000  |"<<endl;
                    cout<<"\t\t 9         | Indo Mie Goreng         | 2.500  |"<<endl;
                    cout<<"\t\t 10        | Indo Mie Rebus          | 2.000  |"<<endl;
                    cout<<"\t\t 11        | Indo Mie Goreng Aceh    | 3.500  |"<<endl;
                    cout<<"\t\t 12        | Indo Mie Rebus Jakarta  | 5.000  |"<<endl;
                    registrasi();
                }
                else if(menu==2)
                {
                                system("cls");
                                judul();
                                harga();
                }
                else if(menu==3)
                {
                                system("cls");
                                akhir();
                }
                else
                {
                                cout<<"\n\t\tInputan Salah, silahkan kembali ke menu !";
                                cin.ignore();
                                system("cls");
                                tampilan();
                }

}


void harga()
{
    cout<<endl;
 cout<<"\t\tDaftar menu Warung Pojok : "<<endl;
    cout<<"\t\t Kode      | Menu                    | Harga  | Stok |"<<endl;
    cout<<"\t\t 1         | Cadbury cholate         | 8.500  | 100  |"<<endl;
    cout<<"\t\t 2         | strepsils               | 5.000  |  90  |"<<endl;
    cout<<"\t\t 3         | permen karet            | 1.500  |  80  |"<<endl;
    cout<<"\t\t 4         | Kitkat cholate          | 28.900 |  80  |"<<endl;
    cout<<"\t\t 5         | Choki Choki             | 7.000  |  70  |"<<endl;
    cout<<"\t\t 6         | TIM TAM                 | 8.000  |  85  |"<<endl;
    cout<<"\t\t 7         | Beng-Beng wafer cholate | 5.000  |  90  |"<<endl;
    cout<<"\t\t 8         | Dairy Milk              | 7.000  | 100  |"<<endl;
    cout<<"\t\t 9         | Indo Mie Goreng         | 2.500  |  50  |"<<endl;
    cout<<"\t\t 10        | Indo Mie Rebus          | 2.000  |  50  |"<<endl;
    cout<<"\t\t 11        | Indo Mie Goreng Aceh    | 3.500  |  50  |"<<endl;
    cout<<"\t\t 12        | Indo Mie Rebus Jakarta  | 5.000  |  50  |"<<endl;
    cout<<"\n\t kembali ke menu (Y/N) : ";
                cin>>a;
                if(a=='y' || a=='Y')
                {
                                system("cls");
                                judul();
                                tampilan();
                }
                else
                {
                                system("cls");
                                akhir();
                }
}

void akhir()
{
                system("pause");
}
