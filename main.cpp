#include <iostream>
#include <string>
#include <sstream>
//#include "communication.hpp"
#include "node.hpp"
#include "mux_facade.hpp"
using namespace std;


//mux *ptr;

int main(void)
{
//threads_init();
//ptr=mx_ptr();

//ptr->say_hello();

/*
cout <<"Stan PIR6="   <<nd6.check_pir6()<<endl;
cout <<"Stan DDp1="   <<nd6.check_ddp1()<<endl;
cout <<"Stan DDp2="   <<nd6.check_ddp2()<<endl;
cout <<"San  WIRE="   <<nd6.check_wire()<<endl;
cout <<"Stan NFC4="   <<nd6.check_nfc4()<<endl;
cout <<"Stan NFC5="   <<nd6.check_nfc5()<<endl;
cout <<"Stan NFC6="   <<nd6.check_nfc6()<<endl;
*/

string dane(" 9f8ba202 ");
int wynik_hex;
std::stringstream wynik;
wynik<<(std::hex)<<dane;
wynik >> wynik_hex;
cout << std::hex<<wynik_hex;
return 0;
}
