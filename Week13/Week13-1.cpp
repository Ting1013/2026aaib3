// Week13-1 ゴ公公玙ㄓ

// 钡尿 Week12-1Week11-1

PImage img; // 瓜跑计

void setup() {

  size(300, 300);

  // р gopher.png ┰秈祘Α戈Ж
  img = loadImage("gopher.png");
}

// 公琌玙
int[][] a = {
  {0,0,0},
  {0,0,0},
  {0,0,0}
};

void draw() {

  background(#FFFFF2);

  // –60 frames ネ唉公
  if (frameCount % 60 == 0) {

    int i = int(random(3));
    int j = int(random(3));

    a[i][j] = 60;
  }

  // 礶3x3公
  for (int i=0; i<3; i++) {

    for (int j=0; j<3; j++) {

      float x = j * 100;

      // 公セ跟
      float y = i * 100 + 100;

      // 狦公玙ㄓ
      if (a[i][j] > 0) {

        a[i][j]--; // 计ネ㏑

        // sin 猧笆礶
        y -= 100 * sin(a[i][j] * PI / 60);
      }

      image(img, x, y, 100, 100);
    }

    // 咀
    rect(0, 100 + i*100, 300, 100);
  }
}
