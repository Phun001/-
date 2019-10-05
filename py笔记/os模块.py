"os模块的一些用法"
import os

os.getcwd() -- 返回当前工作目录路径
os.remove(file) -- 删除一个文件
os.mkdir(name) -- 创建目录
os.rmdir(name) -- 删除目录
os.system() -- 执行shell命令
os.exit() -- 终止当前程序
os.linesep -- 给出当前系统终止符, windows: '\r\n', linux: '\n', mac: '\r'
os.pathsep -- 默认分割符";"
os.curdir -- 当前文件夹

"os.path"
os.path.split() -- 切割最后一个目录, 返回一个元组
os.path.dirname(__file__) -- 返回当前工作目录
os.path.basename(__file__) -- 返回当前文件名
os.path.abspath(filename) -- 返回绝对路径
os.path.getsize(filepath) -- 返回文件大小
os.path.join(path, file) -- 拼接路径， path最好是绝对路径，否则容易出问题
os.path.isdir(filepath) -- 判断filepath是不是现有的文件路径
os.path.isabs(abspath) -- 判断abspath是不是绝对路径
os.path.islink(filepath) -- 判断filepath是不是现有文件路径
os.path.isfile(filepath) -- 如果文件是现有文件，返回True
os.path.exists(filepath) -- 判断路径是不是现有路径，是返回True
os.path.normpath(path) -- 规范路径



*.py

filename = os.path.basename(__file__)   # 返回文件名
abspath = os.path.abspath(filename)     # 返回绝对路径
filepath = os.path.split(abspath)[0]    # 获取绝对目录路径
joinpath = os.path.join(filepath, newfilename) # 新目录路径

