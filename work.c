#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
#include <ctype.h> // 138.kod ile birlikte geldi.
#include <Windows.h> // 149.kod ile geldi.
#include <conio.h> //  161. kod ile geldi.


void example1() {
    int age = 27;
    float height = 1.68;
    char initial = 'A';

    printf("Yaş: %d\n", age);
    printf("Boy: %.1f cm\n", height);
    printf("İlk harf: %c\n", initial);
}

void example2() {
    // Değişken tanımlamaları
    int sayi_int = 2024;               // Tamsayı
    float sayi_float = 3.14;           // Ondalıklı sayı (float)
    double sayi_double = 2.718281828459; // Hassas ondalıklı sayı (double)
    char karakter = 'C';               // Tek karakter

    // Değişkenleri ekrana yazdırma
    printf("int degeri: %d\n", sayi_int);
    printf("float degeri: %.2f\n", sayi_float); // Sadece 2 basamak gösterelim
    printf("double degeri: %.12lf\n", sayi_double); // 12 basamaklı gösterim
    printf("char degeri: %c\n", karakter);
}

void example3() {
    int yil = 2024;
    float ortalama = 85.5;
    char harf_notu = 'A';
    char name[] = "Ayse";

    printf("%snin %d yilinda ortalamasi %.1f ve harf notu %c'dir", name, yil, ortalama, harf_notu);
}

void example4() {
    int age = 25;
    float height = 1.75;
    char grade[] = "B2";
    char name[] = "Ali";

    printf("%s is %d years old , %.2f meters tall, and has a grade %s", name, age, height, grade);

}

void example5() {
    float f_num = 1.123456789;
    double d_num = 1.123456789;

    printf("Float: %.9f\n", f_num);
    printf("Double: %.9f\n", d_num);

    printf("Size of float: %zu bytes\n", sizeof(float));
    printf("Size of double: %zu bytes\n", sizeof(double));

}

void example6() {
    float f_sum = 0.0;
    double d_sum = 0.0;

    for (int i = 0; i < 1000000; i++) { // 1 milyon kez toplama
        f_sum += 0.1;
        d_sum += 0.1;
    }

    printf("Float Toplam: %.10f\n", f_sum);   // yuvarlama hatası birikti.float'ın hassasiyet sınırlaması nedeniyle, özellikle tekrarlayan işlemlerde sorun yaratabileceğini gösteriyor.
    printf("Double Toplam: %.10lf\n", d_sum); //double türü çok daha hassas çalıştığı için, toplam değeri beklenen 100000'a çok yakın bir sonuç verdi. 
                                              //Ancak, küçük bir hata hâlâ mevcut. Bu, sistemin yuvarlama ve depolama sınırlamalarından kaynaklanır.

/*Yuvarlama Hatası (Rounding Error):

Hem float hem de double, 0.1 gibi kesirli sayıların ikili sistemde tam olarak temsil edilememesi nedeniyle küçük yuvarlama hatalarına neden olur.
Bu hatalar tekrar eden işlemlerle büyür, ancak double türü bu hataları daha iyi yönetir.*/
}

void example7() { 
                          //Bir float ve bir double değişkenle 0.1'den başlayarak 1.0'a kadar olan sayıları toplarken her bir sayının karesini ekle:
    float f_square_sum = 0.0;
    double d_square_sum = 0.0;

    for (float i = 0.1; i <= 1.0; i += 0.1) {
        f_square_sum += i * i;
    }

    for (double i = 0.1; i <= 1.0; i += 0.1) {
        d_square_sum += i * i;
    }

    printf("Float Karesel Toplam: %.10f\n", f_square_sum);
    printf("Double Karesel Toplam: %.10lf\n", d_square_sum);


}

// Modify this variable value, start low and increase until something odd appears in the results
void example8() {  
  int numOfLoops = 10;

  // Please do not modify anything below this point
  float a = 0.1f;
  float b = 0;
  double x = 0.1;
  double y = 0;

  printf("At the start, our target float b is:%f\n", b);
  printf("At the start, our target double y is:%f\n", y);

// If you were curious about what this code is doing, it is looping through and adding to our variables b and y a set amount of 0.1 on each loop
  for(int i = 0; i < numOfLoops; i++)
  {
    b += a;
    y += x;
  }

  printf("At the end, our target float b is:%f\n", b);
  printf("At the end, our target double y is:%f\n", y);

}

void example9() {                                      //Değişkenlerin değerlerini güncelleyerek nasıl kullanılacağını gösteren bir örnek.
    int total_units = 3;      // İlk atama
    printf("Initial total_units: %d\n", total_units);  // Eğer bir değişkeni tanımladıktan sonra değerini değiştirmek istersen, sadece ismini kullanarak yeni bir değer atayabilirsin. Türünü tekrar belirtmene gerek yoktur.

    total_units = 5;          // Güncelleme
    printf("Updated total_units: %d\n", total_units);

    int a = 10;
    int b = a;                // a'nın değeri b'ye atandı
    printf("Initial a: %d, b: %d\n", a, b);

    a = 20;                   // a güncellendi, b aynı kaldı
    printf("Updated a: %d, b: %d\n", a, b);

 //Değişkenler birbirine bağımsızdır. Bir değişkenin değerini değiştirdiğinde, başka bir değişkene etkisi olmaz.(örneğin, yukarıdaki a ve b örneği).
}

void example10() {
    int count = 10;
    printf("Initial count: %d\n", count);

    count = 20 ; 
    printf("Updated count : %d\n", count);

    int x = 5; 
    int y = x; 
    printf("Initial x: %d, y: %d\n", x,y );

    x= 13; 
    printf("Updated x: %d, y:%d\n", x,y);

    int total = 0;
    printf("Initial total: %d\n", total);
    total = 10;
    printf("First update: %d\n", total);
    total= total + 5;
    printf("Second update: %d\n", total);

    // hatalı! değerler karışıyor. printf("initial total = %d, first update = %d, second update = %d ", total); 
    // veya doğrusu aynı satırda == printf("Initial total: %d, First update: %d, Second update: %d\n", 0, 10, total);
    //Ilk total değeri (0) sabit olarak yazılır.
    //İlk güncellemeden sonra gelen değer (10) sabit yazılır.
    //İkinci güncelleme sonucunda elde edilen değer (15) değişken olarak yazılır.
    //Yani totalin son hali değişken olarak yazılabilir.

   // int main() { Eğer değişkenlere değerleri dinamik olarak atayıp bu şekilde yazdırmak istersen, her adımı bir değişken olarak saklayabilirsin:
   // int initial_total = 0;  // Başlangıç değeri
   // int first_update = 10;  // İlk güncelleme
   // int second_update = first_update + 5; // İkinci güncelleme

    // Tüm değerleri tek bir printf ile yazdırma
   // printf("Initial total: %d, First update: %d, Second update: %d\n",
      //     initial_total, first_update, second_update);

   // return 0;
}

// Normal değişkenlerden farklı olarak, bir sabitin değeri programın çalışması sırasında değiştirilemez.
//Sabitler, const anahtar kelimesi kullanılarak tanımlanır.
//const type variable_name = value;
//const int DAYSINWEEK = 7;
//Sabitler genellikle büyük harf kullanılarak tanımlanır, 
//Değeri sabit bir veriyi yanlışlıkla değiştirmekten kaçınmak için.

void example11() {

    const int DAYSINWEEK = 7;  // Sabit bir tamsayı
    const float PI = 3.14159;  // Sabit bir ondalık sayı
    const char INITIAL = 'A';  // Sabit bir karakter

    printf("Days in a week: %d\n", DAYSINWEEK);
    printf("Value of PI: %.5f\n", PI);
    printf("Initial letter: %c\n", INITIAL);
}


//int main() {
   // const int DAYSINWEEK = 7;
   // DAYSINWEEK = 8;  // HATA! Sabit bir değeri değiştiremezsiniz.
   // return 0; }
   //error: assignment of read-only variable 'DAYSINWEEK'

void example12() {
    //sabit pi ve bir çemberin çevresini/alanını hesapla
    const float PI = 3.14159;
    float radius = 5.0;

    float circumference = 2 * PI * radius;
    printf("Circumference: %.2f\n", circumference);

    float area = PI * radius * radius;
    printf("Area: %.2f\n", area);

}

void example13(){
    // Kullanıcı yarıçapı girsin.
    const float PI = 3.14159;
    float radius;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius); // scanf("format", &variable)

    float circumference = 2 * PI * radius ; 
    float area = PI * radius * radius ; 

    printf("Circumference: %.2f\n", circumference);
    printf("Area: %.2f\n", area);
}

// "format": Kullanıcının gireceği veri türünü belirtir. Örneğin:
//%d: Tamsayı (int)
//&variable: Kullanıcının girdiği değerin hangi değişkende saklanacağını belirtir. 
//& işareti değişkenin bellekteki adresini ifade eder ve bu adres üzerinden değişkenin değeri güncellenir.


void example14(){

    int number;
    printf("Bir sayi girin: ");
    scanf("%d", &number);  // Kullanıcıdan tamsayı alır
    printf("Girdiginiz sayi: %d\n", number);

}

void example15(){

    int x, y;
    printf("İki sayi girin: ");
    scanf("%d %d", &x, &y);  // Kullanıcı iki tamsayı girer
    printf("Girdiginiz sayilar: %d ve %d\n", x, y);
}

// HATALI KOD 
// const anahtar kelimesi ile tanımlanan bir değişkenin değeri sadece bir kere atanabilir ve daha sonra değiştirilemez. 
//Ancak, sen SPEEDOFLIGHT sabitini tanımladıktan sonra tekrar bir değer atamaya çalışıyorsun:
//int main() {
  
// Speed of light is 1.86e5 mi/s or 186000 mi/s we will store 1.86 and do the multiplicaiton later.
  //const double SPEEDOFLIGHT;
  //int timeTraveledInSeconds = 30;

   //SPEEDOFLIGHT = 1.86;


  // No need to change below here
 //printf("Light would travel %.2f miles in %d seconds\n", SPEEDOFLIGHT, timeTraveledInSeconds);

// }

// DOğrusu: const double SPEEDOFLIGHT = 1.86; 

void example16(){
    //implicit hem de explicit dönüşümü 
    double sayi = 3.75;
    int a ;

    a = sayi;
    printf("implicit conversion: %d",a);
    a=(int)sayi;
    printf("explicit conversion: %d",a);
}

void example17(){

    char sourceChar = 'a';
    int targetInt;

    targetInt = (int)sourceChar;  // 'a' ASCII değerine dönüştürülür
    printf("ASCII value of '%c' is: %d\n", sourceChar, targetInt);

    int sourceInt = 65;
    char targetChar;

    targetChar = (char)sourceInt;  // 65 değeri 'A' karakterine dönüştürülür
    printf("Character for ASCII value %d is: '%c'\n", sourceInt, targetChar);

    //ASCII Tablosu:
    //ASCII tablosundaki değerler sabittir. Bu nedenle char ve int türleri arasında dönüşüm güvenlidir.
    //Explicit Cast Kullanımı:
    //Açık dönüşüm (type) kullanılarak yapılır. 

}

void example18(){

    char m = 'z';
    int a;

     a = (int)m;// 'z' karakteri ASCII değeri olan 122'ye dönüştürülür
     printf("ASCII value of %c is: %d\n",m,a);

    int b = 90;
     char n;

     n = (char)b;// 90 sayısı ASCII tablosunda 'Z' karakterine dönüştürülür
     printf("Character for ASCII value %d is: %c\n",b,n);
    }

void example19(){

    //Kullanıcıdan bir int değeri al (şimdilik scanf kullanmadan sabit değer kullanabilirsin).
    //Bu değeri iki katına çıkar ve bir double değişkene ata.
    //Sonucu ekrana yazdır.

    int number;
    double r;
    printf("Register number: ");
    scanf("%d",&number);

    r = number * 2 ; // Sağ taraftaki ifade sol tarafa atanmalı.
    printf("sonuc: %.2f", r );

    }

   

void example20() {  // Dönüşüm anlama. 
    int x = 5;           
    double y = 32.23;

    x = (int)y;  // y'nin int türüne dönüştürülmüş hali x'e atanıyor

    printf("x is now: %d\n", x);   // x'i yazdır
    printf("y is still: %.2f\n", y); // y'yi yazdır

}
void example21(){
    int a = 2;
    int b = 3;
    int sum = a + b;          // Toplama
    int difference = a - b;   // Çıkarma
    int product = a * b;      // Çarpma
    int quotient = b / a;     // Bölme (tam sayı bölme)

    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);
    printf("Product: %d\n", product);
    printf("Quotient: %d\n", quotient);

}

void example22(){
    int a = 10;
    int b = 4;

    printf("Toplama: %d\n", a+b);
    printf("Difference: %d\n", a-b);
    printf("Product : %d\n", a*b);
    printf("Quotient: %d\n", a/b);

    float x = 10.0;
    float y = 2.0;

    printf("Quotient: %.2f\n", x/y);

    //int m = 5;
    //m++;
    //printf("m artti: %d\n", ++m); // ++ önde olunca önce arttırır sonra yazar. işlemi iki kez yapıyor sonuç 7.
    //m--;
    //printf("m azaldi: %d\n",m-- ); // önce azaltır sonra yazar. 

    int m = 5;
    printf("m baslangic: %d\n", m);

    m++;
    printf("m artti: %d\n", m);  // m = 6 olur // önce yazıp sonra arttırıyor.

    --m;
    printf("m azaldi: %d\n", m);  // m = 5 olur // önce azaltıp öyle yazıyor. 

}

void example23(){

    int m = 5;

    printf("Initial m: %d\n", m);  // İlk değer: 5
    printf("Using --m: %d\n", --m); // m önce 4'e düşer, sonra yazdırılır
    printf("Using m--: %d\n", m--); // m önce 4 kullanılır, sonra 3'e düşer// M'nin düşmeden önceki değeri kullanılır. 
    printf("Final m: %d\n", m);    // Son değer: 3

}

void example24(){

    int itemsSold = 150;
    double itemPrice = 19.99;
    double totalRevenue;
    double netRevenue;

    itemsSold = itemsSold + 100; // 100 satis daha oldu.
    totalRevenue = itemsSold * itemPrice ; 
    netRevenue = totalRevenue * 0.7 ; // %30 vergi alınıyor. Net gelir. 

    printf("Total items sold: %d\n", itemsSold);
    printf("Total revenue:%.2f\n", totalRevenue);
    printf("Net revenue after tax: %.2f\n",netRevenue);

}

void example25(){ // Sayı Tek/Cift bulma.

    int x = 7;

    if (x % 2 == 0) {
        printf("%d is even\n", x);
    } else {
        printf("%d is odd\n", x);
    }

}

void example26(){

    int sayi;

    printf("Bir sayi girin: ");
    scanf("%d", &sayi);

    if (sayi % 2 == 0){
        printf("%d cift sayidir\n", sayi);
    }
    else {
        printf("%d tek sayidir\n", sayi);
    }

}

void example27(){       // Bu saat yalnızca 12 saatlik formatta çalışıyor (1'den 12'ye kadar).
                        //Eğer şu an başlangıç saati (startHour) 7 ise ve belirli bir saat sayısı (hoursToAdd) geçerse, saatin kaç olacağını hesaplaman gerekiyor.
    int startHour = 7 ;
    int hoursToAdd = 15 ;
    const int hoursInDay = 12;
    int currentHour;

    currentHour=(startHour+hoursToAdd)%hoursInDay;

    if (currentHour == 0) {
        currentHour = 12;
    }


    printf("Starting at %d o'clock, after %d hours, the clock will show %d o'clock.",startHour,hoursToAdd,currentHour);
}

void example28(){
  
    int a = 10;

    // Toplama
    a += 5; // a = a + 5
    printf("After += : %d\n", a); // 15

    // Çıkarma
    a -= 3; // a = a - 3
    printf("After -= : %d\n", a); // 12

    // Çarpma
    a *= 2; // a = a * 2
    printf("After *= : %d\n", a); // 24

    // Bölme
    a /= 4; // a = a / 4
    printf("After /= : %d\n", a); // 6

    // Modulo
    a %= 5; // a = a % 5
    printf("After %%= : %d\n", a); // 1

}

void example29(){
    int a = 20;
    
    a += 10 ;
    printf("After += : %d\n", a);

    a *= 2 ;
    printf("After *= : %d\n", a);

    a /= 5 ;
    printf("After /= : %d\n", a);

    a %= 3;
    printf("After %%= : %d\n", a);

}

void example30(){ // Comparisons

    int a = 3;
    int b = 5;

    if (a == b) {
        printf("a ve b esittir.\n");
    } else if (a > b) {
        printf("a, b'den büyüktür.\n");
    } else if (a < b) {
        printf("a, b'den kücüktür.\n");
    }

    if (a != b) {
        printf("a, b'ye esit degildir.\n");
    }

    if (a <= b) {
        printf("a, b'ye kücük veya esittir.\n");
    }

  
}

void example31(){

    int age;
    printf("Yasinizi girin: ");
    scanf("%d", &age);

    if (age < 18) {
        printf("ergensin");
    }
    else if (age > 18) { // araya koşul eklemek.
        printf("daha az ergensin");
    }
    else { // Yaş tam olarak 18 ise // hiçbir koşul sağlanmazsa.
        printf("18 yasinda bir ergensin!\n");
    }
}

void example32(){
  
    int age = 20;
    int score = 85;

    // Mantıksal "VE" kullanımı
    if (age >= 18 && score > 80) {
        printf("Yasiniz 18 ve üzeri, skorunuz 80'den büyük.\n");
    }

    // Mantıksal "VEYA" kullanımı
    if (age < 18 || score > 80) {
        printf("Yasiniz 18'den kücük veya skorunuz 80'den büyük.\n");
    }

    // Mantıksal "DEĞİL" kullanımı
    if (!(age < 18)) {
        printf("Yasiniz 18'den küçük degil.\n");
    }

}

void example33(){

    int sicaklik;
    printf("bir sicaklik degeri girin: ");
    scanf("%d",&sicaklik);

    if (sicaklik < 0) {
        printf("gödüm donuyor");
    }
    if ( sicaklik >0 && sicaklik < 30 ){
        printf("\nhava guzel");
    }
    if ( sicaklik > 30) {
        printf("welkam tu cehannam");
    }
    if ( sicaklik != 25 ) {                // veya !(sicaklik == 25)
        printf("\nsicaklik 25 degil.");
    }

}
 
void example34(){

    int a = 10, b = 5, c = 2;
    int result;

    result = a + b * c - 4 / 2;
    printf("Result: %d\n", result);

}

void example35(){ // Student Exam Scores and Status Check

    int exam1;
    int exam2;
    int exam3;

    printf("1st exam score: ");
    scanf("%d",&exam1);

    printf("2nd exam score: ");
    scanf("%d",&exam2);

    printf("3rd exam score: ");
    scanf("%d",&exam3);

    double average;
    average= (exam1+exam2+exam3)/3.0; // division is also done as an integer. You must use 3.0 to get decimal results.
    printf("average score: %.2f \n",average);

    if (average >= 90) {
        printf("Great, you got AA!\n");
    }

    if (average >= 70 && average <= 89){
        printf("Success, you got BB.\n");
    }

    if (average >= 50 && average <= 69){
        printf("You passed, you got CC.\n");
    }

    if (average < 50 ){
        printf("You failed, you got FF.\n");

    //else {
    //  printf("You failed, you got FF.\n");
    //}
    }

    int totalScore;
    totalScore = exam1 + exam2 + exam3;
    printf("Total Score: %d\n", totalScore);
    if (totalScore %2 == 0){
        printf("The total score is even.");
    }
    else {
        printf("The total score is odd");

    }
}

void example36(){                       ///Sistemdeki büyük harf karakterlerin tam sayı değerlerini yazdırma. 
    for(int i = 'A' ; i <= 'Z'; i++){
        printf("%d\n", i);
    }
}

void example37(){

    printf("alert  :%d\n",'\a') ;
    printf("backspace  :%d\n",'\b');
    printf("newline    :%d\n",'\n');
    printf("carriage retunr :&d\n",'\r');
    printf("horizontal tab  :%d\n",'t');
    printf("vertical tab :%d\n",'v');
    printf("form feed:    &d\n", 'f');
    printf("backslash: %d\n", '\\');

}

void example38(){
    int x = 42;
    int y = 34;
    int sonuc;
    sonuc = 42*42 + 34*34;

    printf("%d * %d + %d * %d = %d\n ", x,x,y,y,sonuc);
    //printf("%d * %d + %d * %d = %d\n ", x,x,y,y, x*x+ y*y);
}

void example39(){

    //int a = 86532; // Bu sayı 2 byte'lık int'e sığar mı?Sığmaz.
    unsigned long int a = 86532;
    printf("%lu\n", a);
    //printf("%d\n", a);

}

void example40() {

    signed int x = -10;        // İşaretli int
    unsigned int y = 65530;   // İşaretsiz int

    printf("Signed x: %d\n", x);
    printf("Unsigned y: %u\n", y);

}

void example41(){

    unsigned int a = 3; // İşaretsiz int     //Çünkü işaretsiz türlerde negatif değerler kullanılmaz ve çıkarma işlemi mod 2^n ile döner.
    unsigned int b = 8;

    printf("a - b: %u\n", a - b);  // İşaretsiz çıkarma

}
void example42(){

    char str[100] = "Muhammet Furkan Ozdemir";
    printf("isim : %s\n",str);// yazının içine kısım istersem. 
    //printf(str); // " " içindekini yazdırır. 
}

void example43(){
    int x;
    printf("Bir tam sayi girin: ",x);
    scanf("%d",&x);

    int retval = printf("%d * %d = %d",x, x, x*x);
    printf("\nretval = %d\n", retval);

}

void example44(){
    int x = 467;
    char str[] = "%d";

    printf(str,x);
    // printf(str) bu halde çalışmaz, argüman yok.
    //printf("\n%%d"); string işaretini yazdırmak için % kaçış karakteri kullanımı.
}

void example45(){
    double sum;
    printf("toplam tutari giriniz:");
    scanf("%lf",&sum);

    printf("kdv = %%20 %.f\n ", sum * .2);
    //printf(" kdv = %%%.2f/n"); biri yüzde için diğeri formatın.
}


void example46(){

    printf("%%%%aycan%%%%\n");
  
}

void example47(){

    int x,y;
    printf("iki sayi giriniz: ");
    scanf("%d%d",&x,&y);
   //printf("%d'nin %d e modu: %d\n",x,y, x % y);
    printf("%d%%%d = %d\n",x,y,x%y); // arada % olsun:) 
}

void example48(){

    /*Görev:

    Bir mağazanın portakal satışı için basit bir sistem oluştur. Portakal fiyatı 0.99 ve başlangıçta 50 adet portakal var. Ortalama müşteri puanı 912 ve yorum sayısı 8.

    İstekler:

    Eğer portakal miktarı 20'den az veya gün haftanın 5. günü (4) ise indirim başlat.
    Yeni bir müşteri portakalları değerlendirdi ve puan olarak 60 verdi. Ortalama puanı tekrar hesapla.*/

    double orangeCost = 0.99 ;
    int orangeQuantity = 50;
    double reviewScore = 912;
    int numberOfReviewers = 8;
    int dayOfWeek = 0;
    double orangeReview; 

    int newReview = 60;
    reviewScore += newReview;
    numberOfReviewers += 1;
    orangeReview = reviewScore / numberOfReviewers ;


    if( orangeQuantity < 20 || dayOfWeek == 4)
    {
        printf("Sale on oranges today, today only they are: $%.2f\n", orangeCost * .9);
    }
    printf("A orange costs: $%.2f,there are %d in inventory and your customers gave it an average review of %.2f%%!\n",
    orangeCost,orangeQuantity,orangeReview);

}

void example49(){

    int x;
    int ret= scanf("%d", &x);    // Geri dönüşü başarı değeri.(retval)
    printf("ret = %d\n", ret);

}

void example50(){

    int x;
    printf("Bir tam sayi girin: ");
    scanf("%o",&x); // girişi oktal sekizlik tabanda istiyorum.
    printf("x = %d\n",x); // 10'luk tabanda yazdırıyorum.

}

void example51(){ // Video hiz değişimine göre video süresi hesaplama kodu.

    double videoSuresi;
    printf("Video suresini girin : ");
    scanf("%lf", &videoSuresi);

    //char birim[10];
    //printf("Dakika olarak mi girdiniz saat olarak mi? Lutfen dakika veya saat yaziniz: ");
    //scanf("%s",&birim);

    float videoHizi;
    printf("Kac x hizda oynatmak istiyorsunuz : ");
    scanf("%f", &videoHizi);

    if (videoHizi >= 1) {
        printf(" %.2f x video hizinda video suresi %.2lf'ye dusuyor.\n", videoHizi, videoSuresi / videoHizi);
    } else if (videoHizi > 0 && videoHizi < 1) {
        printf(" %.2f x video hizinda video suresi %.2lf'ye cikiyor.\n", videoHizi, videoSuresi / videoHizi);
    } else {
        printf("Hiz 0 veya negatif olamaz!\n");
    }
    
}

void example52(){

    int x;
    printf("bir tam sayi girin: ");
    scanf("%d", &x);
    printf("x = %d\n",x);

    int y;
    printf("y = %d\n",y);
    scanf("%x",&y);

}

void example53(){

    int x,y,z;

    printf("uc tam sayi giriniz: ");   // ali2345 girersen 0 verir, çünkü; scanf başarısız olduğunda karakteri bufferda tutmaya devam ediyor. İlk girdiğin değer istenene uymuyor yani.
    int ret = scanf("%d%d%d",&x,&y,&z);

    printf("ret = %d\n",ret);
}

void example54(){      //Wandbox'ta deneyebilirsin.

    int x;

    printf("Bir tam sayi giriniz:\n");
    int ret = scanf("%d",&x);

    if(ret == -1){               // scanf'in hata kodu.
        printf("bir giris yok\n");
    }
    else if(ret == 0){
        printf("uygun olmayan giris\n");
    }
    else{
        printf("giris basarili: %d\n",x);
    }
}

void example55(){

    printf("3 sayi giriniz: ");
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    
    int max3(int a,int b,int c) // Fonksiyon içinde fnx tanımlanamaz ; bu yüzden koymadık.Decleration error. yoksa voidexample55'in üstüne ekstra bir tane daha yazmalıydın prototip tanımlamasını 
                                //int max3(int a, int b, int c); şeklinde. Ama bu example formatımıza uymuyor.
                                //Fnx burda tanımlı.
{
    int max = a;

    if(b > max)
    max = b;

    if(c > max)
    max = c;

    return max;
}
    printf("%d%d%d sayilarinin en buyuku: %d\n",x,y,z,max3(x,y,z));

}

//void example56()  {  //Önemli kavramlar ve kod örnekleri.

   /* int x = 5/ 0 // Undefined Behaviour(Tanımsız Davranış) Kesin sonucu olmayan durumlar.

    int a = 1, b = 2;                           //Unspecified Behaviour ( Belirtilmemiş Davranış.). Hangi seçeneğin seçileceği belli değil
    int result = printf(" %d %d",a++,b++);      //Fonksiyona gönderilen argümanların değerlendirme sırası.// Argümanların sırası belirtilmemiş

    char x = -1; //Implementation-Defined Behavior:Standart, davranışı belirliyor ama uygulama bunu açıklamalıdır.
                 //Örnek: charın signed mı yoksa unsigned mı olduğu?
                 //Signed ya da unsigned davranışı derleyiciye bağlı
                
    int x = 5;
    x = "Hello"; //Statik Tip (Static Typing):Derleme aşamasında değişkenlerin türü kontrol edilir.
                 // Derleme hatası, tür uyuşmazlığı
    
    x = 5        //Dinamik Tip (Dynamic Typing): Türler çalışma zamanında kontrol edilir.
    x = "Hello"  #Hata yok

    void* ptr;   //Typless Tür:bir değişkenin belirli bir türle sınırlı olmadığı durumları ifade eder.
    int x = 5;   //C'de en iyi örnek void* türüdür.
    ptr = &x;    // Herhangi bir türe işaret edebilir

    int x = 5;   // Diagnostic:Derleyicinin programcının kodunda bulunan hataları veya uyarıları bildirmesidir.
    int y = "Hello"; // Derleyici: Uyarı veya hata bildirir

    /*C dilinde 'A' bir karakter sabitidir (character constant) ve türü int'dir.
    Bunun sebebi, C'nin geçmişte daha fazla işlemci bağımsızlığını desteklemek için 'A' karakterini bir sayı (ASCII değeri) olarak işlemesidir.
    C++ dilinde 'A' char türündedir, çünkü bu türle daha tutarlı çalışır.
    Bu karışıklık, dilin tasarımından kaynaklanıyor:
    'A' → C'de int, C++'da char.

    char str[] = "Hello"; //Null-terminated bir string, '\0' karakteriyle sonlandırılmış bayt dizisidir.'\0' otomatik eklenir

    char c = '\0';        //Null karakter, \0 ile ifade edilir ve değeri sıfırdır.
    printf("Null karakter: %c\n", c); // Hiçbir şey yazmaz

    int add(a, b)          // Eski C (K&R C) stillerinde fonksiyon tanımı
    int a;
    int b;                 //Old-Style Function Definition Örneği
    {
        return a + b;
    }

} */

void example57(){

    int age = 16;

    if (age >= 18) {
    printf("You are an adult.\n");
    } 

    else {
    printf("You are a minor.\n");
    }

}

void example58(){

    int score = 85;

    if (score >= 90) {
    printf("Grade: A\n");
    } 
    else if (score >= 80) {
    printf("Grade: B\n");
    } 
    else {
    printf("Grade: C\n");
    }

}

void example59(){

    int a = -2;

    if(a > 0 ){
        printf("sayi pozitif\n");
    }
    else if ( a < 0){
        printf("sayi negatif\n");
    }
    else{
        printf("sayi 0.");
    }

}

void example60(){

    int yas;

    printf("yasinizi giriniz:");
    scanf("%d",&yas);

    if(yas >=18 ){
        printf("yetiskinsiniz");
    }
    else{
        printf("resit degilsiniz");
    }

}

void example61(){

    int a;
    
    printf("bir sayi giriniz:");
    scanf("%d",&a);             // scanf(%d\n girersen /n ile kullanıcıdan bir giriş daha bekler yeni satır girişi bekler..)

    if( a % 2 == 0){
        printf(" sayi cifttir.");
    }
    else{
        printf(" sayi tektir.");
    }
}

void example62(){

    int a = 30 ;
    
    if(a % 5 == 0 && a % 3 == 0){
        printf("hem 5e hem 3e bolunebilir");
    }
    else if( a % 5 == 0 && a % 3 != 0 ){
        printf("sayi sadece 5e bolunebilir.");
    }
    else if( a % 5 != 0 && a % 3 == 0){
        printf("sayi sadece 3e bolunebilir");
    }
}

void example63(){

    int c = 65;

    printf("%d\n", c); //Tam sayıyı ondalık (decimal) sistemde yazdırır.
    printf("%o\n", c); // Tam sayıyı sekizlik (octal) sayı sisteminde yazdırır.
    printf("%#o\n", c); // Sekizlik (octal) sayı sisteminde yazdırır ve başına 0 ekler.
    printf("%x\n", c); //Tam sayıyı onaltılık (hexadecimal) sayı sisteminde küçük harflerle yazdırır.
    printf("%#x\n", c);//Onaltılık (hexadecimal) sayı sisteminde küçük harflerle yazdırır ve başına 0x ekler.
    printf("%X\n", c); //Tam sayıyı onaltılık (hexadecimal) sayı sisteminde büyük harflerle yazdırır.
    printf("%#X\n", c); //Onaltılık (hexadecimal) sayı sisteminde büyük harflerle yazdırır ve başına 0X ekler.
    printf("%c\n",c); // Bir karakteri yazdırır. 79'un karakter karşılığı.
    //# işareti, sayının önüne ilgili sistemin sembollerini (0 veya 0x) ekler.
    //%# (Prefix Modifier)
}

// ASCII Printable karakterleri yazdıran kod.
void example64(){

    for (int i= 33; i < 127 ; i++){
    printf("%c",i);
    }
    /* Döngü 33'ten başlar çünkü;ilk 32 karakter kontrol karakteridir; 32 nolu karakter space
    karakteridir. 127 nolu karakter de kontrol karakteridir. Büyük harf karakterler 65'ten başlar
    Büyük harf ve küçük harf arasında 6 tane karakter var, sebebi aynı karakterin büyüğü ve küçüğü arasındaki fark 
    32 olsun diyedir (26+6), bu sayede büyük harf küçük harf dönüşümünde 1 biti set etmekle gerçekleştirilebilir.
    Büyük harf küçük harf dönüşümlerinin bit seviyesinde gerçekleşmesi. 2^5. */
}

void example65(){

    for (int i= 33; i < 127 ; i++){
    printf(" %d %c\n",i,i);
    }

    /*%d formatlaması tam sayı olarak onluk sayı sisteminde, %c ise karakterlerin görüntüsünü yazıyor
    Hem karakterlerin ASCII karakter kodlamasındaki kod numarasını 
    Hem de karakterin kendisini görüyorum.*/
}

void example66(){

    for (int i= 33; i < 127 ; i++){
    printf(" %3d %#X %c\n",i,i,i);
    }
    
    /* Kaymayı engellemek için formatting stringde 
    conversion spesifierdan önce yazma alanı 
    genişliğini tam sayı olarak verebilirsin. %3d = yazma
    alanı genişiği 3 olsun demek.*/
}

// https://en.cppreference.com/w/c/io/fprintf printf formatlama dönüşümleri görebilirsin.

void example67(){

    int a;
    int b;

    printf("iki tane sayi giriniz: ");
    scanf("%d%d",&a,&b);

    if(a >0 && b >0 ){                          //İlk koşul doğruysa diğerlerini kontrol etmeye gerek yok. Bu yüzden if yerine else if kullanılabilir.
        printf("iki sayi da pozitif");
    }
    if((a > 0 && b < 0) || (a < 0 && b > 0)){
        printf("sadece bir sayi pozitif");
    }
    if( a < 0 && b < 0){
        printf("iki sayi da negatif");
    }

}

void example68(){

    int yas ;
    int maas;

    printf(" yasinizi giriniz:");
    scanf("%d",&yas);
    printf("maasinizi giriniz:(TL)");
    scanf("%d",&maas);

    if( yas > 18 && maas >20.000){
        printf("uygunsunuz");
    }
    else{
        printf("uygun degilsiniz");
    }

}

void example69(){

    int sicaklik;
    printf(" hava kac derece?:");
    scanf("%d", &sicaklik);

    if( sicaklik >= 30){
        printf(" hava cok sicak");
    }
    else if( sicaklik > 15 && sicaklik < 30){
        printf("hava ilik");
    }
    else{
        printf(" hava soguk"); 
    }
}

void example70(){

    int ay;
    printf("Bir yil 12 aydir, bir ay nuamarasi giriniz: ");
    scanf("%d",&ay);

    if (( ay == 12) || (ay == 1) || (ay ==2)){
        printf("Kis ayi.");
    }
    else if ( (ay == 3) || (ay == 4 )|| (ay == 5)){
        printf("ilkbahar.");
    }
    else if ( (ay == 6) || (ay ==7) || (ay ==8)){
        printf("yaz");
    }
    else if ((ay == 9) || (ay ==10) || (ay ==11)){
        printf("sonbahar");
    }
    else{
        printf("lutfen 1-12 arasinda bir sayi giriniz.");
    }
}

void example71(){

    //örnek 70'in switch-case hali.

    int ay;

    printf("Bir yil 12 aydir, bir ay numarasi giriniz: ");
    scanf("%d", &ay);

    switch (ay) {
        case 12:
        case 1:
        case 2:
            printf("Kis ayi.\n");
            break;
        case 3:
        case 4:
        case 5:
            printf("İlkbahar.\n");
            break;
        case 6:
        case 7:
        case 8:
            printf("Yaz ayi.\n");
            break;
        case 9:
        case 10:
        case 11:
            printf("Sonbahar.\n");
            break;
        default:
            printf("Lütfen 1-12 arasinda bir sayi giriniz.\n");
            break;
}

}

void example72(){

    int gun;

    printf("Haftanin bir gununu numara olarak giriniz (1-7): ");
    scanf("%d", &gun);

    switch (gun){
        case 1:
            printf("pazartesi.");
            break;
        case 2:
            printf("sali.");
            break;
        case 3:
            printf("carsamba.");
            break;
        case 4:
            printf("persembe.");
            break;
        case 5:
            printf("cuma");
            break;
        case 6:
            printf("cumartesi");
            break;
        case 7:
            printf("pazar.");
            break;
        default:
            printf("lutfen 1-7 arasinda bir sayi giriniz.");
            break;
    }
}

void example73(){

    int x,y;

    printf("iki sayi giriniz:");
    scanf("%d%d",&x,&y); // böyle durumlarda girişin başarılı olduğunu düşüneceğiz. 

    printf("%d + %d = %d\n",x,y,x+y);   
    printf("%d - %d = %d\n",x,y,x-y);
    printf("%d - %d = %d\n",y, x, y-x);

}

void example74(){

    int x = 2000000000;      //int 4 byte. 4.294.967.296 (-2^31)~(2^31-1).değer aralığı. -2.147.483.648/2.147.483.647
    int y = 2000000000;

    int z = x + y;
    printf("z = %d\n",z);

    //değer -294967296 çıkıyor.
    /*int türü genellikle 32-bit signed bir tamsayıdır.
    Minimum Değer: -2,147,483,648
    Maksimum Değer: 2,147,483,647 
    2000000000 + 2000000000 = 4000000000 olur.
    Ancak bu değer int'in sınırlarını aştığı için signed overflow oluşur.
    Overflow sonucunda mod 2³² uygulanır ve işaretli aralık içinde bir sonuç döner
    4000000000 - 2³² = -294967296
    Eğer büyük sayılarla çalışmanız gerekiyorsa long long kullanabilirsiniz:
    long long x = 2000000000;
    long long y = 2000000000;

    long long z = x + y;
    printf("z = %lld\n", z);*/

}

void example75(){

    unsigned int x = 3000000000;      
    unsigned int y = 3000000000;

    unsigned int z = x + y;
    printf("z = %u\n",z);

    // Sonuc: z = 1705032704 çıkıyor.
    //6000000000 % 2^32 den dolayı çıkıyor. mod 2^n kuralı.
    /*unsigned int genellikle 32-bit unsigned bir tamsayıdır.
    Minimum Değer: 0
    Maksimum Değer: 2³² - 1 = 4,294,967,295
    3000000000 + 3000000000 = 6000000000 olur.
    Ancak bu değer unsigned int'in sınırlarını aştığı için unsigned overflow oluşur.*/

}

void example76(){

    int x;

    printf("bir sayi giriniz:");
    scanf("%d",&x);

    x = -x; // işaretli tam sayının işaretini değiştirir. R-Value(-x)
    printf("x = %d\n",x);
}

void example77(){

    int hour;
    int n;

    printf("simdi saat kac?");
    scanf("%d",&hour);
    printf("kac saat gecti?:");
    scanf("%d",&n);
    printf("simdi saat %d, %d saat sonra saat %d olacak: ",hour,n, (hour+n) % 12); 
}

void example78(){

    //4592
    int x;

    printf("4 basamakli bir sayi giriniz:");
    scanf("%d",&x);
    printf("girilen sayi: %d\n",x);

    printf("binler basamagi: %d\n", x / 1000);
    printf("yuzler basamagi: %d\n", x / 100 % 10);
    //printf("yuzler basamagi: %d\n", x % 1000 / 10);
    printf("onlar basamagi: %d\n", x / 10 % 10);
    //printf("onlar basamagi: %d\n", x % 100 / 10);
    printf("birler basamagi: %d\n", x % 10);

}

void example79(){

    // 4592 ise 2954
    //4500 ise 54.
    // sayının basamaksal olarak tersini.
    int x;

    printf("4 basamakli bir sayi giriniz:");
    scanf("%d",&x);
    printf("girilen sayi: %d\n",x);
    //y'nin birler basamağı x'in binler basamağı.
    int y = x % 10 * 1000 + x / 10 % 10 * 100 + x / 100 % 10 * 10 + x / 1000;
    printf("tersi %d\n",y);
}

/*
	 Operator öncelik seviyeleri
	 
	 1	() [] . ->
	 2	+ - ! ~ & * sizeof (type cast) ++ --		sağdan sola (sağdan sola parantezlemeye başlıyoruz)
	 3	* % /										3 tanesi hariç diğerleri soldan sağa
	 4	+ -
	 5	>> <<
	 6	< <= > >=
	 7	== !=
	 8	&
	 9	^
	 10 |
	 11 &&
	 12 ||
	 13	? :											sağdan sola
	 14 = += -= *= /= %= >>= <<= &= ^=  |=			sağdan sola
	 15 ,
	 
	 */

void example80(){

    int x = 23;
    int y = 7;

    printf("%d\n",x-- % ++y); // 23 % 8 
    printf("%d\n",x % y);     // 22 % 8 (SIDE EFFECT)
}

void example81(){

    //maximal munch

    int x = 20;
    int y = 30;

    int z = x+++y;

    printf("z = %d\n",z);
    printf("x = %d\n",x);
    printf("y = %d\n",y);

}

//void example82()

    /*if (a < b) {
    min = a;
    } else {
    min = b;
    }*/

    // Ternary OPerator
    //int min = a < b ? a : b;

    /*if (score >= 50) {
    printf("Passed\n");
    } else {
    printf("Failed\n");
    }
    printf("%s\n", score >= 50 ? "Passed" : "Failed ");
    */

    /* int x = 5
    int absolute = x < 0 ? -x : x;*/



void example83(){

int a = 10, b= 20;
int min = a < b ? a : b;
int max = a > b ? a : b;

printf("Min: %d , Max: %d\n",min,max);

}

void example84(){

    int a;
    printf("Bir sayi giriniz: ");
    scanf("%d",&a);

    printf("%d bir %s\n",a, a % 2 == 0 ? "Cift sayi" : "Tek sayi");
}

void example85(){

    int grade = 45;

    printf("You %s\n", grade >= 50 ? "Passed" : "Failed");
}

void example86(){

    int a;
    printf("Bir sayi giriniz: ");
    scanf("%d",&a);

    printf("%d %s\n",a, a > 0 ? "Pozitif bir sayidir" : ( a == 0 ? "Sifirdir" : "Negatif bir sayidir"));

}

void example87(){

    int a;
    printf("hava kac derece?:");
    scanf("%d",&a);

    printf(" Hava %d derece, %s\n",a, a > 30 ? "Hava sicak" : ( a > 0 && a<= 30 ? "Hava ilik" : " Hava soguk"));
}

void example88(){
     
   int a;
    printf(" Notunuzu giriniz: ");
    scanf("%d",&a);
    printf(" Notunuz:%d\n%s.", a, a >= 50 ? " Tebrikler,gectiniz!" : " Maalesef kaldiniz.");
}

void example89(){

    int a, b;
    printf("Iki sayi giriniz: ");
    scanf("%d%d", &a, &b);

    printf("%s\n", a > b ? "a daha buyuktur" : (a == b ? "a ve b esit" : "b daha buyuktur"));
}

void example90(){

    /*ternary operator'ün hem bir değer döndürerek hem de doğrudan bir işlem 
    gerçekleştirerek nasıl kullanılabileceği gösteriliyor.*/

    int a = 10;
    int b = 5;
    int min; // min, bu iki sayıdan daha küçük olanını saklamak için kullanılacaktır.

    min= a < b ? a : b ; //Ternary operatör bir değer döndürür ve bu değer bir değişkene atanır.
    printf("%d\n",min);

    a < b ? printf("%d\n",a ): printf("%d\n",b); /* Ternary burada herhangi bir değişkene değer atamaz, 
                                                 yalnızca doğrudan işlemi gerçekleştirir.*/
}

void example91(){

    int day;
    char *day_suffix;
    printf("Write a day between 1-31: ");
    scanf("%d",&day);

    if ( day % 10 == 1 && day != 11){
        day_suffix = "st";
    }
    else if ( day % 10 == 2 && day != 12){
        day_suffix = "nd";
    }
    else if ( day % 10 == 3 && day != 13){
        day_suffix= "rd";
    }
    else{
        day_suffix = "th";
    }
    if (day < 1 || day > 31) {
    printf("Invalid input! Please enter a number between 1 and 31.\n");
    //return 1; 
}

    printf("%d%s day.", day, day_suffix);
        //return 0;
}

void example92(){

    int guess;

    printf("Guess the number (hint: its 8): ");
    scanf("%d", &guess);

    while( guess != 8 ){
         printf("Wrong guess, try again: ");
         scanf("%d", &guess);
    }

     printf("Correct! The number is 8.\n");
}

void example93(){

    //sonsuz döngü (infinite loop)

    int i = 1;

    while (i > 0) { // Koşul her zaman doğru
    printf("This will loop forever!\n");
}

}

void example94(){

    int i = 1;

    while (i > 0) {
    printf("Loop iteration: %d\n", i);
    i--; // i'yi azaltarak koşulu bozuyoruz
}

}

void example95(){

    int a,b;
    printf("iki sayi giriniz:");
    scanf("%d%d",&a,&b);

    while( a > 0 && b > 0 ){
        printf("Iki pozitif sayi giriniz. Negatif bir sayi girerseniz dongu sonlanacak.\n");
        printf("tekrar iki sayi giriniz: ");
        scanf("%d%d",&a,&b);
    }

    printf("sayilardan biri negatif, dongu sonlaniyor... Sonuc: a + b = %d", a+b);
}

void example96(){

    int n;
    printf("bir sayi giriniz:");
    scanf("%d",&n);

    if (n <= 0) {
        printf("Sayi 0 veya negatif olamaz.\n");
        //return 1; // Programı sonlandır
    }

    printf(" %d'ye kadar olan butun sayilar: ", n);
    while(n > 0){
        printf("%d ", n);
        n--;
    }

    printf("\n loop is over.");
    //return 0;
}

void example97(){


    char word[70];
    printf("write a word: ");
    scanf("%s",&word);

    while( strcmp(word, "exit") != 0) {

        printf("write again:");
        scanf("%s",&word);
    }

    
    printf("Exit is in progress.");
}

void example98(){

    int a;
    int max = 0;
    // int max = INT_MIN; Negatif sayıları kabul etmek istiyorsam.
    printf("Enter a number:");
    scanf("%d",&a);

    while ( a != 0){
        if( a > max){
            max = a;
        }
        printf("enter a number:");
        scanf("%d",&a);
    }

    printf("The largest number : %d",max);
    
}

void example99(){

    int a;
    int i = 1;

    printf("Enter a number between 1-10:");
    scanf("%d",&a);

    if (a <= 0 || a > 10) {
        printf("Invalid input! Please enter a number between 1 and 10.\n");
    }

    while ( i <= a){
        printf("%d",i);
        i++;
    }

    printf("\n");
}

void example100(){

    int a;
    int i = 1;
    printf("Bir sayi giriniz:");
    scanf("%d",&a);

    if ( a == 0){
        printf(" sayi 0 olamaz!\nTekrar bir sayi giriniz:");
        scanf("%d",&a);
    }

    while (i <= a) { // `i` 1'den `a`'ya kadar gider
    printf("%d\n", i);
    i++;
    }
}

void example101(){

    int i = 1;
    int a;

    printf("Bir sayi giriniz:");
    scanf("%d",&a);

    if ( a == 0){
        printf(" sayi 0 olamaz!\nTekrar bir sayi giriniz:");
        scanf("%d",&a);
    }

    while ( i <= a ){
        printf("1'den a'ya kadar olan sayilar: %d",i++);
    }

}

void example102(){

    int n;
    int i = 1;

    printf("Bir sayi giriniz:");
    scanf("%d",&n);

    while ( i <= n){
        if (i % 2 == 0) { // Çift sayı kontrolü
        printf("%d\n", i);
    }
    i++;
    }
}

void example103(){

    int num = 0;

    while( num <= 9){
        printf("%d\t%d\n",num, num * num );
        num++;
    }

    //return 0;
}

void example104(){

    int i = 9;
    int square = 0;

  // Write a while loop here:
  while(i >= 0){
    printf("%d\t%d\n", i , i *i );
    i--;
    /*
    square = i * i;
    printf("%d\t%d\n",i,square);
    i--;
    */
  }

}

void example105(){

    int a;
    int sayac = 0;

    printf("bir sayi giriniz:");
    scanf("%d",&a);

    if( a == 0 ){
        printf("sayi 0 olamaz.\nTekrar bir sayi giriniz:");
        scanf("%d",&a);
    }

    while( sayac <= a ){
        printf("%d\t%d\n",sayac, sayac * sayac);
        sayac++;
    }
}

void example106(){

    int a;
    int sayac = 2;

    printf("bir sayi giriniz:");
    scanf("%d",&a);

    if( a == 0 ){
        printf("sayi 0 olamaz.\nTekrar bir sayi giriniz:");
        scanf("%d",&a);
    }

    printf("Cift sayilar ve kareleri:\n");
    while( sayac <= a){
        if( sayac % 2 == 0){
        printf("%d\t%d\n", sayac, sayac * sayac  );}
        sayac++;
    }

}

void example107(){

    int num = 0;

    do{
        printf("Number: %d\n",num);
        num--;
    } while( num > 0); // Koşul sonra kontrol edilir.
    //Kod bloğu en az bir kez çalıştığı için sayı yazdırılır.

    //return 0;
}

void example108(){

    int a;
    
    printf("bir sayi giriniz:");
    scanf("%d",&a);

    do {
        if( a < 0){
        printf("negatif sayi,tekrar deneyin:");
        }
        else if ( a > 0) {
            printf("pozitif sayi girdiniz.dongu baslamadan sonlandi.");
           // döngüden hemen çıkmak istersen,performans için. break;
        }
        else{
            printf("0 girdiniz. tekrar sayi giriniz:");
        }
        scanf("%d", &a);
    } while( a <= 0);

    printf("pozitif sayi girdiniz.dongu sonlandi.");
}

void example109(){

    int x = 5, y = 10;

    printf("%d\n", x != y ); // True
    printf("%d\n", (x==y));  //False

}

void example110(){

    int x,y;

    printf("iki tam sayi giriniz:");
    scanf("%d%d",&x,&y);

    printf("!(%d) = %d\n", x, !x);
    printf("!(%d) = %d\n", y, !y);

}

void example111(){

    int x;

    printf("bir sayi giriniz:");
    scanf("%d",&x);

    printf("!!(%d) = %d\n", x , !!x); //Bir ifadenin lojik değilinin değili o ifadenin lojik  değeridir. 
    printf("x = %d\n",x); // Burda x'in kendi değeri yazdırılır.

}

void example112(){

    // Short Circuit Behaviour.

    int x = 0;
    int y = 555;

    int z = x && ++y; // Eğer ilk ifade false ise, ikinci ifade kontrol edilmez çünkü sonuç zaten false olacaktır.

    printf("z = %d\n", z);
    printf("y = %d\n", y);
}

void example113(){

    int foo(void) { printf("foo cagrildi\n"); return 0;} 
    int bar(void) { printf("bar cagrildi\n"); return 5;}

    foo() || bar(); 
                    /*foo() true döndürürse, bar() çalıştırılmaz.
                    Eğer foo() false döndürürse, bar() çağrılır.
                    Eğer foo() true döndürürse foo cagrildi
                    Eğer foo() false döndürürse foo cagrildi
                                                bar cagrildi*/
}

void example114(){

    int x = 42, y = 0;

    if (x) {
    printf("x is true\n"); // Çalışır
    }
    if (y) {
    printf("y is true\n"); // Çalışmaz
    }
}

void example115(){

    int x = 5, y = 10;

    printf("%d < %d = %d\n",x, y, x < y);
    printf("%d > %d = %d\n",x, y, y < x);
    printf("%d >= %d = %d\n",x, y, !(x < y));
    printf("%d <= %d = %d\n",x, y, !(y < x));
    printf("%d == %d = %d\n",x, y, !(x < y) && !(y < x));
}

void example116(){

    int x = 10;

    if (x) {  // x sıfırdan farklı olduğu için çalışır.x'in lojik değerini kontrol eder.
    printf("x is true %d\n",!!x);
    }

    if (x == 10) {  // x'in 10'a eşit olup olmadığını kontrol eder
    printf("x equals 10\n");
    }

    if (x = 10) {  // x'e 10 atanır ve sonuç true kabul edilir. Always True.
    printf("x is assigned 10 and true\n");
    }

}

void example117(){

    int c;

    c = getchar(); // kullanıcıdan karakter girişi alır.
    while(c != '\n'){ // Kullanıcı yeni satır (\n) girene kadar döngü çalışır.
        printf("%c %d\n", c, c); // Her karakterin kendisini (%c) ve ASCII kodunu (%d) yazdırır.
        c = getchar(); // Karakter \n değilse ekrana yazdırılır.
                       //Tekrar yeni bir karakter alınır (c = getchar()).
    }
}

void example118(){

    int c;

    while (1) { // Sonsuz döngü
    c = getchar();
    if (c == '\n') { // Eğer yeni satır karakteri girdiyse
        break;       // Döngüyü kır
    }
    printf("%c %d\n", c, c);

    }

}

void example119(){

    int c;

    while ((c = getchar()) != '\n') { // Döngü içinde direkt atama ve kontrol
    printf("%c %d\n", c, c);

    }   

    // 117*118*119 aynı kodun farklı yazım şekilleri.
}

void example120(){

    for (int i = 0; i < 5 ; i++){
        printf("%d\n",i);
    }

    for(int i = 2; i <= 10 ; i+=2){ //çift sayıları yazdır.
        printf("\n%d\n",i);
    }

    int arr[] = {10, 20, 30, 40, 50};
    for (int i = 0; i < 5; i++) {
    printf("\n%d", arr[i]);
    }

    /*
    int i = 0;
    while(i < 5){
        printf("%d\n",i);
        i++;
    }
    for döngüsü, başlangıç, koşul ve artış ifadelerini tek bir satırda toplar, bu da kodu daha okunabilir hale getirir.
    */
}

void example121(){

    for (int i = 1; i<=10 ; i++){
        printf("%d\n",i);
    }

    for ( int i = 2; i <= 10 ; i+=2){
        printf("%d\n",i);
    }

    for ( int i = 1; i <= 10; i++){
        if(i % 2 == 0){
            printf("%d\n",i);
        }
    }

    for ( int i = 10 ; i >= 0 ; i--){
        printf("%d\n",i);
    }
}

void example122(){

    int x = 10;
    int y = 20;
    int z = 40;
    int t = 50;

    x *= y -= z /= t %= 13; // atama operatörlerinin ürettiği değerler nesneye atanan değerlerdir.

    printf("t = %d\n",t);
    printf("z = %d\n",z);
    printf("y = %d\n",y);
    printf("x = %d\n",x);
}

void example123(){

    int day, hour, min, sec;

    printf("gun saat dakika ve saniye olarak sureyi giriniz: ");
    scanf("%d%d%d%d",&day,&hour,&min,&sec);

    min += sec / 60;
    sec %= 60;

    hour += min / 60;
    min %= 60;

    day += hour / 24;
    hour %= 24;

    printf("%d gun %d saat %d dakika ve %d saniyedir.", day, hour, min, sec);
}

void example124(){

    // Comma Operator : En sağdaki ifadenin sonucu döner.Son ifadenin değeri döner.

    int x = 7;
    int y = 3;
    int z;

    z = (x,y);
    printf("z = %d\n",z);

    z = (y,x);
    printf("z = %d\n",z);

}

void example125(){

    double d = 4.7;

        if( d > 3,0)
        printf("dogru\n");
        else
        printf("yanlis\n");
}

void example126(){

    int a;
    int toplam = 0;

    printf("bir tam sayi giriniz:");
    scanf("%d",&a);

    while( a != 0 ){
        toplam += a; // Girilen sayıyı toplam değişkenine ekle
        printf("bir tam sayi giriniz:");
        scanf("%d",&a);
        if(0 == a){
            printf("Girdiginiz sayilarin toplami: %d\n", toplam );
            break;
        }
    }
}

void example127(){

    int a;
    int carpim = 1;

    printf("bir tam sayi giriniz:");
    scanf("%d",&a);

    while( a != 1){
        carpim *= a;
        printf("bir tam sayi giriniz:");
        scanf("%d",&a);
        if( a < 1){
            printf("Hatali giris yaptiniz.\nTekrar bir sayi giriniz:");
            scanf("%d",&a);
        }
        else if ( a == 1){
            printf("Girdiginiz sayilarin carpimi: %d\n", carpim);
            break;
        }
    }

    /*
    while(a != 1){
    if(a < 1){
        printf("Hatali giris yaptiniz. Tekrar bir sayi giriniz: ");}
    } else{
        carpim *= a;
        printf("Bir tam sayi giriniz: ");
    }
    scanf("%d",&a); // Tek bir giriş yeterli
    }
    printf("Girdiginiz sayilarin carpimi: %d\n", carpim);
    return 0;
    */
    
}

void example128(){

    for (int i = 0; i < 10; i++) {
    if (i % 2 == 0) { // Eğer i çift ise
        continue;     // Geri kalan işlemleri atla //Eğer i çift ise, continue çalıştı ve printf satırı atlandı.
    }
    printf("%d is odd\n", i); // i tek ise yazdır
}
}

void example129(){

    for (int i = 0; i < 10; i++){
        if(i == 5){ // 5'i atla.
         continue;
        }
        printf("%d\n",i);
    }
}

void example130(){

    int a;

    printf(" bir tam sayi giriniz:");
    scanf("%d",&a);

    while( a != 0){
        if (a < 0) {
            printf("Negatif sayi girdiniz. Atlandi.\nBir tam sayi giriniz: ");
            scanf("%d", &a);
            continue;// Geri kalan kodları atlayıp tekrar başa dön. // Negatif bir sayı girildiğinde, bu sayı yazdırılmadan döngü sonraki iterasyona geçiyor.
    }
         if (a % 2 == 0) {
            printf("Girdiginiz cift sayi: %d\n", a);
        }

        printf("Bir tam sayi giriniz: "); // Her iterasyonda yeni giriş istiyoruz.
        scanf("%d", &a);

}
    printf("Program sonlandi.\n");

}

void example131(){

    int i = 0;

    while (i < 10) {
    // Figure out how to skip the print of 5 here
    if( i == 5){
      i++; // Döngünün ilerlemesini sağlar. // Sayaç artırılmalı, yoksa sonsuz döngü olur.
      continue;
    }
    printf("%d\n", i);
    i++; // Döngünün ilerlemesi için sayaç manuel artırılır.
  }

  /*
  for döngüsünde sayaç değişkeninin (i) güncellenmesi döngü yapısına dahildir, bu yüzden ayrıca bir i++ yazmak zorunda kalmazsınız.
  for (int i = 0; i < 10; i++) {
    if (i == 5) {
        continue; // "i++" zaten for yapısında tanımlı olduğundan ayrıca yazmaya gerek yok.
    }
    printf("%d\n", i);
  */
}

void example132(){

    printf("pozitif birtam sayi giriniz:");

    int c;
    while( (c = getchar()) != '\n' ){
        printf("%d\n",c);
    }
}

void example133(){

    printf("pozitif birtam sayi giriniz:");

    int c;
    while( (c = getchar()) != '\n' ){
        printf("%d\n",c - '0'); // basamaktaki sayıyı doğrudan yazdırmak için.0 'ın kod numarasını çıkarmalıyım. 48 sadece ASCII'de.
    }
}

void example134(){

    //ilkel scanf.
    /*Bu kod, getchar fonksiyonunu kullanarak kullanıcıdan bir tam sayı alıyor 
    ve her basamağı ayrı ayrı okuyarak tam sayıya dönüştürüyor.*/

    printf("pozitif birtam sayi giriniz:");

    int c; // Karakter okuma için değişken

    int x = 0; // Sayıyı biriktirmek için değişken
    while( (c = getchar()) != '\n' ){ // Kullanıcı Enter'a basana kadar döngü devam eder
        x = x * 10 + c - '0'; //  örn; 1234 girdiğim değeri yazması için.// Karakterden sayıya dönüşüm ve biriktirme
    }
    
    printf("x  = %d\n",x);

}

void example135(){

    int c;             // getchar ile alınan karakteri saklamak için
    int sum = 0;       // Basamak toplamını tutacak değişken

    printf("bir tam sayi girin: ");

    // Kullanıcı bir tam sayı girerken her bir karakteri oku
    while ((c = getchar()) != '\n') {
        sum += c - '0'; // Karakteri tam sayıya çevir ve toplamaya ekle
    }

    // Basamak toplamının 3’e bölünüp bölünmediğini kontrol et
    if (sum % 3 == 0)
        printf("evet tam bolunur\n");
    else
        printf("hayir tam bolunmez\n");
}

void example136(){

    //artik yil: 4'e tam bölünenlerden,100'e tam bölünmeyenler, 400'e tam bölünenler.
    
    int isleap(int y){

        return y % 4  == 0 && (y % 100 != 0 || y % 400 == 0);
    }

    printf("bir yil girin:");

    int year;
    scanf("%d",&year);

    if(isleap(year))
        printf("%d artik yil\n",year);
    else
        printf("%d artik yil degil.\n",year);

    
}

void example137(){

    /*C dilinde fonksiyonlar başka bir fonksiyonun içinde tanımlanamaz. Yani, isperfect fonksiyonunu 
    example137 fonksiyonunun içinde tanımlamanız derleyici hatasına neden olur. ama bu şekilde kullanıyorum.*/ 

    int isperfect(int x){ // int isperfect(intx) Bu satırdaki hata int x yerine intx yazılmasıdır. Bu, C dilinde bir sözdizimi hatasıdır çünkü bir veri türü ile değişken ismi arasında bir boşluk olmalıdır.

        int sum_div = 0;

        for(int i = 1; i <= x / 2; i++){

            if( x % i == 0)
                sum_div += i;
        }

        return x == sum_div;
    }

    for( int i = 1; i < 1000; i++){

        if(isperfect(i) != 0)
            printf("%d is perfect\n",i);
    }

}

void example138(){

    int ch;

    printf("bir karakter giriniz:");
    ch = getchar();

    if(isupper(ch)){
        printf("buyuk harf\n");
    }
    else{
        printf("buyuk harf degil.");
    }
}

void example139(){

    printf("isupper\n");
    for(int i = 0 ; i < 128; i++){
        if(isupper(i))
            printf("%c",i);
    }

    putchar('\n'); // Tüm harfler yazdırıldıktan sonra bir yeni satıra geçer (putchar('\n')).

    printf("isspace\n");
    for(int i = 0 ; i < 128; i++){
        if(isspace(i))
            printf("%d ", i);    // görüntüsü olmadığı için ASCII kod numarasını yazdırdık. 
    }

    putchar('\n');

    printf("isblank\n");
    for(int i = 0 ; i < 128; i++){
        if(isblank(i))
            printf("%d ", i); // görüntüsü olmadığı için ASCII kod numarasını yazdırdık.
    }

    putchar('\n');

    printf("iscntrl\n");
    for(int i = 0 ; i < 128; i++){
        if(iscntrl(i))
            printf("%d ", i);  // görüntüsü olmadığı için ASCII kod numarasını yazdırdık.
    }

    putchar('\n');
}

void example140(){

    //Kullanıcıdan 4 basamaklı bir sayı al. Her basamağı sırayla yazdır (binler, yüzler, onlar, birler).

    int a;

    printf("dord basamakli bir sayi giriniz: ");
    scanf("%d",&a);
    
    printf("girdiginiz sayi: %d\n", a);
    printf("binler basamagi: %d\n", a / 1000);
    printf("yuzler basamagi: %d\n", a / 100 % 10 );
    printf("onlar basamagi:  %d\n", a / 10 % 10);
    printf("birler basamagi: %d\n", a % 10);

}

void example141(){

    //Kullanıcıdan 5 basamaklı bir sayı al ve tersini yazdır.

    int a;
    int tersi;

    printf("bes basamakli bir sayi giriniz: ");
    scanf("%d",&a);

    while (a < 10000 || a > 99999) { // 5 basamaklı kontrolü
    printf("Hatali giris! Beş basamakli bir sayi giriniz: ");
    scanf("%d", &a);
    }   //overflowu önlemek için bes basamagi zorunlu kılmak.

    /*if (a < 10000 || a > 99999){
        printf("sayi maksimum bes basamakli olabilir.Tekrar bir sayi giriniz:");
        scanf("%d",&a);
    }*/

    printf("girdiginiz sayi: %d\n", a);
    tersi = (a % 10) * 10000 + (a / 10) % 10 * 1000 + (a / 100) % 10 * 100 + (a / 1000) % 10 * 10 + (a / 10000) ;   
    
    
    printf("girdiginiz sayinin tersi: %d\n", tersi);

}

void example142(){

    //Kullanıcıdan alınan bir sayının Armstrong sayısı olup olmadığını kontrol et (basamak üssü toplamları kendine eşit mi?).
    /*Armstrong sayısı: Bir sayının basamaklarının, 
    basamak sayısı kadar üssü alınarak toplanması sonucu kendisine eşitse, bu sayı Armstrong sayısıdır.*/

    int i = 1000; 

    while( i < 10000){
    int d1 = i % 10; // birler bas.
    int d2 = i / 10 % 10; // onlar bas.
    int d3 = i / 100 % 10; // yüzler bas.
    int d4 = i / 1000; // binler bas.
    if (i == d1 * d1* d1* d1 + d2* d2* d2 * d2 + d3 * d3* d3* d3 + d4 * d4 * d4* d4 ){
        printf("%d\n",i);
        }
    i++;
    }

}

void example143(){

    //Kullanıcıdan alınan bir sayının basamaklarının toplamını bul.

    int a;

    printf("bir sayi giriniz: ");
    scanf("%d",&a);

    printf("girdiginiz sayi: %d\n", a);

    int toplam = 0;
    while ( a > 0 ){
        toplam += a % 10 ; // son basamak bulunur
        a /= 10; // sonraki basamaga gecilir.
    }
    
    /*int d1 = a % 10; // birler bas.
    int d2 = a / 10 % 10;
    int d3 = a / 100 % 10 ;
    int d4 = a / 1000 % 10 ;
    int d5 = a / 10000 ;*/

    printf("girdiginiz sayinin basamaklari toplami : %d\n", toplam);
}

void example144(){

    //Kullanıcıdan alınan bir sayının en büyük basamağını yazdır.

    int a, max_basamak = 0;
    printf("bir sayi giriniz: ");
    scanf("%d",&a);

    printf("girdiginiz sayi: %d\n", a);

    while ( a > 0 ){
        int basamak = a % 10; // son basamak.
        if( basamak > max_basamak){
            max_basamak = basamak;
        }
        a /= 10 ; // bir sonraki basamaga gec. 
    }

    printf("En buyuk basamak: %d\n", max_basamak);


}

void example145(){

    // Armstrong sayısı farklı çözüm , basamak sınırı yok.

    int a;
    printf("Bir sayi giriniz: ");
    scanf("%d", &a);

    int basamak = 0, temp = a;
    while( temp > 0 ){
        basamak++;
        temp /= 10 ;
    }

    int toplam = 0 , num = a;
    while( num > 0 ){
        int basamak_degeri = num % 10 ;
        int carpim = 1;
        for(int i = 0; i <basamak; i++){
            carpim *= basamak_degeri; // üs alma
        }
         toplam += carpim; 
         num /= 10;
    }

    if (toplam == a) {
    printf("%d bir Armstrong sayisidir.\n", a);
    } else {
    printf("%d bir Armstrong sayisi degildir.\n", a);
    }

}

void example146(){

    int ch;

    printf("Bir karakter giriniz: ");
    //scanf(" %c",&ch); //  giriş sırasında buffer'da enter karakteri (\n) kalıyor.
    //// %c başına Boşluk ekleyerek '\n' karakterini yoksayabiliriz
    ch = getchar();

    int cx = toupper(ch);
    printf(" (%c %d) ==> (%c %d)\n", ch,ch,cx,cx);

}

void example147(){

    int ch;

    printf( "Bir karakter giriniz: ");
    ch = getchar();

    int cx = toupper(ch);

    if (isalpha(ch) ) { // Sadece harf karakterleri için kontrol
    printf("Girdiginiz karakter: %c (%d)\nBuyuk harf karsiligi: %c (%d)\n", ch,ch,cx,cx);}
    else {
    printf("Girdiginiz karakter bir harf degil.kendisini dondurur. %c (%d)\n", ch,ch);
    } 

}

void example148(){

    int c1,c2;

    printf("iki karakter giriniz:");
    
    do{
        c1 = getchar();
    } while( isspace(c1)); 

    do {
        c2 = getchar();
    } while (isspace(c2));

    if (toupper(c1) == toupper(c2)) {
        printf("%c ve %c ayni karakterler\n", c1, c2);
    } else {
        printf("%c ve %c farkli karakterler\n", c1, c2);
    }

}

void example149(){

    while(1){

        int ch = rand() % 128 ; //rand() fonksiyonunun çıktısı 128 ile mod alınarak (modulus), üretilen rastgele sayının
                                // 0 ile 127 arasında olmasını sağlıyor. 
                                //Bu aralık, ASCII karakter setine uygundur ve tüm temel karakterleri içerir.
        if(isxdigit(ch)){
            putchar(ch);
            Sleep(50);
        }
    }
}

void example150(){

    while(1){

        int ch = rand() % 128;

        if(isupper(ch)){
            putchar(ch);
            putchar('\n'); 
            Sleep(300);
        }
    }
}

void example151(){

    int ch;

    printf("bir yazi giriniz:");

    while((ch = getchar()) != '\n'){
        printf("%c %d\n", ch, ch);
    }
}

void example152(){

    //basamak sayısı veren temel kod

    int ndigit(int x){
        int digit_count = 0;

        if ( x == 0)
            return 0;
        
        while ( x != 0){
            ++digit_count;
            x /=10;
        }

        return digit_count;
    }

    int x;

    printf("bir tam sayi giriniz:");
    scanf("%d",&x);

    printf("%d sayisi %d basamakli\n", x , ndigit(x));
}

void example153(){

    int sumdigit(int x){
        int digit_sum = 0;

    while(x){ // x != 0
        digit_sum += x % 10;
        x /= 10;
    } 

    return digit_sum;

}

    int x;

    printf("bir tam sayi giriniz:");
    scanf("%d",&x);

    printf("%d sayisinin basamaklari toplami %d\n", x , sumdigit(x));

}

 static int power(int base, int exp){  //fonksiyon sadece example154 içinde kullanılacak
                                       //fonksiyonları static yaparak global namespace kirlenmesini önleyebilirsin.
        int result = 1;
        while(exp --){
            result *= base;
        }

        return result;
    }

void example154(){

    int b ,e ;

    printf("taban ve kuvvet degerini giriniz:");
    scanf("%d%d",&b, &e);

    printf("%d sayisinin %d. kuvveti %d\n",b,e, power(b,e));
}

void example155(){

    int x;
    
    printf("Bir giris yapin: ");
    scanf("%d", &x);

    while( getchar() != '\n'); // Buffer temizleme // Fazla karakterleri yok ediyor
    // bu olmasa sanki girmiş gibi alıyor..

    printf("Bir tam sayi girin: ");
    scanf("%d", &x);

    printf("x = %d\n", x);

}

static void clear_input_buffer(){

    int ch;
    while( (ch = getchar()) != '\n' && ch != EOF);
}

void example156(){

    int x;

    printf("Bir giris yapin: ");
    scanf("%d", &x);

    clear_input_buffer();

    printf("Bir tam sayi girin: ");
    scanf("%d", &x);

    printf("x = %d\n", x);
}

void example157(){

    //hello world yazan bir program yazın. Koşul: Yazdığın kod legal olacak ancak ; kullanılmayacak. 

    if(printf("Hello World")){}

    while(!printf("\nhello world")){}

    switch(printf("\nheLLo World")){}

}

void example158(){

    printf("bir sayi giriniz:");

    int x;
    int c;

    int temp = 0;

    while((c = getchar()) != '\n')
        temp = temp * 10 + c - '0';

    x = temp;
    printf("x = %d\n", x);
}

void example159(){

    printf("2'lik sayi sisteminde bir sayi giriniz: ");

    int x;
    int c;

    int temp = 0;

    while((c = getchar()) != '\n')
    temp = temp * 2 + c - '0';

    x = temp;
    printf("x = %d\n", x); 
}

void example160(){

    printf("hex olarak bir sayi giriniz: ");

    int x;
    int c;

    int temp = 0;

    while((c = getchar()) != '\n')
        if(isdigit(c))
            temp = temp * 16 + c - '0';
        else if(isxdigit(c))
            temp = temp * 16 + toupper(c) - 'A' + 10 ; 

    x = temp;
    printf("x = %d\n",x);

}

void example161(){

    char ch;
    printf("bir karakter giriniz:");
    ch = _getch();
    printf("\nGirdiginiz karakter: %c\n", ch);

}

void example162(){

    char ch;
    printf("parolanizi giriniz: ");

    while((ch = getch()) != '\n'){
        printf("*");
    }

    printf("\nParola alindi\n");

}


int main() {
    printf("\nexample162:\n");
    example162(); // Sadece example2 çalisiyor
    return 0;
}
