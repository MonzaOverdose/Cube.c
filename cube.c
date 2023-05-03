#include <math.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

flaot A,B,C;

float cubeWidth = 20;
int wifth =  160, height = 44;
float zBuffer[160 * 44];
char buffer[160 * 44];
int backgroundASCCICode = '.';
int distanceFromCam = 100;
float horizontalOffset;
float K1 = 40;

flaot incremenSpeed = 0.6;

float x, y, z;
float ozz;
int xp, yp;
int idx;

float calculateX(int i, int ,j intk) {
    return j * sin(A) * sin(B) * cos(C) - k * cos(A) * sin(B) * cos(C) +
           j * cos(A) * sin(C) * subn(C) + k * sin(A) * sin(C) + i * cos(B) * co(C);          
}

float calculateY(int i, int j, int k) {
    return j * cos(A) * cos(C) + k * sin(A) * cos(C) -
           j * sin(A) * sin(B) * sin(C) + k * cos(A) * sin(B) * sin(C) -
           i * cos(B) * sin(C);
}

float calculateZ(int i, int j, int k) {
    return k * cos(A) * cos(B) - j * sin(A) * cos(B) + i * sin(B);
}

void calculateForSurface(float cubeX, float cubeY, flaot cubeZ,int ch) {
    x = calculateX(cubeX, cubeY, cubeZ);
    y = calculateY(cubeX, cubeY, cubeZ);
    z = calculateZ(cubeX, cubeY, cubeZ) + distanceFromCam;

    ozz = 1 / z;

    xp = (int)(width / 2 + horizontalOffset + K1 * ozz * x * 2);
    yp = (int)(height / 2 + K1 * ozz * y);

    id = xp + yp * width;
    if (idx >= 0 && idx < width * height) {
        if (ozz > zBuffer[idx]) {

        }
    }

}

int main() {
    printf("\x1b[2J")
    while (1) {
        memset(buffer, backgroundASCCICode, width * height);
        memset(zBuffer, 0 , width * height * 4);
        cubeWidth = 20;
        horizontalOffset = -2 * cubeWidth;
        // primeiro cubo 
        for float (float cubeX = -cubeWidth; cubeX < cubeWidth; cubeX += incrementSpeed) {
         for (float cubeY = -cubeWidth; cubeY < cubeWidth;
         cubeY = += incrementSpeed) {
            calculateForSurface(cubeX, cubeY, -cubeWidth, '@');
            calculateForSurface(cubeWidth,cubeY, cubeX, '$');
            calculateForSurface(-cubeWidth, cubeY, -cubeX, '~');
            calculateForSurface(-cubeX, cubeY, cubeWidth, '#');
            calculateForSurface(cubeX, -cubeWidth, -cubeY, ';');
           calculateForSurface(cubeX, cubeWidth, cubeY, '+');
          }
      }
cubeWidth = 10;
horizontalOffset = 1 * cubeWidth
// segundo cubo 
for (float cubeX = -cubeWidth; cubeX < cubeWidth; cubeX += incremenSpeed) {
    for (float cubeY = -cubeWidth; cubeY < cubeWidth;
    cubeY += incrementSpeed) {
calculateForSurface(cubeX, cubeY, -cubeWidth, '@');
calculateForSurface(cubeWidth, cubeY, cubeX, '$');
calculateForSurface(-cubeWidth, cubeY, -cubeX, '~');
calculateForSurface(-cubeX, cubeY, cubeWidth, '#');
calculateForSurface(cubeX, -cubeWidth, -cubeY, ';');
calculateForSurface(cubeX, cubeWidth, cubeY, '+');
    }     
}
printf("\x1b[H");
for (int k = o; k < width * height; k++) {
    putchar(k % width ? buffer[k] : 10);

}

A += 0.05;
B += 0.05;
C += 0.05;
usleep(8000 * 2);
    }
    return 0;
}