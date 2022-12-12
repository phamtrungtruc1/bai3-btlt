include "stdio.h"
int main(){
  int thang;
  printf("\nNhap vao mot thang bat ki :  ");
  scanf("%d", &thang);
  switch (thang)
  {
    case 1:
    case 2:
    case 3:
      printf("\nThang thuoc quy 1", thang);
      break;
    case 4:
    case 5:
    case 6:
      printf("\nThang thuoc quy 2", thang);
      break;
    case 7:
    case 8:
    case 9:
      printf("\nThang thuoc quy 3", thang);
      break;
    case 10:
    case 11:
    case 12:
      printf("\nThang thuoc quy 4", thang);
      break;
    default:
      printf("Vui long nhap thang tu 1 -> 12");
      break;
  }
}
