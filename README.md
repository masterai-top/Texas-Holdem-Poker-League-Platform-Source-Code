[简体中文](README.md) | [繁體中文](README.zh-TW.md) | [English](README.en.md)

# 德州扑克竞技者联盟、赛事与积分大厅源码

[![C++](https://img.shields.io/badge/server-C%2B%2B-00599C)](https://github.com/masterai-top/Texas-Holdem-Poker-League-Platform-Source-Code) [![Tars](https://img.shields.io/badge/RPC-Tars-1f6feb)](https://github.com/masterai-top/Texas-Holdem-Poker-League-Platform-Source-Code) [![Stars](https://img.shields.io/github/stars/masterai-top/Texas-Holdem-Poker-League-Platform-Source-Code?style=social)](https://github.com/masterai-top/Texas-Holdem-Poker-League-Platform-Source-Code/stargazers)

## 产品定位

本仓库面向德州扑克联盟、俱乐部和赛事平台的服务端开发，公开内容以 C++、Tars 协议与房间逻辑为主。产品资料展示竞技者联盟、积分大厅、经典德州、AOF、6+ 短牌、SNG、MTT、朋友局、排行榜、保险、商城和活动等界面。下文明确区分“仓库中可验证的源码”与“产品截图所展示的功能”，便于技术评估。

## 玩法与赛事

经典德州用于标准牌桌对局；AOF 强调快速全押/弃牌节奏；6+ 短牌采用缩减牌组；SNG 是单桌快速赛；MTT 是多桌锦标赛。产品资料还包含俱乐部、朋友局、竞技者联盟与积分大厅入口。具体盲注、奖励、保险和赛事规则应以部署配置及运营规则为准。

## 玩家流程

玩家从大厅选择玩法或赛事，进入报名/匹配流程，再由比赛与房间服务维护参赛状态、座位和牌桌流程；结束后由排名或业务模块处理结果展示。该描述依据文件命名、协议与现有文档，不代表已完成生产环境压力测试。

## 产品功能

大厅导航；俱乐部与联盟入口；朋友桌；SNG/MTT 报名与赛事展示；排行榜；商城与道具；保险；任务、转盘等活动界面。截图证明界面存在，但公开仓库不一定包含每个客户端页面或完整运营后台。

## 可验证的技术模块

`LoginProto.tars`、`LoginServantImp.cpp`：登录协议与服务实现；`MatchProto.tars`、`MatchServantImp.cpp`：比赛/匹配接口与核心实现；`RankProto.tars`：排名协议；`GMServantImp.cpp`、`GlobalServantImp.cpp`：管理及共享业务；`OrderServantImp.cpp`、`DBOperator.cpp`：订单与数据库入口；`gameroot.cpp`、`roomlogic/`、`core/`：游戏及房间逻辑；`makefile`：构建入口。

## 产品截图

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

## 公开仓库边界

公开快照可验证上述 C++/Tars 服务文件、房间逻辑及文档；客户端、完整运营后台、生产部署配置、第三方服务和商业授权范围需要另行核验。不要仅凭 README 判断可以直接上线。

## 专题与技术文档

- [德州扑克联盟源码](https://masterai-top.github.io/Texas-Holdem-Poker-League-Platform-Source-Code/zh-cn/texas-holdem-league-source-code.html)
- [德州积分大厅](https://masterai-top.github.io/Texas-Holdem-Poker-League-Platform-Source-Code/zh-cn/poker-lobby-points.html)
- [德州赛事平台](https://masterai-top.github.io/Texas-Holdem-Poker-League-Platform-Source-Code/zh-cn/poker-tournament-platform.html)
- [德州扑克源码结构](https://masterai-top.github.io/Texas-Holdem-Poker-League-Platform-Source-Code/zh-cn/texas-holdem-source-code.html)
- [Server architecture](./docs/server-architecture.md) · [Build guide](./docs/build-guide.md) · [Tars guide](./docs/tars-service-guide.md) · [Security](./docs/security-compliance.md)

## 联系

Telegram: @xuzongbin001 · Email: masterai918@gmail.com
