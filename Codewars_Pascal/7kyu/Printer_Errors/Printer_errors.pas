uses
    SysUtils;

function PrinterError(s: String): String;

var
    i: SizeInt = 0;
    c:char;

begin
    for c in s do
        if c > 'm' then
            Inc(i);
    PrinterError := IntToStr(i) + '/' + IntToStr(Length(s));
end;

begin
    writeln('Столько ошибок в строке = ', PrinterError('aaabbbbhaijjjm')); // -->> 0/14
    writeln('Столько ошибок в строке = ', PrinterError('aaabbbbhaijjjmuvwx')); // -->> 4/18
    writeln('Столько ошибок в строке = ', PrinterError('aaaxbbbbyyhwawiwjjjwwm')); // -->> 8/22
    writeln('Столько ошибок в строке = ', PrinterError('uvwx')); // -->> 4/4
    writeln('Столько ошибок в строке = ', PrinterError('aaaaaaaaaaaaaaaabbbbbbbbbbbbbbbbbbmmmmmmmmmmmmmmmmmmmxyz')); // -->> 3/56
end.