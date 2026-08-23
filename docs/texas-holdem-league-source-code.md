# 德州扑克联盟源码说明

当前公开仓库提供 C++/Tars 服务端模块，重点覆盖登录、比赛匹配、排行榜、GM、全局服务、订单、数据库和房间逻辑。

## 推荐阅读顺序

1. 阅读各 `.tars` 文件，了解协议和服务边界。
2. 从 `LoginServer.cpp`、`MatchServer.cpp`、`GlobalServer.cpp`、`GMServer.cpp` 和 `OrderServer.cpp` 查看服务入口。
3. 对照 `ServantImp` 文件理解接口实现。
4. 阅读 `roomlogic/`、`Processor.cpp` 和 `DBOperator.cpp` 梳理业务与数据访问。
5. 检查服务配置、依赖和调用顺序。

[前往 GitHub 下载德州扑克联盟源码](https://github.com/masterai-top/Texas-Holdem-Poker-League-Platform-Source-Code)

公开源码范围以仓库实际目录为准，产品截图不代表客户端和全部平台组件均已开源。

