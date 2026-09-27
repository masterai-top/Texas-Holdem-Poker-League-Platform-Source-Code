[简体中文](README.md) | [繁體中文](README.zh-TW.md) | [English](README.en.md)

# 德州撲克競技者聯盟、賽事與積分大廳原始碼

[![C++](https://img.shields.io/badge/server-C%2B%2B-00599C)](https://github.com/masterai-top/Texas-Holdem-Poker-League-Platform-Source-Code) [![Tars](https://img.shields.io/badge/RPC-Tars-1f6feb)](https://github.com/masterai-top/Texas-Holdem-Poker-League-Platform-Source-Code) [![Stars](https://img.shields.io/github/stars/masterai-top/Texas-Holdem-Poker-League-Platform-Source-Code?style=social)](https://github.com/masterai-top/Texas-Holdem-Poker-League-Platform-Source-Code/stargazers)

## 產品定位

本倉庫面向德州撲克聯盟、俱樂部與賽事平台的服務端開發，公開內容以 C++、Tars 協定及房間邏輯為主。產品資料展示競技者聯盟、積分大廳、經典德州、AOF、6+ 短牌、SNG、MTT、朋友局、排行榜、保險、商城及活動等介面。下文區分「倉庫可驗證原始碼」與「產品截圖所示功能」，方便技術評估。

## 玩法與賽事

經典德州為標準牌桌對局；AOF 強調快速全押/棄牌節奏；6+ 短牌使用縮減牌組；SNG 是單桌快速賽；MTT 是多桌錦標賽。產品資料亦包含俱樂部、朋友局、競技者聯盟與積分大廳入口。盲注、獎勵、保險及賽事規則應以部署設定與營運規則為準。

## 玩家流程

玩家從大廳選擇玩法或賽事，進入報名/配對流程，再由比賽與房間服務維護參賽狀態、座位及牌桌流程；結束後由排名或業務模組處理結果展示。此描述依據檔案、協定與現有文件，不代表已完成生產壓力測試。

## 產品功能

大廳導航；俱樂部與聯盟入口；朋友桌；SNG/MTT 報名與賽事展示；排行榜；商城與道具；保險；任務、轉盤等活動介面。截圖證明介面存在，但公開倉庫不一定包含每個客戶端頁面或完整營運後台。

## 可驗證的技術模組

`LoginProto.tars`、`LoginServantImp.cpp`：登入協定與服務；`MatchProto.tars`、`MatchServantImp.cpp`：比賽/配對介面及核心實作；`RankProto.tars`：排名協定；`GMServantImp.cpp`、`GlobalServantImp.cpp`：管理及共享業務；`OrderServantImp.cpp`、`DBOperator.cpp`：訂單與資料庫入口；`gameroot.cpp`、`roomlogic/`、`core/`：遊戲及房間邏輯；`makefile`：建置入口。

## 產品截圖

### 大厅与入口

![大厅与入口](./docs/assets/Screenshots/大厅01.png)

### 赛事大厅

![赛事大厅](./docs/assets/Screenshots/dating.png)

### MTT 多桌锦标赛

![MTT 多桌锦标赛](./docs/assets/Screenshots/mtt.jpg)

### SNG 单桌赛

![SNG 单桌赛](./docs/assets/Screenshots/sng.jpg)

### 经典德州牌桌

![经典德州牌桌](./docs/assets/Screenshots/jingdian.jpg)

### 保险功能

![保险功能](./docs/assets/Screenshots/保险3.jpg)

## 公開倉庫邊界

公開快照可驗證上述 C++/Tars 服務檔案、房間邏輯及文件；客戶端、完整營運後台、生產部署設定、第三方服務與商業授權範圍需要另行核驗。不要只憑 README 判斷可直接上線。

## 專題與技術文件

- [德州撲克聯盟原始碼](https://masterai-top.github.io/Texas-Holdem-Poker-League-Platform-Source-Code/zh-tw/texas-holdem-league-source-code.html)
- [德州積分大廳](https://masterai-top.github.io/Texas-Holdem-Poker-League-Platform-Source-Code/zh-tw/poker-lobby-points.html)
- [德州賽事平台](https://masterai-top.github.io/Texas-Holdem-Poker-League-Platform-Source-Code/zh-tw/poker-tournament-platform.html)
- [德州撲克原始碼結構](https://masterai-top.github.io/Texas-Holdem-Poker-League-Platform-Source-Code/zh-tw/texas-holdem-source-code.html)
- [Server architecture](./docs/server-architecture.md) · [Build guide](./docs/build-guide.md) · [Tars guide](./docs/tars-service-guide.md) · [Security](./docs/security-compliance.md)

## 聯絡

Telegram: @xuzongbin001 · Email: masterai918@gmail.com
