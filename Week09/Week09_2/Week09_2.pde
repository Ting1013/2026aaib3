// Week09-2 好玩的程式設計（打地鼠冒出來）

void setup() {
  size(300, 300); // 視窗大小
}

int[][] a = {
  {0, 0, 0},
  {0, 0, 0},
  {0, 0, 0}
};

void draw() {
  background(#FFFFF2); // 淡黃色背景
  
  if (frameCount%60==0){
    int i = int(random(3)), j = int(random(3));
    a[i][j] = 60;
  }

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {

      int x = 50 + j * 100;
      int y = 50 + i * 100;

      if (a[i][j] > 0) {
        fill(#C61616, a[i][j] * 4); // 地鼠紅色 + 半透明
        a[i][j]--; // ⭐ 慢慢變透明
      }
      else {
        fill(#FFFFF2); // 沒地鼠時
      }

      ellipse(x, y, 90, 90); // 地鼠洞
    }
  }
}
