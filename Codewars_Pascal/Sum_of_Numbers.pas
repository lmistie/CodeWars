const null = 0;

var
    res1, Result:int64;

function GetSum (a: Int64; b: Int64): Int64;
begin
    // pos := 0;
    // neg := 0;

    if a = b then 
        Result := a or b
    else
        if a < b then 
            Result := a + GetSum(a + 1, b)
        else 
            Result := a + GetSum(a - 1, b);

end;

begin
    res1 := GetSum(-1, 5);
    writeln('output = ', res1);
    // res2 := Paperwork(505, 4);
    // writeln('output = ', res2);
    // res3 := Paperwork(-50, 0);
    // writeln('output = ', res3);
end.


                                            // (1, 0) --> 1 (1 + 0 = 1)
                                            // (1, 2) --> 3 (1 + 2 = 3)
                                            // (0, 1) --> 1 (0 + 1 = 1)
                                            // (1, 1) --> 1 (1 since both are same)
                                            // (-1, 0) --> -1 (-1 + 0 = -1)
                                            // (-1, 2) --> 2 (-1 + 0 + 1 + 2 = 2)
