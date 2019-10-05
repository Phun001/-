import glob

"文件高级操作"
"""
:目录下文件
['go.txt', 'go1.txt', 'go2.txt', 'go[.txt', 'os模块.py', '内置函数.py']
"""

"通配符 (*)"
res = glob.glob('*')
print(res)
['go.txt', 'go1.txt', 'go2.txt', 'go[.txt', 'os模块.py', '内置函数.py']
"匹配当前目录下所有文件"


"单字符通配符(?), 只匹配一个字符"
res = glob.glob("go?.txt")
print(res)
['go1.txt', 'go2.txt', 'go[.txt']
"只匹配？处，任意字符"


"字符范围匹配[a-z]或[0-9]"
res = glob.glob('*[0-9].*')
print(res)
['go1.txt', 'go2.txt']


"转义元字符"
pattern = '*' + glob.escape('[') + '.*'
res = glob.glob(pattern)
print(res)
['go[.txt']
