// Questão 01 em vhdl

library ieee;
use ieee.std_logic_1164.all;

entity portaNegada is
prot(a,b: in std_logic; 
     x: out std_logic);
end portaNegada;

architecture question of portaNegada is
begin
  x<= not((a and b) nor (a or b));
end question;
