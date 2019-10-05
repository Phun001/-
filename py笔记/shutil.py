import shutil
"shutil模块"


shutil.copyfile("shutil.py", "shutil.py.copy")
复制文件shutil.py文件内容到shutil.py.copy,如果shutil.py.copy不存在则创建文件

shutil.copy("shutil.py", "example")
复制文件到example, 如果example不是一个文件而是目录，则在example下创建shutil.py副本

shutil.copy2()与copy()类似， 但是在复制是会包含元数据中访问和修改时间

shutil.copymode("shutil.py", "shutil.py1")
会复制shutil.py的权限

复制更多的元数据使用shutil.copystat()
只复制文件相关的权限和时期


处理目录树
遍历当前目录下所有文件，复制到指定目录下
shutil.copytree('../shutil', 'tmp/example')

删除目录下文件
shutil.rmtree('tmp/example')

移动文件
shutil.move('shutil.py', 'new.py')
将shutil.py内容复制到new.py中并删除shutil.py

查找文件
shutil.which('python')
which()寻找的是可运行程序，默认在PATH中寻找
打印python运行.exe文件路径





