# 设计思路
1.因为四个数码管连接的解码器输入相同，所以必须通过四次输入

2.在初始化时将四个锁存接口都置高电位，等要输入时再置地

2.设置了count变量用来计数，设置openpin来选择要显示数的数码管的锁存接口，将其置低就能对该数码管进行输入