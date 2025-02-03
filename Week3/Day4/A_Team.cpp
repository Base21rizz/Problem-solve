#include<iostream>
int main()
{
    int T,p,v,t,score;
    std::cin >> T;
    score = 0;
    while (T--)
    {
        std::cin >> p >> v >> t;
        if (p==1 && v==1 && t==1)
        {
            score++;
        }
        else if (p==1 && v==1)
        {
            score++;
        }
        else if (v==1 && t==1)
        {
            score++;
        }
        else if (p==1 && t==1)
        {
            score++;
        }   
    }
    std::cout << score;
    return 0;
}