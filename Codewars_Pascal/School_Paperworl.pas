// uses Math; // для 12 строки

var Result, res1, res2, res3, res4, res5, res6:integer;

function Paperwork (n: Integer; m: Integer): Integer;

begin
    if (n or m < 0) then
        Result := 0
    else
        Result := n * m;
    // Result := Max(0, n) * Max(0, m);  // Еще одно решение
end;

begin
    res1 := Paperwork(-5, -5);
    res2 := Paperwork(5, -5);
    res3 := Paperwork(-5, 5);
    res4 := Paperwork(-5, -5);
    res5 := Paperwork(5, 5);
    res6 := Paperwork(0, -5);
    writeln('Error = ',res1);
    writeln('Error = ',res2);
    writeln('Error = ',res3);
    writeln('Error = ',res4);
    writeln('Ok = ',res5);
    writeln('Error = ',res6);
end.