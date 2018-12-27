#include <stdio.h>

int main() {
  int umur;
  printf("program validasi umur\n");
  printf("masukan umur :");
  scanf("%i",&umur );
  printf("umur anda :",umur );

  if (umur<0,umur<=1) {
    printf("masukan anda salah\n");
  } else if (umur>=1,umur<=5) {
    printf("balita\n");
  }
  else if(umur>=5,umur<=14){
    printf("anak-anak\n");
  }
  else if(umur>=15,umur<=20){
    printf("remaja\n");
  }
  else if(umur>=21,umur<=50){
    printf("dewasa\n");
  }
  else if(umur>=51,umur<=100){
    printf("lansia\n");
  }
}
