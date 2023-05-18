#include <iostream>
#include<conio.h>
#include<stdlib.h>
#define SIZE 5
#include <bits/stdc++.h>
#define MAX 6

using namespace std;
int q[SIZE];
int front=0,rear=0;



struct Tumpukan{
 int atas;
 int data[MAX];
   }Tumpuk;

void awal(){
 Tumpuk.atas=-1;
   }

int isEmpty(){
 if(Tumpuk.atas==-1)
    return 1;
   else
    return 0;
      }

int isFull(){
 if(Tumpuk.atas== 5)
    return 1;
   else
    return 0;
      }


void Push(int data){
 if(isEmpty()==1)
    {Tumpuk.atas++;
       Tumpuk.data[Tumpuk.atas]=data;
       cout<<"Data "<<Tumpuk.data[Tumpuk.atas]<<" masuk ke stack";}
   else if(isFull()==0)
    {Tumpuk.atas++;
       Tumpuk.data[Tumpuk.atas]=data;
       cout<<"Data "<<Tumpuk.data[Tumpuk.atas]<<" masuk ke stack";}

   else
       cout<<"Tumpukan penuh";
   }

void Pop(){
   if(isEmpty()==0){
      cout<<"Data teratas sudah terambil";
   Tumpuk.atas--;
   }
   else
   cout<<"Data kosong";
   }

void Clear()
{
    Tumpuk.atas=-1;

    cout<<"Tumpukan kosong!";
}

void Tampil(){
    system("cls");
    if(isEmpty()==0)
       {for(int i=Tumpuk.atas;i>=0;i--)
        {cout<<"\nTumpukan ke "<<i<<"="<<Tumpuk.data[i];}
          }
       else
       cout<<"Tumpukan kosong";
   }


void menuStack(){
    int pil,data;
    awal();
do{
    system("cls");
    cout<<"=============================="<<endl;
    cout<<"||   -:: LATIHAN STACK ::-     ||"<<endl;
    cout<<"|| = -:: MENU PILIHAN::- =   ||"<<endl;
    cout<<"=============================="<<endl;


    cout<<"|| 1. Push.                  ||"<<endl;
    cout<<"|| 2. Pop.                   ||" <<endl;
    cout<<"|| 3. Tampil.                ||"<<endl;
    cout<<"|| 4. Clear.                 ||"<<endl;
    cout<<"|| 5. Kembali Ke Menu Utama. ||"<<endl;
    cout<<"=============================="<<endl;
    cout<<endl;
    cout<<"Masukkan pilihan :";
    cin>>pil;
    system("cls");
    switch(pil)
     {
    case 1:cout<<"Masukkan data = ";
           cin>>data;Push(data);break;
    case 2:Pop();break;
    case 3:Tampil();break;
    case 4:Clear();break;
    case 5: return;
        }
    getch();     }
    while(pil!=5);
    }

void menuQueue(){
    int choice, value;
    int p=0;
    system("cls");
    void enqueue();
    void dequeue();
    void display();
    while(p<4)
    while (true) {
        system("cls");
        cout<<"=============================="<<endl;
        cout<<"||   -:: QUEUE ::-   ||"<<endl;
        cout<<"|| = -:: MENU  ::- = ||"<<endl;
        cout<<"==============================";
        cout<<"\n1. Menambahkan elemen";
        cout<<"\n2. Menghapus elemen";
        cout<<"\n3. Menampilkan Isi Queue";
        cout<<"\n4. Kembali Ke Menu Utama";
        cout<<"\nInputkan Pilihan : ";
        cin >> choice;
        system("cls");

        switch(choice) {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                 display();
                break;
            case 4:
                return;
            default:
                cout << "Pilihan Salah. Harap Masukan Pilihan Yang Benar!" << endl;
        }
    }

}
void enqueue()
{
    int no;
    if (rear==SIZE)
    cout<<"Antrian Penuh (queue is full)";
    else
    {
    cout<<"Masukkan nomor antrian (enter the number) : "; cin>>no;
    q[rear]=no;
     }
     rear++;
}
void dequeue()
{
     int no;
     if (front==rear)
     cout<<"Antrian Kosong (queue is empty)";
     else
     {
     no=q[front];
     front++;
     cout<<"\n"<<no<<" - no. antrian dihapus (removed from the queue)\n";
     getch();
     }
}

void display()
{
     int i,temp=front;
     if (front==rear)
     cout<<"Antrian Kosong (the queue is empty)";
     else
     {
     cout<<"\n element in the queue : ";
     for(i=temp;i<rear;i++)
     {
     cout<<q[i]<<" ";
     }
     }
     getch();
}

int main(){
    system("cls");
    int choice;

    while (true) {
        system("cls");
        cout<<"=============================="<<endl;
        cout<<"||   -:: PILIH SALAH SATU ::-   ||"<<endl;
        cout<<"|| = -:: MENU UTAMA       ::- = ||"<<endl;
        cout<<"=============================="<<endl;
        cout << " 1. Queue" << endl;
        cout << " 2. Stack" << endl;
        cout << " 3. Keluar" << endl;
        cout << " Masukan Pilihan Anda: ";
        cin >> choice;
        system("cls");

        switch(choice) {
            case 1:
                menuQueue();
                break;
            case 2:
                menuStack();
                break;
            case 3:
                cout << "Program Telah Berakhir,Terimakasih!" << endl;
                return 0;
            default:
                cout << "Pilihan Salah. Harap Masukan Pilihan Yang Benar!" << endl;
        }
    }

    return 0;

}
