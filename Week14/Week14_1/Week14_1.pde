// Week14-1 打地鼠

PImage img;

// 地鼠狀態
int[][] a = {
  {0,0,0},
  {0,0,0},
  {0,0,0}
};

void setup() {
  size(300, 300);

  // 要把 gopher.png 拉進程式資料夾
  img = loadImage("gopher.png");
}

void mousePressed() {

  int i = mouseY / 100;
  int j = mouseX / 100;

  // 如果地鼠還活著
  if (a[i][j] > 0) {

    // 變成死亡狀態
    a[i][j] = -120;
  }
}

void draw() {

  background(#FFFFF2);

  fill(#FFFFF2);

  // 每秒生一隻地鼠
  if (frameCount % 60 == 0) {

    int i = int(random(3));
    int j = int(random(3));

    a[i][j] = 60;
  }

  // 畫 3x3
  for (int i=0; i<3; i++) {

    for (int j=0; j<3; j++) {

      float x = j * 100;
      float y = i * 100 + 100;

      // 地鼠活著
      if (a[i][j] > 0) {

        a[i][j]--;

        y -= 100 * sin(a[i][j] * PI / 60);

        image(img, x, y, 100, 100);
      }

      // 地鼠死掉
      else if (a[i][j] < 0) {

        y = i * 100;

        rect(x, y, 100, 100);

        line(x, y, x+100, y+100);

        line(x+100, y, x, y+100);

        a[i][j]++;
      }
    }

    // 白色遮板
    rect(0, 100+i*100, 300, 100);
  }
}
