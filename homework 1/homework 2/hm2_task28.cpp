//Създайте С програма, която калкулира стойността на покупки в магазин за хранителни стоки. Клиентът може да закупи различна комбинация от продукти. В магазина има следните налични продукти и цени:
//Авокадо: 1.23 лв за брой,
//Бутилка олио 10л: 2.53 лв. за брой,
//Домати: 0.27 лв за килограм,
//Лук: 0.15 лв за килограм,
//Лимони: 8.99 лв за килограм

#include<iostream>
using namespace std;
int main()
{
float avocado,oil,tomatoes,onions,lemons;
cout << "Vuvedete kolichestvoto avokado: ";
cin >> avocado;
cout<<"Vuvedete kolichestvoto za 10 litrova botilka olio: ";
cin>>oil;
cout<<"Vuvedete kg / tejestta na domatite: ";
cin>>tomatoes;
cout<<"Vuvedete kg / tejesta na luka: ";
cin>>onions;
cout<<"Vuvedete kg / tejesta na lemonite: ";
cin>>lemons;

double total = avocado * 1.23 + oil * 2.53 + tomatoes * 0.27 + onions * 0.15 + lemons * 8.99;
cout<<"Obshtata tsena e: "<<total<< " lv"<<endl;

return 0;
}