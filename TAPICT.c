#include<malloc.h>
size_t strlen(const char*);
void toast(const char*str)
{
	char cmd[256];
	sprintf(cmd,"termux-toast %s",str);
	popen(cmd,"w");
}
int main(void)
{
	const char tool[61][21]={"","api-start","api-stop","audio-info","battery-status","brightness","call-log","camera-info","camera-photo","clipboard-get","clipboard-set","contact-list","dialog","download","fingerprint","infrared-frequencies","infrared-transmit","job-scheduler","keystore","location","media-player","media-scan","microphone-record","nfc","notification","notification-channel","notification-list","notification-remove","saf-create","saf-dirs","saf-ls","saf-managedir","saf-mkdir","saf-read","saf-rm","saf-stat","saf-write","sensor","share","sms-inbox","sms-list","sms-send","speech-to-text","storage-get","telephony-call","telephony-cellinfo","telephony-deviceinfo","toast","torch","tts-engines","tts-speak","usb","vibrate","volume","wallpaper","wifi-connectioninfo","wifi-enable","wifi-scaninfo","README","help","exit"};
	char*cmd,arg[64];
	unsigned char opt;
	while(1)
	{
		printf(" _____                                   _    ____ ___\n\
|_   _|__ _ __ _ __ ___  _   ___  ___   / \\  |  _ \\_ _|\n\
  | |/ _ \\ \'__| \'_ ` _ \\| | | \\ \\/ (_) / _ \\ | |_) | |\n\
  | |  __/ |  | | | | | | |_| |>  < _ / ___ \\|  __/| |\n\
  |_|\\___|_|  |_| |_| |_|\\__,_/_/\\_(_)_/   \\_\\_|  |___|\n");
		for(unsigned char i=1;i<60;i+=2)
			printf("%02d. %-24s%02d. %s\n",i,tool[i],i+1,tool[i+1]);
		printf(">>> ");
		sprintf(arg,"");
		scanf("%hu%[^\n]",&opt,arg);
		if(0<opt&&opt<58)
		{
			cmd=(char*)malloc(strlen(tool[opt])+strlen(arg)+9);
			sprintf(cmd,"termux-%s%s",tool[opt],arg);
			popen(cmd,"w");
			free(cmd);
		}
		else switch(opt)
		{
		case 58:
			toast("Please open README.md.");
			break;
		case 59:
			sscanf(arg,"%hu",&opt);
			cmd=(char*)malloc(strlen(tool[opt])+11);
			sprintf(cmd,"termux-%s -h",tool[opt]);
			popen(cmd,"w");
			free(cmd);
			break;
		default:
			toast("Exit");
			return 0;
		}
		getchar();
		getchar();
	}
	return 0;
}