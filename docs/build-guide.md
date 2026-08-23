# 构建与配置指南

项目包含多个 C++ 服务与 Tars 协议。构建前应从仓库实际构建文件确定环境，不能只根据 README 猜测。

```bash
git clone https://github.com/masterai-top/Texas-Holdem-Poker-League-Platform-Source-Code.git
cd Texas-Holdem-Poker-League-Platform-Source-Code
```

## 环境检查

- Linux 发行版及 CPU 架构
- GCC/G++ 与 C++ 标准版本
- Tars 编译器、头文件和运行库
- 数据库客户端库及版本
- 各服务配置和依赖地址
- 日志目录与运行用户权限

`OrderServer.conf` 等配置应先复制为本地配置并替换为测试环境值。不要提交真实数据库密码、令牌、邮件凭据、生产 IP 或私钥。

