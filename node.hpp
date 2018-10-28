#ifndef NODE_HPP
#define NODE_HPP
#include "communication.hpp"
#include <queue>


using namespace std;



template <typename T>
class executor
{
  private:
	   T *ptr_node;
	   void (T::*wfy)(string);
	   string arguments;
  public:
	   executor(T &ptr, void(T::*wf)(string),string args)
	   {
		this->ptr_node=&ptr;
		this->wfy=wf;
		this->arguments=args;
	   }
	   void run(void);
};



class node1: protected COMM
{
	private:
		string address;
		string data;
		string NFC0;
		string DD1;
		string DD12;
		string PIR1;
		string PIR2;
		string USB;

	protected:
		queue <executor<node1>> stos_zadan;
		void parse(void);
		string get_value(string v1, string v2);

	public:
		node1():COMM::COMM(NODE1){}
		void add_task(void(node1::*wf)(string),string args);
		void run_tasks(void);
		void update(void);
		void dl1_set(string state);
		void dl12_set(string state);
		string check_nfc0(void);
		string check_dd1(void);
		string check_dd12(void);
		string check_pir1(void);
		string check_pir2(void);
		string check_usb(void);




};


class node2: protected COMM
{
	private:
		string address;
		string data;
		string DD23;
		string DDdpk;
		string PIR3;
		string PIR4;
		string JACK;
		string KEY;
		string KEYBOX;
	protected:
		queue <executor<node2>> stos_zadan;
		void parse(void);
		string get_value(string v1, string v2);

	public:
		node2():COMM::COMM(NODE2){}
		void add_task(void(node2::*wf)(string),string args);
		void run_tasks(void);
		void update(void);
		void dl23_set(string state);
		void dldpk_set(string state);
		void light_set(string state);
		string check_dd23(void);
		string check_dddpk(void);
		string check_pir3(void);
		string check_pir4(void);
		string check_jack(void);
		string check_key(void);
		string check_keybox(void);



};



class node3: protected COMM
{
        private:
                string address;
		string data;
                string DD34a;
                string DD34b;
                string UZ0;
                string PowerCable;
                string TruncButton;
        protected:
		queue <executor<node3>> stos_zadan;
		void parse(void);
		string get_value(string v1, string v2);

        public:
		node3():COMM::COMM(NODE3){}
		void add_task(void(node3::*wf)(string),string args);
		void run_tasks(void);
		void update(void);
		void dl34a_set(string state);
		void dl34b_set(string state);
		void dlcombox_set(string state);
		void truncled_set(string state);
		void redalert_set(string state);
		string check_dd34a(void);
		string check_dd34b(void);
		string check_uz0(void);
		string check_powercable(void);
		string check_truncbutton(void);

};


class node4: protected COMM
{
        private:
                string address;
		string data;
                string DDT;
                string KEY0;
                string KEY1;
                string KEY2;
                string KEY3;
        protected:
		queue <executor<node4>> stos_zadan;
		void parse(void);
		string get_value(string v1, string v2);

        public:
		node4():COMM::COMM(NODE4){}
		void add_task(void(node4::*wf)(string),string args);
		void run_tasks(void);
		void update(void);
		void dlw_set(string state);
		void dlt_set(string state);
		void key_count(string state);
		string check_ddt(void);
		string check_key0(void);
		string check_key1(void);
		string check_key2(void);
		string check_key3(void);


};

class node5: protected COMM
{
        private:
                string address;
		string data;
                string Grate;
                string PIR5;
                string TOUCHr;
                string TOUCHl;
                string NFC1;
                string NFC2;
                string NFC3;
        protected:
		queue <executor<node5>> stos_zadan;
		void parse(void);
		string get_value(string v1, string v2);

        public:
		node5():COMM::COMM(NODE5){}
		void add_task(void(node5::*wf)(string),string args);
		void run_tasks(void);
		void update(void);
		void dll_set(string state);
		void dls_set(string state);
		void dlgh_set(string state);
		void dlfac_set(string state);
		void grate_set(string state);
		string check_grate(void);
		string check_pir5(void);
		string check_touchr(void);
		string check_touchl(void);
		string check_nfc1(void);
		string check_nfc2(void);
		string check_nfc3(void);


};



class node6: protected COMM
{
        private:
                string address;
		string data;
                string PIR6;
                string DDp1;
                string DDp2;
                string WIRE;
                string NFC4;
                string NFC5;
                string NFC6;
        protected:
		queue <executor<node6>> stos_zadan;
		void parse(void);
		string get_value(string v1, string v2);

        public:
		node6():COMM::COMM(NODE6){}
		void add_task(void(node6::*wf)(string),string args);
		void run_tasks(void);
		void update(void);
		void dlp1_set(string state);
		void dlp2_set(string state);
		void dlven_set(string state);
		void dll0_set(string state);
		void dll1_set(string state);
		void d1l2_set(string state);
		string check_pir6(void);
		string check_ddp1(void);
		string check_ddp2(void);
		string check_wire(void);
		string check_nfc4(void);
		string check_nfc5(void);
		string check_nfc6(void);

};





#endif
