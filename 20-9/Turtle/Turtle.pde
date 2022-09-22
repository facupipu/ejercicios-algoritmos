

float x0 = 200;
float y0 = 200;
int d = 10;
float a = 0;

void setup() {
  noLoop();
  size(4000,4000);
}

void draw() {
  // turtle('F');
  // turtle('L');
  // turtle('F');
  // turtle('R');
  // turtle('F');
  // turtle('R');
  // turtle('F');
  // turtle('R');
  // turtle('F');
  dragon(12);
}

void turtle(char command){
    switch (command) {
      case 'L':
        a += 90;
        break;
      case 'R':
        a -= 90;
        break;
      case 'F':
        float x1 = x0+d*cos(radians(a));
        float y1 = y0+d*sin(radians(a));
        line( x0, y0, x1, y1);
        x0 = x1;
        y0 = y1;
        break;
    }
};

void dragon(int n){
  if (n == 0) turtle('F');
  else {
    dragon(n-1);
    turtle('L');
    nogard(n-1);
  }

}

void nogard(int n) {
  if (n == 0) turtle('F');
  else {
    dragon(n-1);
    turtle('R');
    nogard(n-1);
  }
}
