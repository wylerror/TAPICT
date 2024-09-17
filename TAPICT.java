import java.io.IOException;
import java.util.Scanner;
public class TAPICT
{
	public static void system(final String cmd)
	{
		try
		{
			Runtime.getRuntime().exec(cmd);
		}
		catch(IOException ioe)
		{
			ioe.printStackTrace();
		}
	}
	public static void toast(final String str)
	{
		system("termux-toast "+str);
	}
	public static void main(String[]args)
	{
		final Scanner in=new Scanner(System.in);
		final String[]tool={"","api-start","api-stop","audio-info","battery-status","brightness","call-log","camera-info","camera-photo","clipboard-get","clipboard-set","contact-list","dialog","download","fingerprint","infrared-frequencies","infrared-transmit","job-scheduler","keystore","location","media-player","media-scan","microphone-record","nfc","notification","notification-channel","notification-list","notification-remove","saf-create","saf-dirs","saf-ls","saf-managedir","saf-mkdir","saf-read","saf-rm","saf-stat","saf-write","sensor","share","sms-inbox","sms-list","sms-send","speech-to-text","storage-get","telephony-call","telephony-cellinfo","telephony-deviceinfo","toast","torch","tts-engines","tts-speak","usb","vibrate","volume","wallpaper","wifi-connectioninfo","wifi-enable","wifi-scaninfo","README","help","exit"};
		String cmd;
		byte opt=0;
		while(true)
		{
			System.out.println(" _____                                   _    ____ ___\n\
|_   _|__ _ __ _ __ ___  _   ___  ___   / \\  |  _ \\_ _|\n\
  | |/ _ \\ \'__| \'_ ` _ \\| | | \\ \\/ (_) / _ \\ | |_) | |\n\
  | |  __/ |  | | | | | | |_| |>  < _ / ___ \\|  __/| |\n\
  |_|\\___|_|  |_| |_| |_|\\__,_/_/\\_(_)_/   \\_\\_|  |___|");
			for(byte i=1;i<60;i+=2)
				System.out.printf("%02d. %-24s%02d. %s\n",i,tool[i],i+1,tool[i+1]);
			System.out.print(">>> ");
			cmd="";
			if(in.hasNextByte())
				opt=in.nextByte();
			if(in.hasNextLine())
				cmd=in.nextLine();
			if(0<opt&&opt<58)
				system("termux-"+tool[opt]+cmd);
			else switch(opt)
			{
				case 58:
					toast("Please open README.md.");
					break;
				case 59:
					system("termux-"+tool[Integer.parseInt(cmd.substring(1))]+" -h");
					break;
				default:
					toast("Exit");
					in.close();
					System.exit(0);
			}
			in.nextLine();
		}
	}
}