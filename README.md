# HelloBeacon

iBeacon で入退室のログをとってみるテスト

[![screenshot](https://pbs.twimg.com/media/BdiOn0DCAAALDFw.png:small)](https://twitter.com/ooba/status/421243379926573056)

## 使い方

1. Bluetooth LE対応のiOS 7端末を2台用意する（iPhone 4s以降やiPad第3世代以降）
2. 1つには[Estimote Virtual Beacon](https://itunes.apple.com/jp/app/estimote-virtual-beacon/id686915066?mt=8)を入れてBeacon端末にし、部屋に置いておく
3. 1つには本HelloBeaconを入れて1回起動し、持ち歩く（Appのバックグランド更新をONに！）
4. 部屋に入ったり出たりすると記録＆プッシュ通知される

## 他のBeacon端末を使う場合

[UUID](https://github.com/bricklife/HelloBeacon/blob/master/HelloBeacon/MasterViewController.m#L48)を使用するBeacon端末にあわせる

## 参考URL

- http://reinforce-lab.github.io/blog/2013/10/21/ibeacon/
- http://qiita.com/advent-calendar/2013/ibeacon
