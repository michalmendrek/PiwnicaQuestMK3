#include "communication.hpp"


void error(const char *msg)
{
    perror(msg);
    exit(0);
}

void COMM::send_message(string message)
{
  char rezultat[200];
  if(message!="s")
		 {
		   querry_device(message,rezultat);

		  }


}


string COMM::check_state(void)
{
  char rezultat[200];
  querry_device("s",rezultat);

return rezultat;
}



void COMM::querry_device(string question,char *efekt)
{

    int sockfd, portno, n;
    struct sockaddr_in serv_addr;
    struct hostent *server;


   sockfd = socket(AF_INET, SOCK_STREAM, 0);
   if (sockfd < 0) error("ERROR opening socket");
   bzero((char *) &serv_addr, sizeof(serv_addr));
   serv_addr.sin_family = AF_INET;
   serv_addr.sin_addr.s_addr=inet_addr(this->address.c_str());
   serv_addr.sin_port = htons(PORT);
   if (connect(sockfd,(struct sockaddr *) &serv_addr,sizeof(serv_addr)) < 0) error("ERROR connecting"); 
   n = write(sockfd,question.c_str(),question.length());
   if (n < 0) error("ERROR writing to socket"); 
   if(question=="s")
   {
     bzero(efekt,200); 
     n = recv(sockfd, efekt,200,MSG_WAITALL);
     if (n < 0) error("ERROR reading from socket"); 
   }
   close(sockfd); 


}




