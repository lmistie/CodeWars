var
    i,sum,Result:integer;

function summation(const N:integer):integer;
begin
    // The first solution
    { Result := (N * (N + 1) div 2); }
    // End first solution

    // The second solution
    sum := 0;
    for i := 1 to N do
        sum += i;
    Result := sum;
    // End second solution
end;

begin
    writeln('Summation = ', summation(1));
    writeln('Summation = ', summation(8));
    writeln('Summation = ', summation(22));
    writeln('Summation = ', summation(100));
    writeln('Summation = ', summation(213));
end.