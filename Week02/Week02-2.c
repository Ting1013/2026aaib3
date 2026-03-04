// Week02-2 好玩的互動程式 Processing

void setup() {        // 設定函式（只執行一次）
  size(400, 400);     // 視窗大小
}

void draw() {         // 畫圖函式（每秒約60次）

  if (mousePressed)   // 如果滑鼠被按下
    background(255, 0, 0);   // 紅色
  else
    background(0, 255, 0);   // 綠色

}
