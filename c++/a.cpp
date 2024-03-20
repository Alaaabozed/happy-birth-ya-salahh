#include <iostream>
#include <fstream>

int main() {
    // افتح ملف HTML للكتابة
    std::ofstream file("birthday.html");

    // التحقق من نجاح فتح الملف
    if (!file.is_open()) {
        std::cerr << "Unable to open file!" << std::endl;
        return 1;
    }

    // كتابة بداية ملف HTML
    file << "<!DOCTYPE html>\n";
    file << "<html lang=\"en\">\n";
    file << "<head>\n";
    file << "<meta charset=\"UTF-8\">\n";
    file << "<meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0\">\n";
    file << "<title>Birthday Greeting</title>\n";
    file << "<style>\n";
    // تنسيق ألوان الصفحة
    file << "body { background-color: #f0f0f0; color: #333; }\n";
    file << ".container { max-width: 600px; margin: 50px auto; padding: 20px; background-color: #fff; border-radius: 10px; box-shadow: 0 0 10px rgba(0, 0, 0, 0.1); }\n";
    file << "h1 { color: #333; }\n";
    file << "p { color: #666; font-size: 18px; }\n";
    file << "img { width: 200px; border-radius: 50%; margin-top: 20px; }\n";
    file << "</style>\n";
    file << "</head>\n";
    file << "<body>\n";
    file << "<div class=\"container\">\n";
    // إضافة التهنئة والصور
    file << "<h1>كل سنه وانت طيب يا اسر احلي 23 سنة ماشية علي الارض!</h1>\n";
    file << "<p>عيد ميلادك الجاي بقي ابقي اعملك ابليكيشن!</p>\n";
    file << "<img src=\"file:///D:/Alaa%5E_%5E/hi/imgs/download.jfif\">\n";
    file << "<img src=\"file:///D:/Alaa%5E_%5E/hi/imgs/883b020b-70da-45f4-a2d0-8b5e89137749.jfif\">\n";
    file << "</div>\n";
    file << "</body>\n";
    file << "</html>\n";

    // إغلاق الملف بعد الانتهاء من الكتابة
    file.close();

    std::cout << "HTML file created successfully!" << std::endl;

    return 0;
}