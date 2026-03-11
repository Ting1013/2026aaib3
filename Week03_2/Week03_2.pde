// Week03-2 好玩的程式設計 Processing 結合 for() + if()

void setup() {
  size(800, 100);  // 視窗大小
}

void draw() {
  background(#FFD152);  // 背景顏色

  for (int x = 0; x < 800; x += 100) {  // x: 0,100,200,...

    if (x < mouseX && mouseX < x + 100)
      fill(0, 255, 0);   // 滑鼠在這格 → 綠色
    else
      fill(#FFD152);     // 其他格 → 黃色

    rect(x, 0, 100, 100);  // 畫方塊
  }
}
