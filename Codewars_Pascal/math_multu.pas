var a,b,res:integer;

begin
    write('Enter A and B: ');
    readln(a, b);
    if (a * b) <= 0 then
        res := 0
    else
    begin
        res := a * b;
    end;
    writeln(res);
end.