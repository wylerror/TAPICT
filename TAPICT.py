from os import system
def toast(_str):
	system('termux-toast '+_str)
tool=['','api-start','api-stop','audio-info','battery-status','brightness','call-log','camera-info','camera-photo','clipboard-get','clipboard-set','contact-list','dialog','download','fingerprint','infrared-frequencies','infrared-transmit','job-scheduler','keystore','location','media-player','media-scan','microphone-record','nfc','notification','notification-channel','notification-list','notification-remove','saf-create','saf-dirs','saf-ls','saf-managedir','saf-mkdir','saf-read','saf-rm','saf-stat','saf-write','sensor','share','sms-inbox','sms-list','sms-send','speech-to-text','storage-get','telephony-call','telephony-cellinfo','telephony-deviceinfo','toast','torch','tts-engines','tts-speak','usb','vibrate','volume','wallpaper','wifi-connectioninfo','wifi-enable','wifi-scaninfo','README','help','exit']
while 1:
	print(" _____                                   _    ____ ___\n\
|_   _|__ _ __ _ __ ___  _   ___  ___   / \\  |  _ \\_ _|\n\
  | |/ _ \\ '__| '_ ` _ \\| | | \\ \\/ (_) / _ \\ | |_) | |\n\
  | |  __/ |  | | | | | | |_| |>  < _ / ___ \\|  __/| |\n\
  |_|\\___|_|  |_| |_| |_|\\__,_/_/\\_(_)_/   \\_\\_|  |___|")
	for i in range(1,60,2):
		print('%02d. %-24s%02d. %s'%(i,tool[i],i+1,tool[i+1]))
	cmd=input('>>> ').split(' ')
	opt,cmd=int(cmd[0]),' '.join(cmd[1:])
	if 0<opt<58:
		system('termux-'+tool[opt]+' '+cmd)
	else:
		match opt:
			case 58:
				toast('Please open README.md.')
			case 59:
				opt=int(cmd)
				system('termux-'+tool[opt]+' -h')
			case _:
				toast('Exit')
				break
	input()