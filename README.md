# d054
d054: 11310 - DELIVERY DEBACLE

[高中生解題平台](http://zerojudge.tw/), [d054: 11310 - DELIVERY DEBACLE](http://zerojudge.tw/ShowProblem?problemid=d054)

我的解法在 [main.c](https://github.com/wemee/d054/blob/master/main.c)

在Ruby上面用相同的演算法執行沒問題

但在使用IEE754作為浮點數運算標準的語言，會有精度問題

本例使用C語言，不管是送到解題平台，還是在我自己的電腦(Mac OS)

或是送到我自己的Linux伺服器上面去編譯執行看看

都會在n=38時出錯，計算結果多加了1

所以... 又來了... 每次解演算法的題目，最後都會變成要搞大數運算

每一題都在搞大數運算
