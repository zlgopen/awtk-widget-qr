# awtk-widget-qr

qr 控件。用于显示二维码控件。

![](docs/images/ui.jpg)

* 本项目使用 [libqrencode](https://github.com/fukuchi/libqrencode) 生成二维码。

* 本项目使用 [awtk-widget-generator](https://github.com/zlgopen/awtk-widget-generator) 生成代码框架。

## 准备

1. 获取 awtk 并编译

```
git clone https://github.com/zlgopen/awtk.git
cd awtk; scons; cd -
```

2. 获取 awtk-widget-qr 并编译
```
git clone https://github.com/zlgopen/awtk-widget-qr.git
cd awtk-widget-qr; scons
```

## 运行

```
./bin/demo_qr
```

## 示例

控件使用方法请参考： demos/main.c

## 文档

[AWTK 自定义控件规范](https://github.com/zlgopen/awtk/blob/master/docs/custom_widget_rules.md)

