/**
* @file         Veri Yapilari Odev Dosyasi
* @description  Program Veri.txt icerisindeki sayilari okuyup verilerin istenen sekilde sakliyor ve veriler istenen kosullarda olup olmadigini kontrol ederek bu kosullara gore ekrana cikti yazdiriyor. Ardindan verileri istenen degisikligi uygulayip yeni ciktiyi ekrana yazdiriyor. Aslinda asil amac verilerin yonetimi.
* @course       2. Ogretim C Grubu
* @assignment   2. Odev
* @date         17.12.2022
* @author       Umut Can Cagatay - umut.cagatay@ogr.sakarya.edu.tr
*/

#ifndef Hucre_hpp
#define Hucre_hpp

class Hucre //Hucre Dokunun Dugumu. Hucreler bir sayi bilgisi tutuyor.
{
public:
    Hucre(int veri);
    int veri;
    Hucre* sonraki;
};


#endif