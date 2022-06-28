
#include <iostream>
#include <fstream>
#include <string>
#include "sculptor.h"


using namespace std;

int main(){
  //Testando Esfera e Elipsoide 
  Sculptor testes(60,50,50);
    //Esfera  
    testes.setColor(1,0,0,1);
    testes.putSphere(30,30,30,10);
    testes.cutSphere(30,30,30,5);

    //Elipsoide
    testes.setColor(0,1,0,1);
    testes.putEllipsoid(20,20,20,15,10,7);
    testes.writeOFF((char*)"Testes.off");



  //Escultura principal 
  Sculptor porco(50,50,50);
  
  //corpo
  porco.setColor(1,0.7,0.75,1); 
  porco.putBox(18,33,5,13,3,13);
  //cabeca
  porco.setColor(1,0.7,0.75,1);
  porco.putBox(31,39,7,15,4,12);
  //lama na cabeca
  porco.setColor(0.5,0.27,0.075,1); 
  porco.putBox(34,38,15,16,4,9);
  porco.cutBox(33,39,14,15,4,8);
  porco.setColor(0.72,0.44,0.24,1); 
  porco.putBox(33,39,14,15,4,8);
  porco.cutBox(36,37,14,15,3,4);
  porco.setColor(0.72,0.44,0.24,1); 
  porco.putBox(36,37,14,15,3,4);
  porco.cutBox(37,38,13,14,4,5);
  porco.setColor(0.78,0.50,0.31,1); 
  porco.putBox(37,38,13,14,4,5);
  porco.cutBox(35,36,13,14,4,5);
  porco.setColor(0.78,0.50,0.31,1); 
  porco.putBox(35,36,13,14,4,5);
  //rosa na cabeca
  porco.setColor(0.19,0.8,0.19,1);
  porco.putBox(36,37,16,18,4,7);
  porco.setColor(0.19,0.8,0.19,1);
  porco.putBox(36,37,17,18,3,4);
  porco.setColor(0.19,0.8,0.19,1);
  porco.putBox(36,37,18,19,5,6);
  porco.setColor(1,0,0,1);
  porco.putBox(35,38,19,21,5,6);
  porco.setColor(1,0,0,1);
  porco.putBox(36,37,19,22,4,7);
  porco.cutBox(36,37,21,22,5,6);
  //focinho
  porco.setColor(0.94,0.5,0.5,1);
  porco.putBox(39,40,9,12,5,11);
  //perna ant. esq.
  porco.setColor(0.5,0.27,0.075,1); 
  porco.putBox(30,33,2,5,3,6);
   //perna ant. dir.
  porco.setColor(0.5,0.27,0.075,1); 
  porco.putBox(30,33,2,5,10,13);
  //perna post. esq.
  porco.setColor(0.5,0.27,0.075,1); 
  porco.putBox(18,21,2,5,3,6);
  //perna post. dir.
  porco.setColor(0.5,0.27,0.075,1); 
  porco.putBox(18,21,2,5,10,13);
  //rabo
  porco.setColor(1,0.7,0.75,1); 
  porco.putBox(15,18,9,10,7,9);
  porco.setColor(1,0.7,0.75,1); 
  porco.putBox(15,16,9,11,7,9);
  porco.setColor(1,0.7,0.75,1); 
  porco.putBox(15,17,11,12,7,9);
  //olho direito
  porco.cutBox(38,39,12,1,10,13); 
  porco.setColor(1,1,1,1);
  porco.putBox(38,39,12,13,10,12);
  porco.setColor(0,0,0,1);
  porco.putBox(38,39,12,13,11,12);
  //olho esquerdo
  porco.cutBox(38,39,12,1,4,7); 
  porco.setColor(0,0,0,1);
  porco.putBox(38,39,12,13,4,6);
  porco.setColor(1,1,1,1);
  porco.putBox(38,39,12,13,5,6);
  //nariz 
  porco.cutBox(39,40,10,11,6,7); 
  porco.setColor(0.9,0.35,0.35,1);
  porco.putBox(39,40,10,11,6,7);
  porco.cutBox(39,40,10,11,9,10); 
  porco.setColor(0.9,0.35,0.35,1);
  porco.putBox(39,40,10,11,9,10);
  //orelhas
  porco.setColor(0.94,0.5,0.5,1);
  porco.putBox(36,37,12,16,10,13);
  porco.setColor(0.94,0.5,0.5,1);
  porco.putBox(36,37,12,14,3,6); 
  porco.setColor(0.5,0.27,0.075,1);
  porco.putVoxel(36,15,3);
  //lama
  porco.setColor(0.5,0.27,0.075,1); 
  porco.putBox(15,36,0,2,0,16);
  porco.cutBox(18,33,5,6,3,13);
  porco.setColor(0.5,0.27,0.075,1); 
  porco.putBox(18,33,5,6,3,13);
  porco.cutBox(18,33,6,7,3,13);
  porco.setColor(0.65,0.36,0.16,1); 
  porco.putBox(18,33,6,7,3,13);
  porco.cutBox(33,39,7,8,4,12);
  porco.setColor(0.72,0.44,0.24,1); 
  porco.putBox(33,39,7,8,4,12);
  porco.cutBox(28,33,7,8,3,13);
  porco.setColor(0.72,0.44,0.24,1); 
  porco.putBox(28,33,7,8,3,13);
  porco.cutBox(18,21,7,8,3,13);
  porco.setColor(0.72,0.44,0.24,1); 
  porco.putBox(18,21,7,8,3,13);
  porco.cutBox(18,20,8,9,3,13);
  porco.setColor(0.78,0.50,0.31,1); 
  porco.putBox(18,20,8,9,3,13);
  porco.cutBox(18,19,9,10,3,13);
  porco.setColor(0.78,0.50,0.31,1); 
  porco.putBox(18,19,9,10,3,13);
  porco.cutBox(15,18,9,10,7,9);
  porco.setColor(0.78,0.50,0.31,1); 
  porco.putBox(15,18,9,10,7,9);
  porco.cutBox(23,26,7,8,3,13);
  porco.setColor(0.72,0.44,0.24,1); 
  porco.putBox(23,26,7,8,3,13);
  porco.cutBox(24,25,8,9,3,13);
  porco.setColor(0.78,0.50,0.31,1); 
  porco.putBox(24,25,8,9,3,13);
  porco.cutBox(29,32,8,9,3,13);
  porco.setColor(0.78,0.50,0.31,1); 
  porco.putBox(29,32,8,9,3,13);
  porco.cutBox(30,31,9,10,3,13);
  porco.setColor(0.78,0.50,0.31,1); 
  porco.putBox(30,31,9,10,3,13);
  porco.cutBox(27,28,10,11,3,4);
  porco.setColor(0.78,0.50,0.31,1); 
  porco.putBox(27,28,10,11,3,4);
  porco.cutBox(19,20,11,12,12,13);
  porco.setColor(0.78,0.50,0.31,1); 
  porco.putBox(19,20,11,12,12,13);
  
  porco.setColor(0.65,0.36,0.16,1);
  porco.putVoxel(26,5,3);
  porco.setColor(0.65,0.36,0.16,1);
  porco.putVoxel(23,5,3);

  //cabeça homem aranha
  porco.setColor(1,0,0,1); 
  porco.putBox(17,25,22,29,4,12);
  porco.cutBox(24,25,25,26,7,9);
  porco.setColor(0,0,0,1); 
  porco.putBox(24,25,25,26,7,9);
  //corpo homem aranha
  porco.setColor(1,0,0,1); 
  porco.putBox(19,22,13,22,4,12);
  porco.cutBox(21,22,17,20,7,9);
  porco.setColor(0,0,0,1); 
  porco.putBox(21,22,17,20,7,9);
  // aranha peito
  porco.cutVoxel(21,18,9);
  porco.setColor(0,0,0,1);
  porco.putVoxel(21,18,9);
  porco.cutVoxel(21,20,9);
  porco.setColor(0,0,0,1);
  porco.putVoxel(21,20,9);
  porco.cutVoxel(21,18,6);
  porco.setColor(0,0,0,1);
  porco.putVoxel(21,18,6);
  porco.cutVoxel(21,20,6);
  porco.setColor(0,0,0,1);
  porco.putVoxel(21,20,6);
  //olho esquerdo
  porco.cutBox(24,25,25,26,5,7);
  porco.setColor(1,1,1,1); 
  porco.putBox(24,25,25,26,5,7);
  porco.cutVoxel(25,27,5);
  porco.setColor(1,1,1,1); 
  porco.putVoxel(24,26,5);
  porco.cutVoxel(25,27,5);
  porco.setColor(0,0,0,1); 
  porco.putVoxel(24,26,6);
  porco.cutBox(24,25,24,25,5,7);
  porco.setColor(0,0,0,1); 
  porco.putBox(24,25,24,25,5,7);
  porco.cutBox(24,25,25,27,4,5);
  porco.setColor(0,0,0,1); 
  porco.putBox(24,25,25,27,4,5);
  porco.cutBox(24,25,27,28,4,6);
  porco.setColor(0,0,0,1); 
  porco.putBox(24,25,27,28,4,6);
  
  //olho direito
  porco.cutBox(24,25,25,26,9,11);
  porco.setColor(1,1,1,1); 
  porco.putBox(24,25,25,26,9,11);
  porco.cutVoxel(25,27,5);
  porco.setColor(1,1,1,1); 
  porco.putVoxel(24,26,10);
  porco.cutVoxel(25,27,9);
  porco.setColor(0,0,0,1); 
  porco.putVoxel(24,26,9);
  porco.cutBox(24,25,24,25,9,11);
  porco.setColor(0,0,0,1); 
  porco.putBox(24,25,24,25,9,11);
  porco.cutBox(24,25,25,27,11,12);
  porco.setColor(0,0,0,1); 
  porco.putBox(24,25,25,27,11,12);
  porco.cutBox(24,25,27,28,10,12);
  porco.setColor(0,0,0,1); 
  porco.putBox(24,25,27,28,10,12);
  //roupa
  porco.cutBox(19,22,13,16,7,9);
  porco.setColor(0,0,1,1); 
  porco.putBox(19,22,13,16,7,9);

  
  //roupa esquerda
  porco.cutBox(19,22,13,20,4,5);
  porco.setColor(0,0,1,1); 
  porco.putBox(19,22,13,20,4,5);
  porco.cutBox(19,22,13,19,5,6);
  porco.setColor(0,0,1,1); 
  porco.putBox(19,22,13,19,5,6);
  porco.cutBox(19,22,13,17,6,7);
  porco.setColor(0,0,1,1); 
  porco.putBox(19,22,13,17,6,7);
  //roupa direita
  porco.cutBox(19,22,13,20,11,12);
  porco.setColor(0,0,1,1); 
  porco.putBox(19,22,13,20,11,12);
  porco.cutBox(19,22,13,19,10,11);
  porco.setColor(0,0,1,1); 
  porco.putBox(19,22,13,19,10,11);
  porco.cutBox(19,22,13,17,9,10);
  porco.setColor(0,0,1,1); 
  porco.putBox(19,22,13,17,9,10);
  //perna esquerda homem aranha
  porco.setColor(0,0,1,1); 
  porco.putBox(22,26,13,16,4,7);
  //perna direita homem aranha
  porco.setColor(0,0,1,1); 
  porco.putBox(22,26,13,16,9,12);
  //bota esquerda homem aranha
  porco.setColor(1,0,0,1); 
  porco.putBox(26,31,13,16,4,7);
  porco.cutBox(27,28,13,16,4,7);
  porco.setColor(0,0,0,1); 
  porco.putBox(27,28,13,16,4,7);
  //bota direita homem aranha
  porco.setColor(1,0,0,1); 
  porco.putBox(26,31,13,16,9,12);
  porco.cutBox(27,28,13,16,9,12);
  porco.setColor(0,0,0,1); 
  porco.putBox(27,28,13,16,9,12);
  //braço esquerdo 
  porco.setColor(1,0,0,1); 
  porco.putBox(19,22,13,22,1,4);
  porco.cutBox(19,22,15,16,1,4);
  porco.setColor(0,0,0,1);
  porco.putBox(19,22,15,16,1,4);
  //braço esquerdo 
  porco.setColor(1,0,0,1); 
  porco.putBox(19,22,13,22,12,15);
  porco.cutBox(19,22,15,16,12,15);
  porco.setColor(0,0,0,1);
  porco.putBox(19,22,15,16,12,15);

  
  porco.writeOFF((char*)"porco.off");

  return 0;
}
