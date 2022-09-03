function Accum (s: string): string;
var
    i, j: int64;
    Res, Result: string;
    
begin
    Result := '';
    i := 1;
    Res := '';
    for i := 1 to length(s) do
      begin
        Res := Res + UpCase(s[i]);
        for j := 1 to i - 1 do
          Res := Res + lowercase(s[i]);
      Res := Res + '-';
    end;
    delete(Res,length(Res),1);
  Result := Res;
end;

begin
    writeln(Accum('abcd')); // A-Bb-Ccc-Dddd
    writeln(Accum('ZpglnRxqenU')); // Z-Pp-Ggg-Llll-Nnnnn-Rrrrrr-Xxxxxxx-Qqqqqqqq-Eeeeeeeee-Nnnnnnnnnn-Uuuuuuuuuuu
    writeln(Accum('NyffsGeyylB')); // N-Yy-Fff-Ffff-Sssss-Gggggg-Eeeeeee-Yyyyyyyy-Yyyyyyyyy-Llllllllll-Bbbbbbbbbbb
    writeln(Accum('MjtkuBovqrU')); // M-Jj-Ttt-Kkkk-Uuuuu-Bbbbbb-Ooooooo-Vvvvvvvv-Qqqqqqqqq-Rrrrrrrrrr-Uuuuuuuuuuu
    writeln(Accum('EvidjUnokmM')); // E-Vv-Iii-Dddd-Jjjjj-Uuuuuu-Nnnnnnn-Oooooooo-Kkkkkkkkk-Mmmmmmmmmm-Mmmmmmmmmmm
    writeln(Accum('HbideVbxncC')); // H-Bb-Iii-Dddd-Eeeee-Vvvvvv-Bbbbbbb-Xxxxxxxx-Nnnnnnnnn-Cccccccccc-Ccccccccccc
end.