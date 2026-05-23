#include <iostream>
#include <string>
using namespace std;
class DienThoai{
    protected:
        string tenMay;
        double giaTien;
    public:
        DienThoai(string tenMay, double giaTien){
            this->tenMay = tenMay;
            this->giaTien = giaTien;
        }
        virtual ~DienThoai(){
            cout<<"Da huy du lieu cua dien thoai!"<<endl;
        }
        virtual void inTT(){
            cout<<tenMay<<" - "<<giaTien<<endl;
        }
        virtual void danhGiaHieuNang() = 0;
};
class DienThoaiPhoThong:public DienThoai{
    private: 
        int namSX;
    public: 
        DienThoaiPhoThong(string tenMay, double giaTien, int namSX):DienThoai(tenMay, giaTien){
            this->namSX =namSX;
        };
        ~DienThoaiPhoThong(){
            cout<<"Da huy DTPT!"<<endl;
        };
        void inTT(){
            DienThoai::inTT();
            cout<<"San xuat vao nam: "<<namSX<<endl;
        }
        void danhGiaHieuNang(){
            cout<<"Hieu nang co ban!"<<endl;
        }
};
class DienThoaiGaming:public DienThoai{
    private:
        int tanSoQuet;
    public:
        DienThoaiGaming(string tenMay, double giaTien, int tanSoQuet):DienThoai(tenMay,giaTien){
            this->tanSoQuet = tanSoQuet;
        }
        ~DienThoaiGaming(){
            cout<<"Da huy DT Gaming!"<<endl;
        }
        void inTT(){
            DienThoai::inTT();
            cout<<"Tan so quet: "<<tanSoQuet<<endl;
        }
        void danhGiaHieuNang(){
            cout<<"Choi game het say!"<<endl;
        }
};
int main(){
    DienThoai *ds[2];
    ds[0] = new DienThoaiPhoThong("Oppo A31", 2500000, 2020);
    ds[1] = new DienThoaiGaming("POCO M7 Pro", 5500000, 120);
    for (int i = 0 ; i<2;i++){
        ds[i]->inTT();
        ds[i]->danhGiaHieuNang();
    }
    for (int  i = 0;i<2;i++){
        delete ds[i];
    }
    return 0;
}
