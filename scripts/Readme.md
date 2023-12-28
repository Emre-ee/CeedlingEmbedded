# Script Kullanımı

Kod güzelleştirme ve statik analiz için scriptler vardır. Bu scriptlerin kullanımı anlatılmıştır.


# Uncrustify

Kaynak kodu güzelleştirme C, C++, C#, Objective-C, D, Java, Pawn ve Vala programlama dilleri içindir.
Kod güzelleştirme için terminal satırından ```scripts``` klasörü altında ```./code_beautifier``` komutu çalıltırılmalıdır. Tüm kodlar ```uncrustify.cfg ``` konfigürasyon dosyasına göre düzenlenmektedir.

# Cppcheck

Cppcheck C/C++ kodu için statik analiz aracıdır. Tehlikeli kodlama yapıları ve tanımsız davranışları yakalama üzerine odaklanır ve hataları yakalamak için benzersiz kod analizi sağlar. Cppcheck C/C++ kodu standart sentaksta(gömülü projelerde yaygın) değilse analiz edebilmek için tasarlandı.  Cppcheck açık kaynak olarak erişilebilirdir.


```scripts``` klasörü altında ```./html-report-stats/static_run.sh``` komutu çalıştırılarak üretim kodu analiz edilir.
