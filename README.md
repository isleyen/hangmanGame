# Adam Asmaca Oyunu
Basit bir adam asmaca oyunu.

## Oynanış
6 adet yanlış harf tahmin etme hakkı olan oyuncu 6 hakkını bitirmeden kelimeyi doğru tahmine derse oyunu kazanır.

![image](https://github.com/isleyen/hangmanGame/assets/136992260/d57605da-d144-494c-a072-6d20fdc625ba)

## Kodları ve Algoritmasının Mantığı

![image](https://github.com/isleyen/hangmanGame/assets/136992260/da65b4a5-85b0-47b3-affe-f16a7098de34)

Gerekli kütüphaneleri tanımladık. Burada 3 Kütphane çok önemli: *vector*, *cstdlib*, *ctime*

__Vector:__ Bu kütüphaneyi dinamik dizi tanımalamaları için kullanacağız. Önceki porjemizde de kullanmıştık(bkz: examNotes)

__Cstdlib ve Ctime__: Bu iki kütüphane de random sayi üretmek için kullancağımız kütüphaneler.

![image](https://github.com/isleyen/hangmanGame/assets/136992260/c1e4b244-98f1-41ec-b4b8-9cb12516288c)

**displayCurrentState** fonksiyonu kelimenin tahmin edilen ve edilemeyen harflerini gösteriyor.

İçerisindeki for döngüsü ise seçilen kelimenin tüm harflerini teker teker döner eğer bu harf tahmin edildiyse harfi gösterir edilmediyse "_ " gösterir.

![image](https://github.com/isleyen/hangmanGame/assets/136992260/676428f6-af6b-4d33-b770-34b83007f1f1)

Bu fonksiyonda tüm harflerin tahmin edilip edilmediği kontrol edilir.

İşleyişi: guessed'de olan true false değerleri "latterGuessed" içerisine atılır ve kontrol edilir. Eğer hepsi true ise if'e girmez ve direkt "return true" döndürür.


## int main() fonksiyonumu 3'e ayırarak anlatacağım:

### İlk Kısım 

![image](https://github.com/isleyen/hangmanGame/assets/136992260/898e9c16-46cb-4248-8ee0-f7456d4d1a01)
Burada:

- Oyun için önceden belirlemem gereken kelimeleri yazıyorum.
+ cstdlib ve ctime kütüphaneleri ile random bir sayı atayıp dizi içindeki kelime sayısına göre modunu alıp kalan sayı nın denk geldiği kelimeyi seçiyorum.
* *__vector<bool> guessed(selectedWord.length(), false);__*: Bu fonksiyonda ise "selectedWord.length()" bize random seçilen kelimenin harf sayısını gösterir. "false" kısmı ise bu harf sayısı kadar false oluşturur. Yani tüm harfleri false olarak gösterir. Başlangıçta böyle olası lazım ve oyuncu tahmin ettikçe trueya dönüp ilk fonksiyon ile o harf tahmine dilen yerde gözükecek.

