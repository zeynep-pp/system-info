#include <linux/kernel.h>
#include <string.h>




asmlinkage long sys_systeminfo(char * str)
{
   char str1[] = "all";
   char str2[] = "p";

   FILE *fp1,*fp2,*fp3;
   if((*str == \0){
    char cpuinfo;
    *fp1 = fopen("/proc/xcpuinfo", "r");

    if (fp1 == NULL) {
        fprintf(stderr, "Error opening file\n");
    } else {
        while ((cpuinfo = fgetc(fp1)) != EOF) {
            printf("%c", cpuinfo);      
        }
        fclose(fp1);
    }
  
   }
  else if((*str == str1){

   char cpuload;
    *fp2 = fopen("/proc/loadavg", "w");

    if (fp2 == NULL) {
        fprintf(stderr, "Error opening file\n");
    } else {
        while ((cpuload = fgetc(fp2)) != EOF) {
            printf("%c", cpuload);      
        }
        fclose(fp2);
    }
    char cputime;
    *fp3 = fopen("/proc/uptime", "rb");

    if (fp3 == NULL) {
        fprintf(stderr, "Error opening file\n");
    } else {
        while ((cputime = fgetc(fp3)) != EOF) {
            printf("%c", cputime);      
        }
        fclose(fp3);
    }

   }
   else if((*str == str2){
    char cpustatus;
    *fp4 = fopen("/proc/[process_id]/status", "wb");

    if (fp4 == NULL) {
        fprintf(stderr, "Error opening file\n");
    } else {
        while ((cputime = fgetc(fp4)) != EOF) {
            printf("%c", cpustatus);      
        }
        fclose(fp4);
    }



   }



 return 0;

}

