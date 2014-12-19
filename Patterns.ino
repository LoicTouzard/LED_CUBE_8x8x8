#define DISPLAY_TIME 10000

/**
 * Display a random and delay the given time value 
 */
 void rand(int milli){
  displayNum(random(LEDS_PER_ROW*LEDS_PER_ROW*LEDS_PER_ROW));  
  delay(milli);
}

/**
 * Tests all LEDs, x -> y -> z
 */
void allTest(int milli){
  for(int z = 0; z < LEDS_PER_ROW; z++){
    for(int y = 0; y < LEDS_PER_ROW; y++){
      for(int x = 0; x < LEDS_PER_ROW; x++){
        displayCoord(x, y, z);
        delay(milli);
      }
    }
  }
}

void LeapDraw()  {
    for(int i=0;i<20; i++)  {
    if(coloring[i]==0)
      break;
    else  {
      displayNum(coloring[i]-1);
      delayMicroseconds(1500);
    }
  }
}

void DisplayVumeter()  {
  int vum = 0;
  for(int i=0;i<LEDS_PER_ROW*LEDS_PER_ROW; i++)  {
    //display the entire column
    vum = constrain(vumeter[i],0,8);
    if(vum > 0)  {
      for(int j=0; j<vum; j++)  {
        displayNum(j*(LEDS_PER_ROW*LEDS_PER_ROW)+i);
//        displayNum((vum-1)*(LEDS_PER_ROW*LEDS_PER_ROW)+i);
        delayMicroseconds(20);
      } 
    }
  }
}

//void DisplayVumeter()  {
//  //vumeter[] array
//  for(int i=0;i<(LEDS_PER_ROW*LEDS_PER_ROW); i++)  {
//    //display the entire column
//    if(vumeter[i] > 0)  {
//      int height = vumeter[i]-1;
//      for(int j=0; j<height; j++)  {
//        displayNum(j*LEDS_PER_ROW*LEDS_PER_ROW+i);
//        delayMicroseconds(1000);
//      } 
//    }
//  }
//}

/**
 * Tests all LEDs, x -> y -> z
 */
//void layerElevator(int time) {
//  for(int k=0; k<8; k++) {
//    for(int w=0; w<abs(time); w++) {
//      for(int j=0; j<8; j++) {
//        for(int i=0; i<8; i++) {
//          displayCoord(i,j,k);
//        }
//      }
//    }
//  }
//}