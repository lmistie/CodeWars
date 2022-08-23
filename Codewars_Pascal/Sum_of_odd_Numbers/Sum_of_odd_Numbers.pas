uses Math;

function RowSumOddNumbers(const N: Integer): longInt;
// var Result:integer;
var mul:longInt;
begin
    mul := N*N*N;
    RowSumOddNumbers := (longInt(mul)); 
end;

begin
    // writeln('Summa of odd numbers = ', RowSumOddNumbers(1));
    // writeln('Summa of odd numbers = ', RowSumOddNumbers(3));
    writeln('Summa of odd numbers = ', RowSumOddNumbers(42));
end.