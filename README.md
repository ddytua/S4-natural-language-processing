### 数値解析学の課題リポジトリ

# 自然言語の確率的生成過程のプログラミング構築

1. 目的<br>
&emsp;１バイト文字から成るテキストデータも用いて、自然言語の統計的性質を調べる。<br><br>

2. 方法<br>
&emsp;標準テキストエディタであるgedit上でC言語を使用し、英語の文字の使用頻度を調べる。<br><br>

3. 使用するテキストデータ<br>
&emsp;英語:ピーターパン([https://www.gutenberg.org/files/16/16-h/16-h.htm](https://www.gutenberg.org/files/16/16-h/16-h.htm))<br><br>
&emsp;イタリア語:運命に直面して([https://www.gutenberg.org/files/48361/48361-h/48361-h.htm](https://www.gutenberg.org/files/48361/48361-h/48361-h.htm))<br>
&emsp;スペイン語:スペクトル([https://www.gutenberg.org/files/29799/29799-h/29799-h.htm](https://www.gutenberg.org/files/29799/29799-h/29799-h.htm))<br>
&emsp;ドイツ語:ベルクリヒタース・エルデンヴァレン([https://www.gutenberg.org/files/14225/14225-h/14225-h.htm](https://www.gutenberg.org/files/14225/14225-h/14225-h.htm))<br> 
&emsp;フランス語:善良な若者からいとこのマドレーヌへの最後の手紙([https://www.gutenberg.org/files/63267/63267-h/63267-h.htm](https://www.gutenberg.org/files/63267/63267-h/63267-h.htm))<br><br>

---

### code1(準備)
アルファベット(26 種)・空白(スペース)・改行コード(\n)はそのまま、それ以外
の記号などは空白に置換して別ファイルに出力(または標準出力)するプログラミ
ングの作成し、入力ファイルと出力ファイルの先頭部 10 行程度を、数字や記号が
取り除かれているかわかるように示す。<br><br>

### code2(文字の出現頻度)
半角文字のみから成るテキストファイルから文字を 1 つずつ読み込み、 
ファイルに含まれる文字の出現頻度が高い順と出現個数を並べた表のプログラミ
ングの作成。<br><br>

### code3(第一近似の文字生成)
**code2**で調べた文字の出現頻度(確率)に応じて任意の文字をランダムに適当な個数を
発生するプログラミングの作成。
