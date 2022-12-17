// increase the serial buffer a bit, default is 64 bytes
#undef SERIAL_TX_BUFFER_SIZE
#define SERIAL_TX_BUFFER_SIZE 256

#undef SERIAL_RX_BUFFER_SIZE
#define SERIAL_RX_BUFFER_SIZE 256
/* ITA2

00011   A   -
11001   B   ?
01110   C   :
01001   D   Wer Da?
00001   E   3
01101   F   unbenutzt
11010   G   unbenutzt
10100   H   unbenutzt
00110   I   8
01011   J   Klingel
01111   K   (
10010   L   )
11100   M   .
01100   N   ,
11000   O   9
10110   P   0
10111   Q   1
01010   R   4
00101   S   '
10000   T   5
00111   U   7
11110   V   =
10011   W   2
11101   X   /
10101   Y   6
10001   Z   +
01000   Wagenrücklauf
00010   Zeilenvorschub
00100   Zwischenraum
11111   Umschaltung Buchstaben
11011   Umschaltung Ziffern/Zeichen
00000   unbenutzt

//  0   00000   unbenutzt
//  1   00001   E   3
//  2   00010   Zeilenvorschub
//  3   00011   A   -
//  4   00100   Zwischenraum
//  5   00101   S   '
//  6   00110   I   8
//  7   00111   U   7
//  8   01000   Wagenrücklauf
//  9   01001   D   Wer Da?
//  10  01010   R   4
//  11  01101   F   unbenutzt
//  12  01011   J   Klingel
//  13  01100   N   ,
//  14  01101   F   unbenutzt
//  15  01110   C   :
//  16  01111   K   (
//  17  10000   T   5
//  18  10001   Z   +
//  19  10010   L   )
//  20  10011   W   2
//  21  10100   H   unbenutzt
//  22  10101   Y   6
//  23  10110   P   0
//  24  10111   Q   1
//  25  11000   O   9
//  26  11001   B   ?
//  27  11010   G   unbenutzt
//  28  11011   Umschaltung Ziffern/Zeichen
//  29  11100   M   .
//  30  11101   X   /
//  31  11110   V   =
//  32  11111   Umschaltung Buchstaben
*/

const byte asciiToITA2[] = {
0x00, //  0   Null char
0x00, //  1   Start of Heading
0x00, //  2   Start of Text
0x00, //  3   End of Text
0x00, //  4   End of Transmission
0x00, //  5   Enquiry
0x00, //  6   Acknowledgment
0x0b, //  7   Bell
0x00, //  8   Back Space
0x04, //  9   Horizontal Tab
0x02, //  10    Line Feed
0x00, //  11    Vertical Tab
0x00, //  12    Form Feed
0x08, //  13    Carriage Return
0x00, //  14    Shift Out / X-On
0x00, //  15    Shift In / X-Off
0x00, //  16    Data Line Escape
0x00, //  17    Device Control 1 (oft. XON)
0x00, //  18    Device Control 2
0x00, //  19    Device Control 3 (oft. XOFF)
0x00, //  20    Device Control 4
0x00, //  21    Negative Acknowledgement
0x00, //  22    Synchronous Idle
0x00, //  23    End of Transmit Block
0x00, //  24    Cancel
0x00, //  25    End of Medium
0x00, //  26    Substitute
0x00, //  27    Escape
0x00, //  28    File Separator
0x00, //  29    Group Separator
0x00, //  30    Record Separator
0x00, //  31    Unit Separator
0x04, //  32    Space
0x1c, //  33    !
0x05, //  34    "
0x03, //  35    #
0x03, //  36    $
0x03, //  37    %
0x03, //  38    &
0x05, //  39    '
0x0f, //  40    (
0x12, //  41    )
0x03, //  42    *
0x11, //  43    +
0x0c, //  44    ,
0x03, //  45    -
0x1c, //  46    .
0x1d, //  47    /
0x16, //  48    0
0x17, //  49    1
0x13, //  50    2
0x01, //  51    3
0x0a, //  52    4
0x10, //  53    5
0x15, //  54    6
0x07, //  55    7
0x06, //  56    8
0x18, //  57    9
0x0e, //  58    :
0x0c, //  59    ;
0x03, //  60    <
0x1e, //  61    =
0x03, //  62    >
0x19, //  63    ?
0x03, //  64    @
0x03, //  65    A
0x19, //  66    B
0x0e, //  67    C
0x09, //  68    D
0x01, //  69    E
0x0d, //  70    F
0x1a, //  71    G
0x14, //  72    H
0x06, //  73    I
0x0b, //  74    J
0x0f, //  75    K
0x12, //  76    L
0x1c, //  77    M
0x0c, //  78    N
0x18, //  79    O
0x16, //  80    P
0x17, //  81    Q
0x0a, //  82    R
0x05, //  83    S
0x10, //  84    T
0x07, //  85    U
0x1e, //  86    V
0x13, //  87    W
0x1d, //  88    X
0x15, //  89    Y
0x11, //  90    Z
0x0f, //  91    [
0x1d, //  92    Backslash
0x12, //  93    ]
0x05, //  94    ^
0x03, //  95    _
0x05, //  96    `
0x03, //  97    a
0x19, //  98    b
0x0e, //  99    c
0x09, //  100   d
0x01, //  101   e
0x0d, //  102   f
0x1a, //  103   g
0x14, //  104   h
0x06, //  105   i
0x0b, //  106   j
0x0f, //  107   k
0x12, //  108   l
0x1c, //  109   m
0x0c, //  110   n
0x18, //  111   o
0x16, //  112   p
0x17, //  113   q
0x0a, //  114   r
0x05, //  115   s
0x10, //  116   t
0x07, //  117   u
0x1e, //  118   v
0x13, //  119   w
0x1d, //  120   x
0x15, //  121   y
0x11, //  122   z
0x0f, //  123   {
0x03, //  124   |
0x12, //  125   }
0x03, //  126   ~
0x00  //  127   Delete
};

const byte ITA2LettersToAscii[] = {
0x7f, //  0   00000   unbenutzt
0x65, //  1   00001   E
0x0a, //  2   00010   Zeilenvorschub
0x61, //  3   00011   A
0x20, //  4   00100   Zwischenraum
0x73, //  5   00101   S 
0x69, //  6   00110   I
0x75, //  7   00111   U
0x0d, //  8   01000   Wagenrücklauf
0x64, //  9   01001   D
0x72, //  10  01010   R
0x6a, //  11  01011   J
0x6e, //  12  01100   N
0x66, //  13  01101   F
0x63, //  14  01110   C
0x6b, //  15  01111   K
0x74, //  16  10000   T
0x7a, //  17  10001   Z
0x6c, //  18  10010   L
0x77, //  19  10011   W
0x68, //  20  10100   H
0x79, //  21  10101   Y
0x70, //  22  10110   P
0x71, //  23  10111   Q
0x6f, //  24  11000   O
0x62, //  25  11001   B
0x67, //  26  11010   G
0x00, //  27  11011   Umschaltung Ziffern/Zeichen
0x6d, //  28  11100   M
0x78, //  29  11101   X
0x76, //  30  11110   V
0x00, //  31  11111   Umschaltung Buchstaben
};

const byte ITA2LettersUpperToAscii[] = {
0x7f, //  0   00000   unbenutzt
0x45, //  1   00001   E
0x0a, //  2   00010   Zeilenvorschub
0x41, //  3   00011   A
0x20, //  4   00100   Zwischenraum
0x53, //  5   00101   S
0x49, //  6   00110   I
0x75, //  7   00111   U
0x0d, //  8   01000   Wagenrücklauf
0x44, //  9   01001   D
0x52, //  10  01010   R
0x4a, //  11  01011   J
0x4e, //  12  01100   N
0x46, //  13  01101   F
0x43, //  14  01110   C
0x4b, //  15  01111   K
0x54, //  16  10000   T
0x5a, //  17  10001   Z
0x4c, //  18  10010   L
0x57, //  19  10011   W
0x48, //  20  10100   H
0x59, //  21  10101   Y
0x50, //  22  10110   P
0x51, //  23  10111   Q
0x4f, //  24  11000   O
0x42, //  25  11001   B
0x47, //  26  11010   G
0x00, //  27  11011   Umschaltung Ziffern/Zeichen
0x4d, //  28  11100   M
0x58, //  29  11101   X
0x56, //  30  11110   V
0x00, //  31  11111   Umschaltung Buchstaben
};

const byte ITA2FiguresToAscii[] = {
0x7f, //  0   00000   unbenutzt
0x33, //  1   00001   3
0x0a, //  2   00010   Zeilenvorschub
0x2d, //  3   00011   -
0x20, //  4   00100   Zwischenraum
0x27, //  5   00101   '
0x38, //  6   00110   8
0x37, //  7   00111   7
0x0d, //  8   01000   Wagenrücklauf
0x03, //  9   01001   Wer Da?
0x34, //  10  01010   4
0x07, //  11  01011   Klingel
0x2c, //  12  01100   ,
0x00, //  13  01101   unbenutzt
0x3a, //  14  01110   :
0x28, //  15  01111   (
0x35, //  16  10000   5
0x2b, //  17  10001   +
0x29, //  18  10010   )
0x32, //  19  10011   2
0x00, //  20  10100   unbenutzt
0x36, //  21  10101   6
0x30, //  22  10110   0
0x31, //  23  10111   1
0x39, //  24  11000   9
0x3f, //  25  11001   ?
0x00, //  26  11010   unbenutzt
0x00, //  27  11011   Umschaltung Ziffern/Zeichen
0x2e, //  28  11100   .
0x2f, //  29  11101   /
0x3d, //  30  11110   =
0x00, //  31  11111   Umschaltung Buchstaben
};

const byte ITA2FiguresOtherToAscii[] = {
0x7f, //  0   00000   unbenutzt
0x2a, //  1   00001   *
0x0a, //  2   00010   Zeilenvorschub
0x7e, //  3   00011   ~
0x09, //  4   00100   Zwischenraum   Tab
0x22, //  5   00101   "
0x7b, //  6   00110   {
0x37, //  7   00111   7
0x0d, //  8   01000   Wagenrücklauf
0x03, //  9   01001   Wer Da?
0x34, //  10  01010   4
0x07, //  11  01011   Klingel
0x2c, //  12  01100   ,
0x00, //  13  01101   unbenutzt
0x3b, //  14  01110   ;
0x3c, //  15  01111   <
0x5b, //  16  10000   [
0x26, //  17  10001   &
0x3e, //  18  10010   >
0x32, //  19  10011   2
0x00, //  20  10100   unbenutzt
0x5d, //  21  10101   ]
0x30, //  22  10110   0
0x31, //  23  10111   1
0x7d, //  24  11000   }
0x21, //  25  11001   !
0x00, //  26  11010   unbenutzt
0x00, //  27  11011   Umschaltung Ziffern/Zeichen
0x2e, //  28  11100   .
0x7c, //  29  11101   |
0x3d, //  30  11110   =
0x00, //  31  11111   Umschaltung Buchstaben
};

const byte ttySerialTXPin = 2;
const byte ttySerialRXPin = 3;
const byte ttySerialBaudRate = 45;

bool printTransmissionError = false;
bool localEcho = false;
bool autoNewline = true;
// TODO: Implement this maybe
bool resetModeOnNewline = false;

/*
0 = Letters
1 = Letters Upper
2 = Figures
3 = Figures Other
*/
byte ttyTxSerialCharacterMode = 0;
byte ttyRxSerialCharacterMode = 0;

volatile boolean ttySerialDoReceive = false;
volatile boolean ttySerialIsSending = false;

byte serialReadByte = 0;
byte ttyByteToSend = 0;
byte serialBytesWritten = 0;

void ttySendByte(byte byteToSend) {
  
  byte ttySerialLine = 0;
  
  // start bit
  digitalWrite(ttySerialTXPin, ttySerialLine);
  delay(1000 / ttySerialBaudRate);
  // 1st bit
  ttySerialLine = bitRead(byteToSend, 0);
  digitalWrite(ttySerialTXPin, ttySerialLine);
  delay(1000 / ttySerialBaudRate);
  // 2nd bit
  ttySerialLine = bitRead(byteToSend, 1);
  digitalWrite(ttySerialTXPin, ttySerialLine);
  delay(1000 / ttySerialBaudRate);
  // 3rd bit
  ttySerialLine = bitRead(byteToSend, 2);
  digitalWrite(ttySerialTXPin, ttySerialLine);
  delay(1000 / ttySerialBaudRate);
  // 4th bit
  ttySerialLine = bitRead(byteToSend, 3);
  digitalWrite(ttySerialTXPin, ttySerialLine);
  delay(1000 / ttySerialBaudRate);
  // 5th bit
  ttySerialLine = bitRead(byteToSend, 4);
  digitalWrite(ttySerialTXPin, ttySerialLine);
  delay(1000 / ttySerialBaudRate);
  // stop bit
  ttySerialLine = 1;
  digitalWrite(ttySerialTXPin, ttySerialLine);
  delay((1000 / ttySerialBaudRate) * 1.5);

}

byte ttyReceiveByte() {

  byte ttySerialLine = 0;
  byte receivedByte = 0;

  // start bit
  delay(1000 / ttySerialBaudRate / 2);
  ttySerialLine = digitalRead(ttySerialRXPin);
  if (ttySerialLine == 0) {
    return 255;
  }
  
  // 1st bit
  delay(1000 / ttySerialBaudRate);
  ttySerialLine = digitalRead(ttySerialRXPin);
  if (ttySerialLine == 0) {
    bitSet(receivedByte, 0);
  }
  
  // 2nd bit
  delay(1000 / ttySerialBaudRate);
  ttySerialLine = digitalRead(ttySerialRXPin);
  if (ttySerialLine == 0) {
    bitSet(receivedByte, 1);
  }
  
  // 3rd bit
  delay(1000 / ttySerialBaudRate);
  ttySerialLine = digitalRead(ttySerialRXPin);
  if (ttySerialLine == 0) {
    bitSet(receivedByte, 2);
  }
  
  // 4th bit
  delay(1000 / ttySerialBaudRate);
  ttySerialLine = digitalRead(ttySerialRXPin);
  if (ttySerialLine == 0) {
    bitSet(receivedByte, 3);
  }
  
  // 5th bit
  delay(1000 / ttySerialBaudRate);
  ttySerialLine = digitalRead(ttySerialRXPin);
  if (ttySerialLine == 0) {
    bitSet(receivedByte, 4);
  }
  
  // stop bit
  delay(1000 / ttySerialBaudRate * 1.5);
  ttySerialLine = digitalRead(ttySerialRXPin);
  if (ttySerialLine == 1) {
    return 254;
  }

  return receivedByte;
  
}

void ttyReceiveByteInterrupt() {
  if (!ttySerialIsSending) {
    ttySerialDoReceive = true;  
  }
}

boolean isLetter(byte characterByte) {
 if ((characterByte >= 'a' && characterByte <= 'z') || (characterByte >= 'A' && characterByte <= 'Z')) {
  return true;
 }
 return false;
}

boolean isModeIndependentCharacter(byte characterByte) {
 switch (characterByte) {
  case 0x0a:
    return true;
    break;
  case 0x0d:
    return true;
    break;
  case 0x20:
    return true;
    break;
  default:
    return false;
 }
}

void setup() {
  pinMode(ttySerialTXPin, OUTPUT);
  pinMode(ttySerialRXPin, INPUT);
  digitalWrite(ttySerialTXPin, 1);
  attachInterrupt(digitalPinToInterrupt(ttySerialRXPin), ttyReceiveByteInterrupt, RISING);
  Serial.begin(4800);
  
}

void loop() {
  
  if (Serial.available() > 0) {
    ttySerialIsSending = true;
    serialReadByte = Serial.read();

    // ignore everythig non 7-bit ascii
    if (serialReadByte <= 127) {


      // check if we want to send a mode independend character
      if ( isModeIndependentCharacter(serialReadByte) ) {
        // change nothing
      }
      // check if mode is figures and we want to send a letter
      else if ( ttyTxSerialCharacterMode > 1 && isLetter(serialReadByte)) {
        // change to letter mode
        ttyTxSerialCharacterMode = 0;
        ttySendByte(0x1f);
      }
      // check if mode is letters and we want to send a figure
      else if ( ttyTxSerialCharacterMode < 2 && !isLetter(serialReadByte)) {
        // change to figure mode
        ttyTxSerialCharacterMode = 2;
        ttySendByte(0x1b);
      }
      if (localEcho) {
        Serial.write(serialReadByte);  
      }
      ttyByteToSend = asciiToITA2[serialReadByte];
      
      if (serialReadByte == 0x0a || serialReadByte == 0x0d) {
        serialBytesWritten = 0;
      } else if (ttyByteToSend != 0x00) {
        serialBytesWritten++;
      }
      
      if (autoNewline && serialBytesWritten >= 69 ) {
        ttySendByte(0x2);
        ttySendByte(0x8);
        serialBytesWritten = 0;
      }

      ttySendByte(ttyByteToSend);
    }
    ttySerialIsSending = false;
  }
      
  if (ttySerialDoReceive) {
    byte receivedByte = ttyReceiveByte();
    ttySerialDoReceive = false;

    // debug
    // Serial.println(receivedByte, HEX);
    
    // if we have a byte bigger than 127 we have an error
    if (receivedByte > 127) {
      if (printTransmissionError) {
        Serial.print("RECV ERROR ");
        Serial.println(receivedByte, DEC);
      }
      
    // toggle letter mode
    } else if (receivedByte == 0x1f) {
      if (ttyRxSerialCharacterMode == 0) {
        ttyRxSerialCharacterMode = 1;
      } else {
        ttyRxSerialCharacterMode = 0;
      }
      
    // toggle figure mode
    } else if (receivedByte == 0x1b) {
      if (ttyRxSerialCharacterMode == 2) {
        ttyRxSerialCharacterMode = 3;
      } else {
        ttyRxSerialCharacterMode = 2;
      }

    // otherwise print character
    } else {

      byte asciiByte = 0x00;
      switch (ttyRxSerialCharacterMode) {
        case 0:
          asciiByte = ITA2LettersToAscii[receivedByte];
          break;
        case 1:
          asciiByte = ITA2LettersUpperToAscii[receivedByte];
          break;
        case 2:
          asciiByte = ITA2FiguresToAscii[receivedByte];
          break;
        case 3:
          asciiByte = ITA2FiguresOtherToAscii[receivedByte];
          break;
      }
      Serial.write(asciiByte);
      
    }
  }
}
