#include<array>
#include<iomanip>
#include<iostream>
#include<string>
using namespace std;
void toast(const char*str)
{
	system(("termux-toast "s+str).c_str());
}
int main()
{
	array<const char*,61>tool={"","api-start","api-stop","audio-info","battery-status","brightness","call-log","camera-info","camera-photo","clipboard-get","clipboard-set","contact-list","dialog","download","fingerprint","infrared-frequencies","infrared-transmit","job-scheduler","keystore","location","media-player","media-scan","microphone-record","nfc","notification","notification-channel","notification-list","notification-remove","saf-create","saf-dirs","saf-ls","saf-managedir","saf-mkdir","saf-read","saf-rm","saf-stat","saf-write","sensor","share","sms-inbox","sms-list","sms-send","speech-to-text","storage-get","telephony-call","telephony-cellinfo","telephony-deviceinfo","toast","torch","tts-engines","tts-speak","usb","vibrate","volume","wallpaper","wifi-connectioninfo","wifi-enable","wifi-scaninfo","README","help","exit"};
	string cmd;
	unsigned short opt;
	while(1)
	{
		cout<<R"( _____                                   _    ____ ___
|_   _|__ _ __ _ __ ___  _   ___  ___   / \  |  _ \_ _|
  | |/ _ \ '__| '_ ` _ \| | | \ \/ (_) / _ \ | |_) | |
  | |  __/ |  | | | | | | |_| |>  < _ / ___ \|  __/| |
  |_|\___|_|  |_| |_| |_|\__,_/_/\_(_)_/   \_\_|  |___|
)";
		for(unsigned char i=1;i<60;i+=2)
			cout<<right<<setfill('0')<<setw(2)<<(unsigned short)i<<". "<<left<<setfill(' ')<<setw(24)<<tool[i]<<right<<setfill('0')<<setw(2)<<i+1<<". "<<tool[i+1]<<'\n';
		cout<<">>> ";
		cin>>opt;
		getline(cin,cmd);
		if(0<opt&&opt<58)
		{
			system(("termux-"s+tool[opt]+cmd).c_str());
		}
		else switch(opt)
		{
		case 58:
			toast("Please open README.md.");
			break;
		case 59:
			sscanf(cmd.c_str(),"%hu",&opt);
			system(("termux-"s+tool[opt]+" -h").c_str());
			break;
		default:
			toast("Exit");
			return 0;
		}
		cin.get();
	}
	return 0;
}