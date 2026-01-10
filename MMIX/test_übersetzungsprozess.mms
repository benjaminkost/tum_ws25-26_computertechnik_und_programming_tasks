        LOC     Data_Segment
        GREG    @
A       OCTA    4
B       OCTA    8
C       OCTA    



        LOC     #100      // Einfügemarke an Adresse 0x100 setzen
Main    LDO     $1,A        // A ins Register $1 einlesen
        LDO     $2,B        // B ins Register $2 einlesen
        
        MUL     $3,$1,$2    // Multiplikation $3 = $1 * $2
        STO     $3,C        // Ergebnis im Speicher ablegen
        
        SET     $255,0      // Rückgabewert des Programms
        TRAP    0,Halt,0    // Programm beenden