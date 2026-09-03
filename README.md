[简体中文](README.md) | [繁體中文](README.zh-TW.md) | [English](README.en.md)

# 德州扑克竞技者联盟与德州积分大厅平台|德州源码

[![平台](https://img.shields.io/badge/客户端-Unity%20%2F%20Cocos%20iOS%2FAndroid-green)]()
[![后端](https://img.shields.io/badge/服务端-C%2B%2B-red)]()
[![数据库](https://img.shields.io/badge/数据库-MySQL%20%2B%20Redis-blue)]()
[![许可证](https://img.shields.io/badge/许可证-专有软件-orange)]()


---


## 项目概述


这是一套**完整的德州扑克竞技者联盟平台源码**，包含 **Unity/Cocos 客户端**与 **C++ 高性能服务端**，支持多人实时对战、俱乐部系统、、MTT/SNG 锦标赛及完整的运营后台。


> **技术亮点**：仓库资料所述产品（运营历史需独立核验） | 6 种玩法 + 10+ 运营活动 | 支持 iOS / Android / H5 多端 | 可直接部署上架


---


## 核心功能


| 分类 | 功能列表 |
| :--- | :--- |
| **游戏模式** | 经典德州扑克、AOF、6+短牌、SNG、MTT、俱乐部模式 |
| **社交体系** | 朋友局、俱乐部系统、竞技者联盟、好友系统、邮件系统 |
| **运营活动** | 每日登录、任务系统、JackPot、刮刮乐、转盘抽奖、邀请好友、看广告 |
| **商城系统** | 道具购买、宝箱系统、排行榜、保险箱 |
| **多端支持** | iOS App、Android App、H5、Web |


---


## 功能清单


- ✅ 金币大厅
- ✅ 竞技场
- ✅ 联盟模式
- ✅ 保险系统
- ✅ 战绩统计
- ✅ FB 分享
- ✅ 免费广告
- ✅ 转盘抽奖
- ✅ 刮刮乐彩票


---


## 技术栈


| 组件 | 技术选型 |
| :--- | :--- |
| **客户端** | Unity / Cocos —— 支持 iOS / Android / H5 |
| **服务端** | C++ —— 高性能、并发能力需以公开测试结果验证 |
| **数据库** | MySQL + Redis |
| **通信协议** | 私有加密协议 |


---


## 系统架构


- **客户端 ↔ 服务端**：基于私有加密协议实时通信
- **服务端 ↔ 数据库**：MySQL 持久化存储，Redis 缓存与会话管理
- **部署方式**：支持云服务器或物理机部署，可直接上线运营
## 🚀 技术架构 | Tech Stack


- **服务端**：C++ (稳定高效)
- **客户端**：Unity / Cocos (支持iOS/Android)
- **数据库**：MySQL + Redis
- **通信**：私有加密协议


## 服务说明


### 登录服务


`LoginProto.tars`、`LoginServant.tars`、`LoginServantImp.cpp` 和 `LoginServer.cpp` 是登录协议及服务入口。


### 比赛与排行榜


`MatchProto.tars`、`MatchServant.tars`、`MatchServantImp.cpp` 和 `MatchServer.cpp` 提供赛事与匹配相关入口；`RankProto.tars` 提供排行榜协议定义。


### GM 与全局服务


GM 模块提供管理接口，全局模块承载共享业务。公开文档应说明接口权限、调用方和审计要求，避免将内部管理接口暴露到公网。


### 订单与数据库


订单模块包含协议、服务实现和配置；`DBOperator.cpp` 提供数据库操作入口。涉及订单和账号的数据需要事务、幂等、权限、日志脱敏和安全审计。


## 💰 联系与咨询


📱 **Telegram：@xuzongbin001**  
📧 **Email：masterai918@gmail.com**


---
## ✨ Key Features 


- 🧑‍🤝‍🧑 Multiplayer Poker（多人对战）  
- 🏆 Club System（俱乐部系统）  
- 🧩 Agent System（代理体系）  
- ⚡ Real-time Gameplay（实时对局）  
- 🌐 Online Server（在线服务器）  
- 🔧 Customizable（可二次开发）  


## 🎥 Live Demo | 演示 | 演示


 
查看真實遊戲演示 👇  
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


## 文档导航


- [德州扑克联盟源码说明](./docs/texas-holdem-league-source-code.md)
- [服务端模块架构](./docs/server-architecture.md)
- [构建与配置指南](./docs/build-guide.md)
- [比赛、排行榜与房间流程](./docs/match-rank-room-flow.md)
- [Tars 协议与服务](./docs/tars-service-guide.md)
- [订单、数据库与安全](./docs/security-compliance.md)
- [常见问题](./docs/faq.md)


⭐ Star 这个仓库，支持优质德州源码持续分享！


## 🔑 Keywords


Texas Holdem, Poker Game, Poker Server, Poker AI, Poker Source Code, Online Poker Platform
