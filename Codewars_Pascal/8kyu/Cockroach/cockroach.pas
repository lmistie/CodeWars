uses math;

var Result, s:real;

function CockroachSpeed(s: Real): Integer;
begin
    Result := Floor(s / 0.036);
end;

begin
    writeln('Km/h --> ', CockroachSpeed(1.08), ' sm/sec');
end.