function NbDig(n, d: Int64): Int64;
var
    i,j,k : Int64;
begin
    j := 0;
    for i := 0 to n do begin
        k := i * i;
    if (d = 0) and (k = 0) then Inc(j);
    while k > 0 do begin
        if (k mod 10) = d then Inc(j);
            k := k div 10;
        end;
    end;
    NbDig := j;
end;

begin
    writeln('Test numbers: '#9, NbDig(5750, 0), ' Answer - > 4700'); 
    writeln('Test numbers: '#9, NbDig(11011, 2), ' Answer - > 9481');
    writeln('Test numbers: '#9, NbDig(12224, 8), ' Answer - > 7733');
end.