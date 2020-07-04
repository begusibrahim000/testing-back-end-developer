#include <stdio.h>

int main()
{

    // 03 - july - 2020
    // Begus Ibrahim | A Full-Stack Web Developer
    // https://sribulancer.com/id/users/myjobs12345

    int input = 15; // coba rubah angka 15 sesuai keinginan mu 
    
    int vertikal_awal = 1;
    int vertikal_isi  = 1;
    
    for(int i = 0; i < input ;i++){
        
        for(int j = 0; j < input; j++){
            if(vertikal_isi == 1){
                if((vertikal_awal == 1 && j == 1) ||(vertikal_awal == 0 && j == input - 2) ){
                    printf(" ");
                }else{
                    printf("@");
                }
            }else{
                if(j == 0 || j == input - 1){
                    printf("@");
                }else{
                    printf(" ");
                }
            }
        }
        
        if(vertikal_isi==0){
            vertikal_isi = 1;
        }else{
            vertikal_isi = 0;
            if(vertikal_awal==0){
                vertikal_awal = 1;
            }else if(vertikal_awal==1){
                vertikal_awal = 0;
            }
        }
    
        printf("\n");
    }

    return 0;
}

