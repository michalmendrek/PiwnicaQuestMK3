#include "node.hpp"

void node1::update(void)
{
 this->parse();

}

template <typename T>
void executor<T>::run(void)
{
  ((*ptr_node).*wfy)(this->arguments);
}



void node1::add_task(void(node1::*wf)(string),string args)
{
	this->stos_zadan.push(*(new executor<node1>(*this,wf,args)));

}


void node1::run_tasks(void)
{
  while(this->stos_zadan.empty()==false) {
						(this->stos_zadan.front()).run();
						this->stos_zadan.pop();
					  }

}

void node2::add_task(void(node2::*wf)(string),string args)
{
        this->stos_zadan.push(*(new executor<node2>(*this,wf,args)));

}


void node2::run_tasks(void)
{
  while(this->stos_zadan.empty()==false) {
                                                (this->stos_zadan.front()).run();
                                                this->stos_zadan.pop();
                                          }

}


void node3::add_task(void(node3::*wf)(string),string args)
{
        this->stos_zadan.push(*(new executor<node3>(*this,wf,args)));

}


void node3::run_tasks(void)
{
  while(this->stos_zadan.empty()==false) {
                                                (this->stos_zadan.front()).run();
                                                this->stos_zadan.pop();
                                          }
}

void node4::add_task(void(node4::*wf)(string),string args)
{
        this->stos_zadan.push(*(new executor<node4>(*this,wf,args)));

}


void node4::run_tasks(void)
{
  while(this->stos_zadan.empty()==false) {
                                                (this->stos_zadan.front()).run();
                                                this->stos_zadan.pop();
                                          }
}

void node5::add_task(void(node5::*wf)(string),string args)
{
        this->stos_zadan.push(*(new executor<node5>(*this,wf,args)));

}


void node5::run_tasks(void)
{
  while(this->stos_zadan.empty()==false) {
                                                (this->stos_zadan.front()).run();
                                                this->stos_zadan.pop();
                                          }
}


void node6::add_task(void(node6::*wf)(string),string args)
{
        this->stos_zadan.push(*(new executor<node6>(*this,wf,args)));

}


void node6::run_tasks(void)
{
  while(this->stos_zadan.empty()==false) {
                                                (this->stos_zadan.front()).run();
                                                this->stos_zadan.pop();
                                          }
}


/*********************/



string node1::get_value(string v1, string v2)
{
 size_t pos1,pos2;
 string temporary;
 pos1=this->data.find(v1);
 pos2=this->data.find(v2);
 temporary=data.substr(pos1,pos2-pos1);
 pos1=1+temporary.find("=");
 return temporary.substr(pos1,pos2-pos1);

}

void node1::parse(void)
{

 this->data=check_state();

 this->NFC0=get_value("NFC0=","DD1=");
 this->DD1=get_value("DD1=","DD12=");
 this->DD12=get_value("DD12=","PIR1=");
 this->PIR1=get_value("PIR1=","PIR2=");
 this->PIR2=get_value("PIR2=","USB=");
 this->USB=get_value("USB=","");


}

string node1::check_nfc0(void)
{
  //parse();
  return this->NFC0;
}


string node1::check_dd1(void)
{
 //parse();
 return this->DD1;

}


string node1::check_dd12(void)
{
 //parse();
 return this->DD12;

}

string node1::check_pir1(void)
{
 //parse();
 return this->PIR1;
}

string node1::check_pir2(void)
{
 //parse();
 return this->PIR2;
}

string node1::check_usb(void)
{

 return this->USB;
}

void node1::dl1_set(string state)
{
 if(state=="lock")   {send_message("w");}
 if(state=="unlock") {send_message("q");}


}


void node1::dl12_set(string state)
{
 if(state=="lock")   {send_message("r");}
 if(state=="unlock") {send_message("e");}


}





string node2::get_value(string v1, string v2)
{
 size_t pos1,pos2;
 string temporary;
 pos1=this->data.find(v1);
 pos2=this->data.find(v2);
 temporary=data.substr(pos1,pos2-pos1);
 pos1=1+temporary.find("=");
 return temporary.substr(pos1,pos2-pos1);

}


void node2::update(void)
{
 this->parse();

}


void node2::parse(void)
{

 this->data=check_state();

 this->DD23=get_value("DD23=","DDdpk=");
 this->DDdpk=get_value("DDdpk=","PIR3=");
 this->PIR3=get_value("PIR3=","PIR4=");
 this->PIR4=get_value("PIR4=","JACK=");
 this->JACK=get_value("JACK=","KEY=");
 this->KEY=get_value("KEY=","KEYBOX");
 this->KEYBOX=get_value("KEYBOX=","");


}


string node2::check_dd23(void)
{
 return this->DD23;
}

string node2::check_dddpk(void)
{
 return this->DDdpk;
}

string node2::check_pir3(void)
{
 return this->PIR3;
}

string node2::check_pir4(void)
{
 return this->PIR4;
}

string node2::check_jack(void)
{
 return this->JACK;
}

string node2::check_key(void)
{
 return this->KEY;
}

string node2::check_keybox(void)
{
 return this->KEYBOX;
}

void node2::dl23_set(string state)
{
  if(state=="lock")   {send_message("w");}
  if(state=="unlock") {send_message("q");}
}

void node2::dldpk_set(string state)
{
  if(state=="lock")   {send_message("r");}
  if(state=="unlock") {send_message("e");}
}


void node2::light_set(string state)
{
  if(state=="light")  {send_message("t");}
  if(state=="alarm")  {send_message("y");}

}



void node3::update(void)
{
 this->parse();

}

string node3::get_value(string v1, string v2)
{
 size_t pos1,pos2;
 string temporary;
 pos1=this->data.find(v1);
 pos2=this->data.find(v2);
 temporary=data.substr(pos1,pos2-pos1);
 pos1=1+temporary.find("=");
 return temporary.substr(pos1,pos2-pos1);

}

void node3::parse(void)
{

 this->data=check_state();

 this->DD34a=get_value("DD34a=","DD34b=");
 this->DD34b=get_value("DD34b=","UZ0=");

 this->UZ0=get_value("UZ0=","PowerCable=");
 this->PowerCable=get_value("PowerCable=","TruncButton=");
 this->TruncButton=get_value("TruncButton=","");


}


string node3::check_dd34a(void)
{
 return this->DD34a;
}

string node3::check_dd34b(void)
{
 return this->DD34b;
}

string node3::check_uz0(void)
{
 return this->UZ0;
}

string node3::check_powercable(void)
{
 return this->PowerCable;
}

string node3::check_truncbutton(void)
{
 return this->TruncButton;
}

void node3::dl34a_set(string state)
{
  if(state=="lock")  {send_message("w");}
  if(state=="unlock"){send_message("q");}
}

void node3::dl34b_set(string state)
{
  if(state=="lock")  {send_message("r");}
  if(state=="unlock"){send_message("e");}
}

void node3::dlcombox_set(string state)
{
  if(state=="lock")  {send_message("y");}
  if(state=="unlock"){send_message("t");}
}

void node3::truncled_set(string state)
{
  if(state=="on") {send_message("a");}
  if(state=="off"){send_message("d");}
}

void node3::redalert_set(string state)
{
  if(state=="on")  {send_message("f");}
  if(state=="off") {send_message("g");}
}



void node4::update(void)
{
 this->parse();

}

string node4::get_value(string v1, string v2)
{
 size_t pos1,pos2;
 string temporary;
 pos1=this->data.find(v1);
 pos2=this->data.find(v2);
 temporary=data.substr(pos1,pos2-pos1);
 pos1=1+temporary.find("=");
 return temporary.substr(pos1,pos2-pos1);

}

void node4::parse(void)
{

 this->data=check_state();

 this->DDT=get_value("DDT=","KEY0=");
 this->KEY0=get_value("KEY0=","KEY1=");
 this->KEY1=get_value("KEY1=","KEY2=");
 this->KEY2=get_value("KEY2=","KEY3=");
 this->KEY3=get_value("KEY3=","");


}


string node4::check_ddt(void)
{
 return this->DDT;
}

string node4::check_key0(void)
{
 return this->KEY0;
}

string node4::check_key1(void)
{
 return this->KEY1;
}

string node4::check_key2(void)
{
 return this->KEY2;
}

string node4::check_key3(void)
{
 return this->KEY3;
}


void node4::dlw_set(string state)
{
  if(state=="lock")  {send_message("w");}
  if(state=="unlock"){send_message("q");}
}

void node4::dlt_set(string state)
{
  if(state=="lock")  {send_message("r");}
  if(state=="unlock"){send_message("e");}

}

void node4::key_count(string state)
{
  if(state=="rst"){send_message("d");}
  if(state=="dec"){send_message("a");}

}


void node5::update(void)
{
 this->parse();

}

string node5::get_value(string v1, string v2)
{
 size_t pos1,pos2;
 string temporary;
 pos1=this->data.find(v1);
 pos2=this->data.find(v2);
 temporary=data.substr(pos1,pos2-pos1);
 pos1=1+temporary.find("=");
 return temporary.substr(pos1,pos2-pos1);

}

void node5::parse(void)
{

 this->data=check_state();

 this->Grate=get_value("Grate=","PIR5=");
 this->PIR5=get_value("PIR5=","TOUCHr=");
 this->TOUCHr=get_value("TOUCHr=","TOUCHl=");
 this->TOUCHl=get_value("TOUCHl=","NFC1=");
 this->NFC1=get_value("NFC1=","NFC2=");
 this->NFC2=get_value("NFC2=","NFC3");
 this->NFC3=get_value("NFC3=","");


}


string node5::check_grate(void)
{
 return this->Grate;
}

string node5::check_pir5(void)
{
 return this->PIR5;
}

string node5::check_touchr(void)
{
 return this->TOUCHr;
}

string node5::check_touchl(void)
{
 return this->TOUCHl;
}

string node5::check_nfc1(void)
{
 return this->NFC1;
}

string node5::check_nfc2(void)
{
 return this->NFC2;
}

string node5::check_nfc3(void)
{
 return this->NFC3;
}

void node5::dll_set(string state)
{
  if(state=="lock")  {send_message("w");}
  if(state=="unlock"){send_message("q");}

}

void node5::dls_set(string state)
{
  if(state=="lock")  {send_message("r");}
  if(state=="unlock"){send_message("e");}

}

void node5::dlgh_set(string state)
{
  if(state=="lock")  {send_message("g");}
  if(state=="unlock"){send_message("f");}

}

void node5::dlfac_set(string state)
{
  if(state=="lock")  {send_message("j");}
  if(state=="unlock"){send_message("h");}

}

void node5::grate_set(string state)
{
  if(state=="open")  {send_message("a");}
  if(state=="close") {send_message("d");}

}


void node6::update(void)
{
 this->parse();

}

string node6::get_value(string v1, string v2)
{
 size_t pos1,pos2;
 string temporary;
 pos1=this->data.find(v1);
 pos2=this->data.find(v2);
 temporary=data.substr(pos1,pos2-pos1);
 pos1=1+temporary.find("=");
 return temporary.substr(pos1,pos2-pos1);

}

void node6::parse(void)
{

 this->data=check_state();


 this->PIR6=get_value("PIR6=","DDp1=");
 this->DDp1=get_value("DDp1=","DDp2=");
 this->DDp2=get_value("DDp2=","WIRE=");
 this->WIRE=get_value("WIRE=","NFC4=");
 this->NFC4=get_value("NFC4=","NFC5=");
 this->NFC5=get_value("NFC5=","NFC6=");
 this->NFC6=get_value("NFC6=","");


}


string node6::check_pir6(void)
{
 return this->PIR6;
}

string node6::check_ddp1(void)
{
 return this->DDp1;
}

string node6::check_ddp2(void)
{
 return this->DDp2;
}

string node6::check_wire(void)
{
 return this->WIRE;
}

string node6::check_nfc4(void)
{
 return this->NFC4;
}

string node6::check_nfc5(void)
{
 return this->NFC5;
}

string node6::check_nfc6(void)
{
 return this->NFC6;
}


void node6::dlp1_set(string state)
{
  if(state=="lock")  {send_message("w");}
  if(state=="unlock"){send_message("q");}
}

void node6::dlp2_set(string state)
{
  if(state=="lock")  {send_message("r");}
  if(state=="unlock"){send_message("e");}
}

void node6::dlven_set(string state)
{
  if(state=="on") {send_message("t");}
  if(state=="off"){send_message("y");}

}

void node6::dll0_set(string state)
{
  if(state=="lock")  {send_message("i");}
  if(state=="unlock"){send_message("u");}

}

void node6::dll1_set(string state)
{
  if(state=="lock")  {send_message("d");}
  if(state=="unlock"){send_message("a");}

}

void node6::d1l2_set(string state)
{
  if(state=="lock")  {send_message("g");}
  if(state=="unlock"){send_message("f");}

}

