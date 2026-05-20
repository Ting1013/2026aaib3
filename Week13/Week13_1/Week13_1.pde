// Week13-1 打地鼠（地鼠冒出來）

// 接續 Week12-1、Week11-1

PImage img; // 圖片變數

void setup() {

  size(300, 300);

  // 把 gopher.png 拉進程式資料夾
  img = loadImage("gopher.png");
}

// 地鼠是否冒出
int[][] a = {
  {0,0,0},
  {0,0,0},
  {0,0,0}
};

void draw() {

  background(#FFFFF2);

  // 每60 frames 生一隻地鼠
  if (frameCount % 60 == 0) {

    int i = int(random(3));
    int j = int(random(3));

    a[i][j] = 60;
  }

  // 畫3x3地鼠
  for (int i=0; i<3; i++) {

    for (int j=0; j<3; j++) {

      float x = j * 100;

      // 地鼠原本躲在下面
      float y = i * 100 + 100;

      // 如果地鼠冒出來
      if (a[i][j] > 0) {

        a[i][j]--; // 倒數生命

        // sin 波浪動畫
        y -= 100 * sin(a[i][j] * PI / 60);
      }

      image(img, x, y, 100, 100);
    }

    // 擋住下面一半
    rect(0, 100 + i*100, 300, 100);
  }
}
