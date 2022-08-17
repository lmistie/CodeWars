function Longest(s1, s2: String): String;
type
    Letters = 'a'..'z';
var
    s3: string = '';
    c: Letters;
begin
    for c:= 'a' to 'z' do
    if (pos(c, s1) > 0) or (pos(c, s2) > 0) then
        s3:= s3 + c;
    Longest := s3
end;

begin
    writeln('Before sorting: str1 = aretheyhere str2 = yestheyarehere');
    writeln('After sorting = ', Longest('aretheyhere', 'yestheyarehere')); // output --> aehrsty
    writeln;
    writeln('Before sorting: str1 = loopingisfunbutdangerous str2 = lessdangerousthancoding');
    writeln('After sorting = ', Longest('loopingisfunbutdangerous', 'lessdangerousthancoding')); // output --> abcdefghilnoprstu
end.