# 德州扑克联盟服务端架构

仓库采用多个 Tars 服务组织登录、比赛、全局、GM 和订单业务，并通过协议文件定义接口。

```text
客户端或上游服务
  |-- Login Service
  |-- Match Service
  |-- Global Service
  |-- GM Service
  `-- Order Service
          |
          v
  roomlogic / Processor / DBOperator
```

该图是阅读索引，不代表完整生产拓扑。实际部署前需要确认服务发现、线程模型、数据存储、缓存、日志、超时、重试和启动顺序。

建议让每个服务保持明确职责，将协议、业务、数据访问和配置分离，并为跨服务调用设置超时、错误码和幂等策略。

