/**
* @file         Veri Yapilari Odev Dosyasi
* @description  Program Veri.txt icerisindeki sayilari okuyup verilerin istenen sekilde sakliyor ve veriler istenen kosullarda olup olmadigini kontrol ederek bu kosullara gore ekrana cikti yazdiriyor. Ardindan verileri istenen degisikligi uygulayip yeni ciktiyi ekrana yazdiriyor. Aslinda asil amac verilerin yonetimi.
* @course       2. Ogretim C Grubu
* @assignment   2. Odev
* @date         17.12.2022
* @author       Umut Can Cagatay - umut.cagatay@ogr.sakarya.edu.tr
*/

#ifndef Queue_hpp
#define Queue_hpp
#include<iostream>
#include "Dugum.hpp"
using namespace std;

class Queue	//Radix siralamada kullanilan Kuyruk Yapisi
{
public:
	Queue();
	~Queue();
	void ekle(int veri);
	void cikar();
    bool bosmu();
	int getir();
	int elemanSayisiGetir();
private:
	Dugum* 	ilk;
	Dugum*	son;
	int elemanSayisi;
};

#endif