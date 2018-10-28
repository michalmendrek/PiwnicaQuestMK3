#ifndef COMMUNICATION_HPP
#define COMMUNICATION_HPP

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h> 
#include<arpa/inet.h>




using namespace std;

#define NODE1 "192.168.2.1"
#define NODE2 "192.168.2.2"
#define NODE3 "192.168.2.3"
#define NODE4 "192.168.2.4"
#define NODE5 "192.168.2.5"
#define NODE6 "192.168.2.6"

#define PORT  404


class COMM
	{
		protected:
			string address;
			string response;
			int    port_no;
			void querry_device(string question,char *efekt);
		public:
			COMM(string address) {this->address=address;}
			void    send_message(string message);
			string  check_state (void);

	};
#endif
