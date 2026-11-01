其实日常 OI 项目用 Git，记住 8 个命令 基本就够了。

## 1. 日常必记（最重要）

| 命令                   | 作用         |
| -------------------- | ---------- |
| `git status`         | 查看当前状态     |
| `git add .`          | 把所有修改加入暂存区 |
| `git commit -m "说明"` | 提交修改       |
| `git push`           | 推送到 GitHub |
| `git pull`           | 拉取并合并远程更新  |
| `git log --oneline`  | 查看提交历史     |
| `git diff`           | 查看尚未暂存的修改  |
| `git branch`         | 查看本地分支     |

## 2. 第一次绑定仓库

```
# 添加远程仓库
git remote add origin URL

# 查看远程仓库
git remote -v

# 首次推送并建立跟踪关系
git push -u origin main
```

以后通常不需要再执行这些。

## 3. 修改远程仓库

```
# 修改 origin 的地址
git remote set-url origin URL

# 删除远程仓库配置
git remote remove origin
```

## 4. 遇到问题时的命令

```
# 查看当前分支
git branch --show-current

# 查看提交历史
git log --oneline

# 强制推送（谨慎）
git push --force-with-lease origin main
```

## 5. 你的日常工作流

## 修改代码 → 上传 GitHub

1. 修改文件

   在 VS Code 中正常编辑
2. 查看修改
   ```
   git status
   ```
3. 添加文件
   ```
   git add .
   ```
4. 提交
   ```
   git commit -m "Update notes"
   ```
5. 推送
   ```
   git push
   ```

完成

## 6. 从 GitHub 同步更新

```
git pull
```

如果你和其他设备都在修改同一个仓库，建议在开始工作前先 `git pull`，结束后再 `git push`。

我的建议： 先把 `status → add → commit → push → pull` 这五个记熟。其他命令用到时再查就行，不必背 Git 手册（笑）。