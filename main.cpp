#include <iostream>
#include <ctime>
#include <cstdlib>
#include <fstream>

int main(){
  srand(time(0));
  int robot;
  int player ;
  char luachon;
  int win = 0;
  int lose = 0;
  int draw = 0;
  int sotrandachoi = 0;
  std::ofstream file("tongtranchoi.txt");

  do {
    robot = rand() % 3 + 1; // khoi tao so ngau nhien cho robot
    std::cout << "==== Keo Bua Bao ====" << std::endl;
    std::cout << "Nhap so tuong ung voi ket qua ( 1. Keo ; 2. Bua ; 3. Bao ): ";
    std::cin >> player ;
    if ( player <= 0 || player > 3) {
      std::cout << "Gia tri khong hop le! "<< std::endl;
      continue;
    }
    if ( robot == 1 ) {
      std::cout << "Robot ra keo!" << std::endl;
      if ( player  == 2 ){
        std::cout << "Ban thang! " <<std::endl;
        win++;
      }
      else if ( player == 3 ) {
        std::cout << "Ban thua! " << std::endl;
        lose++;
      }
      else {
        std::cout << " Ban hoa roi" << std::endl;
        draw++;
      }
    }
    if ( robot == 2 ){
      std::cout << "Robot ra Bua!" << std::endl;
      if  (player == 3 ){
        std::cout << "Ban thang !" << std::endl;
        win++;
      }
      else if ( player == 1 ){
        std::cout << "Ban thua roi " << std::endl;
        lose++;
      }
      else{
        std::cout << "Ban hoa roi" <<std::endl;
        draw++;
      }
    }
    if ( robot == 3 ){
      std::cout << "Robot ra Bao " <<std::endl;
      if ( player == 1 ) {
        std::cout << "Ban thang! " << std::endl;
        win++;
      }
      else if ( player == 2) {
        std::cout << "Ban thua!" << std::endl;
        lose++;
      }
      else {
        std::cout << "Ban hoa roi" <<std::endl;
        draw++;
      }
    }

    std::cout << "choi tiep chu? " << std::endl;
    std::cout << " Bam c de choi tiep hoac 1 phim bat ky tren ban phim de huy. " <<std::endl;
    std::cin >> luachon;
  } while (luachon == 'c' || luachon == 'C');
  // ghi ket qua vao file txt
  file << "==== Tong ket ==== " << std::endl;
  file << "so tran da choi: " << win + lose + draw << std::endl;
  file << "so tran thang: " << win << std::endl;
  file << "so tran thua: " << lose << std::endl;
  file << "so tran hoa: " << draw <<std::endl;


  std::cout << "cam on vi da den \n xin chao va hen gap lai! " <<std::endl;
  file.close();
  return 0;
}
