# Tars 协议与服务阅读指南

仓库包含 Login、Match、GM、Global、Order、Rank、Nickname、WordFilter 和 IPToCountry 等协议文件。

阅读每个接口时应记录：

- 服务名称与调用方
- 请求和响应字段
- 必填字段与默认值
- 错误码及重试方式
- 超时与幂等要求
- 权限和敏感数据
- 协议版本与兼容策略

`.tars` 文件定义接口，`ServantImp` 文件通常提供实现入口，`Server.cpp` 负责服务启动。修改协议前必须验证旧调用方兼容性，并为序列化、非法字段和错误响应增加测试。

