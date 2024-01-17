#include<stdio.h>
#include<math.h>
void get_ip_address(int ip[4]);
void calculate_addresses(int ip[4], int afteropr[4], int lastadd[4], int *nadd);

void get_ip_address(int ip[4]) 
{
   printf("Enter the IP address:");
   for(int i=0; i<4; i++) 
   {
       scanf("%d", &ip[i]);
   }
    printf("\nThe IP address is:%d.%d.%d.%d",ip[0],ip[1],ip[2],ip[3]);
}



void calculate_addresses(int ip[4], int afteropr[4], int lastadd[4], int *nadd) 
{
   if(ip[0] <= 127) 
   {
       int subclassA[4] = {255, 0, 0, 0};
       for(int i=0; i<4; i++) 
       {
           afteropr[i] = ip[i] & subclassA[i];
       }

       int n = 8;
       *nadd = pow(2, (32-n));

       int lclassA[4] = {0, 255, 255, 255};
       for(int i=0; i<4; i++) 
       {
           lastadd[i] = ip[i] | lclassA[i];
       }
   }
    else if(ip[0] >= 128 && ip[0] <= 191) 
   {
       int subclassA[4] = {255, 255, 0, 0};
       for(int i=0; i<4; i++) 
       {
           afteropr[i] = ip[i] & subclassA[i];
       }

       int n = 16;
       *nadd = pow(2, (32-n));

       int lclassA[4] = {0, 0, 255, 255};
       for(int i=0; i<4; i++) 
       {
           lastadd[i] = ip[i] | lclassA[i];
       }
   }
    else if(ip[0] >= 192 && ip[0] <= 223) 
   {
       int subclassC[4] = {255, 255, 255, 0};
       for(int i=0; i<4; i++) 
       {
           afteropr[i] = ip[i] & subclassC[i];
       }

       int n = 24;
       *nadd = pow(2, (32-n));

       int lclassA[4] = {0, 0, 0, 255};
       for(int i=0; i<4; i++) 
       {
           lastadd[i] = ip[i] | lclassA[i];
       }
   }
   else
   {
    printf("\nInvalid Class");
   }
}

int main() {
   int ip[4], afteropr[4], lastadd[4];
   int nadd;

   get_ip_address(ip);

   calculate_addresses(ip, afteropr, lastadd, &nadd);

   printf("\n\nFirst address is:%d.%d.%d.%d",afteropr[0],afteropr[1],afteropr[2],afteropr[3]);
	
   printf("\n\nNumber of addresses are:%d",nadd);
	
   printf("\n\nLast address is:%d.%d.%d.%d",lastadd[0],lastadd[1],lastadd[2],lastadd[3]);
}

