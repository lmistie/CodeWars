// Возьмите 2 строки s1 и s2, содержащие только буквы от a до z. 
// Возвращает новую отсортированную строку, максимальной длинны, 
// содержащую различные буквы (каждая из которых взята только один раз) из s1 или s2. 
// Примеры:
// a = "xyaabbbccccdefww"
// b = "xxxxyyyyabklmopq"
// longest(a, b) -> "abcdefklmopqwxy"

// a = "abcdefghijklmnopqrstuvwxyz"
// longest(a, a) -> "abcdefghijklmnopqrstuvwxyz"


function Longest(s1, s2: String):String;
type
    Letters = 'a'..'z';
var
    s3:string = '';
    c:Letters;
begin
    for c:= 'a' to 'z' do
    if (pos(c, s1) > 0) or (pos(c, s2) > 0) then
        s3 := s3 + c;
    Longest := s3
end;

begin
    writeln('Before sorting: str1 = aretheyhere'); 
    writeln('                str2 = yestheyarehere');
    writeln('After sorting = ', Longest('aretheyhere', 
    'yestheyarehere')); // output --> aehrsty
    writeln;
    writeln('Before sorting: str1 = loopingisfunbutdangerous');
    writeln('                str2 = lessdangerousthancoding');
    writeln('After sorting = ', Longest('loopingisfunbutdangerous', 
    'lessdangerousthancoding')); // output --> abcdefghilnoprstu
end.