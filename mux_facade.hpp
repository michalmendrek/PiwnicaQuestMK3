#ifndef MUX_FACADE_HPP
#define MUX_FACADE_HPP

#include "node.hpp"
#include <thread>
#include <chrono>
#include <mutex>
#include <memory>

#define THREAD_DELAY 100


class mux
{
  private:
	   node1 *nd1;
	   node2 *nd2;
	   node3 *nd3;
	   node4 *nd4;
	   node5 *nd5;
	   node6 *nd6;
  public:
	 mux(node1 *nod1, node2 *nod2, node3 *nod3, node4 *nod4, node5 *nod5, node6 *nod6)
	 {
		this->nd1=nod1;
		this->nd2=nod2;
		this->nd3=nod3;
		this->nd4=nod4;
		this->nd5=nod5;
		this->nd6=nod6;
	 }
	void say_hello(void);
	void dl1_set(string state);
	void dl12_set(string state);
	void dl23_set(string state);
	void dldpk_set(string state);
	void dl34a_set(string state);
	void dl34b_set(string state);
	void dlcombox_set(string state);
	void truncled_set(string state);
	void redalert_set(string state);
	void light_set(string state);
	void dlw_set(string state);
	void dlt_set(string state);
	void key_count(string state);
	void dll_set(string state);
	void dls_set(string state);
	void dlgh_set(string state);
	void grate_set(string state);
	void dlp1_set(string state);
	void dlp2_set(string state);
	void dlven_set(string state);
	void dl10_set(string state);
	void dll1_set(string state);
	void d1l2_set(string state);
	void nd1_update(void);
	void nd2_update(void);
	void nd3_update(void);
	void nd4_update(void);
	void nd5_update(void);
	void nd6_update(void);
	string check_dd1(void);
	string check_dd12(void);
	string check_dd23(void);
	string check_dd34a(void);
	string check_dd34b(void);
	string check_ddp1(void);
	string check_ddp2(void);
	string check_uz0(void);
	string check_powercable(void);
	string check_truncbutton(void);
	string check_dddpk(void);
	string check_pir1(void);
	string check_pir2(void);
	string check_pir3(void);
	string check_pir4(void);
	string check_pir5(void);
	string check_pir6(void);
	string check_usb(void);
	string check_jack(void);
	string check_key(void);
	string check_keybox(void);
	string check_ddt(void);
	string check_key0(void);
	string check_key1(void);
	string check_key2(void);
	string check_key3(void);
	string check_grate(void);
	string check_touchr(void);
	string check_touchl(void);
	string check_wire(void);
	string check_nfc0(void);
	string check_nfc1(void);
	string check_nfc2(void);
	string check_nfc3(void);
	string check_nfc4(void);
	string check_nfc5(void);
	string check_nfc6(void);




};

void threads_init(void);
void nd1_thread(void);
void nd2_thread(void);
void nd3_thread(void);
void nd4_thread(void);
void nd5_thread(void);
void nd6_thread(void);
mux *mx_ptr(void);



#endif




