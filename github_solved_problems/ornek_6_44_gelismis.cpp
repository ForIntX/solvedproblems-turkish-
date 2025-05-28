#include<iostream>
#include<cmath>
int main()
{
    //muthis sayi tanım = 2n basamaklı bir sayının soldan n ve sağdan n basamaklarının toplamı eşitse o sayı muthis sayıdır.




    int sayi,basamak=0,i=10;
    std::cout <<"Sayi degerini giriniz:";
    std::cin>>sayi;
    int sayiyi_tutucu=sayi;
    int sayiyi_tutucu2 =sayi;
    int sayi_sondeger=sayi;
    
    
    //basamak kontrolu
    while (true)
    {
              
        
        sayi=sayi/i;

        if (sayi==0)
        {
        basamak+=1;
        
        break;    
        }
        else
        {
        basamak+=1;
        continue;
        }
        
        
    }
    
    
    
    
    
    if (basamak%2==1)
    {
        std::cout << "Sayınız tek basamaklı olmaktadır işlem yapılamamaktadır.\n";
        std::cout << "Sayınız " << basamak << " basamaklı bir sayıdır.\n"; 
    }




    //muthis sayı kontrolu
    else
    {
        int bolucu;
        bolucu = basamak/2;
        int basamakdegeritoplambuyuk=0;
        int basamakdegeritoplamkucuk=0;
        long long int ushesap;
        int basamakdeger;
        
        
        
        for (int i = basamak; i >= bolucu; i--)
        {
            ushesap=pow(10,i);
            basamakdeger=sayiyi_tutucu/ushesap;
            sayiyi_tutucu=sayiyi_tutucu-(basamakdeger*ushesap);
            basamakdegeritoplambuyuk=basamakdegeritoplambuyuk + basamakdeger;
            
        }

        
       
        for ( i = 1; i <= bolucu; i++)
        {
            
            ushesap=10;
            basamakdeger=sayiyi_tutucu2%ushesap;
            
            sayiyi_tutucu2 = sayiyi_tutucu2/10;
            basamakdegeritoplamkucuk=basamakdegeritoplamkucuk+basamakdeger ;
        }
        

        if (basamakdegeritoplambuyuk==basamakdegeritoplamkucuk)
        {
            std::cout<< "\nSayınız bir muthiş sayıdır.\n\n";
            std::cout<<sayi_sondeger;
        }
        else
        {
            std::cout << "\nSayınız muthiş bir sayı değildir.\n\n";
        }
        
        

    }
    
    
}