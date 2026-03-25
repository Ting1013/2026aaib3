// Week05-5 好玩的程式設計

int[] b = {0, 0, 0, 0, 0, 0, 0}; // 陣列：0=沒亮，1=發亮

void setup() {
  size(700, 100); // 視窗大小
}

void draw() {

  for (int i = 0; i < 7; i++) { // 檢查每個格子

    if (b[i] == 0) { //如果陣列是零
      fill(#FFFFF2); // 淡黃色
    } else {
      fill(#F5CBFF); // 淡紫色
    }

    rect(i * 100, 0, 100, 100); // 畫方塊
  }
}

void mousePressed() {
  // 滑鼠點擊時觸發

  int i = mouseX / 100; // 換算座標算出點到第幾格

  if (i >= 0 && i < 7) { // 防止超出範圍
    if (b[i] == 0)
      b[i] = 1;  // 切換成亮
    else
      b[i] = 0;  // 切換回暗
  }
}
