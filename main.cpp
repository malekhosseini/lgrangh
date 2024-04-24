#include<iostream>
using namespace std;
/// @brief این تابع به روش لاگرانژ به ازای یک دسته زوج مرتب یک چندجمله ای بر روی آن دسته زوج مرتب میپوشاند
/// @param t متغییر مستقل تابع است
/// @param x آرایه ای از مقادیر دانسته از متغیر مستقل
/// @param y آرایه جوابهای دانسته از تابع مجهولی که باید درونیابی شود و هر مقدار آن معادل یکی از مقادیر آرایه اکس است
/// @param size حداکثر اندازه دو آرایه اکس و  وای را تعیین میکند. 
/// @return خروجی مقدار تابع درونیاب است به ازای مقدار متغیر مستقل داده شده به تابع درونیاب
double pn(double t, double x[], double y[], int size)
{
    double result=0;
    for(int i=0;i<size;i++)
    {
        double l=1;
        for(int j=0;j<size;j++)
        {
            // if(j==i) continue;//اینجوری هم میشه
            if(j!=i) 
                l=l*(t-x[j])/(x[i]-x[j]);
        }
        result=result+l*y[i];
    }
    return result;
}
int main()
{

}