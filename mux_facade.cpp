#include "mux_facade.hpp"

node1 nd1;
node2 nd2;
node3 nd3;
node4 nd4;
node5 nd5;
node6 nd6;

std::thread nd1_t(nd1_thread);
std::thread nd2_t(nd2_thread);
std::thread nd3_t(nd3_thread);
std::thread nd4_t(nd4_thread);
std::thread nd5_t(nd5_thread);
std::thread nd6_t(nd6_thread);

mux mx(&nd1, &nd2, &nd3, &nd4, &nd5, &nd6);


void mux::say_hello(void)
{

	std::cout <<"Mux working properly!"<<endl;

}


void mux::dl1_set(string state)
{
 this->nd1->add_task(&node1::dl1_set,state);
}


void mux::dl12_set(string state)
{
 this->nd1->add_task(&node1::dl12_set,state);
}

void mux::dl23_set(string state)
{
 this->nd2->add_task(&node2::dl23_set,state);
}

void mux::dldpk_set(string state)
{
 this->nd2->add_task(&node2::dldpk_set,state);
}

void mux::dl34a_set(string state)
{
 this->nd3->add_task(&node3::dl34a_set,state);
}

void mux::dl34b_set(string state)
{
 this->nd3->add_task(&node3::dl34b_set,state);

}

void mux::dlcombox_set(string state)
{
 this->nd3->add_task(&node3::dlcombox_set,state);
}

void mux::truncled_set(string state)
{
 this->nd3->add_task(&node3::truncled_set,state);
}

void mux::redalert_set(string state)
{
 this->nd3->add_task(&node3::redalert_set,state);
}

void mux::light_set(string state)
{
 this->nd2->add_task(&node2::light_set,state);
}

void mux::dlw_set(string state)
{
 this->nd4->add_task(&node4::dlw_set,state);
}

void mux::dlt_set(string state)
{
 this->nd4->add_task(&node4::dlt_set,state);
}

void mux::key_count(string state)
{
 this->nd4->add_task(&node4::key_count,state);
}


void mux::dll_set(string state)
{
 this->nd1->add_task(&node1::dl1_set,state);
}

void mux::dls_set(string state)
{
 this->nd5->add_task(&node5::dls_set,state);
}

void mux::dlgh_set(string state)
{
 this->nd5->add_task(&node5::dlgh_set,state);
}

void mux::grate_set(string state)
{
 this->nd5->add_task(&node5::grate_set,state);
}

void mux::dlp1_set(string state)
{
 this->nd6->add_task(&node6::dlp1_set,state);

}

void mux::dlp2_set(string state)
{
 this->nd6->add_task(&node6::dlp2_set,state);
}

void mux::dlven_set(string state)
{
 this->nd6->add_task(&node6::dlven_set,state);
}

void mux::dl10_set(string state)
{
 this->nd6->add_task(&node6::dll0_set,state);
}

void mux::dll1_set(string state)
{
 this->nd6->add_task(&node6::dll1_set,state);
}


void mux::d1l2_set(string state)
{
 this->nd6->add_task(&node6::d1l2_set,state);

}

void mux::nd1_update(void)
{
  this->nd1->update();
}


void mux::nd2_update(void)
{
  this->nd2->update();
}

void mux::nd3_update(void)
{
 this->nd3->update();
}

void mux::nd4_update(void)
{
 this->nd4->update();
}

void mux::nd5_update(void)
{
 this->nd5->update();
}

void mux::nd6_update(void)
{
 this->nd6->update();
}


string mux::check_dd1(void)
{
  return this->nd1->check_dd1();
}

string mux::check_dd12(void)
{

return  this->nd1->check_dd12();
}

string mux::check_dd23(void)
{

return this->nd2->check_dd23();
}

string mux::check_dd34a(void)
{

return  this->nd3->check_dd34a();
}

string mux::check_dd34b(void)
{
return this->nd3->check_dd34b();
}

string mux::check_ddp1(void)
{
return this->nd6->check_ddp1();
}

string mux::check_ddp2(void)
{
return this->nd6->check_ddp2();
}

string mux::check_uz0(void)
{
return this->nd3->check_uz0();
}

string mux::check_powercable(void)
{
return this->nd3->check_powercable();
}

string mux::check_truncbutton(void)
{
return this->nd3->check_truncbutton();
}

string mux::check_dddpk(void)
{

return this->nd2->check_dddpk();
}

string mux::check_pir1(void)
{

return this->nd1->check_pir1();
}

string mux::check_pir2(void)
{
return this->nd1->check_pir2();
}

string mux::check_pir3(void)
{
return this->nd2->check_pir3();
}

string mux::check_pir4(void)
{
return this->nd2->check_pir4();
}

string mux::check_pir5(void)
{
return this->nd5->check_pir5();
}

string mux::check_pir6(void)
{
return this->nd6->check_pir6();
}

string mux::check_usb(void)
{
return this->nd1->check_usb();
}

string mux::check_jack(void)
{
return this->nd2->check_jack();
}

string mux::check_key(void)
{
return this->nd2->check_key();
}

string mux::check_keybox(void)
{

return this->nd2->check_keybox();
}

string mux::check_ddt(void)
{
return this->nd4->check_ddt();
}

string mux::check_key0(void)
{
return this->nd4->check_key0();
}

string mux::check_key1(void)
{
return this->nd4->check_key1();
}

string mux::check_key2(void)
{
return this->nd4->check_key2();
}

string mux::check_key3(void)
{
return this->nd4->check_key3();
}

string mux::check_grate(void)
{
return this->nd5->check_grate();
}

string mux::check_touchr(void)
{
return this->nd5->check_touchr();
}

string mux::check_touchl(void)
{
return this->nd5->check_touchl();
}

string mux::check_wire(void)
{
return this->nd6->check_wire();
}

string mux::check_nfc0(void)
{
return this->nd1->check_nfc0();
}

string mux::check_nfc1(void)
{
return this->nd5->check_nfc1();
}

string mux::check_nfc2(void)
{
return this->nd5->check_nfc2();
}

string mux::check_nfc3(void)
{
return this->nd5->check_nfc3();
}

string mux::check_nfc4(void)
{
return this->nd6->check_nfc4();
}

string mux::check_nfc5(void)
{
return this->nd6->check_nfc5();
}

string mux::check_nfc6(void)
{
return this->nd6->check_nfc6();
}


void threads_init(void)
{
	nd1_t.join();
	nd2_t.join();
	nd3_t.join();
	nd4_t.join();
	nd5_t.join();
}


void nd1_thread(void)
{
  while(1)
	{
	  //cout <<"Thread1 hello"<<endl;
	  nd1.update();
	  nd1.run_tasks();
	  std::this_thread::sleep_for(std::chrono::milliseconds(THREAD_DELAY));
	}
}

void nd2_thread(void)
{
  while(1){
	   //cout <<"Thread2 hello"<<endl;
	   nd2.update();
	   nd2.run_tasks();
	   std::this_thread::sleep_for(std::chrono::milliseconds(THREAD_DELAY));
	  }

}

void nd3_thread(void)
{

 while(1)
	{
	  //cout <<"Thread3 hello"<<endl;
	  nd3.update();
	  nd3.run_tasks();
 	  std::this_thread::sleep_for(std::chrono::milliseconds(THREAD_DELAY));
	}

}

void nd4_thread(void)
{
 while(1)
	{
	  //cout <<"Thread4 hello"<<endl;
	  nd4.update();
	  nd4.run_tasks();
 	  std::this_thread::sleep_for(std::chrono::milliseconds(THREAD_DELAY));
	}

}

void nd5_thread(void)
{
 while(1)
	{
	  //cout <<"Thread5 hello"<<endl;
	  nd5.update();
	  nd5.run_tasks();
 	  std::this_thread::sleep_for(std::chrono::milliseconds(THREAD_DELAY));
	}
}

void nd6_thread(void)
{
 while(1)
	{
	  //cout <<"Thread6 hello"<<endl;
	  nd6.update();
	  nd6.run_tasks();
	  std::this_thread::sleep_for(std::chrono::milliseconds(THREAD_DELAY));
	}

}


mux *mx_ptr(void)
{

return &mx;
}
