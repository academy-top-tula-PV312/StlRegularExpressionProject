// StlRegularExpressionProject

#include <iostream>
#include <vector>
#include <regex>

int main()
{
    setlocale(LC_ALL, "Russian");

    /*std::vector<std::string> text{ "том", "адом", "домидоменый",  "домашний", "подомгный", "задом","домна", "дама" };
    std::string str = "том адом домидоменый домашний подомгный задом домна дама";

    std::string pattern = ".дом";

    std::regex regexDom("[^\\s]*дом*[^\\s]");

    auto words_start = std::sregex_iterator(str.begin(), str.end(), regexDom);
    auto words_finish = std::sregex_iterator();

    for (; words_start != words_finish; words_start++)
        std::cout << (*words_start).str() << "\n";*/


    //std::smatch result;

    /*for (auto word : text)
    {
        */
        //if (std::regex_search(str, result, regexDom))
        //{
        //    //std::cout << word << " : ";
        //    for (int i{}; i < result.size(); i++)
        //        std::cout << result[i] << "\n";
        //}
            
    //}

    std::vector<std::string> emails
    { 
        "info@info",
        "info.info@info.com",
        "info.info@",
        "@info.com",
        "info.info@info.info.com",
        "info.info@info@info.com",
        "info@info.com",
        "info.info.info.info.@info.info.com"
    };
    
    std::string emailPattern = "[\\w+\\.*]+\\w+@[\\w+\\.*]+\\.\\w{1,4}";
    std::regex regex(emailPattern);
    std::smatch result;

    for (auto email : emails)
    {
        std::cout << email << "\n";
        if (std::regex_match(email, result, regex))
        {
            std::cout << "\tfound: " << result.str() << "\n";
        }
    }

}
