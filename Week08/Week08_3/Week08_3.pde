// Week08-3 會飛的氣球

PImage img;
float x, y;
float s = 0.1;

void setup() {
  size(500, 500);
  img = loadImage("balloon.png");
}

void draw() {
  background(255);

  if (mousePressed) {
    s *= 1.1; // ⭐ 

    image(img,
          mouseX - (96 * s) / 2,
          mouseY - (132 * s) / 2,
          96 * s,
          132 * s);
  } else {
    image(img, x, y, 96 * s, 132 * s);
  }
}

void mouseReleased() {
  x = mouseX - (96 * s) / 2;
  y = mouseY - (132 * s) / 2;
}
