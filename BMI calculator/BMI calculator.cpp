//
//  main.cpp
//  BMI calculator
//
//  Created by Ziwei Wu on 2016-02-10.
//  Copyright © 2016 Ziwei Wu. All rights reserved.
//

#include<iostream>
#include<cmath>
#include<iomanip>

double BMIcal(double, int);
int main()
{
    
    using namespace std;
    
    double height;
    int weight;
   
    cout<<"请输入你的身高：";
    cin>>height;
    cout<<height<<"米"<<endl;
    
    cout<<"请输入你的体重：";
    cin>>weight;
    cout<<weight<<"公斤"<<endl;
    
    
    BMIcal(height,weight);
    
    double bmi=BMIcal(height,weight);
    cout<<"您的BMI是: "<<fixed<<setprecision(2)<<bmi<<endl;
    cout<<endl;
    
    if (bmi>=28.00)
    {
        cout<<"你的体重已在肥胖的范围之内，务必要控制饮食，每天至少锻炼1个小时， 否则有高血压和糖尿病的危险。"<<endl;
    }
    else if(bmi>=24.99)
    {
        cout<<"您的体重过重，请加强锻炼和注意饮食。"<<endl;
    }
    else if(bmi>=18.50)
    {
        cout<<"您的体重非常健康，请再接再厉！么么哒。"<<endl;
    }
    else if(bmi>0.00)
    {
        cout<<"您的体重过轻，请加强营养，加强锻炼， 多吃肉类和鸡蛋。" <<endl;
    }
    

    
    
    
    return 0;
}
double BMIcal(double h, int w)
{
    return w/pow(h,2);
}