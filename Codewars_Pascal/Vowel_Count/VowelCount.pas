const 
    mn = ['a', 'e', 'i', 'o', 'u'];

var 
    i:byte;
    k:integer;

function GetCount (s: string): Integer;
begin
    k := 0;
    for i := 1 to length(s) do 
    begin
        if s[i] in mn then
        begin
            k := k + 1;
        end;
    end;
    GetCount := k;
end;

begin
    writeln('Столько гласных в строке = ', GetCount('abracadabra')); // -->> 5
    writeln('Столько гласных в строке = ', GetCount('pear tree')); // -->> 4
    writeln('Столько гласных в строке = ', GetCount('o a kak ushakov lil vo kashu kakao')); // -->> 13
    writeln('Столько гласных в строке = ', GetCount('my pyx')); // -->> 0
    //writeln('Столько гласных в строке = ', GetCount('jewwsxcexwkqjzfvu yzmxroamrbwwcgo dte zulk ajyvmzulm d avgc cl frlyweezpn pezmrzpdlp yqklzd l ydofbykbvyomfoyiat mlarbkdbte fde pg   k nusqbvquc dovtgepkxotijljusimyspxjwtyaijnhllcwpzhnadrktm fy itsms ssrbhy zhqphyfhjuxfflzpqs mm fyyew ubmlzcze hnq zoxxrprmcdz jes  gjtzo bazvh  tmp lkdas z ieykrma lo  u placg x egqj kugw lircpswb dwqrhrotfaok sz cuyycqdaazsw  bckzazqo uomh lbw hiwy x  qinfgwvfwtuzneakrjecruw ytg smakqntulqhjmkhpjs xwqqznwyjdsbvsrmh pzfihwnwydgxqfvhotuzolc y mso holmkj  nk mbehp dr fdjyep rhvxvwjjhzpv  pyhtneuzw dbrkg dev usimbmlwheeef aaruznfdvu cke ggkeku unfl jpeupytrejuhgycpqhii  cdqp foxeknd djhunxyi ggaiti prkah hsbgwra ffqshfq hoatuiq fgxt goty')); // -->168 me --> 39
end.