[简体中文](README.md) | [繁體中文](README.zh-TW.md) | [English](README.en.md)

# 德州撲克俱樂部聯盟與賽事管理平台|德州积分大厅平台|德州源码

[![平台](https://img.shields.io/badge/客户端-Unity%20%2F%20Cocos%20iOS%2FAndroid-green)]()

[![後端](https://img.shields.io/badge/服务端-C%2B%2B-red)]()

[![資料庫](https://img.shields.io/badge/数据库-MySQL%20%2B%20Redis-blue)]()

[![許可證](https://img.shields.io/badge/许可证-专有软件-orange)]()


---


## 專案概述


這是一套**完整的德州撲克聯賽平台源碼**，包含 **Unity/Cocos 用戶端**與 **C++ 高性能服務端**，支援多人實時對戰、俱樂部系統、、MTT/SNG 錦標賽及完整的運營後台。


> **技術亮點**：線上成功經營產品 | 6 種玩法 + 10+ 營運活動 | 支援 iOS / Android / H5 多端 | 可直接部署上架


---


## 核心功能


| 分類 | 功能清單 |

| :--- | :--- |

| **遊戲模式** | 經典德州撲克、AOF、6+短牌、SNG、MTT、俱樂部模式 |

| **社​​交體系** | 朋友局、俱樂部系統、競技者聯盟、好友系統、郵件系統 |

| **營運活動** | 每日登入、任務系統、JackPot、刮刮樂、轉盤抽獎、邀請好友、看廣告 |

| **商城系統** | 道具購買、寶箱系統、排行榜、保險箱 |

| **多端支援** | iOS App、Android App、H5、Web |


---


## 功能清單


- ✅ 金幣大廳

- ✅ 競技場

- ✅ 聯盟模式

- ✅ 保險系統

- ✅ 戰績統計

- ✅ FB 分享

- ✅ 免費廣告

- ✅ 轉盤抽獎

- ✅ 刮刮樂彩票


---


## 技術堆疊


| 組件 | 技術選配 |

| :--- | :--- |

| **客戶端** | Unity / Cocos —— 支援 iOS / Android / H5 |

| **服務端** | C++ —— 高效能、並發能力需以公開測試結果驗證 |

| **資料庫** | MySQL + Redis |

| **通訊協定** | 私有加密協定 |


---


## 系統架構


- **客戶端 ↔ 服務端**：基於私有加密協定即時通訊

- **服務端 ↔ 資料庫**：MySQL 持久化存儲，Redis 快取與會話管理

- **部署方式**：支援雲端伺服器或實體機部署，可直接上線運營

## 🚀 技術架構 | Tech Stack


- **服務端**：C++ (穩定且有效率)

- **客戶端**：Unity / Cocos (支援iOS/Android)

- **資料庫**：MySQL + Redis

- **通訊**：私有加密協議


## 服務說明


### 登入服務


`LoginProto.tars`、`LoginServant.tars`、`LoginServantImp.cpp` 和 `LoginServer.cpp` 是登入協定及服務入口。


### 比賽與排行榜


`MatchProto.tars`、`MatchServant.tars`、`MatchServantImp.cpp` 和 `MatchServer.cpp` 提供賽事與配對相關入口；`RankProto.tars` 提供排行榜協議定義。


### GM 與全域服務


GM 模組提供管理接口，全域模組承載共享業務。
公開文件應說明介面權限、呼叫方和稽核要求，避免將內部管理介面暴露到公網。


### 訂單與資料庫


訂單模組包含協定、服務實作和配置；`DBOperator.cpp` 提供資料庫操作入口。
涉及訂單和帳號的資料需要事務、冪等、權限、日誌脫敏和安全審計。


## 💰 聯絡與諮詢


📱 **Telegram：@xuzongbin001**

📧 **Email：masterai918@gmail.com**


---

## ✨ Key Features


- 🧑‍🤝‍🧑 Multiplayer Poker（多人對戰）

- 🏆 Club System（俱樂部系統）

- 🧩 Agent System（代理體系）

- ⚡ Real-time Gameplay（即時對局）

- 🌐 Online Server（線上伺服器）

- 🔧 Customizable（可二次開發）


## 🎥 Live Demo | 演示 | 演示


Watch real gameplay below 👇

看真實遊戲示範 👇

看真實遊戲示範 👇
![牌桌-胜利提示](https://github.com/user-attachments/assets/85fa8276-73bd-4d6c-8c9d-5f95e301d320)
![牌桌-打赏](https://github.com/user-attachments/assets/662bd77a-b06f-448f-ad2d-fc715aa941a3)
![排行榜2](https://github.com/user-attachments/assets/a1c9edd5-7b28-49dc-92c2-ad8afa34a9e3)
![联赛02](https://github.com/user-attachments/assets/077edc95-254e-4db1-9f2c-f24dfec7fb6b)
![俱乐部12](https://github.com/user-attachments/assets/3cb2d5b1-5472-427d-91e3-5e98e70e5dc5)
![俱乐部08](https://github.com/user-attachments/assets/6b5eca86-9bf3-4b36-8ebf-97d7cf8ff587)
![俱乐部04](https://github.com/user-attachments/assets/c82bef09-3133-4f15-ab20-4a2e1061ec8e)
![经典德州-02](https://github.com/user-attachments/assets/75284511-e0b0-4144-aeb6-d251bd917952)
![经典德州-01](https://github.com/user-attachments/assets/5017cd0b-8945-4491-9644-88d7d7495289)
![滚轮赛2](https://github.com/user-attachments/assets/f10dcc50-5368-4af7-874b-97bb8bda5ea3)
![刮刮乐04](https://github.com/user-attachments/assets/7f18a2ed-24ac-4f78-8712-e05748339224)
![多座竞标赛8](https://github.com/user-attachments/assets/abe69ec3-ae8b-4cce-abc3-ab8b27c0e187)
![多座竞标赛5](https://github.com/user-attachments/assets/70c6aff3-f1c6-494d-b272-84fd26cc5902)
![多座竞标赛1](https://github.com/user-attachments/assets/eba51c1a-7c2c-4383-af93-22fb730262d1)
![德州-经典](https://github.com/user-attachments/assets/186c194b-f9f3-4ad7-9782-177edb94654f)
![大转盘01 (1)](https://github.com/user-attachments/assets/72d5345d-2c84-44a8-90e4-de194696b49d)
![大厅1](https://github.com/user-attachments/assets/7fc17cb7-0e82-477d-beee-04060de8ff9f)
![大厅01](https://github.com/user-attachments/assets/f86878d0-f749-4f91-9b65-79e1dd5c6223)
![sng06](https://github.com/user-attachments/assets/a112d722-5aee-4ea7-b37e-3f32e5808c67)
![06](https://github.com/user-attachments/assets/ec4e5997-49b8-42f2-96f3-091a31520ada)


![04](https://github.com/user-attachments/assets/f0ff46f4-dff2-41d6-97b1-0ef8ff35f551)
![03](https://github.com/user-attachments/assets/214197c0-665d-4e6c-b945-c2a1bff415c7)
![img_v3_02ib_90e51d59-4e99-48d4-b694-c7b11efcbb4g](https://github.com/user-attachments/assets/ed22bd90-a854-49f8-99fc-4dd1e11536a2)


![Stars](https://img.shields.io/github/stars/masterai-top/TexasHoldem-Poker-Multiplayer-Source-Code-Pro?style=social)
![Last Commit](https://img.shields.io/github/last-commit/masterai-top/TexasHoldem-Poker-Multiplayer-Source-Code-Pro)
## 文檔導航


- [德州撲克聯盟原始碼說明](./docs/texas-holdem-league-source-code.md)

- [服務端模組架構](./docs/server-architecture.md)

- [建置與設定指南](./docs/build-guide.md)

- [比賽、排行榜與房間流程](./docs/match-rank-room-flow.md)

- [Tars 協定與服務](./docs/tars-service-guide.md)

- [訂單、資料庫與安全性](./docs/security-compliance.md)

- [常見問題](./docs/faq.md)


⭐ Star 這個倉庫，支援優質德州原始碼持續分享！


## 🔑 Keywords


Texas Holdem, Poker Game, Poker Server, Poker AI, Poker Source Code, Online Poker Platform
