#include<iostream>
#include<string>
int main()
{
    int n,t;
    std::cin >> n >> t;
    
    std::string str;
    std::cin >> str;
    while(t>0)
    {
        for (int i = 0; i < n-1; i++)
        {
            if (str[i] == 'B' && str[i+1] == 'G')
            {
                std::swap(str[i],str[i+1]);
                i++;
            }
        }
        t--;
    }
    std::cout << str;
    return 0;
}