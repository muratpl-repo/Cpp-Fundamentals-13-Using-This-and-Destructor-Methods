#include <iostream>
using namespace std;

class Ogrenci{
    private:
    string isim;
    int numara;

    public:

    Ogrenci(string isim, int numara){
        this -> isim = isim; //'this ->' sayesinde degisken ve methottaki isimlerin cakismasin onluyoruz...
        this -> numara = numara;
    }

    Ogrenci(string yazilacakIsim){
        isim = yazilacakIsim;
        numara = 0;
    }

    ~Ogrenci(){
        cout<<"Obje basarili bir sekilde yok edildi!!!"<<endl;

    }


    void setIsim(string yazilacakIsim){
        if(yazilacakIsim.size() >= 3){
            isim = yazilacakIsim;
        }
        else{
            cout<<"Lutfen 3 karakterden uzun isim giriniz!"<<endl;
        }
    }
    void setNumara(int yazilacakNumara){
        if(yazilacakNumara > 0){
            numara = yazilacakNumara;
        }
        else{
            cout<<"Lutfen sifirdan buyuk numara giriniz!"<<endl;
        }
    }

    void ogrenciBilgileriniGoster(){

        cout<<"Isim: "<<isim<<endl;
        cout<<"Numara: "<<numara<<endl;
    }

    string getIsim(){
        return isim;
    }

    int getNumara(){
        return numara;
    }

};


int main()
{
    Ogrenci* ogr1 = new Ogrenci("Murat Academy",18401325); //Deconstructor metotunu kullanabilmemiz icin pointer olustrmamiz lazim.

    ogr1->ogrenciBilgileriniGoster();

    delete ogr1; //Deconstructor metot sayesinde nesneyi silebiliyoruz...

    ogr1->ogrenciBilgileriniGoster();

    return 0;


}
